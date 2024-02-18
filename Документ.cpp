#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void printDocument(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
}
list<string> readDocument(const string& filename) {
    list<string> lines;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
    return lines;
}
void writeDocument(const string& filename, const list<string>& lines) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const string& line : lines) {
            file << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
}
void deleteLine(const string& filename, int lineIndex) {
    list<string> lines = readDocument(filename);
    if (lineIndex >= 0 && lineIndex < lines.size()) {
        auto it = lines.begin();
        advance(it, lineIndex);
        lines.erase(it);
        writeDocument(filename, lines);
        cout << "Line " << lineIndex + 1 << " deleted from the document." << endl;
    }
    else {
        cout << "Invalid line index." << endl;
    }
}
int countOccurrences(const string& filename, const string& searchString) {
    int count = 0;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            size_t pos = 0;
            while ((pos = line.find(searchString, pos)) != string::npos) {
                count++;
                pos += searchString.length();
            }
        }
        file.close();
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
    return count;
}

int main() {
    string filename = "document.txt";
    printDocument(filename);

    list<string> lines = readDocument(filename);
    cout << "Lines read from the document:" << endl;
    for (const string& line : lines) {
        cout << line << endl;
    }
    list<string> newLines = { "This is a new line", "Another new line" };
    writeDocument(filename, newLines);
    cout << "New lines written to the document." << endl;

    // Удаление i-й строки из документа
    int lineIndex = 1;
    deleteLine(filename, lineIndex);

    string searchString = "new";
    int occurrences = countOccurrences(filename, searchString);
    cout << "Occurrences of \"" << searchString << "\" in the document: " << occurrences << endl;

    return 0;
}
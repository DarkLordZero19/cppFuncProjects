#include <iostream>
#include <string>
using namespace std;

string replaceSubstring(const string& str1, const string& str2, const string& str3) {
    string result = str1;
    size_t pos = 0;
    while ((pos = result.find(str2, pos)) != string::npos) {
        result.replace(pos, str2.length(), str3);
        pos += str3.length();
    }
    return result;
}

int main() {
    string str1 = "Вася пошел гулять. Вася хочет есть.";
    string str2 = "Вася";
    string str3 = "Алексей";

    string replacedStr = replaceSubstring(str1, str2, str3);
    cout << replacedStr << endl;

    return 0;
}

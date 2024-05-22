#include <iostream>
#include <map>
using namespace std;

template<typename Key, typename Value>
class Map {
private:
    map<Key, Value> data;

public:
    void insert(const Key& key, const Value& value) {
        data[key] = value;
    }

    bool erase(const Key& key) {
        auto it = data.find(key);
        if (it != data.end()) {
            data.erase(it);
            return true;
        }
        return false;
    }

    bool find(const Key& key, Value& value) const {
        auto it = data.find(key);
        if (it != data.end()) {
            value = it->second;
            return true;
        }
        return false;
    }

    void print() const {
        for (const auto& pair : data) {
            cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
        }
    }
};

int main() {
    Map<string, int> myMap;
    myMap.insert("one", 1);
    myMap.insert("two", 2);
    myMap.insert("three", 3);

    int value;
    if (myMap.find("two", value)) {
        cout << "Found: " << value << endl;
    }
    else {
        cout << "Key not found" << endl;
    }
    if (myMap.erase("two")) {
        cout << "Element with key 'two' was removed." << endl;
    }
    else {
        cout << "Element with key 'two' was not found." << endl;
    }
    if (myMap.erase("two")) {
        cout << "Element with key 'two' was removed." << endl;
    }
    else {
        cout << "Element with key 'two' was not found." << endl;
    }
    myMap.print();

    return 0;
}


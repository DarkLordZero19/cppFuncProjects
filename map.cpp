#include <iostream>
using namespace std;

template <typename T, typename T2>
class MyMap {
private:
    class Node {
    public:
        T key;
        T2 value;
        Node* left = nullptr;
        Node* right = nullptr;

        Node(T& key, T2 value) : key(key), value(value) {}

    };

    Node* root = nullptr;

public:

    void insert(T key, T2 value) {
        root = recursiveInsert(this->root, key, value);
    }

    void show() {
        recursiveShow(this->root);
    }

    void remove(T key) {
        root = recursiveRemove(this->root, key);
    }

    bool find(const T findKey) {
        return 0;
    }

    T2& operator[](const T findKey) {
        return 0;
    }

    bool find(T Key) {
        Node* node = recursiveFind(this->root, key);
        if (node == nullptr) return false;
        return true;
    }

    T2& operator[]( T Key) {
        Node* node = recursiveFind(this->root, key);
        if (node != nullptr) return node->value;
        else throw out_of_range("not found");
    }

private:
    Node* recursiveInsert(Node* node, T key, T2 value) {
        if (node == nullptr) {
            return new Node(key, value);
        }

        if (key < node->key) {
            node->left = recursiveInsert(node->left, key, value);
        }
        else if (key > node->key) {
            node->right = recursiveInsert(node->right, key, value);
        }

        return node;
    }

    void recursiveShow(Node* node) {
        if (node != nullptr) {
            recursiveShow(node->left);
            cout << "[" << node->key << "] = " << node->value << ", ";
            recursiveShow(node->right);
        }
    }
    Node* findMin(Node* node) {
        while (node->left != nullptr) node = node->left;
        return node;
    }

    Node* recursiveRemove(Node* node, T key) {
        if (node == nullptr) return node;
        if (key < node->key) {
            node->left = recursiveRemove(node->left, key);
        }
        else if (key > node->key) {
            node->right = recursiveRemove(node->right, key);
        }
        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->key = temp->key;
            node->value = temp->value;
            node->right = recursiveRemove(node->right, temp->key);
        }
        return node;
    }

    bool recursiveFind(Node* node, const T& key) const {
        if (node == nullptr) return false;
        if (key == node->key) return true;
        if (key < node->key) return recursiveFind(node->left, key);
        return recursiveFind(node->right, key);
    }

    Node* findNode(Node* node, const T& key) const {
        if (node == nullptr) return nullptr;
        if (key == node->key) return node;
        if (key < node->key) return findNode(node->left, key);
        return findNode(node->right, key);
    }


};

int main()
{
    MyMap<int, char> map;
    map.insert(1, 'h');
    map.insert(2, 'c');
    map.insert(3, 'p');
    map.insert(4, 'e');
    map.insert(5, 'r');
    map.show();
    map.insert(6, 'r');
    cout << endl;
    map.show();

    if (map.find(3)) {
        cout << "Found key 3" << endl;
    }
    else {
        cout << "Key 3 not found" << endl;
    }

    cout << "Value for key 3: " << map[3] << endl;

    map[7] = 'x';
    map.show();
    cout << endl;

    return 0;
};


#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template<typename T>
class MyForwardList {
private:
    class Node {
    public:
        T elem;
        Node* next;

        Node(const T& value) : elem(value), next(nullptr) {}
    };

    Node* head;

public:
    MyForwardList() : head(nullptr) {}

    MyForwardList(const MyForwardList& otherList) : head(nullptr) {
        if (!otherList.empty()) {
            Node* otherCur = otherList.head;
            this->push_back(otherCur->elem);
            while (otherCur->next != nullptr) {
                otherCur = otherCur->next;
                this->push_back(otherCur->elem);
            }
        }
    }

    void push_front(const T& value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void pop_front() {
        if (empty()) throw out_of_range("List is empty");
        Node* buf = head->next;
        delete head;
        head = buf;
    }

    void pop_back() {
        if (empty()) throw out_of_range("List is empty");
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* cur = head;
        while (cur->next->next != nullptr) {
            cur = cur->next;
        }
        delete cur->next;
        cur->next = nullptr;
    }

    void push_back(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            head = newNode;
            return;
        }
        Node* cur = head;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
    }

    bool empty() const {
        return head == nullptr;
    }

    void show() const {
        Node* cur = head;
        while (cur != nullptr) {
            cout << cur->elem << " ";
            cur = cur->next;
        }
        cout << endl;
    }

    void insert_after(int index, const T& value) {
        if (empty() || index <= 0) {
            push_front(value);
            return;
        }
        Node* cur = head;
        for (int i = 0; i < index; i++) {
            if (cur->next == nullptr) {
                push_back(value);
                return;
            }
            cur = cur->next;
        }
        Node* buf = cur->next;
        cur->next = new Node(value);
        cur->next->next = buf;
    }

    void emplace(int index, const T& value) {
        if (empty() || index < 0) throw out_of_range("List is empty or index is negative");
        Node* cur = head;
        for (int i = 0; i < index; i++) {
            if (cur == nullptr) throw out_of_range("Index out of range");
            cur = cur->next;
        }
        cur->elem = value;
    }

    MyForwardList& operator =(const MyForwardList& otherList) {
        if (this == &otherList) return *this;
        clear();
        if (!otherList.empty()) {
            Node* otherCur = otherList.head;
            this->push_back(otherCur->elem);
            while (otherCur->next != nullptr) {
                otherCur = otherCur->next;
                this->push_back(otherCur->elem);
            }
        }
        return *this;
    }

    bool operator != (const MyForwardList& otherList) const {
        return !(*this == otherList);
    }

    bool operator ==(const MyForwardList& otherList) const {
        if (empty() && otherList.empty()) return true;
        Node* cur1 = head;
        Node* cur2 = otherList.head;
        while (cur1 != nullptr && cur2 != nullptr) {
            if (cur1->elem != cur2->elem) return false;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return cur1 == nullptr && cur2 == nullptr;
    }

    void clear() {
        while (head != nullptr) {
            Node* buf = head;
            head = head->next;
            delete buf;
        }
    }

    ~MyForwardList() {
        if (empty()) {
            Node* cur = head;
            while (cur->next != nullptr) {
                Node* buf = cur->next;
                delete cur;
                cur = buf;
            }
            delete cur;
        }
    }

    class Iterator {
    private:
        Node* current;
    public:
        Iterator(Node* node) : current(node) {}

        Iterator& operator++() {
            current = current->next;
            return *this;
        }

        T& operator*() const {
            return current->elem;
        }

        bool operator==(const Iterator& other) const {
            return current == other.current;
        }

        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }
    };

    Iterator begin() const {
        return Iterator(head);
    }

    Iterator end() const {
        return Iterator(nullptr);
    }
};

int main() {
    MyForwardList<int> test;
    MyForwardList<int> test2;
    cout << test.empty() << endl;
    test.push_front(5);
    test.push_front(2);
    test.push_front(3);
    test.show();
    test.emplace(1, 9);
    test.show();
    test2.push_back(10);
    test2.push_back(20);
    test2.push_back(30);
    test2.push_back(35);
    test2.push_back(40);
    test.show();
    test2.show();
    test2.emplace(0, 100);
    test.show();
    test2.show();
    test == test2;
};
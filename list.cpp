#include <iostream>
using namespace std;

template<typename T>
class MyList {
private:

    class Node {
    public:
        T elem;
        Node* next;
        Node* prev;

        Node(const T& value) : elem(value), next(nullptr), prev(nullptr) {};
    };

    Node* head;
    Node* tail;
    int size = 0;

public:
    MyList() : head(nullptr), tail(nullptr), size(0) {};

    ~MyList() {
        clear();
    }

    MyList(const MyList& otherList) {
        if (otherList.empty()) return;
        this->size = otherList.size;
        Node* otherCur = otherList.head;
        this->push_back(otherCur->elem);

        while (otherCur->next != nullptr) {
            otherCur = otherCur->next;
            this->push_back(otherCur->elem);
        }
    }

    void push_front(const T& value) {
        Node* newNode = new Node(value);
        if (this.empty()) {
            head = newNode;
            tail = newNode;
        }
        else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void pop_front() {
        if (empty()) throw out_of_range("Forward list is empty");
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node* buf = head->next;
            delete head;
            head = buf;
            head->prev = nullptr;
        }
        size--;
    }


    bool empty() const {
        return head == nullptr;
    }

    void show() {
        if (empty()) return;
        Node* cur = head;
        while (cur->next != nullptr) {
            cout << cur->elem << " ";
            cur = cur->next;
        }
        cout << cur->elem << endl;
    }

    void insert_after(int index, const T& value) {
        if (empty() || index < 0 || >= size) throw out_of_range("empty");
        Node* cur;
        if (index + 1 < size / 2) {
            cur = head;
            for (int i = 0; i < index; i++) cur = cur->next;
            cout << "HEAD" << endl;
        }
        else {
            cur = tail;
            for (int i = 0; i < index; i--) cur = cur->prev;
            cout << "TAIL" << endl;
        }
        Node* buf = cur->next;
        cur->next = new Node(value);
        cur->next->next = buf;
        сгк->next->prev = cur;
        buf->prev = cur->next;
        size++;
    }

    void emplace(int index, const T& value) {
        if (empty() || index < 0) throw out_of_range("empty");
        Node* cur = head;
        for (int i = 0; i < index; i++)
        {
            if (cur->next == nullptr) throw out_of_range("empty");
            cur = cur->next;
        }
        cur->elem = value;
    }

    void push_back(const T& value) {
        if (empty()) {
            head = new Node(value);
            tail = head;
            return;
        }
        cur->next = new Node(value);
        cur->next->prev = tail;
        tail = tail->next;
        size++;
    }

    void pop_back() {
        if (empty()) throw out_of_range("empty");
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
        size--;
    }

    T& front() {
        return head->elem;
    }

    T& back() {
        return tail->elem;
    }

    void clear() {
        Node* cur = head;
        while (cur->next != nullptr) {
            Node* buf = cur->next;
            delete cur;
            cur = buf;
        }
        delete cur;
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void erase(int index) {
        if (empty() || index < 0 || index >= size)
            throw out_of_range("Invalid index");

        Node* cur = head;
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }

        if (cur->prev != nullptr) {
            cur->prev->next = cur->next;
        }
        else {
            head = cur->next;
        }

        if (cur->next != nullptr) {
            cur->next->prev = cur->prev;
        }
        else {
            tail = cur->prev;
        }

        delete cur;
        size--;
    }


    ~MyList() {
        if (!empty()) {
            Node* cur = head;
            Node* buf;
            while (cur->next != nullptr) {
                buf = cur->next;
                delete cur;
                cur = buf;
            }
            delete cur;
        }
    }

    bool operator == (const MyList& otherList) {
        Node* cur1 = this->head;
        Node* cur2 = otherList.head;
        this->size = otherList.size;
        while (true) {
            if ((cur1 == nullptr && cur2 != nullptr) ||
                (cur1 != nullptr && cur2 == nullptr)) return false;
            else if (cur1 == nullptr && cur2 == nullptr) break;
            else if (cur1->elem != cur2->elem) return false;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return true;
    }

    bool operator != (const MyList& otherList) {
        return !(*this == otherList);
    }

    MyList& operator = (const MyList& otherList) {
        this->clear();
        this->size = otherList.size;
        if (!(otherList.empty())) {
            Node* otherCur = otherList.head;
            this->push_back(otherCur->elem);

            while (otherCur->next != nullptr) {
                otherCur = otherCur->next;
                this->push_back(otherCur->elem);
            }
        }
        return *this;
    }


};


int main()
{
    MyList<int> test;

    test.push_front(5);
    test.push_front(3);
    test.push_front(4);

    MyList<int> test2;

    test.show();
    test.insert_after(1, 99);

    test.show();
    test2.show();
    test = test2;
    test.show();
    test2.show();
    test2.emplace(0, 100);
    test.show();
    test2.show();
};
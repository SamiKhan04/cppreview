struct Node {
        int data;
        Node* next;

        Node(int value, Node* newNode) : data(value), next(newNode) {}
        Node(int value) : data(value), next(nullptr) {}
};

class Linkedlist {
        private:
                Node* head;
        public:
        Linkedlist() : head(nullptr) {}

        ~Linkedlist() {
                clear();
        }

        void append(int value) {
                Node* newNode = new Node(value);
                if (head == nullptr) {
                        head = newNode;
        }
                else {
                Node* current = head;
                while (current->next != nullptr) {
                        current = current->next;
                        }
                current->next = newNode;
                }
        }

        void print() {
                Node* current = head;
                while (current != nullptr) {
                        cout << current->data << " -> ";
                        current = current->next;
                }
                cout << "nullptr" << endl;
        }

        void clear() {
                Node* current = head;
                while (current != nullptr) {
                        Node* currentNode = current->next;
                        delete current;
                        current = currentNode;
#include <iostream>
using  namespace std;

struct Node {
        int data;
        Node* next;

        Node(int value, Node* newNode) : data(value), next(newNode) {}
        Node(int value) : data(value), next(nullptr) {}
};

class Linkedlist {
        private:
                Node* head;
        public:
        Linkedlist() : head(nullptr) {}

        ~Linkedlist() {
                clear();
        }

        void append(int value) {
                Node* newNode = new Node(value);
                if (head == nullptr) {
                        head = newNode;
        }
                else {
                Node* current = head;
                while (current->next != nullptr) {
                        current = current->next;
                        }
                current->next = newNode;
                }
        }

        void print() {
                Node* current = head;
                while (current != nullptr) {
                        cout << current->data << " -> ";
                        current = current->next;
                }
                cout << "nullptr" << endl;
        }

        void clear() {
                Node* current = head;
                while (current != nullptr) {
                        Node* currentNode = current->next;
                        delete current;
                        current = currentNode;
                }
                head = nullptr;
        }
        bool isEmpty() {
                return head == nullptr;
        }

        void reverse(){
                Node* result = nullptr;
                for (Node* p = head; p != nullptr; p=p->next) {
                        result = new Node(p->data, result);
                }
                head = result;
        }
        int size() {
                int len = 0;
                for (Node* p = head; p != nullptr; len++, p=p->next) {}
                return len;
        }

        int index (int n) {
                int i = 0;
                for (Node* p = head; p != nullptr; ++i, p=p->next) {
                        if (i == n) {
                                return p->data;
                        }
                }
        return -10000;
        }

        int last() {
                Node* temp = head;
                while (temp != nullptr) {
                        if (temp->next == nullptr) {
                                return temp->data;
                        }
                        temp = temp->next;
                }
                return -1000;
        }

};


int main() {
        Linkedlist newList;
        for (int i = 0; i < 10; i++) {
                newList.append(i*2);
        }

        newList.print();;
        cout << "Size : " << newList.size() << endl;
        cout << "Index @ 4: " << newList.index(4) << endl;
        cout << "Last: " << newList.last() << endl;
        cout << "Reverse : ";
        newList.reverse();
        newList.print();
        newList.clear();
        cout.setf(ios::boolalpha);
        cout << "Is the list empty? " << newList.isEmpty() << endl;
        return 0;
}

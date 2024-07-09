#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    Node(int Data) {
        data = Data;
        next = nullptr;
    }
    Node(int Data, Node* Next) {
        data = Data;
        next = Next;
    }
};

class LinkedList: public Node {
    public:
        Node* array2ll(int arr, int size) {
        Node* head = new Node(arr[1]);
        Node* mover = head;
        for(int i=1; i<size; i++) {
            Node* newNode = new Node(arr[i]);
            mover->next = newNode;
            mover = mover->next;
        }
    }
};

int main() {
    int arr[] = {2, 4, 6, 5, 8};
    int size = 5;
    LinkedList l;
    l.array2ll(arr, size);
}
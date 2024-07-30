#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* back;

        Node(int Data, Node* Next, Node* Back) {
            data = Data;
            next = Next;
            back = Back;
        }

        Node(int Data) {
            data = Data;
            next = nullptr;
            back = nullptr;
        }
};

class LinkedList {
    public:
        Node* arr2ll(Node* head, vector<int> arr) {
            Node* mover = head;
            Node* prev = head;
            if(arr.size()==1) {
                head->next = nullptr;
                return head;
            }
            for(int i=1; i<arr.size(); i++) {
                mover->next = new Node(arr[i], nullptr, prev);
                prev = prev->next;
                mover = mover->next;
            }
            return head;
        }

        // Doesn't works on geeks for geeks, so there is logic problem.
        void addNode1(Node *head, int pos, int data)
        {
            Node* newNode = new Node(data);
            Node* mover = head;
            Node* temp = NULL;

            if(head == nullptr) {
                head->data = data;
                head->next = nullptr;
            }
            
            for(int i=1; i<=pos; i++) {
                mover = mover->next;
            }

            temp = mover->next;
            mover->next = newNode;
            newNode->next = temp;
            newNode->back = mover;
            temp->back = newNode;
        }

        void addNode(Node *head, int pos, int data)
        {
            Node* newNode = new Node(data);
            Node* mover = head;
            
            while(pos--) {
                mover = mover->next;
            }
            
            newNode->next = mover->next;
            newNode->back = mover;
            if(mover->next!=nullptr) mover->next->back = newNode;
            mover->next = newNode;
        }

        void addNodeAtEnd(Node* head, int data) {
            Node* mover = head;
            Node* newNode = new Node(data);
            while(mover->next!=nullptr) {
                mover = mover->next;
            }
            mover->next = newNode;
            newNode->back = mover;
        }

        // void deleteNode(Node* head, int data) {
        //     Node* temp1 = head;
        //     Node* temp2 = head->next;
        //     Node* temp3 = NULL;

        //     while(temp2->data != data) {
        //         temp1 = temp1->next;
        //         temp2 = temp2->next;
        //     }
        //     temp3 = temp2->next;
        //     temp1->next = temp3;
        //     temp3->back = temp1;
        //     free(temp2);
        // }

        void deleteNode(Node* head, int pos) {
            Node* temp1 = head;
            Node* temp2 = head->next;
            Node* temp3 = NULL;

            while(pos!=1) {
                temp1 = temp1->next;
                temp2 = temp2->next;
                pos--;
            }
            temp3 = temp2->next;
            temp1->next = temp3;
            temp3->back = temp1;
            free(temp2);
        }

        void output(Node* head) {
            Node* mover = head;
            while(mover!=nullptr) {
                cout<<mover->data<<"    ";
                mover = mover->next;
            }
            cout<<endl;
        }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = new Node(arr[0]);
    LinkedList l;
    head = l.arr2ll(head, arr);
    l.output(head);
    // l.addNodeAtEnd(head, 0);
    l.addNode(head, 2, 0);
    l.output(head);
    l.deleteNode(head, 2);
    l.output(head);
}
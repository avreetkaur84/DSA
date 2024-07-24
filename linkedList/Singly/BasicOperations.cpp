#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            data = 0;
            next = NULL;
        }

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
        void output(Node* head) {
            while(head!=nullptr) {
                cout<<head->data<<" ";
                head = head->next;
            }
            cout<<endl;
        }

        Node* constructLL(vector<int>& arr) {
            Node* head = new Node(arr[0]);
            Node* mover = head;
            
            for(int i=1; i<arr.size(); i++) {
                mover->next = new Node(arr[i]);
                mover = mover->next;
            }
            return head;
        }

        Node *insertAtEnd(Node *head, int x) {
            if(head == nullptr) {
                head = new Node(x);     // Allocates memory for a Node and assigns its address to head
                return head;
            }

            Node* mover = head;
            Node* newNode = new Node(x);
            while(mover->next!=nullptr) {
                mover = mover->next;
            }

            mover->next = newNode;
            return head;
        }

        Node *deleteAtIndex(Node* head, int x) {
            Node* p = head;
            Node* q = head->next;
            bool flag = false;

            while(q != nullptr) {
                if(q->data == x) {
                    flag = true;
                    break;
                }
                q = q->next;
                p = p->next;
            }

            p->next = q->next;
            free(q);
        }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    LinkedList l;
    Node* head = l.constructLL(arr);
    l.output(head);
    head = l.insertAtEnd(head, 6);
    l.output(head);
    l.deleteAtIndex(head, 3);
    l.output(head);
}
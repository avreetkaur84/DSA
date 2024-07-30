/*
    Reverse the doubly linked list
    BRUTE FORCE APPROACH
    1. Store the linked list data in the stack using mover too traverse in the list
    2. Then assign mover as head 
    3. mover->data should be equal to the stack as it will reverse the data now by poping with every step and assigning data to mover data before hand.
 */

#include <iostream>
#include <vector>
#include <stack>
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

        void output(Node* head) {
            Node* mover = head;
            while(mover!=nullptr) {
                cout<<mover->data<<"    ";
                mover = mover->next;
            }
            cout<<endl;
        }

        // BRUTE FORCE SOLUTION
        // Node* reverseLL(Node* head) {
        //     stack<int> st;
        //     Node* mover = head;
        //     while(mover!=nullptr) {
        //         st.push(mover->data);
        //         mover = mover->next;
        //     }

        //     mover = head;
        //     while(mover!=nullptr)  {
        //         mover->data = st.top();
        //         st.pop();
        //         mover = mover->next;
        //     }
        //     return head;
        // }

        // OPTIMAL SOLUTION
        Node* reverseLL(Node* head) {
            Node* current = head;
            Node* prev = NULL;

            while(current!=nullptr) {
                prev = current->back;
                current->back = current->next;
                current->next = prev;

                current = current->back;
            }

            return prev->back;      // Why to return prev->back instead of prev??? Confusion in this....
        }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = new Node(arr[0]);
    LinkedList l;
    head = l.arr2ll(head, arr);
    l.output(head);
    head = l.reverseLL(head);
    l.output(head);
}
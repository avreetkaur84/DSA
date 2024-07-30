#include <iostream>
#include <cmath>
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

void output(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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

Node* deleteNode(Node* head, int x) {
        Node* current = head;
        Node* prev = NULL;

        for(int i=1; i<x; i++) {
            current = current->next;
        }

        
    }

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    arr2ll(head, arr);
    deleteNode(head, 3);
    output(arr);
}
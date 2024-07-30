// I got this program right with my first attempt and only within 10 minutes. I really was not ablel to believe this, but this actually happened:))))).

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

Node *middleNode(Node *head)
{
    int counter = 0;
    Node *mover = head;
    while (mover != nullptr)
    {
        counter++;
        mover = mover->next;
    }

    counter = (counter / 2) + 1;
    mover = head;
    for (int i = 1; i < counter; i++)
    {
        mover = mover->next;
    }

    return mover;
}
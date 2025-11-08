#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr)
    {
    }
};

class LinkedList
{
    private:
    Node* head;
    Node* tail;

    public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void addNodeToStart(int data)
    {
        Node* current = new Node(data);
        if ( head == nullptr && tail == nullptr)
        {
            head = current;
            tail = current;
        }else 
        {
            current -> next = head;
            head = current;
        }
    }

    void addNodeToEnd(int data)
    {
        Node* current = new Node(data);
        if (head == nullptr && tail == nullptr)
        {
            head = current;
            tail = current;
        }else
        {
            tail -> next = current;
            tail = current;
        }
    }

    void deleteNode(int key)
    {
        Node* current;
        Node* prev;
        if (head == nullptr && tail == nullptr)
        {
            cout << "List is empty." << endl;
        } else if(head -> data == key)
        {
            current = head;
            head = head -> next;
            delete current;
            if (head == nullptr)
            {
                tail = nullptr;
            }
            return;
        }
        current = head;
        prev = nullptr;
        while(current != nullptr && current -> data != key)
        {
            prev = current;
            current = current -> next;
        }
        if (current == nullptr)
        {
            cout << "Key not found!" << endl;
        } else
        {
            prev -> next = current -> next;
            if( prev -> next == nullptr) 
            {
                tail = prev;
            }
            delete current;
        }
    }
};

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    head -> next = second;
    Node* newNode = new Node(30);
    head -> next -> next = newNode;

    Node* current = head;
    while(!(current == nullptr))
    {
        cout << current -> data << endl;
        current = current -> next;
    }
}
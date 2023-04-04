#include <iostream>

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void print()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node *head;
};
int main(){
    LinkedList myList;
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.print(); // prints "3 2 1"
}


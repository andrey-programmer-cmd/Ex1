#include "LinkedList.h"
#include <iostream>
#include <sstream>

// Function is adding node to the first place
// Input: Pointer to head and value
// Output: None

void addFirst(intNode** head, unsigned int value)
{
    intNode* newNode = new intNode();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to check if list is empty
// Input: Pointer to head
// Output: True or False

bool isEmpty(intNode* head)
{
    return head == nullptr;
}

// Function Removes the first element
// Input: Pointer to head
// Output: None
void removeFirst(intNode** head)
{
    if (isEmpty(*head))
    {
        std::cout << "Empty!\n";
        return;
    }

    intNode* temp = *head;
    *head = (*head)->next;
    delete temp;
}

// Function prints the elements
// Input: Pointer to head
// Output: None
void printList(intNode* head)
{
    intNode* current = head;
    std::cout << "List: ";

    while (current != nullptr)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}

// Function doing free to list
// Input: Pointer to head
// Output: None
void freeList(intNode** head)
{
    while (!isEmpty(*head))
    {
        removeFirst(head);
    }
}
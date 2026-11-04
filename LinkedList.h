#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct intNode
{
    unsigned int data; // Integer
    intNode* next; // Pointer to next
};

void addFirst(intNode** head, unsigned int value); // Add an element to the beginning
bool isEmpty(intNode* head); // If list is empty
void removeFirst(intNode** head); // Remove first element
void printList(intNode* head); // Print list
void freeList(intNode** head); // Free

#endif // LINKEDLIST_H

#include "Stack.h"
#include <iostream>
#include <sstream>

//Function pushes an element
//Input: Pointer to element and value
//Output: None

void push(Stack* s, unsigned int element)
{
	
	if (!isFull(s))
	{
		intNode* newNode = new intNode();

		newNode->value = element;
		newNode->next = s->first;
		s->first = newNode;
	}
}

//Function deletes element
//Input: Pointer to element
//Output: Value or -1

int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}

	intNode* check = s->first;
	int checkValue = check->value;

	s->first = s->first->next;
	delete check;

	return checkValue;
}

//Function inits stack
//Input: Pointer to stack
//Output: None

void initStack(Stack* s)
{
	s->first = nullptr;
}

//Function checks if stack is empty
//Input: Pointer to first element
//Output: True or False

bool isEmpty(Stack* s)
{
	return (s->first == nullptr);
}

//Function cleans stack
//Input: Pointer to first element
//Output: None

void cleanStack(Stack* s)
{
	while (!isEmpty(s))
	{
		pop(s);
	}
}

//Function checks if stack is full
//Input: Poiunter to first element
//Output: True or False

bool isFull(Stack* s)
{
	intNode* check = new intNode();

	if (!check) 
	{
		return true;
	}

	delete check;
	return false;
}
#include "Queue.h"
#include <iostream>
#include <sstream>

void initQueue(Queue* q, unsigned int size)
{
	q->elements = new unsigned int[size];
	q->capacity = size;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	if (q->elements != nullptr)
	{
		delete[] q->elements;
		q->elements = nullptr;
	}
	q->capacity = 0;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->elements[q->tail] = newValue;
	q->tail = (q->tail + 1) % q->capacity;
	q->count++;
}

int dequeue(Queue* q) 
{
	unsigned int value = 0;
	if (isEmpty(q)) 
	{
		return -1;
	}
	value = q->elements[q->head];
	q->head = (q->head + 1) % q->capacity;
	q->count--;
	return value;
}

bool isEmpty(Queue* q) 
{
	return q->count == 0;
}

bool isFull(Queue* q)
{
	return q->count == q->capacity;
}
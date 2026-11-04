#include "Utils.h"
#include "Stack.h"
#include <sstream>
#include <iostream>

#define sizeOfArray 10

// Function reverses an array
//Input: Array of numbers and size
//Output: none

void reverse(int* nums, unsigned int size)
{
    Stack* s = new Stack();

    initStack(s);


    for (unsigned int i = 0; i < size; i++)
    {
        push(s, nums[i]);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = pop(s);
    }

    cleanStack(s);
    delete s;  
}

//Function reverses 10 numbers in array
//Input: None
//Output: Array

int* reverse10()
{
    int num = 0;
    int* arr = new int[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cin >> num;
        arr[i] = num;
    }

    reverse(arr, sizeOfArray);

    return arr;
}
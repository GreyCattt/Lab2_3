#include <iostream>
const int N = 8;
const int M = 4;
const int size = 10;

struct Stack
{
	int data[size];
	int last = -1;

};

void main() 
{
	Stack MyStack;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < N && i < size; i++) 
	{
		MyStack.data[i] = arr[i];
		MyStack.last++;
	}
	for (int i = 0; i < M && MyStack.last >= 0; i++)
	{
		MyStack.data[MyStack.last] = MyStack.data[MyStack.last + 1];
		MyStack.last--;
	}
}
#include <iostream>
const int N = 8;
const int M = 4;
const int size = 10;

struct Stack
{
	int data;
	Stack* prev;

};

void main() 
{
	int arr[size] = { 1,2,2,3,3,4,5,3,6,5 };
	Stack* head = NULL;
	for (int i = 0; i < N && i < size; i++) 
	{
		Stack* cur = new Stack;
		cur->data = arr[i];
		if (head == NULL) 
		{
			cur->prev = NULL;
			head = cur;

		}
		else
		{
			cur->prev = head;
			head = cur;

		}

	}
	for (int i = 0; i < M && head != NULL; i++) 
	{
		Stack* temp = head;
		head = head->prev;
		delete temp;
	}
}
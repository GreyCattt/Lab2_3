#include <iostream>

const int N = 8;
const int M = 4;
const int size = 10;
struct Queue
{
	int data;
	Queue *next;

};
void main() 
{
	int arr[size] = { 1,2,2,3,3,4,5,3,6,5 };
	Queue* head = NULL;
	Queue* tail = NULL;
	for (int i = 0; i < N && i < size; i++)
	{
		Queue* cur = new Queue;
		cur->data = arr[i];
		cur->next = NULL;
		if (head == NULL) 
		{
			head = cur;
			tail = cur;
		}
		else
		{
			tail->next = cur;
			tail = cur;
		}
	}
	for (int i = 0; i < M && head != NULL; i++) 
	{
		Queue* temp = head;
		head = head->next;
		delete temp;
	}
}
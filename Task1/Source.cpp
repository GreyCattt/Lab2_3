/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Lab 2.3
*/
#include <iostream>
const int N = 8;
const int M = 4;
const int size = 10;

struct Queue
{
	int data[size];
	int last = -1;

};
int main() 
{
	Queue MyQueue;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < N && i < size; i++)
	{
		MyQueue.data[MyQueue.last] = arr[i];
		MyQueue.last++;
	}
	for (int i = 0; i < M && MyQueue.last >= 0; i++) 
	{
		for (int j = 0; j <= MyQueue.last; j++) 
		{
			MyQueue.data[j] = MyQueue.data[j + 1];

		}
		MyQueue.last--;
	}
	return 0;
}
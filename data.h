#ifndef DATA_H
#define DATA_H
#define MAX_SIZE 100

class Queue
{
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		void enqueue(int x);
		int dequeue();
		int getSize();
		void displayQueue();
		int getFront();	
		
	private:
		int front, rear, size;
    	int arr[MAX_SIZE];
};

#endif

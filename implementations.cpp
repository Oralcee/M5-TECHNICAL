#include "data.h"
#include <iostream>
#define MAX_SIZE 100


using namespace std;

	Queue :: Queue() {
      front = rear = -1;
      size = 0;
    }

    bool Queue::isEmpty() {
      return front == -1 && rear == -1;
    }

    bool Queue::isFull() {
     return rear == MAX_SIZE - 1;
    }

    void Queue:: enqueue(int x) {
      if (isFull()) {
        cout << "Error: Queue is full!" << endl;
        return;
      }

      if (isEmpty()) {
        front = rear = 0;
      } else {
        rear++;
      }

      arr[rear] = x;
      size++;
    }

    int Queue:: dequeue() {
      if (isEmpty()) {
        cout << "Error: Queue is empty!" << endl;
        return -1;
      }

      int x = arr[front];
      if (front == rear) {
        front = rear = -1;
      } else {
        front++;
      }

      size--;
      return x;
    }

    int Queue::getSize() {
      return size;
    }

    void Queue::displayQueue() {
        if (isEmpty()){
            cout << "Queue is empty!" << endl;
            }else{
                cout << "Queue elements are: ";
                for (int i = front; i <= rear; i++){
                    cout << arr[i] << " ";
                }
            
    
            }
    }
    int Queue:: getFront() {
      if (isEmpty()) {
        cout << "Error: Queue is empty!" << endl;
        return -1;
      }
      
      return arr[front];
    }

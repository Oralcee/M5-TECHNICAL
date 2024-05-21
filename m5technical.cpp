#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Queue {
  private:
    int front, rear, size;
    int arr[MAX_SIZE];

  public:
    Queue() {
      front = rear = -1;
      size = 0;
    }

    bool isEmpty() {
      return front == -1 && rear == -1;
    }

    bool isFull() {
     return rear == MAX_SIZE - 1;
    }

    void enqueue(int x) {
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

    int dequeue() {
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

    int getSize() {
      return size;
    }

    void displayQueue() {
        if (isEmpty()){
            cout << "Queue is empty!" << endl;
            }else{
                cout << "Queue elements are: ";
                for (int i = front; i <= rear; i++){
                    cout << arr[i] << " ";
                }
            
    
            }
    }
    int getFront() {
      if (isEmpty()) {
        cout << "Error: Queue is empty!" << endl;
        return -1;
      }
      
      return arr[front];
    }
};

int main() {
  Queue q;
  q.enqueue(5);
  q.enqueue(10);
  q.enqueue(15);
  q.enqueue(20);

  q.displayQueue();
  cout << "Front element: " << q.getFront() << endl;

  q.dequeue();
  q.dequeue();

  q.displayQueue();
  cout << "Front element: " << q.getFront() << endl;

  return 0;
}

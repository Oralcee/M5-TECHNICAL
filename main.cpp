#include <iostream>
#include "data.h"
#define MAX_SIZE 100


using namespace std;

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

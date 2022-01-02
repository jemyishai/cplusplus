#define MAX 1000

class Queue {
  public:
    int rear_value;
    int front_value = 0;
    int a[MAX]; // Maximum size of Queue
    Queue() { rear_value = -1; }
    bool enqueue(int x){
      if (MAX>rear_value+1){
        rear_value+=1;
        a[rear_value] = x;
        return true;
      } else{
        return false;
      }
    }
    int dequeue(){
      if(rear_value == -1){
        return 0;
      } else {
        int front = a[front_value];
        front_value += 1;
        return front;
      }
    };
    int front(){
      if (rear_value == -1){
        return 0;
      } else{
        int el = a[front_value];
        front_value += 1;
        return el;
      }
    };
    int rear(){
      if (rear_value == -1){
        return 0;
      } else{
        int ele = a[rear_value];
        rear_value -= 1;
        return ele;
      }
    };
};

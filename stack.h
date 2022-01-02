#define MAX 1000

class Stack
{
  public:
  int top;
  int end = 0;
  int a[MAX]; // Maximum size of Stack
  Stack() { top = -1; }
  bool push(int x){
    if (top>=MAX-1){
      return false;
    } else{
      top+=1;
      a[top]=x;
      return true;
    };
  };
  int pop(){
    int el;
    if (top<=-1){
      return 0;
    } else{
      int el = a[top];
      top-=1;
      return el;
    }
  };
  int peek(){
    return a[top];
  }
  bool isEmpty(){
   return (top == -1) ? true : false;
  }
};

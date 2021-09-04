#include<iostream>
#include<climits>

using namespace std;

class StackUsingArray{

private:
    int *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
    if(nextIndex == 0)
        return true;
    else
        return false;
    }

    void push(int element){

        if(nextIndex == capacity)
        {
            cout << "Stack full.";
            return ;
        }
        data[nextIndex] = element;
        nextIndex ++;
    }

    int pop(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
        }
        nextIndex -- ;
        return data[nextIndex];
    }

    int top(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
        }
        return data[nextIndex - 1];
    }



};

    int main(){

        StackUsingArray s(3);
        s.push(10);
        s.push(20);
        s.push(30);

        cout << "pop element is "<<s.pop() << endl;
        cout << "top element is "<<s.top() << endl;

        s.push(40);
        cout << "top element is "<<s.top() << endl;
        cout << "Stack size is " << s.size()<<endl;
        cout << s.isEmpty()<<endl;
    }

//push(), pop(), isEmpty() and peek() all take O(1) time. 



// method 2 
//increase array size dynamically

#include<iostream>
#include<climits>

using namespace std;

class StackUsingArray{

private:
    int *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
    if(nextIndex == -1)
        return true;
    else
        return false;
    }

    void push(int element){

        if(nextIndex == capacity)
        {
           int *nedata = new int[ 2 * capacity];
           for(int i = 0; i<capacity; i++){
            nedata[i]= data[i];
           }
        }
        capacity = capacity * 2;
        data[nextIndex] = element;
        nextIndex ++;
    }

    int pop(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
        }
        nextIndex -- ;
        return data[nextIndex];
    }

    int top(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
        }
        return data[nextIndex - 1];
    }



};

    int main(){

        StackUsingArray s;
        s.push(10);
        s.push(20);
        s.push(30);

        cout << "pop element is "<<s.pop() << endl;
        cout << "top element is "<<s.top() << endl;

        s.push(40);
        cout << "top element is "<<s.top() << endl;
        cout << s.isEmpty()<<endl;
        s.push(10);
        s.push(20);
        s.push(100);
        cout << "Stack size is " << s.size()<<endl;
        cout << "top element is "<<s.top() << endl;

    }





// method 3

#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

bool isempty()
{
  if(top==-1)
  return true;
  else
  return false;
}

void push(int value)
{
  if(top==SIZE-1)
  {    cout<<"Stack is full!\n";
  }
   else
  {
    top++;
    A[top]=value;
  }
}

void pop()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  top--;
}

void show_top()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  cout<<"Element at top is: "<<A[top]<<"\n";

}

void displayStack()
{
  if(isempty())
 {
    cout<<"Stack is empty!\n";
 }
 else
 {
  for(int i=0 ; i<=top; i++)
    cout<<A[i]<<" ";
   cout<<"\n";

  }

}

int main()
{

 int choice, flag=1, value;
 while( flag == 1)
 {
 cout<<"\n1.PUSH 2.POP 3.SHOW_TOP 4.DISPLAY_STACK 5.EXIT\n";
 cin>>choice; switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: show_top();
         break;
 case 4: displayStack();
         break;
 case 5: flag = 0;
         break;
 }
 }
  return 0;
}




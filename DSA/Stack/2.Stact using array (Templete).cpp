#include<iostream>
#include<climits>

using namespace std;

template <typename T>
class StackUsingArray{

private:
    T *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray(){
        data = new T[4];
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
           T *newData = new T[ 2 * capacity];
           for(int i = 0; i<capacity; i++){
            newData[i]= data[i];
           }
        }
        capacity = capacity * 2;
       // delete [] data;
        //data = newData;
        data[nextIndex] = element;
        nextIndex ++;
    }

    T pop(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
            return 0;
        }
        nextIndex -- ;
        return data[nextIndex];
    }

    T top(){

        if( isEmpty() ) {
            cout << "Stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex - 1];
    }



};

    int main(){

        StackUsingArray<char> s;
        s.push(101);
        s.push(102);
        s.push(30);

        cout << "pop element is "<<s.pop() << endl;
        cout << "top element is "<<s.top() << endl;

        s.push(40);
        cout << "top element is "<<s.top() << endl;
        cout << s.isEmpty()<<endl;
        s.push(10);
        s.push(20);

        s.push(100);
        cout << "pop element is "<<s.pop() << endl;
        cout << "Stack size is " << s.size()<<endl;
        cout << "top element is "<<s.top() << endl;

    }

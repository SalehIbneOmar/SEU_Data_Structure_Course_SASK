#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Stack{

private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack(){
        top = -1;
    }

    int isFull(){
        if(top == MAX_SIZE-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isEmpty(){
        if(top<0){
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(int data){
        if(!(isFull())){
            top +=1;
            arr[top] = data;
        }
        else{
            cout <<"Error: Stack Overflow"<<endl;
        }

    }

    void pop(){
        int temp;
        if(!(isEmpty())){
            temp = arr[top];
            top -=1;
        }
        else{
            cout <<"Error: Stack Underflow"<<endl;
        }

    }

    void display(){
        for(int i=top; i>=0; i--){
            cout <<arr[i]<<endl;
        }
    }

};

int main(){

    Stack obj;

    obj.push(1);
    obj.push(2);
    obj.pop();
    obj.push(3);
    obj.display();

return 0;

}

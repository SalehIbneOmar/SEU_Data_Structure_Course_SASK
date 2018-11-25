#include <iostream>
//Defining MAX_SIZE for the storage of Stack
#define MAX_SIZE 5
using namespace std;

//Initializing storage for Stack and Top index
int arr[MAX_SIZE], top = -1;

/*======================================= Checking Functions =======================================*/
//Checking if the Stack us Full or not
int isFull(){

    if(top == MAX_SIZE-1){
        return 1;
    }
    else{
        return 0;
    }

}

//Checking if the Stack is Empty or not
int isEmpty(){

    if(top<0){
        return 1;
    }
    else{
        return 0;
    }

}

/*======================================= Push pop and display Functions =======================================*/
//Insert Function
void push(int data){

    if(!(isFull())){
        top +=1;
        arr[top] = data;
    }
    else{
        cout <<"Stack overflow"<<endl;
    }

}

//Delete function
void pop(){
    int temp;
    if(!(isEmpty())){
        temp = arr[top];
        top -=1;
    }
    else{
        cout <<"Stack underflow"<<endl;
    }

}

//Display Function
void display(){

    for(int i=top; i>=0; i--){
        cout <<arr[i]<<endl;
    }

}

/*======================================= Main Function =======================================*/
int main(){

    push(1);
    push(2);
    push(3);
    pop();
    push(4);
    pop();

    display();

return 0;

}

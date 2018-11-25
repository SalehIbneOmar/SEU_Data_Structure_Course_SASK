#include <iostream>
#define MAX_SIZE 5
using namespace std;

int Front = -1, Rear = -1, arr[MAX_SIZE];

int isFull(){
    if(Rear == MAX_SIZE-1){
        return 1;
    }
    else{
        return 0;
    }

}

int isEmpty(){
    if(Front<0 && Rear<0){
        return 1;
    }
    else{
        return 0;
    }

}

void Enqueue(int data){
    if(!(isFull())){
        Rear +=1;
        arr[Rear] = data;
    }
    else{
        cout <<"Error: Queue session full"<<endl;
    }

}

void Dequeue(){
    if(!(isEmpty())){
        int temp = arr[Front];
        Front +=1;
        if(Front>Rear || Front == Rear){
            cout <<"Error: Queue is Empty"<<endl;
        }
    }
    else{
        cout <<"Error: Queue is Empty"<<endl;
    }

}

void Display(){
    for(int i=Front+1; i<=Rear; i++){
        cout <<arr[i]<<" ";
    }

}

int main(){


    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Dequeue();Dequeue();Dequeue();


    Display();

return 0;

}

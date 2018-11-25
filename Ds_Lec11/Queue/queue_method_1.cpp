#include <iostream>
#define MAX_SIZE 5
using namespace std;

int Front = -1, Rear = -1, arr[MAX_SIZE];

int isEmpty(){
    if(Front<0 && Rear<0){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(Rear == MAX_SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int data){
    if(isFull()){
        cout <<"Error: Queue is full"<<endl;
    }
    else{
        Rear++;
        arr[Rear] = data;
    }
}

void Dequeue(){
    if(isEmpty()){
        cout <<"Error: Queue is empty"<<endl;
    }
    else{
        int temp = arr[Front];
        Front++;
        if(Front>Rear){
            cout <<"Error: Queue is empty"<<endl;
        }
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
    Dequeue();
    Dequeue();
    Enqueue(2);

    Display();


 return 0;

}

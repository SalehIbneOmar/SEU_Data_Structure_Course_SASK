#include <iostream>
#define SIZE 5
using namespace std;


class Queue{

private:
    int Front;
    int Rear;
    int arr[SIZE];

public:
    Queue(){
        Front = -1;
        Rear = -1;
    }

    bool isFull(){
        if(Rear == SIZE-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(Front<0 && Rear<0){
            return true;
        }
        else{
            return false;
        }
    }

    void EnQ(int data){
        if(isFull()){
            cout <<"Queue Full"<<endl;
        }
        else{
            Rear++;
            arr[Rear] = data;
        }

    }

    void DeQ(){
        if(isEmpty()){
            cout <<"Queue Empty"<<endl;
        }
        else{
            int temp = arr[Front];
            Front++;
            if(Front>Rear){
                cout <<"Queue Empty"<<endl;
            }
        }

    }

    void Display(){
        for(int i=Front+1; i<=Rear; i++){
            cout <<arr[i]<<" ";
        }
    }

};


int main(){

    Queue obj;
    obj.EnQ(1);
    obj.EnQ(2);
    obj.DeQ();


    obj.Display();

return 0;
}

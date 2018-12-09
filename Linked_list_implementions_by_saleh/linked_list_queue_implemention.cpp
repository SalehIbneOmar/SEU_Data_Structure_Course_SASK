#include <iostream>
#include <cstdlib>
#define MAX_LENGTH 5
using namespace std;

struct node{
    int data;
    node *next;
};

class queue_with_linkedList{
private:
    node *Front, *Rear;
public:
    queue_with_linkedList(){
        Front = NULL;
        Rear = NULL;
    }

    int length(){
        node *temp = new node;
        temp = Front;
        int counter = 0;
        while(temp != NULL){
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    bool isEmpty(){
        if(Front == NULL){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(length() == MAX_LENGTH){
            return true;
        }
        else{
            return false;
        }
    }


    void EnQ(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if(isFull()){
            cout <<"Queue limit reached"<<endl;
        }
        else{
            if(Front == NULL){
                Front = temp;
                Rear = temp;
                temp = NULL;
            }
            else{
                node *last = new node;
                last = Front;
                while(last->next != NULL){
                      last = last->next;
                }
                last->next = temp;
                Rear = temp;
            }
        }
    }


    void DeQ(){
        node *temp = new node;
        if(isEmpty()){
            cout <<"Queue is empty"<<endl;
        }
        else{
            temp = Front;
            Front = Front->next;
            delete temp;
        }

    }


    void print(){
        node *temp = new node;
        temp = Front;
        while(temp != NULL){
            cout <<temp->data<<"  ";
            temp = temp->next;
        }
    }

};


int main(){

queue_with_linkedList obj;
obj.EnQ(10);
obj.EnQ(20);
obj.EnQ(30);
obj.EnQ(40);
obj.EnQ(50);
obj.DeQ();
obj.EnQ(60);
obj.DeQ();
obj.DeQ();
obj.EnQ(70);
obj.EnQ(80);

obj.print();

return 0;

}

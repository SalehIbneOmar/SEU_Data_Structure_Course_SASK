#include <iostream>
#include <cstdlib>
#define MAX_LENGTH 5
using namespace std;

struct node{
    int data;
    node *next;
};

class stack_with_linkedList{
private:
    node *top, *tail;
public:
    stack_with_linkedList(){
        top = NULL;
        tail = NULL;
    }

    //How many nodes exists part
    int length(){
        node *temp = new node;
        temp = top;
        int counter = 0;
        while(temp != NULL){
            counter++;
            temp = temp->next;
        }

        return counter;
    }

    bool isEmpty(){
        if(top == NULL){
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

    void push(int value){

        node *temp = new node;
        temp->data = value;

        if(!(isFull())){
            if(top == NULL){
                top = temp;
                tail = temp;
                tail->next = NULL;
                temp = NULL;
            }
            else{
                temp->next = top;
                top = temp;
            }
        }
        else{
            cout <<"Limit reached, Stack overflow!"<<endl;
        }
    }

    void pop(){
        node *temp = new node;
        if(!(isEmpty())){
            temp = top;
            top = top->next;
            delete temp;
        }
        else{
            cout <<"No node found, Stack underflow!"<<endl;
        }
    }


    void print(){
        node *print = new node;
        print = top;
        while(print != NULL){
            cout <<print->data<<"\n";
            print = print->next;
        }
    }

};

int main(){

stack_with_linkedList obj;

obj.push(1);
obj.push(2);
obj.push(3);
obj.push(4);
obj.push(5);
obj.pop();
obj.push(10);

obj.print();

return 0;

}

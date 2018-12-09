#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    node *next;
};

class linkedList{
private:
    node *head, *tail;
public:
    linkedList(){
        head = NULL;
        tail = NULL;
    }

    void createNode(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

    void nodeCounter(){
        int counter = 0;
        node *temp = new node;
        temp = head;
        while(temp != NULL){
            counter++;
            temp = temp->next;
        }

        cout <<endl;
        cout <<"Total nodes: "<<counter;
    }

    void printList(){
        node *print = new node;
        print = head;
        while(print != NULL){
            if(print->next == NULL){
                cout <<print->data;
            }
            else{
                cout <<print->data<<" --> ";
            }

            print = print->next;
        }
    }

};


int main(){

linkedList obj;
int flag;
cout <<"Press 1 to create link list"<<endl;
cin >>flag;

if(flag == 1){
    int N;
    cout <<"How many nodes do you want?: ";
    cin >>N;

    int D;
    cout <<"Enter data in nodes"<<endl;
    for(int i=1; i<=N; i++){
        cin >>D;
        obj.createNode(D);
    }

    cout <<"List:"<<endl;
    obj.printList();
    obj.nodeCounter();
    cout <<endl;

}
else{
    cout <<"Exit the console"<<endl;
}


return 0;

}

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

    void evenNodes(){
        int pos = 0, neg = 0;
        node *temp= new node;
        temp = head;
        cout <<endl;
        cout <<"Even node data are listed below (positive & negative):"<<endl;
        while(temp != NULL){
            if(temp->data%2 == 0 && temp->data>=0){
                pos++;
                cout <<temp->data<<" ";
            }
            else if(temp->data%2 == 0 && temp->data<0){
                neg++;
                cout <<temp->data<<" ";
            }

            temp = temp->next;
        }

        cout <<endl;
        cout <<"Total even node data "<<"Positive: "<<pos<<" Negative: "<<neg;

    }

    void oddNodes(){
        int pos = 0, neg = 0;
        node *temp= new node;
        temp = head;
        cout <<endl;
        cout <<"Odd node data are listed below (positive & negative):"<<endl;
        while(temp != NULL){
            if(temp->data%2 != 0 && temp->data>0){
                pos++;
                cout <<temp->data<<" ";
            }
            else if(temp->data%2 != 0 && temp->data<0){
                neg++;
                cout <<temp->data<<" ";
            }

            temp = temp->next;
        }

        cout <<endl;
        cout <<"Total odd node data: "<<"Positive: "<<pos<<" Negative: "<<neg;
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
    cout <<endl;
    int OE;
    cout <<"Filter 1 for ODD 0 for EVEN: ";
    cin >>OE;

    if(OE == 0){
        obj.evenNodes();
    }
    else if(OE == 1){
        obj.oddNodes();
    }
    else{
        cout <<"Invalid choice";
    }

    cout <<endl;

}
else{
    cout <<"Exit the console"<<endl;
}


return 0;

}

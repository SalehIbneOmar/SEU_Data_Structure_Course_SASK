#include <iostream>
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

    void valueChange_position(int pos1, int pos2){
        node *position1 = new node;
        node *position2 = new node;
        position1 = head;
        position2 = head;
        int temp;
        for(int i=1; i<pos1; i++){
            position1 = position1->next;
        }

        for(int i=1; i<pos2; i++){
            position2 = position2->next;
        }

        temp = position1->data;
        position1->data = position2->data;
        position2->data = temp;
    }

};

int main(){

    linkedList obj;
    cout <<"Original List:"<<endl;
    obj.createNode(1);
    obj.createNode(2);
    obj.createNode(3);
    obj.createNode(4);
    obj.createNode(5);
    obj.printList();

    cout <<endl;
    int p1, p2;
    cout <<"In which two position you want to swap values?:"<<endl;
    cin >>p1;
    cin >>p2;
    obj.valueChange_position(p1, p2);
    cout <<"After swap:"<<endl;
    obj.printList();
    cout <<endl;

return 0;

}

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

    void printList(){
        node *print = new node;
        print = head;
        while(print != NULL){
            cout <<print->data<<" ";
            print = print->next;
        }

    }

    void removeDuplicates(){
        node *current = new node;
        node *temp1 = new node;
        node *temp2 = new node;
        current = head;
        while(current->next != NULL){
            if(current->data == current->next->data){
                temp1 = current->next->next;
                temp2 = current->next;
                delete temp2;
                current->next = temp1;
            }
            else{
                current = current->next;
            }

        }

    }


};


int main(){

linkedList obj;

obj.createNode(1);
obj.createNode(1);
obj.createNode(2);
obj.createNode(2);
obj.createNode(3);
obj.createNode(4);
obj.createNode(4);
obj.createNode(5);
obj.createNode(6);
obj.createNode(6);
obj.printList();
cout <<endl;
obj.removeDuplicates();
obj.printList();
return 0;

}

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
            node *temp = new node;
            temp = head;
            while(temp != NULL){
                if(temp->next == NULL){
                    cout <<temp->data;
                }
                else{
                    cout <<temp->data<<" --> ";
                }
                temp = temp->next;
            }
        }

        void valSwap(){
            node *first = new node;
            node *last = new node;
            first = head;
            last = head;
            while(last->next != NULL){
                last = last->next;
            }

            int temp = last->data;
            last->data = first->data;
            first->data = temp;
        }

};


int main(){

linkedList obj;
obj.createNode(1);
obj.createNode(2);
obj.createNode(2);
obj.createNode(4);
obj.createNode(5);

cout <<"Original list:"<<endl;
obj.printList();

obj.valSwap();
cout <<endl;
cout <<"After value swap between first and last node:"<<endl;
obj.printList();



return 0;

}

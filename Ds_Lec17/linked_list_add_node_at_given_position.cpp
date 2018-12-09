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
                    temp = NULL;
                }
        }


        void addNode_at_given_position(int position, int value){
            node *previous = new node;
            node *current = new node;
            node *newNode = new node;
            current = head;
            if(position == 1){
                newNode->data = value;
                newNode->next = head;
                head = newNode;
            }
            else{
                for(int i=1; i<position; i++){
                    previous = current;
                    current = current->next;
                }
                newNode->data = value;
                previous->next = newNode;
                newNode->next = current;
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

};

int main(){

linkedList obj;
cout <<"After inserting:"<<endl;
obj.createNode(1);
obj.createNode(2);
obj.createNode(3);
obj.printList();

int pos, newVal;
cout <<endl;
cout <<"Enter Position:"<<endl;
cin >>pos;
cout <<"Enter data:"<<endl;
cin >>newVal;
obj.addNode_at_given_position(pos, newVal);
obj.printList();
cout <<endl;

return 0;

}

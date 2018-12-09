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

        //Delete node at a given position
        void removeNode_at_given_position(int position){
             node *previous = new node;
             node *current = new node;
             current = head;

             if(position == 1){
                node *temp = new node;
                temp = head;
                head = head->next;
                delete temp;
             }
             else{
                for(int i=1; i<position; i++){
                   previous = current;
                   current = current->next;
                }
                previous->next = current->next;
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
cout <<"Before delete:"<<endl;
obj.createNode(1);
obj.createNode(2);
obj.createNode(3);
obj.printList();

int pos;
cout <<endl;
cout <<"Give a position to delete a node: "<<endl;
cin >>pos;

obj.removeNode_at_given_position(pos);
cout <<"After delete:"<<endl;
obj.printList();

return 0;

}

#include <iostream>
#include <cstdlib>
using namespace std;

//Node structure
struct node{
    int data;
    node *next;
};

//Linked list class
class linkedList{
    private:
        //Head and tail of the linked list initialization
        node *head, *tail;
    public:
        linkedList(){
            head = NULL;
            tail = NULL;
        }

        //Create nodes
        void createNode(int value){
            node *temp = new node;
            temp->data = value;
            temp->next = NULL;

            if(head == NULL){
                head = temp;
                tail = head;
                temp = NULL;
            }
            else{
                tail->next = temp;
                tail = temp;
                temp = NULL;
            }
        }


        //Remove last node from the list
        void removeLast(){
            node *current = new node;
            node *previous = new node;
            current = head;
            while(current->next != NULL){
                previous = current;
                current = current->next;
            }
            tail = previous;
            previous->next = NULL;
            delete current;
        }

        //Display list
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
cout <<"Here is the singly linked list:"<<endl;
obj.createNode(0);
obj.createNode(10);
obj.createNode(100);
obj.removeLast();

obj.printList();
cout <<endl;

return 0;

}

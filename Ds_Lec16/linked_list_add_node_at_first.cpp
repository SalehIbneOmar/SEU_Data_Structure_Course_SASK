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
            }
        }

        //Add new node at first
        void addFirst(int value){
            node *temp = new node;
            if(head == NULL){
                cout <<"Error: Linked list doesn't exists";
            }
            else{
                temp->data = value;
                temp->next = head;
                head = temp;
                temp = NULL;
            }
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
obj.createNode(1);
obj.createNode(10);
obj.createNode(100);
obj.addFirst(0);

obj.printList();
cout <<endl;

return 0;

}

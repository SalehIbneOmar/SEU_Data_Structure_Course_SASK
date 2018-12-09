#include <iostream>
#include <cstdlib>
using namespace std;

//Node creation
struct node{
    int data;
    node *next;
};

//Class of LinkedList
class linkedList{
    private:
        //Two initial node named head(Starting node) and tail(Ending node) pointing the structure
        node *head, *tail;
    public:
    //Assigning the head and tail node to be NULL through constructor
    linkedList(){
        head = NULL;
        tail = NULL;
    }

    //Node creation function
    void createNode(int value){
        //--------------------
        /*after every function call new node will be created
         with value and NULL memory address assigned */
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        //------------------
        if(head==NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            tail->next = temp;
            tail = temp;
        }

    }

    //Display function
    void printList(){
        //create a new temporary node to loop through all the nodes available
        node *print = new node;
        print = head;

        while(print != NULL){
            if(print->next == NULL){
                cout <<print->data;
            }
            else{
                cout <<print->data<<" -> ";
            }
            print = print->next;
        }
    }


};

int main(){

    linkedList obj;
    obj.createNode(10);
    obj.createNode(20);
    obj.createNode(30);
    obj.printList();

return 0;

}

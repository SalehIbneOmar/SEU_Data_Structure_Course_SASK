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

    void removePosition(int position){
        node *current = new node;
        current = head;
        node *previous = new node;
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
            delete current;
        }

    }

    void removeOdd_ValuedNodes(){
        node *temp = new node;
        temp = head;
        //For odd nodes initial counter position should be 1
        int pos = 1;
        while(temp != NULL){
            if(temp->data%2==0){
                pos++;
                removePosition(pos);
            }
            temp = temp->next;
        }
    }


};

int main(){

    linkedList obj;
    cout <<"Original list:"<<endl;
    obj.createNode(1);
    obj.createNode(2);
    obj.createNode(3);
    obj.createNode(4);
    obj.createNode(5);
    obj.createNode(6);
    obj.createNode(7);
    obj.createNode(8);
    obj.createNode(9);
    obj.printList();
    cout <<endl;
    cout <<"After removing all the even valued nodes:"<<endl;
    obj.removeOdd_ValuedNodes();
    obj.printList();
    cout <<endl;

return 0;

}

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

    //Bubble sort code
    void bubbleSort(){

        node *tempNode = new node;
        tempNode = head;
        int counter = 0;
        while(tempNode != NULL){
            counter++;
            tempNode = tempNode->next;
        }

        int tempData;

        for(int i=0; i<counter-1; i++){
            //Node creation for each iteration
            node *current = new node;
            node *next = new node;
            current = head;
            next = current->next;

            //Checking and swapping loop
            for(int j=0; j<counter-i-1; j++){
                if(current->data > next->data){
                    tempData = current->data;
                    current->data = next->data;
                    next->data = tempData;
                }

                current = next;
                next = next->next;
            }
        }

    }

};

int main(){

    linkedList obj;
    obj.createNode(2);
    obj.createNode(2);
    obj.createNode(2);
    obj.createNode(1);
    obj.createNode(1);
    obj.createNode(7);
    obj.createNode(10);
    obj.createNode(3);
    obj.createNode(3);
    obj.createNode(4);
    obj.createNode(9);
    obj.createNode(9);
    obj.createNode(8);
    obj.createNode(5);
    obj.createNode(5);

    cout <<"Before sorting:"<<endl;
    obj.printList();
    cout <<"\n"<<"\n";
    cout <<"After sorting in ASC using bubble sort:"<<endl;
    obj. bubbleSort();
    obj.printList();
    cout <<endl;

return 0;

}

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
                cout <<print->data<<" --> ";
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

    //Duplicates remove code from sorted linked list
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

    int n;
    cout <<"How many nodes do you want?: ";
    cin >>n;
    cout <<endl;
    cout <<"Enter node values:"<<endl;
    int d;
    for(int i=1; i<=n; i++){
        cin >>d;
        obj.createNode(d);
    }

    cout <<"Before sorting:"<<endl;
    obj.printList();

    cout <<"\n"<<"\n";
    cout <<"After sorting in ASC using bubble sort:"<<endl;
    obj. bubbleSort();
    obj.printList();

    cout <<"\n"<<"\n";
    cout <<"After removing duplicates:"<<endl;
    obj.removeDuplicates();
    obj.printList();

    cout <<endl;

return 0;

}

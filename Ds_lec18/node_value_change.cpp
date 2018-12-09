#include <iostream>
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

    void printList(){
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

    void changeValue(int position){
        node *temp = new node;
        temp = head;

        for(int i=1; i<position; i++){
            temp = temp->next;
        }

        int newVal;
        cout <<endl;
        cout <<"Enter new value: ";
        cin >>newVal;
        temp->data = newVal;
    }

};

int main(){

    linkedList obj;
    obj.createNode(1);
    obj.createNode(2);
    obj.createNode(3);
    obj.createNode(4);
    obj.printList();

    int pos;
    cout <<endl;
    cout <<"In which position you want to change the value?: ";
    cin >>pos;
    obj.changeValue(pos);
    cout <<endl;
    cout <<"Updated list: "<<endl;
    obj.printList();
    cout <<endl;

return 0;

}

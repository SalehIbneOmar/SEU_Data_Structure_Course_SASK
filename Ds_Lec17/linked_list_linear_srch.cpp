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

    void searchNodeData(int src){
        node *temp = new node;
        temp = head;
        int serial = 0, flag = 0;
        while(temp != NULL){
            serial++;
            if(src == temp->data){
                flag = 1;
                break;
            }
            temp = temp->next;
        }

        if(flag == 1){
            cout <<src<<" found at serial no.: "<<serial;
        }
        else{
            cout <<"Not found!";
        }
    }


};

int main(){

linkedList obj;
obj.createNode(10);
obj.createNode(20);
obj.createNode(12);
obj.createNode(23);
obj.createNode(21);
obj.printList();

cout <<endl;
int srch;
cout <<"Search: ";
cin >>srch;
obj.searchNodeData(srch);
cout <<endl;

return 0;

}

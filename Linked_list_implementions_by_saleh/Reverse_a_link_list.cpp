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

    void printList(){
        node *print = new node;
        print = head;
        while(print != NULL){
            cout <<print->data<<"  ";
            print = print->next;
        }
    }

    void reverseList(){
        node *current_node = new node;
        current_node = head;
        node *previous_node = new node;
        previous_node = NULL;
        node *next_node = new node;
        next_node = NULL;

        while(current_node != NULL){
            next_node = current_node->next;
            current_node->next = previous_node;
            previous_node = current_node;
            current_node = next_node;
        }
        head = previous_node;
    }
};

int main(){

linkedList obj;
obj.createNode(1);
obj.createNode(2);
obj.createNode(3);
cout <<"Before reverse:"<<endl;
obj.printList();

cout<<endl;
cout <<"After reverse:"<<endl;
obj.reverseList();
obj.printList();
cout<<endl;

return 0;

}

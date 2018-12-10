#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    node *next;

};

class ls{
private:
    node *head, *tail;
public:
    ls(){
        head = NULL;
        tail = NULL;
    }

    void cn(int v){
        node *temp = new node;
        temp->data = v;
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

    void dsp(){
        node *temp = new node;
        temp = head;
        while(temp != NULL){
            cout <<temp->data<<" ";
            temp = temp->next;
        }
    }


    void removeNeg(){
        node *temp = new node;
        node *current = new node;
        node *previous = new node;
        previous = NULL;
        current = head;
        while(current != NULL){
            if(current->data < 0){
                if(previous != NULL){
                    previous->next = current->next;
                }
                else{
                    head = current->next;
                }
                temp = current;
                current = current->next;
                delete temp;
            }
            else{
                previous = current;
                current = current->next;
            }
        }
    }



};

int main(){

ls obj;
int n, d;
cout <<"How many nodes?: ";
cin >>n;
cout <<endl;
cout <<"Enter data:"<<endl;
for(int i=1; i<=n; i++){
    cin >>d;
    obj.cn(d);
}

cout <<endl;
cout <<"List:"<<endl;
obj.dsp();
cout <<endl;

obj.removeNeg();
cout <<endl;
cout <<"After remove:"<<endl;
obj.dsp();
cout <<endl;


return 0;

}

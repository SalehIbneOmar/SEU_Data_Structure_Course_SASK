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

        void nodeCreation(int value){
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
            node *prn = new node;
            prn = head;
            cout <<endl;
            while(prn != NULL){
                cout <<prn->data<<" ";
                prn = prn->next;
            }
        }

        void minimun(){
            node *temp = new node;
            temp = head;
            int MIN = temp->data;
            while(temp!=NULL){
                if(temp->data<MIN){
                    MIN  = temp->data;
                }
                temp = temp->next;
            }
            cout <<endl;
            cout <<"Minimum data is: "<<MIN<<endl;
        }

        void maximun(){
            node *temp = new node;
            temp = head;
            int MAX = temp->data;
            while(temp!=NULL){
                if(temp->data>MAX){
                    MAX = temp->data;
                }
                temp = temp->next;
            }
            cout <<endl;
            cout <<"Maximum data is: "<<MAX<<endl;
        }
};


int main(){

linkedList obj;
int n;
cout <<"How many nodes?: ";
cin >>n;

int d;
cout <<"Enter node data: "<<endl;
for(int i=0; i<n; i++){
    cin >>d;
    obj.nodeCreation(d);
}

obj.printList();
obj.minimun();
obj.maximun();


return 0;

}

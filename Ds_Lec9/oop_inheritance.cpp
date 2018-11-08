#include <iostream>
#include <cstring>
using namespace std;

class Parent_class{

    protected:
        string name;
        double income;
        double expenditure;

    public:
        int NID;
//------------------------------
    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }

    void setIncome(double i){
        income = i;
    }

    double getIncome(){
        return income;
    }

    void setExpenditure(double e){
        expenditure = e;
    }

    double getExpenditure(){
        return expenditure;
    }
//------------------------------

};


class Child_class: public Parent_class{

    private:
        double savings;

    public:
        double getSavings(){
            savings = (income - expenditure);
            return savings;
        }

};


int main(){


    int nid;
    cout <<"Enter NID: "<<endl;
    cin >>nid;

    Child_class obj;
    obj.NID = nid;

    switch(obj.NID){
        case 1:
        obj.setName("Saleh");
        obj.setIncome(7.24);
        obj.setExpenditure(5.29);

        cout <<"Person :"<<obj.getName()<<endl;
        cout <<"Income :"<<obj.getIncome()<<endl;
        cout <<"Expenditure :"<<obj.getExpenditure()<<endl;
        cout <<"Savings :"<<obj.getSavings()<<endl;
        break;

        case 2:
        obj.setName("Sakib");
        obj.setIncome(6.243);
        obj.setExpenditure(3.291);

        cout <<"Person :"<<obj.getName()<<endl;
        cout <<"Income :"<<obj.getIncome()<<endl;
        cout <<"Expenditure :"<<obj.getExpenditure()<<endl;
        cout <<"Savings :"<<obj.getSavings()<<endl;
        break;

        case 3:
        obj.setName("Rakib");
        obj.setIncome(9.243);
        obj.setExpenditure(3.991);

        cout <<"Person :"<<obj.getName()<<endl;
        cout <<"Income :"<<obj.getIncome()<<endl;
        cout <<"Expenditure :"<<obj.getExpenditure()<<endl;
        cout <<"Savings :"<<obj.getSavings()<<endl;
        break;

        default:
            cout <<"No NID found in the DB"<<endl;

    }


return 0;

}

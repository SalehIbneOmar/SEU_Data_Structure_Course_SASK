/*
Problem:

 Class Product:
    a. Private variable name, price, quantity.
    b. Constructor to initialize these three private variables.
    c. Method/Function to get product name and calculate total price as multiplication of price and quantity.

 Main Function:
    d. Initialize product class variable creating an object of that class.
    e. Call the function get product name and total price from product class and display it.

*/

//--------------- Solution ---------------

#include <iostream>
using namespace std;


class Product{

 private:
     string name;
     double price;
     int quantity;

 public:
    Product(string n, double p, int q){
        name = n;
        price = p;
        quantity = q;
    }

    string getProductName(){
        return name;
    }

    double totalPrice(){
        double total;
        total = price*quantity;
        return total;
    }


};


int main(){

    string p_n;
    cout <<"Enter product name"<<endl;
    cin >>p_n;
    double p_r;
    cout <<"Enter price"<<endl;
    cin >>p_r;
    int p_q;
    cout <<"Enter quantity"<<endl;
    cin >>p_q;


    Product obj(p_n, p_r, p_q);

    cout<<"Product name: "<<obj.getProductName()<<"\n"<<"Total Price: "<<obj.totalPrice()<<" BDT"<<endl;

return 0;

}

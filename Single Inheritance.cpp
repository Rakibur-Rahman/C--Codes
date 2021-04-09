#include<bits/stdc++.h>
using namespace std;

class parent{
    public:

string brand;

void print (){

cout<<"This is:"<<endl;
}
};

class child:public parent {
    public:

int price;

};




int main(){


child car;
car.brand="RRR";
car.price=5000000;
car.print();
cout<<"Brand: "<<car.brand<<endl<<"Price: "<<car.price<<endl;



}

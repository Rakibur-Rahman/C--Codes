#include<bits/stdc++.h>
using namespace std;

class parent{   //create parent class;
    public:

string brand;

void print (){

cout<<"This is:"<<endl;
}
};

class child:public parent {   //inheritances parent class by chil class;
    public:

int price;

};




int main(){


child car; //create an object;

car.brand;
car.price;

cout<<"Enter car brand:"<<endl;
cin>>car.brand;
cout<<"Enter car price:"<<endl;
cin>>car.price;

car.print();
cout<<"Brand: "<<car.brand<<endl<<"Price: "<<car.price<<endl;



}

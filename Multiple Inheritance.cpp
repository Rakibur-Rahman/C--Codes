#include<bits/stdc++.h>
using namespace std;

class parent1{   //create first class;
public:
    string name;
    string address;
};

class parent2{   //create scond class;
public:
    int id;
    float gpa;
};

class child:public parent1,public parent2{    //inheritances two class;
  public:
 void info(){

 cout<<"Here is your Information"<<endl;


 }

 void enter(){
 cout<<"Enter your";

 }

};

int main(){

   child person;

   person.name;
   person.address;
   person.id;
   person.gpa;

    person.enter();
    cout<<" Name: "<<endl;
   getline(cin,person.name);
   person.enter();
   cout<<" Address: "<<endl;
   getline(cin,person.address);
   person.enter();
   cout<<" Id & Gpa: "<<endl;
   cin>>person.id>>person.gpa;
    person.info();
    cout<<" Name: "<<person.name<<endl<<" Address: "<<person.address<<endl<<" Id & Gpa: "<<person.id<< ", "<<person.gpa<<endl;


    return 0;
}






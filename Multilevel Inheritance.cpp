#include<bits/stdc++.h>

using namespace std;

class grandfather{
public:
    string color;
    float height;



};
class father:public grandfather{
public:
    string hair_color;
    int power;



};


class child:public father{
public:
    string name;
    string address;

    int amount;

    void add(){
    cout<<"Enter your address: "<<endl;
    }


};


int main()
{
    child son;


    son.add();
    getline(cin,son.address);
    getline(cin,son.color);
    getline(cin,son.hair_color);
    getline(cin,son.name);



    cout<<son.address<<endl<<son.color<<endl<<son.hair_color<<endl<<son.name<<endl;



    return 0;





}


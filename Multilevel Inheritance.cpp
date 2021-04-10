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


};


int main()
{
    child son;

    son.color="Black";
    son.height=5.6;
    son.hair_color="brown";
    son.name="Rakibur";
    son.amount=50000;



    cout<<son.color<<endl<<son.height<<endl<<son.hair_color<<endl<<son.name<<endl<<son.amount<<endl;

    return 0;





}


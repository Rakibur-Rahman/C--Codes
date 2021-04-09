#include<bits/stdc++.h>

using namespace std;

class parent{

public:
    string name;
    int id;

};

class child:public parent{
    public:
float gpa;

};


int main()
{
   child obj;
   obj.name="Rakibur";
   obj.id=63;
   obj.gpa=3.29;
   cout<<obj.name<<endl<<obj.id<<endl<<obj.gpa<<endl;
   return 0;



}

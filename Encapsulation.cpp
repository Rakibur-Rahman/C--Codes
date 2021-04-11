#include<bits/stdc++.h>

using namespace std;

class Encapsulation
{
private:
    int x;
public:
    int get(int a){
     x=a;
     return x;

    }


};

int main(){

Encapsulation abj;
cout<<abj.get(4)<<endl;;

return 0;
}

#include<iostream>
using namespace std;
class Item
{
    public:
    int a,b; //instance member variables
    static int k; //static member variables
};
int Item::k;
int main()
{
    Item i1,i2;
    i1.a=2;
    cout<<i2.a; //throws some garbage value
    i1.k=5; //i1.k likhna galat nhin hai
    //class ke andar koi static variable hai usko class ka koi object access kr skta hai
    //static variable mein garbage value kabhi nhin aa skti hai
    cout<<endl<<i2.k;
}
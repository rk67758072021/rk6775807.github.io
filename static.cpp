#include<iostream>
using namespace std;
class Item
{
    public:
    int a,b;//instance variable member>> default value is 0. 
    //instance variable object specific hai
    static int k; //static variable member
    //static variable object specific nhin hota hai.
};
/* Code 1
int Item::k;
int main()
{
    Item i1,i2;
    i1.a=2;
    cout<<i2.a;
    i1.k=5;
    cout<<endl<<i2.k;
}
*/


int Item::k;
int main()
{
    Item::k=5;
    cout<<Item::k;
}

/*"object.k" aur "classname::k" in dono mein classname::k ko prefer krna
*/
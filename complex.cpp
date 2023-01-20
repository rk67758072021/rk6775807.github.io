#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c1.showData();
}
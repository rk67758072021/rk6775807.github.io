
//C style structure
#include<iostream>
#include<cstring> //cstring in c++ = string.h in c
#include<cstdio> //cstdio in c++ = stdio.h in c
using namespace std;
struct Book
{
    private:  //this private specifier protects the following bookid, title, price, input(), display() to be
    //used outside the structure and will give error when they are called outside structure.
    int bookid; //private
    char title[20]; //private
    float price; //private
    public: //the members after public keyword are accessible outside the structure
    Book input()  //we can also have a function inside the structure in c++ and no need to declare function outside the structure
{
    cout<<"enter bookid, title and price:"<<endl;
    cin>>bookid;
    if(bookid<0)//this if block secures that bookid will not be negative
    bookid=-bookid;
    cin.ignore();
    cin.getline(title,20); //20 is the number of characters input
    cin>>price;
}
void display()   //we can also have a function inside the structure in c++ and no need to declare function outside the structure
{
    cout<<"\n"<<bookid<<" "<<title<<" "<<float(price);
}
};
int main()
{
    Book b4;
    b4.input(); //input() is public
    b4.display(); //display() is public
}


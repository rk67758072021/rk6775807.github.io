
//C style structure
#include<iostream>
#include<cstring> //cstring in c++ = string.h in c
#include<cstdio> //cstdio in c++ = stdio.h in c
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
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
    Book b1={1,"java",456.0}; //initalisation of struct variable
    Book b2; //writing struct keyword is optional on every use of non-primitive data type.
    b2.bookid=3;
    strcpy(b2.title,"php");
    b2.price=20.0;
    Book b3;
    cout<<"enter bookid, title and price"<<endl;
    cin>>b3.bookid;
    cin.ignore();
    cin.getline(b3.title,20); //20 is the number of characters input
    cin>>b3.price;
    cout<<"\n"<<b3.bookid<<" "<<b3.title<<" "<<float(b3.price);
    Book b4;
    b4.input();
    b4.display();
}


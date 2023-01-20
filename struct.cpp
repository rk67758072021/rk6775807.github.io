
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
};
struct Book input();
void display(struct Book);
int main()
{
    struct Book b1={1,"java",456.0}; //initalisation of struct variable
    struct Book b2;
    b2.bookid=3;
    strcpy(b2.title,"php");
    b2.price=20.0;
    struct Book b3;
    cout<<"enter bookid, title and price"<<endl;
    cin>>b3.bookid;
    cin.ignore();
    cin.getline(b3.title,20); //20 is the number of characters input
    cin>>b3.price;
    cout<<"\n"<<b3.bookid<<" "<<b3.title<<" "<<float(b3.price);
    struct Book b4;
    b4=input(); //taking input in structure variable using function
    // cout<<"\n"<<b4.bookid<<" "<<b4.title<<" "<<float(b4.price);
    display(b4);
}
struct Book input()
{
    struct Book b;
    cout<<"enter bookid, title and price:"<<endl;
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20); //20 is the number of characters input
    cin>>b.price;
    return b;
}
void display(struct Book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<float(b.price);
}
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string fname="Rohit", lname="kumar",price; //+ operator for concatenation of string
    cout<<fname+" "+lname<<endl;
    cout<<endl<<fname.length();
    cout<<endl<<fname.append(lname);
    cout<<lname.size();
    string name;
    cin>>name; /*cin considers a space (whitespace, tabs, etc) as a terminating character,
     which means that it can only display a single word (even if you type many words)*/
     getline(cin, price); //prefer to use this, it considers 
     //whitespaces as input and doesn't terminate at whitespaces.
     cout<<name<<endl<<price;
}
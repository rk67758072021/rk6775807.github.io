// #include<iostream>
// #include<map>
// #include<vector>
// #include<string.h>
// using namespace std;
// // class example
// // {
// //     static int a;
// //     int b;
// // }
// // int isPalindrome(int x);
// int main()
// {
//     //code-1
//     // cout << "Size of char : " << sizeof(char) << endl;
//     // cout << "Size of int : " << sizeof(int) << endl;
      
//     // cout << "Size of long : " << sizeof(long) << endl;
//     // cout << "Size of float : " << sizeof(float) << endl;
      
//     // cout << "Size of double : " << sizeof(double) << endl;


//     //code-2
// //     cout << "Size of char : " << sizeof(char) << " byte"
// //          << endl;
    
// //   cout << "char minimum value: " << CHAR_MIN << endl;
    
    
// //   cout << "char maximum value: " << CHAR_MAX << endl;
    
    
// //   cout << "Size of int : " << sizeof(int) << " bytes"
// //          << endl;
      
// //   cout << "Size of short int : " << sizeof(short int)
// //          << " bytes" << endl;
      
// //   cout << "Size of long int : " << sizeof(long int)
// //          << " bytes" << endl;
      
// //   cout << "Size of signed long int : "
// //          << sizeof(signed long int) << " bytes" << endl;
      
// //   cout << "Size of unsigned long int : "
// //          << sizeof(unsigned long int) << " bytes" << endl;
      
// //   cout << "Size of float : " << sizeof(float) << " bytes"
// //          << endl;
     
// //   cout << "Size of double : " << sizeof(double)
// //          << " bytes" << endl;
      
// //   cout << "Size of wchar_t : " << sizeof(wchar_t)
// //          << " bytes" << endl;

// //code-3

// //     // this is declaration of variable a
// //     int a;
    
// //     // this is initialisation of a
// //     a = 10;
    
// //     // this is definition = declaration + initialisation
// //     int b = 20;
  
// //     // declaration and definition
// //     // of variable 'a123'
// //     char a123 = 'a';
  
// //     // This is also both declaration and definition
// //     // as 'c' is allocated memory and
// //     // assigned some garbage value.
// //     float c;
  
// //     // multiple declarations and definitions
// //     int _c, _d45, e;
  
// //     // Let us print a variable
// //     cout << a123 << endl;

// //code 04 to swap two integers
// // int x,y;
// // cin>>x>>y;
// // cout<<"x = "<<x<<" y = "<<y;

// // (x ^= y), (y ^= x), (x ^= y);
// // cout<<"x = "<<x<<" y = "<<y;

// // for loop
//     // for (int i = 1; i <= 5; i++) {
//     //     cout << "Hello World\n";
//     // }
// // int arr[7]= {40, 50, 60, 70, 80, 90, 100};
// //  for (auto element: arr){
// //    cout << element << " ";
// //  }
// // return 0;

// // while loop
//     // int i = 1;
 
//     // // test expression
//     // while (i < 6) {
//     //     cout << "Hello World\n";
 
//     //     // update expression
//     //     i++;
//     // }

//     // do while loop
//     // int i = 2; // Initialization expression
 
//     // do {
//     //     // loop body
//     //     cout << "Hello World\n";
 
//     //     // update expression
//     //     i++;
 
//     // } while (i < 1); 


// // std::vector<int> v = { 0, 1, 2, 3, 4, 5 };
// //     for (auto i : v)
// //         std::cout << i << ' ';

// //short circuiting logical operators >>&& mein agar first operand false hai toh second operand ko evaluate bhi nhin krega
// //  || operator ke case mein agar first  operator true hai toh second operand ko evaluate bhi nhin krega
// //  int a = 10, b = 4;
// //     bool res = ((a == b) && printf("GeeksQuiz"));
// //  int a = 10, b = 4;
// //     bool res = ((a != b) && cout << "GeeksQuiz");
// // int x, y = 5, z = 5; 

// //   x = y == z; 

// //   printf("%d", x); 

// //    int i = (1, 2, 3);
    
// //     printf("%d", i);
// // int i = 3;
// //     printf("%d", (++i)++);
// // int x=5>>2;
// // cout<<x;
// // int x;
// // cin>>x;
// // cout<<isPalindrome(x);

// // }

// //  int isPalindrome(int x) {
// //         int i, rem,reverse=0,temp=x;
// //         if(x>=0)
// //         {
            
// //              while(x!=0)    
// //   {    
// //      rem=x%10;    
// //      reverse=reverse*10+rem;    
// //      x/=10;    
// //   }    
// //             // if(rem==temp)
// //           return reverse;
// //         // else
// //         // return rem;
// // }
// //  }
// // string s= "hello world";
// // for(int i=0;i<strlen(s);i++)
// a[30000]
// }
// C++ program to illustrate the use
// of the break statement
#include <iostream>
using namespace std;

// Function to illustrate the use
// of break statement
void useOfBreak()
{
	for (int i = 0; i < 40; i++) {

		cout << "Value of i: "
			<< i << endl;

		// If the value of i is
		// equal to 2 terminate
		// the loop
		if (i%10==1) {
			break;
		}
	}
}

// Driver Code
int main()
{

	// Function Call
	useOfBreak();

	return 0;
}

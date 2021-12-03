/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int acceleration;
 int fvelocity;
 int ivelocity;
 int t;
 cin>>acceleration;
 cin>>ivelocity;
 cin>>t;
 fvelocity =(acceleration*t)+ivelocity;
 cout<<"Final Velocity is: "<<fvelocity;
}

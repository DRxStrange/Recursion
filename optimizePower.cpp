/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int optimizePower(int a, int b){
    
      if(b == 0){
          return 1;
      }
      
     if(b == 1){
          return a;
      }
      
       
      if(b%2 == 0){
          
          return optimizePower(a, b/2)*optimizePower(a, b/2);
      }
      else {
          return a*optimizePower(a, b/2)*optimizePower(a, b/2);
      }
    
 }

int main()
{
    //  abbcbba //
    
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans = optimizePower(a, b);
     cout<<ans;

    return 0;
}

#include <iostream>

using namespace std;
bool palindrome(string str, int i, int j){
      if(i == j){
          return true;
      }   
      if(str[i] == str[j]){
          return palindrome(str, i+1, j-1);
      }
      return false;
}

int main()
{
    //  abbcbba //
    // check string is palindrome or not //  (two pointer approach + recursion).
    string str ;
    cin>>str;
    int size = str.length() -1;
    if(palindrome(str, 0, size)){
        cout<<" string is  palindrome "<<endl;
    } else{
        cout<<"string is not palindrome"<<endl;
    }


    return 0;
}

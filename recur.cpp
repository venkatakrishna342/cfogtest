#include<iostream>
using namespace std;
void recursive_function(int n){

       if(n>10)   //base case 
           return;
      else{
           cout<<"Recursive Function call number "<<n<<endl;
           recursive_function(n=n+1); // here function is calling it self
          

int main(){
  int n=1;
  recursive_function(n); // function call
return 0;


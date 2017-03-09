#include<iostream>
using namespace std;

int recursive_function(int n){
    static int i=1;// to make one time initialization
    cout<<i<<" : time"<<endl; // counting the function calls

    if(n==1){
      return 1;//base case
       }
   else{
        i++;
        return  n=n*recursive_function(n-1);
        }
}

int main(){

    cout<<"Enter to number to find Factorial: ";
    int num;
    cin>>num;
    num=recursive_function(num); // function call
    cout<<"\n\n\n\t\t\tFactorial of number is: "<<num;
    cout<<"\n\n\n\n\n";
return 0;
}
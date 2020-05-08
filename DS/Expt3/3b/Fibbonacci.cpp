#include<iostream>
using namespace std;


int fib(int n)      //Declare fibonacci function
{
    if(n<=1)
    {
        return(1);
    }
    else{
        return((fib(n-1)+fib(n-2)));        //Recursion if fibonacci function
    }
}


int main()
{
    int n,x;
    cout<<"Enter the sequence end range : ";
    cin>>n;
    x = fib((n-1));
    cout<<"Fibonacci digit is : "<<x;
}

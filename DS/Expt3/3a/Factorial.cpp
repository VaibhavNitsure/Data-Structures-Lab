#include<iostream>
using namespace std;

int fact(int n)     //Declare factorial function
{
    if(n == 1)
    {
        return(1);
    }
    else
        return(n*fact(n-1));        //Recursion of factorial function
}

int main()
{
    int n,ans;
    cout<<"Enter the number : ";
    cin>>n;
    ans = fact(n);
    cout<<"The factorial is : "<<ans<<endl;     //Output factorial
}

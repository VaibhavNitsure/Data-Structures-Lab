#include<iostream>
#include<stack>

using namespace std;

string prefix;      //Declare strings for prefix and postfix
string postfix;
int i;
int l;

stack<string> s;        //Declare a stack of type string



bool isoperator(char ch)        //checks if character is operator or not
{
    switch(ch)
    {
    case '+' :
    case '-' :
    case '*' :
    case '/' :
        return true;
    }
    return false;
}

void eval(int i)
{
    if(i<0)
    {
        postfix = s.top();s.pop();
        cout<<"Postfix expression :"<<postfix<<endl;    //print postfix expression
        return;
    }
        if(isoperator(prefix[i]))       //if it is an operator pop the strings and concatinate
        {
            string p1 = s.top();s.pop();
            string p2 = s.top();s.pop();

            string temp = p1+p2+prefix[i];

            s.push(temp);
        }
        else{
            s.push(string(1,prefix[i]));    //push in stack if not an operator
        }
    i = i - 1;
    eval(i);
}

int main()
{
   cout<<"enter the prefix expression :";
   cin>>prefix;

   l = prefix.size();

   eval(l-1);       //Recursion

}

/// Reverse a string using stack

#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

string reverseString ( string str )
{
    stack <char> s ;
    int len;
    for ( len = 0 ; str[len] != '\0' ; len++ );
    for ( int i = 0 ; i < len ; i++ )
    {
        char ch = str[i] ;
        s.push ( ch ) ;
    }
    string rev = "";
    while ( !s.empty() )
    {
        char ch = s.top();
        rev += ch;
        s.pop();
    }
    return rev ;
}

int main()
{
    string str = "Incredible India!!";
    cout << "Initial string is : " << str << endl;
    str = reverseString(str);
    cout << "Reversed string is : " << str << endl;

    return 0;
}

/***
    OUTPUT
    Initial string is : Incredible India!!
    Reversed string is : !!aidnI elbidercnI
***/

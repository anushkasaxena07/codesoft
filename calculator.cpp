#include <iostream>
#include <string>
using namespace std;

int main()
{ char oprator;
    cout << "Enter operator: +, -, *, /: ";
    cin>>oprator;
    
    int a,b ;
    cout << "Enter two operands: ";
cin>>a>>b;
switch(oprator){

case  '+' :
cout<<a+b;
case '-':
cout<<a-b;
case '*':
cout<<a*b;
case '/':
cout<<a/b;
default:
     
      cout << "Error!";
      break;
}	
	
	
}

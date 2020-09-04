#include <iostream>
using namespace std;
void addition()
{
	int a,b;
	cout<<"Enter two numbers to be added"<<endl;
	cin>>a>>b;
	cout<<"Sum = "<<a<<" + "<<b<<endl<<"= "<<a+b<<endl;
}
void subtraction()
{
	int a,b;
	cout<<"Enter the number to be subtracted"<<endl;
	cin>>b;
	cout<<"Enter the number to be subracted from"<<endl;
	cin>>a;
	cout<<"Result of subtraction = "<<a<<" - "<<b<<endl<<"= "<<a-b<<endl;
}
void multiplication()
{
	int a,b;
	cout<<"Enter two numbers to be multiplied"<<endl;
	cin>>a>>b;
	cout<<"Product = "<<a<<"*"<<b<<endl<<"= "<<a*b<<endl;
}
void divison()
{
	float a,b;
	cout<<"Enter the dividend (number to be divided)"<<endl;
	cin>>a;
	cout<<"Enter the divisor"<<endl;
	cin>>b;
	if(b==0)
	{
		cout<<"Cannot perform divison"<<endl;
	}
	else
	{
		cout<<"Result of division = "<<a<<"/"<<b<<endl<<"= "<<a/b<<endl;
	}
}
int main()
{
  char option;
  do{
 	cout<<"Enter the operator of operation you want to perform"<<endl;
    cout<<"'+' for addition"<<endl<<"'-' for subtraction"<<endl<<"'*' for multiplication"<<endl<<"'/' for division"<<endl<<endl;
    cout<<"Enter 0 if you want to exit"<<endl;
    cin>>option;
    switch (option)
    {
    case 43 :
    	addition();
    	break;
    case 45 :
	    subtraction();
		break;
	case 42 :
	    multiplication();
	    break;
	case 47 :
	    divison();
	    break;  	
	default :
	   break; 	
    }
    }while( option != 48);
    return 0;
}

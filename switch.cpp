#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,i;
	char op;
for(i=1;i<=10;i++)
{
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	cout<<"Enter operators (+,-,*,/): ";
	cin>>op;

	switch(op)
	{
		case '+':
			cout<<"Answer is: ";
			cout<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Answer is: ";
			cout<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Answer is: ";
			cout<<num1*num2<<endl;
			break;
		case '/':
			cout<<"Answer is: ";
			cout<<num1/num2<<endl;
			break;
		default:
			cout<<"Enter wrong operator!!";
	}//end of switch
	getch();
	system("cls");
}//end of for
	
	return 0; 
    }//end of main
	

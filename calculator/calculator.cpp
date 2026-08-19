#include<iostream>
using namespace std;
int sub(int , int);
int sum(int, int);
int mul(int , int);
int div(int, int);
int mod(int , int);

main()
{
	int a,b; 
	char op , choice;
	do{
	system("cls");	
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	cout<<"-------------------------------\n";
	cout<<"Plz Enter any  operator"<<endl;
	cout<<"-------------------------------\n";
	cout<<"+ Addition:"<<endl<<"- subtraction"<<endl<<"* multiplication"<<endl;
	cout<<" / division"<<endl<<"% modulas"<<endl;
	cout<<"-------------------------------\n";
	cin>>op;

	switch(op)
	{
		case '+':
		cout<<"-------------------------------\n";
			cout<<"Result is:"<<sum(a,b);
		break;
		
		case '-':
			cout<<"Result is:"<<sub(a,b);
		break;
		
		case '*':
			cout<<"Result is:"<<mul(a,b);
		break;
		
		case '/':
			cout<<"Result is:"<<div(a,b);
		break;
		
		case '%':
			cout<<"Result is:"<<mod(a,b);
		break;
		
	}
	cout<<endl;
	cout<<"-------------------------------\n";
	cout<<"Continue to press y or Exit to press N(y/n)???";
	cin>>choice;
   }while(choice == 'y'||choice =='Y');

}
int sum(int x,int y)
{
	return x+y;

}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int mod(int x,int y)
{
	return x%y;
}


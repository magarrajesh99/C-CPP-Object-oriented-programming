//Accept numberfrom user and check that number is even or not.

#include<iostream>
using namespace std;

bool CheckEven(int);

int main()
{
	int iNo=0;
	bool iRet=false;
	
	cout<<"Enter number\n";
	cin>>iNo;
	
	iRet=CheckEven(iNo);
	
	if(iRet==true)
	{
		cout<<iNo <<"is Even number";
	}
	else
	{
		cout<<iNo <<"is Not even number";
	}
	
	return 0;
}

bool CheckEven(int iValue)
{
	if(iValue%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//Accept number from user and display it's factor.

#include<iostream>
using namespace std;

int Factorial(int);

int main()
{
	int iNo=0,iRet=0;
	
	cout<<"Enter number\n";
	cin>>iNo;
	
	iRet=Factorial(iNo);
	
	cout<<"Factorial is : "<<iRet;
	
	return 0;
}

int Factorial(int iValue)
{
	int iCnt=0,iFact=1;
	
	if(iValue<0)
	{
		iValue=-iValue;				//Updator
	}
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
	
}
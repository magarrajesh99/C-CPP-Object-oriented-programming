//Display Factorial using while loop.

#include<iostream>
using namespace std;

int Factorial(int);

int main()
{
	int iNo=0,iRet=0;
	
	cout<<"Enter number\n";
	cin>>iNo;
	
	iRet=Factorial(iNo);
	
	cout<<"Factorial is: "<<iRet;
	
	return 0;
}
int Factorial(int iValue)
{
	int iFact=1,iCnt=0;
	
	iCnt=1;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	while(iCnt<=iValue)
	{
		iFact=iFact*iCnt;
		iCnt++;
	}
	return iFact;
}
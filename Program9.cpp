//Accept number from user and display addition of that number.
//Input:    5
//Output:	15	

#include<iostream>
using namespace std;

int Addition(int);

int main()
{
	int iNo=0,iRet=0;
	
	
	cout<<"Enter number\n";
	cin>>iNo;
	
	iRet=Addition(iNo);
	
	cout<<"Addition is:  "<<iRet;
	
	return 0;
}

int Addition(int iValue)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

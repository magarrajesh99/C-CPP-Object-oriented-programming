//Display Factors.

#include<iostream>
using namespace std;

int DisplayFactor(int);

int main()
{
	int iNo=0,iRet=0;
	
	cout<<"Enter number";
	cin>>iNo;
	
	DisplayFactor(iNo);
	
	return 0;
}

int DisplayFactor(int iValue)
{
		int iCnt=0;
		
		if(iValue<0)
		{
			iValue=-iValue;
		}
		
		for(iCnt=1;iCnt<=(iValue/2);iCnt++)			//o(N/2)
		{
			if(iValue%iCnt==0)
			{
				cout<<iCnt<<"\t";
			}
		}
}
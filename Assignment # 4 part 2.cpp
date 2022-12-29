#include<iostream>
using namespace std;
int main()
{
	int num[10],i;
	for(i=0; i<10; i++)
	{
		cout<<"Enter "<<i+1<<" Integers :: ";
		cin>>num[i];
		
	}
	cout<<"Array are In Actual Order "<<endl;
	 for(i=0; i<10; i++)
	 cout<<num[i]<<" ";
	cout<<"\nArray are In Reverse Order "<<endl;
	 for(i=9; i>=0; i--)
	 cout<<num[i]<<" ";
}

#include<iostream>
using namespace std;
int avg(int arr[], int size)
{  
int sum=0;
int average=0;
  
	for (int i = 0;i < 5;i++)
	{
	sum+=arr[i];
    }
	average=sum/size;
	return average;
}
int highestMarks(int arr[], int size)
{    
    int max=0;
	int value=0;
	for (int i = 0;i < size;i++)
	{  
		if (arr[max] < arr[i])
		{
			max=i;
	 }
	 value=arr[max];

	}
	return value;
	
}
int main()
{
	int marks[5];
	for (int i = 0;i < 5;i++)
	{
		cout<<"Enter marks of student "<<i+1<<":";
		cin>>marks[i];
	}
	cout<<"Average:"<<avg(marks,5)<<endl;
	cout<<"Highest:"<<highestMarks(marks,5);
	return 0;
}
#include<iostream>
using namespace std;
void maxMarks(int arr[],int size)
{
    
	int max=0;
	for (int i=0;i < size;i++)
	{
	  
		if (arr[max] < arr[max + i])
		{
			max++;
	    }
		

	}
	cout << "The maximum marks is:" << arr[max];
}
void bonusMarks(int &Bon)
{
  Bon=Bon+5;

    
}

int main()
{
	int marks[5]={50,90,60,45,75};
	int *ptr=marks;
	maxMarks(marks,5);
	cout<<endl;
	cout<<"After applying the 5 bonus marks on it is:";
	bonusMarks(*ptr);
	
	
}
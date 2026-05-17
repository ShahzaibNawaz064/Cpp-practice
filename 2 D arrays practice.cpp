#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout<<"Enter the element of row  "<<i+1<<" and "<<"columm "<<j+1<<" ";
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
		cout << endl;
	}
	cout<<"The transpose of this matrix is :"<<endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"2* of this matrix is:"<<endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr[i][j]*2 << " ";
		}
		cout << endl;
		
	}
	return 0;
	


}
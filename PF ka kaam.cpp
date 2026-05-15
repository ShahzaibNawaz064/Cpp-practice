#include<iostream>
using namespace std;
int sum(int a[], int size)
{   
int result=0;
	
   	return a[0] + a[1];

}
int diff(int a[], int size)
{
	return a[0]-a[1];

	
	
	
}int product(int a[], int size)
{
	
		
	
	return a[0]*a[1];


}


int main()
{
 int num[2];

 for (int i = 0;i < 2;i++)
 {
      cout<<"Enter num of "<<i+1<<":";

	 cin>>num[i];
 }
 cout<<"Sum:"<<sum(num,2)<<endl;
 cout<<"Difference:"<<diff(num,2)<<endl;
 cout<<"Product:"<<product(num,2)<<endl;
 return 0;

 
}
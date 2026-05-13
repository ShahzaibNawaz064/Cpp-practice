#include<iostream>
using namespace std;
float usdAmount(float PkrAmount)
{
	float change=0;
	change=PkrAmount/280;
	return (change);
}
float taxApply(float tax)
{  
float y=0;
     y=usdAmount(tax);
	  tax=0;
	 tax=y+(y*5/100);
	 return tax;

       
	

}
int main()
{
   float amount;
   cout<<"Please enter your amount in pkr:";
   cin>>amount;
  cout<<"The amount in $" << usdAmount(amount) << endl;
  cout<<"After applying tax on it the amount is $"<< taxApply(amount);
  return 0;





}
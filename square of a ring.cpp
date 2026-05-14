#include<iostream>
using namespace std;
double Pie(double r)
{
	return(3.1415 * r * r);
}
int main()
{
	double r;
	cout<<"Enter radius of the circle:";
	cin>>r;
	cout<<"Area of a circle is:"<<Pie(r);
}



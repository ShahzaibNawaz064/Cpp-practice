#include<iostream>
using namespace std;
float total(float a, float b, float c)
{
	float t=a+b+c;
	return t;
}
float per(float x,float y,float z)
{
    float e=x+y+z;
	float p=(e/300)*100;
	return p;
	 
}
void grade(float e)
{
	
	if (e>=90)
	{
	cout<<"Grade=A+";
	}
	else 
		if (e >= 80 && e <= 89)
		{
			cout<<"Grade=A";
	}
	else 
			if (e >= 70 && e <= 79)
			{
				cout<<"Grade=B";
	}
			else if (e >= 60 && e <= 69)
			{
				cout<<"Grade=C";
			}
			else 
				if (e < 60)
				{
					cout<<"Fail";
			}
}
int main()
{  

    float marksEng;
	float marksMath;
	float marksPhy;
	cout<<"Enter marks of math:";
	cin>>marksMath;
	cout << "Enter marks of English:";
	cin>>marksEng;
	cout<<"Enter marks of Physics:";
	cin>>marksPhy;
	cout<<"Total="<<total(marksEng, marksMath, marksPhy)<<endl;
	float g= per(marksEng, marksMath, marksPhy);
	cout<<"Percentage="<<g<<"%"<<endl;
	grade(g);
	return 0;



}
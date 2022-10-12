#include <iostream>
#include <conio.h>
#include <cmath>

//Check triplet is pythagrean triplet or not
//a^2 = b^2 + c^2

using namespace std;

bool pythagoreantriplet(int a,int b,int c)
{
	int d,v;
	
	if(a>=b && a>=c)
	{
		d=pow(a,2);
		v=(pow(b,2) + pow(c,2));
	}

	
	else if(b>=a && b>=c)
	{
		
		d=pow(b,2);
		v=(pow(a,2)+pow(c,2));
	}
	else{
		
		d=pow(c,2);
		v=(pow(a,2)+pow(b,2));
	}
	if(d==v)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	int a,b,c;
	cout<<"Enter the three numbers:";
	cin>>a>>b>>c;
	
	if(pythagoreantriplet(a,b,c))
	{
		cout<<"pythagoran triplet";
	}
	else
	{
		cout<<"Not pythagorian triplet";
	}
	
	getch();
	return 0;
}

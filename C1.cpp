#include<iostream>
using namespace std;
int area ( int side)
{
	return side*side;
}
int area (int length , int breadth)
{
	return length*breadth;
}
int area (int radius)
{
	return 3.14*radius*radius;
}
int main()
{
	cout<<area(6);
	cout<<"\n"<<area(4,6);
	cout<<"\n"<<area(6.9f);
}

#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter the values of a & b";
	cin>>a>>b;
	int z=a-b;
	try
	{

	 if(z!=0)
	  {
	 	cout<<a/z;
	  
	  }

	 else
	  {
	    throw z;
      }
    }
    catch(int i)
    {
    	cout<<"Exception Caught : Divide by zero";
	}
	return 0;
}



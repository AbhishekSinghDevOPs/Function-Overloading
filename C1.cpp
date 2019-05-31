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


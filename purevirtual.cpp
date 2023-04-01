#include<iostream>
using namespace std;
//pure virtual functions
class Shape
{
	public:
	int len,bred,rad;
	virtual void setLen()=0;
	virtual void setBred()=0;
	virtual void setRad()=0;	
	virtual int getLen()=0;
	virtual int getBred()=0;
	virtual int getRad()=0;	
};
class Rectangle:public Shape
{
	public:
	void setLen();
	void setBred();	
	int getLen();
	int getBred();
};
void Rectangle::setLen()
{
	cout<<"\n Enter the length = ";
	cin>>len;
}

void Rectangle::setBred()
{
	cout<<"\n Enter the breadth = ";
	cin>>bred;
}
int Rectangle::getLen()
{
	return len;
}
int Rectangle::getBred()
{
	return bred;
}

class Circle:public Shape
{
	public:
		void setRad();
		int getRad();
};


void Circle::setRad()
{
	cout<<"\n Enter the radius = ";
	cin>>rad;
}
int Circle::getRad()
{
	return rad;
}
class Implement:public Rectangle
{
	void setRad();
	int getRad();
};
void Implement::setRad()
{
	cout<<"\n Enter the radius = ";
	cin>>rad;
}
int Implement::getRad()
{
	return rad;
}
int main()
{
	Shape *ob = new Implement();
	ob->setLen();
}

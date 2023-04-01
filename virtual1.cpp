#include<iostream>
using namespace std;
class Point
{
	public:
			int x, y;
			Point();
			virtual void setdata();
			virtual void display();
};
Point::Point()
{
	x=0;
	y=0;
}
void Point::setdata()
{
	cout<<"\n enter x and y";
	cin>>x>>y;
}
void Point::display()
{
	cout<<"\n x ="<<x<<endl;
	cout<<"\n y ="<<y<<endl;
}
class Child:public Point
{
 public:
     int z;	
     Child();
     void setdata();
     void display();
};
Child::Child()
{
	z=0;
}
void Child::setdata()
{
	cout<<"\n enter the value of z =";
	cin>>z;
}
void Child::display()
{
	cout<<"\n z ="<<z;
}
int main()
{
    Point *p;
	p=new Child();
	p->setdata();
	p->display();	
}

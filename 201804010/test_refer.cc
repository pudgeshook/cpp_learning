#include<iostream>
using std::cout;
using std::endl;
int & swap(int &x,int &y)
{
	cout<<"x="<<x<<",y="<<y<<endl;
	int tem;
	tem=x;
	x=y;
	y=tem;
	cout<<"x="<<x<<",y="<<y<<endl;
	return x;
}
int main(void)
{
	int a=1,b=2;
	cout<<swap(a,b)<<endl;
	return 0;
}

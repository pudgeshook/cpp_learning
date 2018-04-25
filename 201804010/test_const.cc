#include<iostream>
using std::cout;
using std::endl;

int  main(void)
{
	int a=1;
	int *pb=&a;
	const int *pa=pb;
	cout<<*pa<<endl;
	cout<<*pb<<endl;
	return 0;
}

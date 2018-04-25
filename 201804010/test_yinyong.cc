 ///
 /// @file    test_yinyong.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-04-17 15:02:51
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int number=100;
	int ival=1000;
	int &ref=number;
	cout<<"number="<<number<<endl;
	cout<<"ref="<<ref<<endl;
	cout<<"&number="<<&number<<endl;
	cout<<"&ref"<<&ref<<endl;
	ref=10;
	cout<<"after change1,ref="<<ref<<endl;
	cout<<"after change1,number="<<number<<endl;
	ref=ival;
	cout<<"after change2,ref="<<ref<<endl;
	cout<<"after change2,number="<<number<<endl;
}


 ///
 /// @file    vector_practice.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-05-08 17:36:37
 ///
#include <vector> 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//void get_number(void)
int main(void)
{
#if 0          //输入并存储一个一系列数字
	vector<int> a;
	int temp;
	while(cin>>temp)
	{
		a.push_back(temp);
	}
	cout<<"-----------------"<<endl;
	for(auto i: a)
	{
		cout<<i<<" "<<endl;
	}
	return 0;
#endif
	vector<string> a;         //输入并存储一系列字符串
	string temp;
	while(cin>>temp)
	{
		a.push_back(temp);
	}
	cout<<"-----------------"<<endl;
	for(auto i: a)
	{
		cout<<i<<" "<<endl;
	}
	return 0;
}

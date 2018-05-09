 ///std::getline 只能使用c艹风格字符串，s.getline只能使用c风格字符串，互不兼容
 //错误提示是no matching function
 /// @file    istream_test.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-05-02 17:10:25
 ///
#include <fstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;



int main(void)
{
	std::ifstream  ifs("test.txt");
	string s1;
//	char s1[1024]={0};
//	ifs.getline(s1,10);
//	ifs.read(s1,10);
//	cout<<s1<<endl;
	while(std::getline(ifs,s1))
	{
		cout<<s1<<endl;
	}

	return 0;	
}

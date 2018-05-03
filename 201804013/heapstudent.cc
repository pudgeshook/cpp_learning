 ///只能生成对对象
 /// @file    new_delete.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-05-02 11:46:45
 ///

#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Student
{
public:
	Student(int x,const char * name)
	:_x(x)
	,_name(new char[strlen(name)+1]())
	{
		strcpy(_name,name);
	}
//	Student(){};
private:
	int _x;
	char * _name;
	~Student(){};//将析构函数放入private
};
	

int main(void)
{
	//Student s1(1,"liming");//希望此处出错！
	Student *ps1=new Student(1,"lalala");
	return 0;
}

 ///只能生成栈对象
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
	Student(){};
private:
	int _x;
	char * _name;
	void * operator new (size_t);//将new放入private中，不能调用
};
	

int main(void)
{
	Student s1;
	Student * pstu=new Student();//希望此处出错
	return 0;
}

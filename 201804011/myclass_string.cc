 ///
 /// @file    myclass_string.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-04-24 20:41:21
 ///
#include <string.h> 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class String
{
public:
	String();
	String(const char *pstr);
	String(const String &rhs);
	~String();

	String&operator =(const String &rhs);

	void print();

private:
	char *_pstr;
};

String::String()
	:_pstr(new char[1]())
{
	_pstr[0]='\0';
}
String::String(const char *pstr)
	:_pstr(new char[strlen(pstr)+1]())
{
	strcpy(_pstr,pstr);
}
String::String(const String &rhs)
	:_pstr(new char[strlen(rhs._pstr)+1]())
{
	strcpy(_pstr,rhs._pstr);
}
String::~String()
{
	delete [] _pstr;
}

String & String::operator=(const String & rhs)
{
	delete [] _pstr;
	_pstr=new char[strlen(rhs._pstr)+1]();
	strcpy(_pstr,rhs._pstr);
	return *this;
}

void String::print()
{
	cout<<_pstr<<endl;
}
int main()
{
	String	str1;
	str1.print();

	String str2 ="hello,world";
	String str3("wangdao");

	str2.print();
	str3.print();
	
	String str4=str3;
	str4.print();
	
	str4=str2;
	str4.print();
	return 0;
}


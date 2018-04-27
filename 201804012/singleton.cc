 ///
 /// @file    singleton.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-04-26 17:09:26
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton * get_p()
	{
		if(_p==NULL)
		{
			_p=new Singleton;
		}
		return _p;
	}
	static void destroy()
	{
		if(_p)
		{
			delete _p;
		}
	}
private:
	static Singleton *_p;
	Singleton(){};
	~Singleton(){};
};

Singleton * Singleton::_p =NULL;

int main(void)
{
	Singleton *p1=Singleton::get_p();
	Singleton *p2=Singleton::get_p();
	cout<<p1<<endl
		<<p2<<endl;
	Singleton::destroy();
	return 0;
}

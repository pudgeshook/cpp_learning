 ///
 /// @file    my_singleton.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-04-26 21:00:12
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton * GetInstance()
	{
		if(_pInstance==NULL)
		{
			_pInstance=new Singleton;
			cout<<"first time!bulit a new one!"<<endl;
		}
		return _pInstance;
	}
	static void destroy()
	{
		delete  _pInstance;
		cout<<"destroy done!"<<endl;
	}
private:
	Singleton(){};
	static Singleton * _pInstance;
	~Singleton(){};
};

Singleton * Singleton::_pInstance=NULL;

int main()
{
	Singleton	*p1=Singleton::GetInstance();
	Singleton *  p2=Singleton::GetInstance();
	cout<<p1<<endl
		<<p2<<endl;
	Singleton::destroy();
	return 0;
}

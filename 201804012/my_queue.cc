 ///
 /// @file    my_queue.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-04-26 22:26:45
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Queue
{
public:
	Queue():_queue{0},_front(0),_back(0),_len(0)
		{
			cout<<"queue built!"<<endl;
		}
	~Queue(){}
	void push(int);
	void pop();
	int front();
	int back();
	bool empty();
	bool full();
private:
	int _queue[10];
	int _front;
	int _back;
	int _len;
};

int Queue::front()
{
	return _queue[_front];
}
int Queue::back()
{
	return _queue[_back];
}

void Queue::push(int x)
{
	if(_len<10)
	{
		if(_len!=0)
		{
			_back=(_back+1)%10;
		}
		_queue[_back]=x;
		_len++;
	}else{
		cout<<"queue full!"<<endl;
	}
}
void Queue::pop()
{
	if(_len>0)
	{
		_front=(_front+1)%10;
		_len--;
	}else{
		cout<<"queue empty!"<<endl;
	}
}

bool Queue::empty()
{
	if(0==_len)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::full()
{
	if(10==_len)
	{
		return true;
	}else{
		return false;
	}
}

int main(void)
{
	Queue queue1;
	queue1.empty();
	for(int i=0;i<9;i++)
	{
		queue1.push(i);
	}
	cout<<queue1.front()<<endl;
	cout<<queue1.back()<<endl;
	queue1.push(10);
	cout<<queue1.front()<<endl;
	cout<<queue1.back()<<endl;


	
	return 0;
}

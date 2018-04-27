 ///
 /// @file    my_stack.cc
 /// @author  pudgeshook(346255397@qq.com)
 /// @date    2018-04-26 21:17:41
 ///
	
#include <iostream>
using std::cout;
using std::endl;

class My_Stack
{
private:
	typedef struct stack
	{
		int num;
		stack *pnext;
	}stack,*pstack;
	pstack head=NULL;
	int tall;
public:
	My_Stack(){
		tall=0;
		cout<<"empty stack built!"<<endl;
	}
	My_Stack(int x)
	{
		tall=1;
		pstack pnew=new stack;
		pnew->num=x;
		pnew->pnext=NULL;
		head=pnew;
		cout<<"stack built!"<<endl;
	}
	void pop()
	{
		if(!empty())
		{
			pstack p=head;
			head=head->pnext;
			delete p;
			tall--;
		}else
		{
			cout<<"empty stack!"<<endl;
		}
	}
	bool empty()
	{
		if(NULL==head){
			return 1;}
		else{
			return 0;}
	}
	int top()
	{
		if(!empty())
		{
			cout<<"top is:"<<head->num<<endl;
			return head->num;
		}else{
			cout<<"stack empty"<<endl;
			return -1;
		}
	}


	void push(int x)
	{
		if(tall!=10)
		{
		pstack pnew=new stack;
		pnew->num=x;
		pnew->pnext=head;
		head=pnew;
		tall++;
		cout<<"push:"<<x<<endl;
		}else
		{
			cout<<"stack full!"<<endl;
		}
	}
	bool full()
	{
		if(10==tall)
		{return 1;}
		else
		{return 0;}
	}
};

int main(void)
{
	My_Stack stack1;
	stack1.push(10);
	stack1.push(12);
	stack1.push(14);
	stack1.top();
	stack1.pop();
	stack1.top();
	return 0;
}

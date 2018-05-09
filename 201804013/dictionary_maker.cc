///统计文件内每个单词出现次数，输出到文件，格式为：  单词  出现次数
/// @file    dictionary_maker.cc
/// @author  pudgeshook(346255397@qq.com)
/// @date    2018-05-08 16:18:48
///
#include <vector> 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::vector;

class dictionary
{
	public:
		void read(const string & filename);
		void store(const string & output);
	private:
		struct words
		{
			string word; 
			int num=1;
		}temp1;
		vector<words> a;
};

void dictionary::read(const string &filename)
{
	ifstream ifs(filename);
	if(!ifs)
	{
		cout<<"file open error"<<endl;
		return ;
	}
	string temp;
	int flag;                   //记录读入单词是否已经在单词表中
	while(ifs>>temp)
	{
		flag=0;
		for(auto & r:a)
		{
			if(r.word==temp)          //单词已经存在时计数+1
			{
				++r.num;
				flag=1;
				break;
			}
		}
		if(!flag)           //读到新单词，新增vector元素
		{
			words temp1;
			temp1.word=temp;
			a.push_back(temp1);
		}
	}	
	ifs.close();
}

void dictionary ::store(const  string &  output)
{
	ofstream ofs(output);
	if(!ofs)
	{
		cout<<"output error"<<endl;
	}
	for( auto r:a)
	{
		ofs<<r.word<<' '<<r.num<<endl;	
	}
}


int main(void)
{
	string filename("The_Holy_Bible.txt");
	string book_dictionary("result.txt");
	dictionary bible;
	bible.read(filename);
	bible.store(book_dictionary);
	return 0;
}

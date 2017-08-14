#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// 3.21
int main(int argc,char *argv[])
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};

	for(audo i = v1.begin(); i!=v1.end();++i)
	{
		cout<<"v1="<<(*i)<<" ";
	}
	for(audo i = v2.begin(); i!=v2.end();++i)
	{
		cout<<"v2="<<(*i)<<" ";
	}
	for(audo i = v3.begin(); i!=v3.end();++i)
	{
		cout<<"v3="<<(*i)<<" ";
	}
	for(audo i = v4.begin(); i!=v4.end();++i)
	{
		cout<<"v4="<<(*i)<<" ";
	}
	for(audo i = v5.begin(); i!=v5.end();++i)
	{
		cout<<"v5="<<(*i)<<" ";
	}
	for(audo i = v6.begin(); i!=v6.end();++i)
	{
		cout<<"v6="<<(*i)<<" ";
	}
	for(audo i = v7.begin(); i!=v7.end();++i)
	{
		cout<<"v7="<<(*i)<<" ";
	}

	return 0;
}

// 3.22
int main(int argc,char *argv[])	
{
	vector<string> text;

	for(auto it = text.begin(); it != text.end(); ++it)
	{
		(*it) = toupper(*it);
	}

	for(auto i = text.cbegin; i != text.cend(); ++i)
	{
		cout<<(*i);
	}
	return 0;
}

// 3.23
int main(int argc,char *argv[])	
{
	vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};

	for(auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		(*it) * = (*it);
	}

	for(auto i = ivec.cbegin; i != ivec.cend(); ++i)
	{
		cout<<(*i);
	}
	return 0;
}

// 3.24
int main(int argc, char *agrv[])
{
	vector<int> ivec;
	int i;
	while(cin>>i)
	{
		ivec.push_back(i);
	}

	//??????????????????????
	auto i = ivec.cbegin(), j = ivec.cend();
	auto num = ivec.size();

	for( i+=1; i < j; i+=2)
	{
		cout<<"相邻和为"<<((*i)+(*(i-1))<<endl;
	}
	// ?????????????????????
	

	auto i = ivec.cbegin(), j = ivec.cend();
	for(i,j-=1; i<j; ++i,--j)
	{	
		cout<<"首尾和"<<((*i)+(*j))<<endl;
	}
	if(i == j)
	{
		cout<<"中间数"<<(*i)<<endl;
	}
	return 0;
}

// 3.26
int main(int argc,char *argv[])
{
	vector<unsigned> scores(11,0);
	auto it = scores.begin;
	unsigned grade;
	while(cin>>grade)
	{
		if(grade<=100)
		{
			it+=(grade/10);
			++(*it);
		}
	}
	return 0;
}

//3.27
(a)非法：数组维度必须是常量表达式
(b)合法
(c)非法：txt_size()返回值不是constexpr
(d)非法：没有空间可存放空字符

//3.28
sa2中为10个string,每个值都为空字符串
ia2中为10个int值，值都为0

//3.29
数组维度必须可知，不允许拷贝和复制操作

//3.30
数组索引从0开始的

//3.31
int main(int argc,char *argv[])
{
	int a[10];
	size_t index = 0;
	for(index; index<10;++index)
	{
		a[index] = index;
	}

	int b[10];
	size_t cnt = 0;
	for(cnt;cnt<9;++cnt)
	{
		b[cnt] = a[cnt];
	}

	vector<int> a1(10);
	int index = 0;
	for(auto &i:a1)
	{
		i = index;
		++index;
	}

	vector<int> b1(10) = a;
	return 0;
}

//
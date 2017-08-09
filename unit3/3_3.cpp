#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string; 
using std::vector;

//int main (int argc,char *argv[])
//{
//	vector<vector<int>> ivec; //ivec内存放的对象是vector
//	//vector<string> svec = ivec;  //错误，svec存放string对象，不能将vector对象赋值给string对象
//	vector<string> svec1(10,"null"); //svec存放了10个string类型元素。每个string初始化为“null”
//
//	vector<int> v1;		//未初始化，空对象
//	vector<int> v2(10);	//v2中有10个元素，每个值都为0
//	vector<int> v3(10,42); //v3中有10个元素，每个元素为42
//	vector<int> v4{10};		//v4中有1个元素，为10
//	vector<int> v5{10,42};	//v5有2个元素，分别为10和42
//	vector<string> v6{10}; //错误
//	vector<string> v7{10,"hi"}; //v7有10个元素，每个值为“hi”
//	return 0;
//}

//int main (int argc, char *argv[])
//{
//	vector<string> svec;
//	vector<int> ivec;
//	int iValue;
//	string strWord;
//
//	while(cin>>iValue)
//	{
//		ivec.push_back(iValue);
//	}
//
//	while(cin>>strWord)
//	{
//		cout<<strWord<<"!";
//		svec.push_back(strWord);
//	}
//
//	/*for (auto tmp:ivec)
//	{
//		cout<<tmp<<" ";
//	}
//
//	for(auto str:svec)
//	{
//		cout<<str<<" ";
//	}*/
//
//	if(!ivec.empty())
//	{
//		for (vector<int>::size_type index=0; index!=ivec.size();++index)
//		{
//			cout<<ivec[index]<<",";
//		}
//	}
//
//	cout<<svec.empty()<<"?";
//	if(!svec.empty())
//	{
//		for(vector<string>::size_type index=0; index!=svec.size(); ++index)
//		{
//			cout<<svec[index]<<",";
//		}
//	}
//	
//	return 0;
//}

/*       3.17         */
//int main(int argc,char *argv[])
//{
//	string s1;
//	vector<string> svec;
//	
//	while(cin>>s1)
//	{
//		cout<<s1<<"!!";
//		svec.push_back(s1);
//	}
//
//	cout<<svec.empty()<<":";
//	if(!svec.empty())
//	{
//		for(auto &tmp:svec)
//		{
//			string str1 = tmp;
//			for (auto &c:str1)
//			{
//				c = toupper(c);
//			}
//		}
//
//		for(auto vec:svec)
//		{
//			cout<<vec<<endl;
//		}
//	}
//
//	return 0;
//}

int main(int argc,char * argv[])
{
	vector<int> ivec;
	int iValue;
	int index = 0;
	while(cin>>iValue)
	{
		ivec.push_back(iValue);
		cout<<ivec[index]<<" ";
		++index;
	}

	vector<int>::size_type i = 1;

	cout<<ivec.empty()<<"?";

	if(!ivec.empty())
	{
		for (i; i<ivec.size(); i=i+2)
		{
			cout<<"相邻的和为"<<(ivec[i-1]+ivec[i]);
		}

		if(i == ivec.size())
		{
			cout<<"最后一个值为";
			cout<<ivec[i-1]<<endl;
		}
	}

	vector<int>::size_type m = 0;
	vector<int>::size_type n = ivec.size() - 1;
	if(!ivec.empty())
	{
		for (m,n; m<n; ++m,--n)
		{
			cout<<"首尾的和为"<<(ivec[m]+ivec[n]);
		}

		if(m == n)
		{
			cout<<"最中间一个值";
			cout<<ivec[m]<<endl;
		}
	}
	return 0;
}
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
//	vector<vector<int>> ivec; //ivec�ڴ�ŵĶ�����vector
//	//vector<string> svec = ivec;  //����svec���string���󣬲��ܽ�vector����ֵ��string����
//	vector<string> svec1(10,"null"); //svec�����10��string����Ԫ�ء�ÿ��string��ʼ��Ϊ��null��
//
//	vector<int> v1;		//δ��ʼ�����ն���
//	vector<int> v2(10);	//v2����10��Ԫ�أ�ÿ��ֵ��Ϊ0
//	vector<int> v3(10,42); //v3����10��Ԫ�أ�ÿ��Ԫ��Ϊ42
//	vector<int> v4{10};		//v4����1��Ԫ�أ�Ϊ10
//	vector<int> v5{10,42};	//v5��2��Ԫ�أ��ֱ�Ϊ10��42
//	vector<string> v6{10}; //����
//	vector<string> v7{10,"hi"}; //v7��10��Ԫ�أ�ÿ��ֵΪ��hi��
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
			cout<<"���ڵĺ�Ϊ"<<(ivec[i-1]+ivec[i]);
		}

		if(i == ivec.size())
		{
			cout<<"���һ��ֵΪ";
			cout<<ivec[i-1]<<endl;
		}
	}

	vector<int>::size_type m = 0;
	vector<int>::size_type n = ivec.size() - 1;
	if(!ivec.empty())
	{
		for (m,n; m<n; ++m,--n)
		{
			cout<<"��β�ĺ�Ϊ"<<(ivec[m]+ivec[n]);
		}

		if(m == n)
		{
			cout<<"���м�һ��ֵ";
			cout<<ivec[m]<<endl;
		}
	}
	return 0;
}
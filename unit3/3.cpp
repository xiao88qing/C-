#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::endl;

//int main()
//{
//	string strS1;
//	while(getline(cin,strS1)) //ÿ�ζ���һ�У��������з�����ֹ��ȡ
//	{
//		cout<<strS1<<endl;
//	}
//	return 0;
//}
//int main()
//{
//	string strS1;
//	while(cin>>strS1) //ÿ������һ�����ʣ������հ��ַ��ͽ�����ȡ
//	{
//		cout<<strS1<<endl;
//	}
//	return 0;
//}



//int main()
//{
//	string strS1;
//	string strS2;
//	cin>>strS1>>strS2;
//	if(strS1 != strS2)
//	{
//		strS1 = (strS1 > strS2 )? strS1:strS2;
//		cout<<strS1<<endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	string strS1;
//	string strS2;
//	cin>>strS1>>strS2;
//	if(strS1.size() != strS2.size())
//	{
//		strS1 = (strS1.size() > strS2.size())? strS1:strS2;
//		cout<<strS1<<endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string strS1;
//	string strS2;
//	string strS3;
//	string strS4;
//	cin>>strS1>>strS2>>strS3>>strS4;
//	cout<<strS1+strS2+strS3+strS4<<endl;
//	cout<<strS1<<" "<<strS2<<" "<<strS3<<" "<<strS4<<endl;
//	return 0;
//}


//int main()
//{
//	string strS1("ahgcgsc adxjsch");
//	
//	for(decltype(strS1.size()) index = 0; index != strS1.size(); ++index)
//	{
//		strS1[index] = 'X';
//	}
//	cout<<strS1<<endl;
//	return 0;
//}

//int main()
//{
//	string strS1("I am hungry");
//	
//	decltype(strS1.size()) index = 0;
//	while(index < strS1.size())
//	{
//		strS1[index] = 'X';
//		++index;
//	}
//	cout<<strS1<<endl;
//	return 0;
//}

//int main()
//{
//	string s;
//	cout<<s[0]<<endl;//���г���Խ�磬ʹ��s֮ǰһ��Ҫ���пգ����±�ֵ����Խ��
//	return 0;
//}

int main()
{
	string strS1;
	string strS2;
	cin>>strS1;
	decltype(strS1.size()) index1 = 0;
	if (!strS1.empty())
	{
		for (decltype(strS1.size()) index = 0;index != strS1.size();++index)
		{
			if (! ispunct(strS1[index]))
			{
				strS2 = strS2 + strS1[index];
			}
		}
	}

	cout<<strS2<<endl;
}
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main (int argc,char *argv[])
{
	int a = 12/3*4+5*15+24%4/2;
	int b = ((12/3)*4)+(5*15)+((24%4)/2);
	if(a==b)
	{
		cout<<"正确"<<endl;
	}
	
	
	//4.5
	int c = -30*3+21/5;
	int d = -30+3*21/5;
	int e = 30/3*21%5;
	int f = -30/3*21%4;
	
	cout<<"c = "<<c<<"d = "<<d<<"e = "<<e<<"f = "<<f<<endl;
	
	
	// 4.6
	int num;
	cin<<num;
	if(0 == num%2)
	{
		cout<<"num is 偶数"<<endl;
	}
	else
	{
		cout<<"num is 奇数"<<endl;
	}
	return 0;
}
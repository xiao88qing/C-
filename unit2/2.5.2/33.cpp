#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//int main()
//{
//	int a = 3, b = 4;
//	decltype(a) c = a; //c为int
//	decltype((b)) d = a; //d为int型引用，绑定a
//	++c; //c=4
//	++d; // a=4
//	cout << a << b << c << endl;
//	return 0;
//}

//struct Foo {}
//
//int main ()
//{
//	return 0;
//}

struct Sales_Book
{
	string strBookNo;
	int iSalesCout;
	double dPrice;
};

Sales_Book addSalesBook(Sales_Book cItem1,Sales_Book cItem2)
{
	if (cItem1.strBookNo == cItem2.strBookNo) 
	{
		cItem1.iSalesCout += cItem2.iSalesCout;
		cItem1.dPrice = cItem1.iSalesCout * cItem1.dPrice;
		return cItem1;
	}
}

int main ()
{
	Sales_Book cBook1,cBook2;
	cin>>cBook1.strBookNo;
	cin>>cBook1.iSalesCout;
	cin>>cBook1.dPrice;
	cin>>cBook2.strBookNo;
	cin>>cBook2.iSalesCout;
	cin>>cBook2.dPrice;

	cBook1 = addSalesBook(cBook1,cBook2);

	cout<<"bookNO"<<cBook1.strBookNo<<"数目"<<cout<<cBook1.iSalesCout<<"总额"<<cBook1.dPrice<<endl;
	
	return 0;
}
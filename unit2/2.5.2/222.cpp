////#include <iostream>
////#include <string>
////using std::cin;
////using std::cout;
////using std::endl;
////
////int main()
////{
////	int i = 0, &r =i;
////	auto a = r; //a 为int
////	const int ci  = i, &cr =ci;//ci为绑定const int的引用
////	auto b = ci; //b为int
////	auto c= cr; //c为int
////	auto d = &i; //d为int型指针
////	auto e = &ci;//e为const int型指针
////	auto &g = ci;//g为绑定const int的引用
////	a = 42; //对
////	b = 42; //对
////	c = 42;  //对
////	d = 42;  //错，无法从int转换成int*
////	e = 42; //无法从int转换成const int *
////	g = 42; //g为const int引用，无法从int转换成const int&，且也不能通过g来改变其绑定的值
////	cout<< a << b << c << d << e << g << endl;
////	return 0;
////}
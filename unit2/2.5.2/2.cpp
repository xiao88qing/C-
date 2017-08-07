//#include <iostream>
//#include <string>
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main()
//{
//	const int i = 42;
//	auto j = i; //j为int型
//	const auto &k = i; //k为绑定常量的常量引用
//	auto *p = &i; // p为指向const int的指针，不能通过指针改变所指对象的值。
//	const auto j2 = i,&k2 = i;//j2 为const int，因此j2不能被修改。k2是指向const int的常量引用
//	j = 33;
//	k = 33; //错误
//	p = 33; //错误
//	j2 = 33; //错误
//	k2 = 33; //错误
//	return 0;
//}
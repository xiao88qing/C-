////#include <iostream>
////#include <string>
////using std::cin;
////using std::cout;
////using std::endl;
////
////int main()
////{
////	int i = 0, &r =i;
////	auto a = r; //a Ϊint
////	const int ci  = i, &cr =ci;//ciΪ��const int������
////	auto b = ci; //bΪint
////	auto c= cr; //cΪint
////	auto d = &i; //dΪint��ָ��
////	auto e = &ci;//eΪconst int��ָ��
////	auto &g = ci;//gΪ��const int������
////	a = 42; //��
////	b = 42; //��
////	c = 42;  //��
////	d = 42;  //���޷���intת����int*
////	e = 42; //�޷���intת����const int *
////	g = 42; //gΪconst int���ã��޷���intת����const int&����Ҳ����ͨ��g���ı���󶨵�ֵ
////	cout<< a << b << c << d << e << g << endl;
////	return 0;
////}
#include <iostream>
#include <vector>
#include "Unit5.h"
#include "Unit6.h"
using namespace std;

//6.38
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i)
{
    return (i%2) ? odd:even;
}

int main(int argc,char *argv[])
{
    unit5 *cUnit5 = new unit5;
    //cUnit5->divideGrades();
    //cUnit5->divideGrades_switch();
    //cUnit5->countVowel_ifElse();
    //cUnit5->coutVowel_switchCase();
    //cUnit5->countSymbols();
    //cUnit5->countRepeatWords();
    //cout<<cUnit5->isSubString()<<endl;
    //cUnit5->endWhenRepeat();
    //cUnit5->endWhenRepeat_1();
    //cUnit5->divide_try();

    Unit6 *cUnit6 = new Unit6;
    //cout<<"������һ������";
    //double tmp;
    //cin>>tmp;
    //cout<<"�����Ľ׳�Ϊ��"<<cUnit6->fact(tmp)<<endl;
    //cout<<"����ֵΪ��"<<cUnit6->absoluteVal(tmp)<<endl;

    // 6.7
    /*
    for (int i = 0;i < 10; ++i)
    {
        cout<<"���ú�������Ϊ��"<<cUnit6->count_calls()<<endl;
    }
    */

    //6.10 6.12
    /*
    cout<<"������������";
    double i,j;
    cin>>i>>j;
    //cUnit6->swap(&i,&j);
    cUnit6->swap_cite(i,j);
    cout<<"�������i��jΪ��"<<i<<" "<<j<<endl;
    */

    // 6.15
    /*
    string str_Buf;
    char ch;
    string::size_type i = 0;
    string::size_type &Num = i;
    cout<<"�����ַ�����";
    cin>>str_Buf;
    cout<<"����Ҫ���ҵ��ַ���";
    cin>>ch;
    cout<<"ch��һ�γ��ֵ�λ���ǣ�"<<cUnit6->find_char(str_Buf,ch,Num)<<endl;
    cout<<"ch���ֵĴ���Ϊ��"<<Num<<endl;
    */

    // 6.17
    /*
    string str;
    cout<<"�����ַ�����";
    cin>>str;
    //cout<<"�Ƿ��д�д��ĸ��"<<((cUnit6->isHaveUpperChar(str)== true) ? "��":"��")<<endl;
    cUnit6->strToUpper(str);
    cout<<"ת���ɴ�д��ĸ���ַ���Ϊ��"<<str<<endl;
    */

    // 6.18
    /*
    vector<int> iVec;
    int tmp;
    cout<<"����vector��";
    for (int i = 0;i < 10;++i)
    {
        cin>>tmp;
        iVec.push_back(tmp);
    }
    cout<<"����value��";
    cin>>tmp;
    vector<int> reVec = cUnit6->change_val(iVec,tmp);
    for(auto vec:iVec)
    {
        cout<<vec<<" ";
    }
    */

    // 6.21
    /*
    int value1;
    int value2;
    cout<<"������������";
    cin>>value1>>value2;
    cout<<"max��"<<cUnit6->max_value(value1,&value2)<<endl;
    */

    // 6.32
    /*
    int ia[10];
    for(int i = 0;i != 10;++i)
    {
        cUnit6->get(ia,i) = i;
    }

    for(int i = 0;i != 10;++i)
    {
        cout<<"ia:"<<ia[i]<<" ";
    }
    */

    // 6.33
    /*
    vector<int> ivec{1,2,3,4,5};
    cUnit6->fun_Recursive(ivec);
    */

    // 6.38
    /*
    for(auto ss:arrPtr(3))
    {
        cout<<ss<<":";
    }
    */


    return 0;
}

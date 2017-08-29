#include <iostream>
#include <cassert>
#include "Unit6.h"
using namespace std;
#define NDEBUG


Unit6::Unit6()
{
    //ctor
}

Unit6::~Unit6()
{
    //dtor
}


int Unit6::fact(int& i)
{
    int iResult = 1;
    while (i > 1)
    {
        iResult *= i--;
    }
    return iResult;
}

double Unit6::absoluteVal(const double& i)
{
    return (i >= 0) ? i : (-i);
}

int Unit6::count_calls()
{
    static int cCount = 0;
    return cCount++;
}

void Unit6::swap(double* i,double* j)
{
    double tmp = *i;
    *i = *j;
    *j = tmp;
}

void Unit6::swap_cite(double& i,double& j)
{
    double tmp = i;
    i = j;
    j = tmp;
}

string::size_type Unit6::find_char(const string &s,char c,string::size_type &Num)
{
    auto str_Size = s.size();
    Num = 0;
    for (decltype(str_Size) i = 0; i != s.size(); ++i)
    {
        if(c == s[i])
        {
            ++Num;
            if(1 == Num)
            {
                str_Size = i;
            }
        }
    }
    return (Num > 0) ? str_Size:(-1);
}

bool Unit6::isHaveUpperChar(const string &strBuf)
{
    auto ret = strBuf.size();
    for(decltype(ret) i = 0; i != strBuf.size(); ++i)
    {
        if((strBuf[i] >= 'A') && (strBuf[i] <= 'Z'))
        {
            return true;
        }
    }
    return false;
}

void Unit6::strToUpper(string &strBuf)
{
    for(auto &S1:strBuf)
    {
        S1 = toupper(S1);
    }
}

vector<int> Unit6::change_val(vector<int> &iVec,int value)
{
    for(auto &ret:iVec)
    {
        if(ret != value)
        {
            ret = value;
        }
    }
}

int Unit6::max_value(int iValue,int* pcValue)
{
    return (iValue > *pcValue) ? iValue:(*pcValue);
}

int& Unit6::get(int *arry, int index)
{
    return arry[index];
}

void Unit6::fun_Recursive(const vector<int> &iVec)
{
    static int index = iVec.size();
    if (index > 0)
    {
        cout<<iVec[--index]<<" ";
        fun_Recursive(iVec);
    }
    else {return;}
}

/*
void Unit6::printFuc(int i)
{
    if(i%2)
    {
        cout<<"Error:"<<_ _FILE_ _
        <<"in func:"<<_ _func_ _
        <<"at line"<<_ _LINE_ _<<endl;
    }
}
*/


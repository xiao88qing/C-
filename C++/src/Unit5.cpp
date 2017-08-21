#include "Unit5.h"
#include <vector>
#include <string>
#include <iostream>

using  std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

unit5::unit5()
{
    //ctor
}

unit5::~unit5()
{
    //dtor
}

void unit5::divideGrades()
{
    const vector<string> scores = {"F","D","C","B","A","A++"};
    int grade;
    while(cin>>grade)
    {
        if(grade<60) {
            cout<<"分数等级为:"<<scores[0]<<endl;
        }
        else {
            cout<<"分数等级为:"<<scores[(grade-50)/10]<<endl;
        }
    }
}

void unit5::divideGrades_switch()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    int grade;

    while(cin>>grade)
    {
        (grade<60) ? (cout<<scores[0]<<endl) : (cout<<scores[(grade-50)/10]<<endl);
    }
}

void unit5::countVowel_ifElse()
{
    unsigned uVowleNum = 0;
    char ch;
    while(cin>>ch)
    {
        if (('a' == ch) || ('e' == ch) || ('i' == ch) || ('o' == ch) || ('u' == ch))
        {
            ++uVowleNum;
            cout<<"元音字母数目为："<<uVowleNum<<endl;
        }
    }

    cout<<"元音字母数目为："<<uVowleNum<<endl;
}

void unit5::coutVowel_switchCase()
{
    unsigned uVowelNum = 0;
    char ch;
    while ((cin>>ch) && ('Q'!=ch))
    {
        switch(ch)
        {
            case 'a':case 'A':case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
                ++uVowelNum;
                break;
            default:
                break;
        }
    }
    cout<<"元音字母数目为："<<uVowelNum<<endl;
}

void unit5::countSymbols()
{
    unsigned uEmptyNum = 0;
    unsigned uTabNum = 0;
    unsigned uEnterNum = 0;

    char ch;
    while (cin>>ch)
    {
        switch(ch)
        {
        case ' ':
            ++uEmptyNum;
            break;
        case '\t':
            ++uTabNum;
            break;
        case '\n':
            ++uEnterNum;
            break;
        default:
            break;
        }
        cout<<"空格为："<<uEmptyNum<<" Tab为："<<uTabNum<<" 换行符为："<<uEnterNum<<endl;
    }
}

void unit5::countRepeatWords()
{
    string sWords;
    int iRepeatCnt = 1;
    int iRepeatMax = 1;
    string sCurWords;
    string sRepeatMax;
    cin>>sWords;
    sRepeatMax = sWords;
    while((cin>>sCurWords) && ("quit" != sCurWords))
    {
        if(sWords == sCurWords)
        {
            ++iRepeatCnt;
        }
        else
        {
            if(iRepeatCnt>iRepeatMax)
            {
                iRepeatMax = iRepeatCnt;
                sRepeatMax = sWords;
                iRepeatCnt = 1;
            }
            sWords=sCurWords;
        }
    }
    cout<<"最大重复字符串为："<<sRepeatMax<<" 重复数目："<<iRepeatMax<<endl;
}

bool unit5::isSubString()
{
    vector<int> iVec1 = {1,2,3,4,5,6};
    vector<int> iVec2 = {1,2,3,4,5,6,7};

    auto index1 = iVec1.begin();
    auto index2 = iVec2.begin();

    for(index1,index2;(index1 != iVec1.end()) && (index2 != iVec2.end());++index1,++index2)
    {
        if(*index1 != *index2)
        {
            return false;
        }
    }
    return true;
}

void unit5::endWhenRepeat()
{
    string strBuf;
    string strLast = " ";
    while (cin>>strBuf)
    {
        if()
        strLast = strBuf;
    }
}


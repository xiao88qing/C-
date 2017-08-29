#ifndef UNIT6_H
#define UNIT6_H
#include <string>
#include <vector>
using namespace std;

class Unit6
{
    public:
        Unit6();
        virtual ~Unit6();

        // 6.4
        int fact(int& i);
        // 6.5
        double absoluteVal(const double& i);

        // 6.7
        int count_calls();

        // 6.10
        void swap(double*,double*);

        // 6.12
        void swap_cite(double &,double &);

        // 6.15
        string::size_type find_char(const string&s,char c,string::size_type &Num);

        // 6.17
        bool isHaveUpperChar(const string &strBuf);

        // 6.17
        void strToUpper(string &strBuf);

        // 6.18
        vector<int> change_val(vector<int> &iVec,int value);

        // 6.21
        int max_value(int iValue,int* pcValue);

        // 6.32
        int &get(int *arry, int index);

        // 6.33
        void fun_Recursive(const vector<int> &iVec);

        /*
        // 6.36
        string (&Func())[10];
        //6.37
        typedef string Str[10];
        Str& Func();

        auto Func()->string(&)[10];

        string S1[10]={};
        decltype(S1) &Func();
        */

        //6.39
        /*
        double *fun(double *);
        int *fun(int *);
        int calc(int, int);
        int cacl(const int,const int);
        */

        //
        int cal(int &,int &);
        int cal(const int &,const int &);
        int cal(int *,int *);
        int cal(const int *,const int *);
        int cal(char *,char *);
        int cal(char * const,char * const);


    protected:

    private:
};

#endif // UNIT6_H

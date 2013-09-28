/*************************************************************************
	> File Name: test.c
	> Author: zxc
	> Mail: zhongxc09@gmail.com 
	> Created Time: 2013年09月13日 星期五 20时04分29秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <vector>
#include <stdexcept>
using namespace std;
#ifndef NDEBUG

#endif
void print(vector<int>::const_iterator beg, vector<int>::const_iterator end){
    while(beg != end){
        cout<<*beg++<<" ";
    }
    cout<<endl;
}
int (*ptr) (int*, const int*);
typedef double (*func_ptr)(double*, double*);
int main()
{
    int sum=0;
    int *pointer = NULL;
    int const csum = 0;
    const int *ptr;
    int* const cptr = &sum;
    const int* const ccptr = &sum;
    // cout<<pointer<<endl;
    char cp[13]="feafa";
    char cp1[]="qqqq";
    // strcpy(cp, cp1);
    cout<<cp<<endl;
    int length=strlen(cp)+1;
    char *cp2=new char[length];
    strncpy(cp2, cp, length);
    cout<<cp2<<endl;
    delete [] cp2;
    vector<char> ivec(cp, cp+3);
    cout<<ivec[5]<<endl;
    int& cp3 = sum;
    int result= sum != 0 ? 1 : 2;
    cout<<result<<endl;
    try{

    }catch(runtime_error err){

    }
    return 0; 
}



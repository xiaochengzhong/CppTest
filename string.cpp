#include <iostream>
#include <string>
using namespace std;

int main(){
    char a[] ="test";
    string b("test");
    cout<<sizeof(a)/sizeof(char)<<b.size()<<endl;
    return 0;
}

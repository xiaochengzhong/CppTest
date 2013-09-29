#include <vector> 
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <string>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[]){
	vector<int> ivec(10, 42);
	list<string> slist;
	deque<string> sdeque;
	vector<double> dvec(ivec.begin(), ivec.end());
	dvec.erase(dvec.begin());
	cout<<dvec.capacity()<<endl;
	return 0;
};

void stk_func(){
	stack<int, vector<int> >str_stk;
	const stack<int>::size_type stk_size = 10;
	int item = 0;
	while(str_stk.size() != stk_size)
		str_stk.push(item++);
	while(!str_stk.empty()){
		cout<< str_stk.top() <<endl;
		str_stk.pop();
	}
}

// map function
void map_func(){
		map<string, string> str_map;
		map<string, string>::key_type key_type_map;
		map<string, string>::mapped_type mapped_type_map;
		str_map["jy"] = "juyuan";

	};
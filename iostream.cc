#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

ifstream& open_file(ifstream& in, const string& file){
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;
}
int main(int argc, char* argv[]){
	string line, word;
	while(getline(cin, line)){
		istringstream stream(line);
		while(stream >> word){
			// 
		}
	}
	return 0;
}
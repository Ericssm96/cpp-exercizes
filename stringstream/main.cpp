#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string name, agestr, agex4str, randomstr;
	int agenum, agex4num;
	cout << "Hi, can you tell me what's your name?\n";
	getline(cin, name);
	cout << "How old are you?\n";
	getline(cin, agestr);
	stringstream(agestr) >> agenum;
	agex4num = agenum * 4;
	stringstream(agex4num) >> agex4str;
	cout << "Did you know that if you lived 4 times longer than now, you'd be " << agex4str << " years old today?\n";
	getline(cin, randomstr);
	cout << "tight\n";
}
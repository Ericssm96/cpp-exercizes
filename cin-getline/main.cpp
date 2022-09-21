#include <iostream>
#include <string>
using namespace std;

int main() {
	string myStr;
	cout << "Hi, can you tell me your full name?\n";
	getline(cin, myStr);
	cout << "Hello, " << myStr << ", how are you feeling today?\n";
	getline(cin, myStr);
	cout << "Tight.\n";
}
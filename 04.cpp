#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
};

int main() {
	TBook book1;
	book1.name = "A certain book";
	book1.author = "Unknown";
	book1.count = "Appear out of thin air";
	cout << "First book: \n";
	cout << "Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Count: " << book1.count << endl;
	return 0;
}

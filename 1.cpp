#include <iostream>
#include <string>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
struct data{
	string name;
	int age;
	string height;
	string weight;
	string b;
}ako;

void print(data show);

int main(int argc, char** argv) {

	string n,b;
	
	cout << "Enter Name: ";
	getline (cin ,ako.name);
	cout << "Enter Age: ";
	getline(cin, n);
	stringstream(n) >> ako.age;
	cout << "Enter Birthday: ";
	getline(cin, ako.b);
	cout << "Enter Heigt: ";
	getline(cin, ako.height);
	cout << "Enter Weight: ";
	getline(cin, ako.weight);
	
	cout << endl << endl;
	
	cout << "My Personal Information is:\n";
	print(ako);
	
	return 0;
}

void print (data show)
{
	cout << "My Name: " << show.name;
	cout << "\nAge: " << show.age;
	cout << "\nBirthday: " << show.b;
	cout << "\n Height: " << show.height;
	cout << "\nWeight: " << show.weight;
}

#include <fstream>
#include <iostream>
using namespace std;

int main(){
	
	int number;
	int one, two, three, four;
	char five;
	char cont = 'y';
	ifstream in_a;
	
	in_a.open("numbers.dat");
	if(in_a.fail()){
		cout << "Something really aweful happened here with numbers.dat";
		exit(1);
	}	
	
	in_a >> one >> two >> three;
	in_a >> four;
	in_a >> five;
	
	cout << "Add our previous numbers are from " << one << " to " << five << endl;
	cout << "Numbers total to: " << (one + two + three + four) << endl;
	cout << "And our character is: " << five << endl;
	
	in_a.close();
	
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int UserInput = 0;
	bool Flag = false;
	string Factors = "";

	//recieve user input 
	do {
		cout << "What number would you like me to check? " << endl;
		if(cin >> UserInput) {
			Flag = true;
		}
		else
			cout << "Error: You must enter a number. " << endl;
		if(UserInput < 0) {
			Flag = false;
			cout << "I don't deal with negativity." << endl;
		}

		cin.clear();
		while(cin.get() != '\n') { }

	}while(!Flag);
	
	int Counter = 0;
	//find factors	
	for(int i = 1; i <= UserInput; i++) {
		if(UserInput % i == 0) {
			Factors += to_string(i) +  ". ";
			Counter++;			
		}	
	}
	
		
	cout << "Factors: " << Factors << endl;
	
	if(Counter == 2) {
		cout << "This number is prime!" << endl;
	}
	return 0;
}

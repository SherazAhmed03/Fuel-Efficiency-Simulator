//Sheraz Ahmed 
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main() {
	double oldmpg = 0.0;
	double newmpg = 0.0;
	//Beginning question
	cout << "What is your factory MPG: ";
	cin >> oldmpg;
	newmpg = oldmpg;
	string precip = "";
	bool citydriver = false;

	char elevation = '\0'; //=0
	double weight = 0.0;
	int speedPref = 0;
	int tirePressure = 0;
	//City or highway driver
	cout << "Do you drive city (enter 1) or highway (enter 0): ";
	cin >> citydriver;

	if (citydriver)
		newmpg -= 2;
	else
		newmpg = newmpg + 5;

	//Code for Rainy or Sunny
	cout << "Rainy (subtracts 1) or Sunny (no change) : ";
	cin >> precip;
	if (precip.compare("Rainy") == 0) //Compares precip to Rainy 
		newmpg = newmpg - 1;
	else
		newmpg = newmpg;
	cout << precip << " was entered\n";


	//Code for elevation
	cout << "Elevation: " << endl;
	cout << "S for Steep, Steep (subtracts 5 from MPG)" << endl;
	cout << "H for Hilly, Hilly (subtracts 3 from MPG)" << endl;
	cout << "F for Flat, (no Change to MPG)" << endl;
	cout << "Enter S, H or F for elevation: "; 
	cin >> elevation;  
	//If else is used if S -5, if H -3, if anything else like F then nothing happens
	if (elevation == 'S')
		newmpg = newmpg - 5;
	else if (elevation == 'H')
		newmpg = newmpg - 3;
	else
		newmpg = newmpg;

	//Code for Weight in vehicle
	//Based on the weight it weill be divided by 100 and multiplied by 0.5 and subtracted by the weight
	cout << "Weight in Vehicle (cargo or passenger): ";
	cin >> weight;
	newmpg -= (weight / 100) * 0.5;

	//Code for speed pref
	cout << "Speed Preference: " << endl; 
	cout << "1 for under speed limit (adds 2 to MPG)" << endl;
	cout << "2 for at speed limit (no Change to MPG)" << endl;
	cout << "3 for 5% above speed limit (subtracts 1 from MPG)" << endl;
	cout << "4 for 10% above speed limit (subtracts 3 from MPG)" << endl; 
	cout << "5 for over 20% above speed limit (subtracts 5 from MPG)" << endl; 
	cout << "Speed Preference: ";
	cin >> speedPref; 
	//I use switch and based on which number I type the certain case will happen 
	switch (speedPref) {  
	case 1:
		newmpg += 2;
		break;
	case 2:
		newmpg = newmpg; 
		break;
	case 3:
		newmpg -= 1;
		break;
	case 4:
		newmpg -= 3;
		break;
	case 5:
		newmpg -= 5;
		break;
	}

	/*Code for tire pressure average tire pressure should be between 30 - 35 based on car
	so I had it so that more than 35 adds 2 and less than 32 has -2*/
	cout << "Enter tire pressure: ";
	cin >> tirePressure;

	if (tirePressure > 35) {
		newmpg += 2;
	}
	else if (tirePressure < 32) {
		newmpg -= 2;
	}
	else {
		newmpg = newmpg;
	}
	//Report the Beginning and After MPG	
	cout << "Old MPG: " << oldmpg << endl;  
	cout << "New MPG: " << newmpg << endl;
	return 0;
}

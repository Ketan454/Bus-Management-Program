#include <iostream>
#include <vector>
using namespace std;

int number;
int mans;
int women;
int childrens;
int mans_money;
int womans_money;
int childrens_money;
int coming;
int capacity;
int men;
int woman;
int children;
string p_or_d;
string x;
string name;
int gone;
int money;

void coming1() {
	capacity--;
	cout << "Capacity is Now: " << capacity << ".\n";
	money = money + men;
	cout << "Your Money is Now: " << money << ".\n";
	cout << "Bus: ";
	cin >> coming;
	if (capacity == 0) {
	cout << "Your Capacity is 0.\n";
	cout << "Reffil Your Capacity: ";
	cin >> capacity;
	}
}

void coming2() {
	capacity--;
	cout << "Capacity is Now: " << capacity << ".\n";
	money = money + woman;
	cout << "Your Money is Now: " << money << ".\n";
	cout << "Bus: ";
	cin >> coming;
	if (capacity == 0) {
	cout << "Your Capacity is 0.\n";
	cout << "Reffil Your Capacity: ";
	cin >> capacity;
	}
}

void coming3() {
	capacity--;
	cout << "Capacity is Now: " << capacity << ".\n";
	money = money + children;
	cout << "Your Money is Now: " << money << ".\n";
	cout << "Bus: ";
	cin >> coming;
	if (capacity == 0) {
	cout << "Your Capacity is 0.\n";
	cout << "Reffil Your Capacity: ";
	cin >> capacity;
	}
}



int main() {
	cout << "Welcome To Bus Management.\n";
	cout << "You Have To Enter Your Bus Capicity.\n";
	cout << "Press 1 for Man, Press 2 for woman, Press 3 for children.\n";
	cout << "You Have To Fix Money.\n";
	cout << "Enter Your Bus Capacity(eg. 54 seater): ";
	cin >> capacity;
	cout << "Petrol or Diesel: ";
	cin >> p_or_d;
	cout << "Enter Money For Each Men(eg. Rupees 10): ";
	cin >> men;
	cout << "Enter Money For Each Women(eg. Rupees 10): ";
	cin >> woman;
	cout << "Enter Money For Each Children(eg. Rupees 10): ";
	cin >> children;
	cout << "All Stages Are Fixed.\n\n";
	cout << "===========================================\n";
	cout << "Here Is Your Bus Information: \n";             
	cout << "Bus Capicity: " << capacity << ".\n";          
	cout << "Bus Capicity: " << capacity << ".\n";          
	cout << "Non-Renewable Energy: " << p_or_d << ".\n";    
	cout << "Money for Each Man: " << men << ".\n";         
	cout << "Money for Each Woman: " << woman << ".\n";     
	cout << "Money for Each Children: " << children << ".\n";
	cout << "===========================================\n";
	mans_money = men;
	womans_money = woman;
	childrens_money = children;
	cout << "Bus: ";
	cin >> coming;
	while(coming) {
		if(coming == 1) {
			coming1();
		}
		else if(coming == 2) {
			coming2();
		}
		else if(coming == 3) {
			coming3();
		}
		
		if(coming == 4) {
		cout << "\n";
		cout << "Press Any Number That Is Not In Range(1-4) To Exit: ";
		cin >> number;
		if(number == 1) {
			cout << "You Have Not Followed the Instruction.\n";
			cout << "Press Any Number That Is Not In Range(1-4) To Exit: ";
			cin >> number;
		}
		else if(number == 2) {
			cout << "You Have Not Followed the Instruction.\n";
			cout << "Press Any Number That Is Not In Range(1-4) To Exit: ";
			cin >> number;
		}
		else if(number == 3) {
			cout << "You Have Not Followed the Instruction.\n";
			cout << "Press Any Number That Is Not In Range(1-4) To Exit: ";
			cin >> number;
		}
		else if(number == 4) {
			cout << "You Have Not Followed the Instruction.\n";
			cout << "Press Any Number That Is Not In Range(1-4) To Exit: ";
			cin >> number;
		}
		}
	}
	return 0;
}

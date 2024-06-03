#include<iostream>
using namespace std;

class heater {
private:
	int temp;
public:
	heater() :temp(15) {
		cout << "temp is  " << temp << endl;
	}
		//int temp = 15;
		int warmer() {
			temp = temp + 5;
			return temp;
		}
		int cooler() {
			temp = temp - 5;
			return temp;
	}
};
int main() {
	heater h1;
	h1.warmer();
	h1.cooler();
	int option;
	while (true) {
		cout << "press option 1 for warmer and 2 for cooler" << endl;
		cin >> option;
		switch (option) {
		case 1:
			cout <<"new temp is " << h1.warmer() << endl;
			break;
		case 2:
			cout <<"new temp is " << h1.cooler() << endl;
			break;
		}
	}
}
//making changes to see if it works

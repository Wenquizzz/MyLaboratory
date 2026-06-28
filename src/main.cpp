#include <iostream>
using namespace std;

void sumkulator() {
	while (true) {
		cout << "\nEnter yout number and i will tell you sum of character in your number\n" << endl;
		long long number;
		cin >> number;
		int last_num;
		int total = 0;
		while (true) {
			if (number > 0) {
				last_num = number % 10;
				total += last_num;
				number = number / 10;
			}
			else {
				break;
			}
		}
		cout << "\nSumm of character in your number is " << total << endl;
		cout << "\nPress 1 to write new number or press any number buttom to close sumculator\n" << endl;
		int again_close;
		cin >> again_close;
		if (again_close != 1) {
			break;
		}
	}
}
void multitable() {
	while (true) {
		cout << "\nEnter number and I will tell you the multiplication table of this number\n" << endl;
		int numberj;
		cin >> numberj;
		for (int i = 1; i < 10; i++) {
			int result = numberj * i;
			cout << "\n" << numberj << " * " << i << " = " << result << endl;
		}
		cout << "\nPress 1 to write new number or press any number buttom to close multitable\n" << endl;
		int again_close1;
		cin >> again_close1;
		if (again_close1 != 1) {
			break;
		}
	}

}

int main() {
	while (true) {
		cout << "\nSmart Calculator \nPress 1 to open sumculator; \nPress 2 to open the multiplication table; \nPress 3 to close smart calculator\n" << endl;
		short choice;
		cin >> choice;
		if (choice == 1) {
			sumkulator();
		}
		else if (choice == 2) {
			multitable();
		}
		else {
			break;
		}
	}
}
#include <iostream>
#include <vector>
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

void SumOfTwice() {
	while(true) {
		int arrsize, sum;
		vector<int> arr;
		cout << "\nEnter size of your array: ";
		cin >> arrsize;
		cout << "\nEnter sum what do you want: ";
		cin >> sum;
		cout << "\nEnter your array: ";
		for (int i = 0; i < arrsize; i++) {
		int v;
		cin >> v;
		arr.push_back(v);
		}
		int left = 0;
		int right = arr.size() - 1;
		while (left < right) {
			int sum_cur = arr[left] + arr[right];
			if (sum_cur == sum) {
				break;
			}
			else if (sum_cur < sum) {
				left++;
			}
			else {
				right--;
			}
		}
		if (left >= right) {
			cout << "\nYour sum cannot get in this array\n";
		}
		else {
			cout << "\nYour sum can claim if you add " << arr[left] << " + " << arr[right] << endl;
		}
		cout << "\nPress 1 to write new sum or press any number buttom to close SumOfTwice\n" << endl;
		int again_close1;
		cin >> again_close1;
		if (again_close1 != 1) {
			break;
		}
	}
}


int main() {
	bool flag = true;;
	while (flag == true) {
		cout << "\nSmart Calculator \nPress 1 to open sumculator; \nPress 2 to open the multiplication table; \nPress 3 to open SumOfTwice; \nPress 4 to close smart calculator\n" << endl;
		short choice;
		cin >> choice;
		switch (choice) {
		case 1:
			sumkulator();
			break;
		case 2:
			multitable();
			break;
		case 3:
			SumOfTwice();
			break;
		case 4:
			flag = false;
			break;
		default:
			cout << "\nPlease press buttons that I suggested" << endl;
			break;
		}
	}
}
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

using namespace std;
struct Product {
	double price;
	bool operator < (const Product& other) const {
		return price < other.price;
	}
};

int main() {
	cout << "====TASK1====" << endl;
	array<Product, 2> a = { { {10.5}, {20.5} } };
	array<Product, 3> b = { { {15.5}, {25.5}, {4.0} } };
	auto result = mergeArrays(a, b);

	cout << "Merged Arrays:" << endl;
	for (auto it = result.begin(); it != result.end(); it++) {
		cout << it->price << " ";
	}
	cout << endl;
	cout << endl;

	cout << "====TASK2====" << endl;
	vector<int> input = { 1, 2, 3, 4, 5, 6 };
	vector<int> even;
	vector<int> odd;
	splitVector(input, even, odd);

	cout << "Even numbers:" << endl;
	for (auto x : even) cout << x << " ";
	cout << endl;

	cout << "Odd numbers:" << endl;
	for (auto x : odd) cout << x << " ";
	cout << endl;
	cout << endl;

	cout << "====TASK3====" << endl;
	cout << "Testing with a string:" << endl;
	string word = "radar";
	deque<char> dq;
	for (char c : word) dq.push_back(c);
	if (isPalindrome(dq)) {
		cout << word << " is a palindrome." << endl;
	}
	else {
		cout << word << " is not a palindrome." << endl;
	}
	cout << endl;
	cout << "Testing with a deque of numbers:" << endl;
	deque<int> numDeque = { 1, 2, 3, 2, 1 };
	if (isPalindrome(numDeque)) {
		cout << "The deque of numbers is a palindrome." << endl;
	}
	else {
		cout << "The deque of numbers is not a palindrome." << endl;
	}

	return 0;
}
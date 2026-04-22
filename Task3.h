#ifndef TASK3_H
#define TASK3_H

#include <deque>

using namespace std;

template <typename T>
bool isPalindrome(const deque<T>& d) {
	auto front = d.begin();
	auto back = prev(d.end());
	while (front < back) {
		if (*front != *back) {
			return false;
		}
		front++;
		back--;
	}
	return true;
}

#endif 



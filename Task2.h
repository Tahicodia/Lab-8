#ifndef TASK2_H
#define TASK2_H

#include <vector>

using namespace std;

template <typename T>
void splitVector(const vector<T>& input, vector<T>& even, vector<T>& odd) {
	for (auto i = input.begin(); i != input.end(); i++){
		if (*i % 2 == 0) {
			even.push_back(*i);
		}
		else {
			odd.push_back(*i);
		}	
	}
}

#endif

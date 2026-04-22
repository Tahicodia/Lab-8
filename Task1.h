#ifndef TASK1_H
#define TASK1_H

#include <array>
#include <iterator>

using namespace std;

template <typename T, size_t N>
void customsort(array<T, N>& arr) {
	if (N < 2) return;
	for (auto i = arr.begin(); i != arr.end(); i++) {
		for (auto j = arr.begin(); next(j) != arr.end(); j++) {
			if (*next(j) < *j) {
				T temp = *j;
				*j = *next(j);
				*next(j) = temp;
			}
		}
	}
}

template <typename T, size_t N, size_t M>
array <T, N + M> mergeArrays(array<T, N> a, array<T, M> b){
	customsort(a);
	customsort(b);
	array <T, N + M> result;

	auto A = a.begin();
	auto B = b.begin();
	auto R = result.begin();

	while (A != a.end() && B != b.end()) {
		if (*A < *B) {
			*R = *A;
			A++;
		}
		else {
			*R = *B;
			B++;
		}
		R++;
	}

	while (A != a.end()) {
		*R = *A;
		A++;
		R++;
	}

	while (B != b.end()) {
		*R = *B;
		B++;
		R++;
	}
	return result;
}
#endif
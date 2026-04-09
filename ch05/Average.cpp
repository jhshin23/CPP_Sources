#include <iostream>
using namespace std;
#include "Average.h"

bool average(int a[], int size, int& avg) {
	if (size <= 0) {
		return false;
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	} 
	avg = sum / size;
	return true;
}
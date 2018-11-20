#pragma once

#ifndef LAB7
#define LAB7
#include <iostream>
#include <vector>
using std::vector;
class Sorting {
public:
	void bubble(vector<double>& s);
	void insertion(vector<double>& s);
	void selection(vector<double> s);
	void quicksort(vector<double>& s, int p, int q);
	vector<double> merge(vector<double> s);
	int partition(vector<int>& s, int p, int q);
};
#endif
#include "Lab7-egorman.h"
#include "winTimer.h"
#include <vector>
#include <iostream>

using namespace std;

void
bubble(vector<double>& s)
{
	bool descending = true;
	for (int i = 0; i < s.size(); i++)
		for (int j = i + 1; j < s.size(); j++)
		{
			if (descending)
			{
				if (s[i] > s[j])
					std::swap(s[i], s[j]);
			}
			else if (s[i] < s[j]) 
				std::swap(s[i], s[j]);
		}
}

void
insertion(vector<double>& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		auto const insertion_point =
			std::upper_bound(s.begin(), it, *it);

		// Shifting the unsorted part 
		std::rotate(insertion_point, it, it + 1);
	}
}

void
selection(vector<double> s)
{
	int temp, min;

	for (int i = 0; i < s.size(); i++) {
		min = i;
		for (int j = 1; j < s.size(); j++) {
			if (s[j] < s[min])
				min = j;
		}
		temp = s[i];
		s[i] = s[min];
		s[min] = temp;
	}
}

void
quicksort(vector<double>& s, int p, int q)
{
	if ((q - p) > 1) {
		int r = partition(s, p, q);
		quicksort(s, p, r - 1);
		quicksort(s, r + 1, q);
	}
}

int
partition(vector<double>& s, int p, int q)
{
	int left = p + 1;
	int right = q;
	double pivot = s[p];

	while (left <= right) {
		while (s[left] < pivot && left <= right) {
			left++;
		}

		while (s[right] > pivot && right >= left) {
			right--;
		}

		if ((right - left) > 0) {
			std::swap(s[left], s[right]);
		}
	}
	std::swap(s[p], s[left - 1]);
	return left - 1;
}

vector<double>
merge(vector<double> s)
{
	if (s.size() <= 1) return s;
	vector<double> output(s.size());

	//Split Vector//
	double midpoint = 0.5*s.size();
	vector<double> input_left(s.begin(), s.begin() + midpoint);
	vector<double> input_right(s.begin() + midpoint, s.end());

	input_left = merge(input_left);
	input_right = merge(input_right);
	merge(input_left.begin(), input_left.end(), input_right.begin(), input_right.end(), output.begin());
	return output;
}

int main()
{
	Timer get;
	get.start();
	vector<double> vec;
	while (get() < 4)
	{
		/*double a = rand() % 1000 + 1;        //stl::sort test
		vec.push_back(a);
		std::sort(vec.begin(), vec.end());
		double a = rand() % 1000 + 1;        //quicksort test
		vec.push_back(a);
		double p = 0;
		double q = vec.size() - 1;
		quicksort(vec, p, q);
		double a = rand() % 1000 + 1;       //bubble sort test
		vec.push_back(a);
		bubble(vec);
		double a = rand() % 1000 + 1;        //selection test
		vec.push_back(a);
		selection(vec);
		double a = rand() % 1000 + 1;        //insertion test
		vec.push_back(a);
		insertion(vec);
		double a = rand() % 1000 + 1;        //merge sort test
		vec.push_back(a);
		cout << "Size of merge sorted vector: " << merge(vec) << endl;*/
	}
	get.stop();
	Timer get;
	get.start();
	vector<double> vec;
	while (get() < 8)
	{
		/*double a = rand() % 1000 + 1;        //stl::sort test
		vec.push_back(a);
		std::sort(vec.begin(), vec.end());
		double a = rand() % 1000 + 1;        //quicksort test
		vec.push_back(a);
		double p = 0;
		double q = vec.size() - 1;
		quicksort(vec, p, q);
		double a = rand() % 1000 + 1;       //bubble sort test
		vec.push_back(a);
		bubble(vec);
		double a = rand() % 1000 + 1;        //selection test
		vec.push_back(a);
		selection(vec);
		double a = rand() % 1000 + 1;        //insertion test
		vec.push_back(a);
		insertion(vec);
		double a = rand() % 1000 + 1;        //merge sort test
		vec.push_back(a);
		cout << "Size of merge sorted vector: " << merge(vec) << endl;*/
	}
	get.stop();
	Timer get;
	get.start();
	vector<double> vec;
	while (get() < 16)
	{
		/*double a = rand() % 1000 + 1;        //stl::sort test
		vec.push_back(a);
		std::sort(vec.begin(), vec.end());
		double a = rand() % 1000 + 1;        //quicksort test
		vec.push_back(a);
		double p = 0;
		double q = vec.size() - 1;
		quicksort(vec, p, q);
		double a = rand() % 1000 + 1;       //bubble sort test
		vec.push_back(a);
		bubble(vec);
		double a = rand() % 1000 + 1;        //selection test
		vec.push_back(a);
		selection(vec);
		double a = rand() % 1000 + 1;        //insertion test
		vec.push_back(a);
		insertion(vec);
		double a = rand() % 1000 + 1;        //merge sort test
		vec.push_back(a);
		cout << "Size of merge sorted vector: " << merge(vec) << endl;*/
	}
	get.stop();
	Timer get;
	get.start();
	vector<double> vec;
	int i = 0;
	while (i < 2000000)
	{
		/*double a = rand() % 1000 + 1;        //stl::sort test
		vec.push_back(a);
		std::sort(vec.begin(), vec.end());
		double a = rand() % 1000 + 1;        //quicksort test
		vec.push_back(a);
		double p = 0;
		double q = vec.size() - 1;
		quicksort(vec, p, q);
		double a = rand() % 1000 + 1;       //bubble sort test
		vec.push_back(a);
		bubble(vec);
		double a = rand() % 1000 + 1;        //selection test
		vec.push_back(a);
		selection(vec);
		double a = rand() % 1000 + 1;        //insertion test
		vec.push_back(a);
		insertion(vec);
		double a = rand() % 1000 + 1;        //merge sort test
		vec.push_back(a);
		cout << "Size of merge sorted vector: " << merge(vec) << endl;*/
	}
	get.stop();
	system("PAUSE");
	return(0);
}
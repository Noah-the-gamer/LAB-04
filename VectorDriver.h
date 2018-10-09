/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 * Modified by: Noah Fulton
 * Date: October 8, 2018
 * Mod description: adds additional functions add_numbers, print_even
 *					and is_present
 * Reason of change: modified to complete lab 04
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

//add 10 random numbers to the vector
//uses a for loop with a rand generator with mod 20 and pushback
void add_numbers(vector<short> &data)
{
	int randomNum = 0;
	for (int i = 0; i < 10; i++)
	{
		randomNum = rand() % 20;
		data.push_back(randomNum);
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

//print even vector values:   Near identical to print
//with a change to the for loop
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i += 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// use iterator to check if a value is present in the vector
// very similar to compute sum, but uses an if to find the value
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();
	bool result = false;
	while (iter != data.end()) {
		if (value == *iter)
		{
			result = true;
		}
		iter++;
	}

	return result;
}
//

// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function

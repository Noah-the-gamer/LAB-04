/*
* Modified by Noah Fulton
* Date: October 10, 2018
* Desc: additional sections were made to test the functions add_numbers,
*		print_even, and is_present. An additional test of the function sort
*		is also tested.
*
*/
#include "VectorDriver.h"
#include <algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  //test add 10 numbers to vector
  cout << "add 10 numbers to vector: ";
  add_numbers(sample_vector);
  print(sample_vector);
  cout << endl;

  //test even indexes function
  cout << "even indexes of vector";
  print_even(sample_vector);
  cout << endl;

  //test sort functionality
  cout << "testing sort vector: initial positions: ";
  vector<short> mini_sort{ 9, 5, 8, 3, 4 };
  print(mini_sort);
  cout << endl << "result positions: ";
  std::sort(mini_sort.begin(), mini_sort.end());
  print(mini_sort);

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}

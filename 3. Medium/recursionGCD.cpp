/*
  Problem description: Write a function that calculates the GCD (Greatest Common Divisor) of two numbers recursively.

  Problem URL: https://edabit.com/challenge/S4R3i2gQn62hj9b7S
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (!b)
    return a;

  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);

  cout << gcd(65, 5415) << '\n';
  cout << gcd(31, 917) << '\n';
  cout << gcd(620, 4620) << '\n';


  return 0;
}
// Function to calculate the Square root of a number - updated to use "double" not "float"

#include <stdio.h>

// Declare Functions
double absoluteValue (double); // Function to calculate the absolute value of a number
double squareRoot (double); // Function to calculate the square root of a number

int main(void) {

  // Calculate square roots
  printf ("squareRoot(2.0) = %lf\n", squareRoot(2.0));
  printf ("squareRoot(144.0) = %lf\n", squareRoot(144.0));
  printf ("squareRoot(17.5) = %lf\n", squareRoot(17.5));

  return 0;
}

// Define Functions

double absoluteValue (double x) {
  if (x < 0)
    x *= -1;

  return x;
}

double squareRoot (double x) {
  const double epsilon = .00001;
  double guess = 1;

  while (absoluteValue (guess * guess - x) >= epsilon) 
    guess = (x / guess + guess) / 2.0;

  return guess;
}
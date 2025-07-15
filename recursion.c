#include <stdio.h>

// Example 1: Factorial using recursion
int factorial(int n) {
  // Base case: Factorial of 0 or 1 is 1
  if (n == 0 || n == 1) {
    return 1;
  } else {
    // Recursive step: n! = n * (n-1)!
    return n * factorial(n - 1);
  }
}

// Example 2: Fibonacci sequence using recursion
int fibonacci(int n) {
  // Base cases: Fibonacci of 0 is 0, Fibonacci of 1 is 1
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    // Recursive step: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// Example 3: Printing numbers in reverse order using recursion
void printReverse(int n) {
  // Base case: Stop when n becomes 0
  if (n == 0) {
    return;
  } else {
    // Print the current number
    printf("%d ", n);
    // Recursive call with n-1
    printReverse(n - 1);
  }
}

// Example 4: Sum of digits of a number using recursion
int sumOfDigits(int n) {
  // Base case: If n is 0, the sum is 0
  if (n == 0) {
    return 0;
  } else {
    // Recursive step: Sum of digits = last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
  }
}

int main() {
  int num;

  // Factorial example
  printf("Enter a non-negative integer for factorial: ");
  scanf("%d", &num);
  if (num >= 0) {
    printf("Factorial of %d = %d\n", num, factorial(num));
  } else {
    printf("Factorial is not defined for negative numbers.\n");
  }

  printf("\n");

  // Fibonacci example
  printf("Enter a non-negative integer for Fibonacci sequence: ");
  scanf("%d", &num);
  if (num >= 0) {
    printf("Fibonacci of %d = %d\n", num, fibonacci(num));
  } else {
    printf("Fibonacci index cannot be negative.\n");
  }

  printf("\n");

  // Print reverse example
  printf("Enter a positive integer to print in reverse: ");
  scanf("%d", &num);
  if (num > 0) {
    printf("Numbers in reverse order: ");
    printReverse(num);
    printf("\n");
  } else {
    printf("Please enter a positive integer.\n");
  }

  printf("\n");

  // Sum of digits example
  printf("Enter a non-negative integer to find the sum of its digits: ");
  scanf("%d", &num);
  if (num >= 0) {
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
  } else {
    printf("Please enter a non-negative integer.\n");
  }

  return 0;
}
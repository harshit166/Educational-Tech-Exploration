#include <iostream>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    std::cout << "Enter an integer to find the nth Fibonacci number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Fibonacci sequence is not defined for negative numbers." << std::endl;
    } else {
        int result = fibonacci(num);
        std::cout << "The " << num << "th Fibonacci number is " << result << std::endl;
    }

    return 0;
}

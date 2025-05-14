// Copyright 2025
// Created by: Xiaohan
// Created on: May 14, 2025
// This program calculates the math by the entered numbers and operator

#include <iostream>
#include <string>

// Function to calculate the result based on operator
std::string calculator(double num1,
    double num2, const std::string& operatorInput) {
    if (operatorInput == "+") {
        return std::to_string(num1 + num2);
    } else if (operatorInput == "-") {
        return std::to_string(num1 - num2);
    } else if (operatorInput == "*") {
        return std::to_string(num1 * num2);
    } else if (operatorInput == "/") {
        if (num2 != 0) {
            return std::to_string(num1 / num2);
        } else {
            return "Error: Division by zero";
        }
    } else if (operatorInput == "%") {
        if (num2 != 0) {
            return std::to_string(static_cast<int>(num1)
            % static_cast<int>(num2));
            return "Please do not enter 0 in second number";
        }
    } else {
        return "Invalid operator";
    }
}

int main() {
    std::string operatorInput;
    std::string userNum1, userNum2;

    // Get operator from user
    std::cout << "Enter the operator (+, -, *, /, %): ";
    std::cin >> operatorInput;

    // Get first number from user
    std::cout << "Enter the first number: ";
    std::cin >> userNum1;

    // Get second number from user
    std::cout << "Enter the second number: ";
    std::cin >> userNum2;

    try {
        // Try converting user input to double
        double num1 = std::stod(userNum1);
        double num2 = std::stod(userNum2);

        // Perform calculation
        std::string result = calculator(num1, num2, operatorInput);

        // Print the result
        std::cout << "The result is: " << result << std::endl;
    } catch (const std::invalid_argument&) {
        // Handle invalid input for numbers
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }

    return 0;
}

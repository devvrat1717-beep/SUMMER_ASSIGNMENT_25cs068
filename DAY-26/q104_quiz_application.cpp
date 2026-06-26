#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "===== Welcome to the Quiz =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. Compiler Language\n2. Machine Language\n3. High-Level Language\n4. Assembly Language\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3)
        score++;

    // Question 3
    cout << "\n3. Which symbol is used for single-line comments in C++?\n";
    cout << "1. /* */\n2. //\n3. ##\n4. <!-- -->\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    // Question 4
    cout << "\n4. How many bytes does an int usually occupy?\n";
    cout << "1. 1\n2. 2\n3. 4\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3)
        score++;

    // Question 5
    cout << "\n5. Which loop is guaranteed to execute at least once?\n";
    cout << "1. for\n2. while\n3. do-while\n4. range-based for\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3)
        score++;

    // Display Score
    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " / 5\n";

    if (score == 5)
        cout << "Excellent! 🎉";
    else if (score >= 3)
        cout << "Good Job! 👍";
    else
        cout << "Keep Practicing! 😊";

    return 0;
}
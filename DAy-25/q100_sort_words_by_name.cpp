#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string words[100];
    int n = 0;

    // Store words in array
    stringstream ss(sentence);
    while (ss >> word) {
        words[n++] = word;
    }

    // Sort words
    sort(words, words + n);

    cout << "\nWords in Alphabetical Order:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }

    return 0;
}
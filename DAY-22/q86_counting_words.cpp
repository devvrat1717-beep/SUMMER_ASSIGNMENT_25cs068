#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int words = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            words++;
        }
    }

    cout << "Number of words = " << words + 1;

    return 0;
}
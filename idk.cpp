#include <iostream>
using namespace std;

int main() {
    string rna;
    cin >> rna;

    int longestRepetition = 0;
    int currentRepetition = 1; // Start with the first character
	char amninoacid;
    for (int i = 1; i < rna.length(); i++) {
        if (rna[i] == rna[i - 1]) {
            currentRepetition++;
        } else {
            longestRepetition = max(longestRepetition, currentRepetition);
            currentRepetition = 1; // Start a new repetition
        }
    }

    // Check the last repetition
    longestRepetition = max(longestRepetition, currentRepetition);

    cout << longestRepetition << endl;
    cout << "";

    return 0;
}


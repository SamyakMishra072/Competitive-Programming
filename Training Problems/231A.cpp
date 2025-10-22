#include <iostream>
using namespace std;
int main() {
    // Read the number of problems
    int n;
    cin >> n;

    // Initialize a counter for the problems they will implement
    int problems_to_solve = 0;

    // Loop through each problem
    for (int i = 0; i < n; ++i) {
        // Read the confidence level of each friend
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Calculate the total number of friends sure about the solution
        // Since 'sure' is 1 and 'not sure' is 0, we can just add them up.
        int sure_count = petya + vasya + tonya;

        // Check if at least two friends are sure
        if (sure_count >= 2) {
            // If yes, increment the counter
            problems_to_solve++;
        }
    }

    // Print the final total
    cout << problems_to_solve << std::endl;

    return 0;
}

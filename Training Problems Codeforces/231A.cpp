#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int problems_to_solve = 0;
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        int sure_count = petya + vasya + tonya;
        if (sure_count >= 2) {
            problems_to_solve++;
        }
    }
    cout << problems_to_solve <<endl;
    return 0;
}

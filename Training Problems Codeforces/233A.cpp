/*A. Perfect Permutation
time limit per test2 seconds
memory limit per test256 megabytes
A permutation is a sequence of integers p1, p2, ..., pn, consisting of n distinct positive integers, each of them doesn't exceed n. Let's denote the i-th element of permutation p as pi. We'll call number n the size of permutation p1, p2, ..., pn.

Nickolas adores permutations. He likes some permutations more than the others. He calls such permutations perfect. A perfect permutation is such permutation p that for any i (1 ≤ i ≤ n) (n is the permutation size) the following equations hold ppi = i and pi ≠ i. Nickolas asks you to print any perfect permutation of size n for the given n.

Input
A single line contains a single integer n (1 ≤ n ≤ 100) — the permutation size.

Output
If a perfect permutation of size n doesn't exist, print a single integer -1. Otherwise print n distinct integers from 1 to n, p1, p2, ..., pn — permutation p, that is perfect. Separate printed numbers by whitespaces.

Examples
InputCopy
1
Output
-1
Input
2
Output
2 1 
Input
4
Output
2 1 4 3 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << -1 << '\n';
        return 0;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) ans.push_back(i);
    for (int i = 0; i < n; i += 2) swap(ans[i], ans[i + 1]);
    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> unique_colors;
    unique_colors.insert(s1);
    unique_colors.insert(s2);
    unique_colors.insert(s3);
    unique_colors.insert(s4);
    int num_unique = unique_colors.size();
    int horseshoes_to_buy = 4 - num_unique;
    cout << horseshoes_to_buy << endl;
    return 0;
}
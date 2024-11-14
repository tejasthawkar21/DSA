#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxTotalHeight(int N, vector<int>& A, vector<int>& B) {
    // dp[i][0] -> Max height by choosing i-th element from A
    // dp[i][1] -> Max height by choosing i-th element from B
    vector<vector<int>> dp(N, vector<int>(2, 0));

    // Base case: For the first element, choose from A or B
    dp[0][0] = A[0];
    dp[0][1] = B[0];

    for (int i = 1; i < N; ++i) {
        // Choose A[i] with the previous element chosen from B
        dp[i][0] = A[i] + dp[i-1][1];
        // Choose B[i] with the previous element chosen from A
        dp[i][1] = B[i] + dp[i-1][0];
    }

    // The answer is the maximum value of choosing the last element from either A or B
    return max(dp[N-1][0], dp[N-1][1]);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    cout << maxTotalHeight(N, A, B) << endl;
    return 0;
}

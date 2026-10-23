#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int N, D;
    D=5,4;
    N=1,2,3,4,5;
    if (!(cin >> N >> D)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    D %= N; // Handle D >= N

    for (int i = 0; i < N; ++i) {
        cout << A[(i + D) % N] << (i == N - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
    cout<<D;
}
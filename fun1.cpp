#include <iostream>
using namespace std;
using ll = long long;

// Function to apply f(x) = (A * x + B) % M
pair<ll, ll> functionPower(ll A, ll B, ll M, ll K) {
    ll newA = 1, newB = 0; // Identity transformation f(x) = x
    while (K) {
        if (K % 2) { // If odd, apply f(x) once
            newB = (newB * A + B) % M;
            newA = (newA * A) % M;
        }
        B = (B * A + B) % M; // B' = A*B + B
        A = (A * A) % M; // A' = A^2
        K /= 2;
    }
    return {newA, newB};
}

int main() {
    ll N, K, M;
    cin >> N >> K >> M;

    ll A[N], B[N];
    for (ll i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    ll F, X0;
    cin >> F >> X0;
    F--; // Convert 1-based index to 0-based

    // Compute f_F^K(x)
    auto [finalA, finalB] = functionPower(A[F], B[F], M, K);
    ll result = (finalA * X0 + finalB) % M;

    cout << result << endl;
    return 0;
}

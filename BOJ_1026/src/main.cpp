#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> qA{};
    for (int i = 0; i < N; ++i)
    {
        int a;
        cin >> a;
        
        qA.push(a);
    }

    vi B(N);
    for (int i = 0; i < N; ++i)
    {
        int b;
        cin >> b;

        B[i] = b;
    }

    sort(B.begin(), B.end(), greater());

    int sum{ 0 };
    for (int i = 0; i < N; ++i)
    {
        int la = qA.top();
        qA.pop();

        sum += B[i] * la;
    }

    cout << sum;

    return 0;
}
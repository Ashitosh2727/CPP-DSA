#include <bits/stdc++.h>
using namespace std;

// Function to check if person 'a' knows person 'b'
bool knows(vector<vector<int>> &m, int a, int b) {
    return m[a][b] == 1;
}

// Function to find the celebrity
int celebrityProblem(vector<vector<int>> &m, int n) {
    stack<int> s;

    // Step 1: Push all people into the stack
    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    // Step 2: Get two elements and compare them
    while (s.size() > 1) {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if (knows(m, a, b)) {
            // a knows b → a can't be a celebrity
            s.push(b);
        } else {
            // a doesn't know b → b can't be a celebrity
            s.push(a);
        }
    }

    // Step 3: Potential celebrity
    int candidate = s.top();

    // Step 4: Verify candidate
    // Row check — candidate should not know anyone
    for (int i = 0; i < n; i++) {
        if (m[candidate][i] != 0) {
            return -1; // candidate knows someone → not celebrity
        }
    }

    // Column check — everyone should know candidate
    for (int i = 0; i < n; i++) {
        if (i != candidate && m[i][candidate] != 1) {
            return -1; // someone doesn't know candidate → not celebrity
        }
    }

    return candidate;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int celeb = celebrityProblem(m, n);
    if (celeb == -1) {
        cout << "No celebrity found" << endl;
    } else {
        cout << "Celebrity is at index: " << celeb << endl;
    }

    return 0;
}

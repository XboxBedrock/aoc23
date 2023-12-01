#include <bits/stdc++.h>
#include <cctype>

using namespace std;

#define lli long long int

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
	freopen((name + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("day1");

    string bruh;

    lli sum = 0;

    while (cin >> bruh) {
        char a;
        char b;
        for (int i = 0; i < bruh.size(); ++i) {
            if (isdigit(bruh[i])) {
                a = bruh[i];
                break;
            }

        }

        for (int i = bruh.size(); i >= 0; --i) {
            if (isdigit(bruh[i])) {
                b = bruh[i];
                break;
            }
        }

        sum += stoi(string(1, a) + string(1, b));
    }

    cout << sum << endl;
}
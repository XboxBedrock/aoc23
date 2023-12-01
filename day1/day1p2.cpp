#include <__nullptr>
#include <bits/stdc++.h>
#include <cctype>
#include <string>

using namespace std;

#define lli long long int

string replaceAll(string str, string& from, string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
	freopen((name + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("day1");

    string yikers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string bruh;

    lli sum = 0;

    while (cin >> bruh) {

        char a = 'w';
        char b = 'w';
        for (int i = 0; i < bruh.size(); ++i) {

            

            for (int l = 0; l < 9; ++l) {
                string toRep = yikers[l];

                if (bruh.compare(i, toRep.size(), toRep) == 0) {
                    a = '1' + l;
                    break;
                }
                
            }
            

            if ( a != 'w') break;

            else if (isdigit(bruh[i])) {
                a = bruh[i];
                break;
            }

            

            

        }

        for (int i = bruh.size(); i >= 0; --i) {

            
            for (int l = 0; l < 9; ++l) {
                string toRep = yikers[l];
                if (i - (int)toRep.size()+1 >= 0) {
                    if (bruh.compare(i-toRep.size()+1, toRep.size(), toRep) == 0) {
                        b = '1' + l;
                        break;
                    }
                }
            }

            if ( b != 'w') break;
            else if (isdigit(bruh[i])) {
                b = bruh[i];
                break;
            }

            
            
        }

        cout << stoi(string(1, a) + string(1, b)) << endl;

        sum += stoi(string(1, a) + string(1, b));
    }

    cout << sum << endl;
}
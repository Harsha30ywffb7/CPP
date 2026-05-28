#include <iostream>
#include <set>
#include <string>
#include <queue>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int len;
        cin >> len;

        string s;
        cin >> s;

        set<string> visited;
        queue<string> q;

        visited.insert(s);
        q.push(s);

        while (!q.empty()) {

            string cur = q.front();
            q.pop();

            if (cur.length() <= 1) continue;

            // remove first character
            string first = cur.substr(1);

            if (visited.find(first) == visited.end()) {
                visited.insert(first);
                q.push(first);
            }

            // remove second character
            string second = cur[0] + cur.substr(2);

            if (visited.find(second) == visited.end()) {
                visited.insert(second);
                q.push(second);
            }
        }

        int ans = visited.size();

        cout << ans << endl;
    }

    return 0;
}
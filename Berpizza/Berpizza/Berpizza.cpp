#include <iostream>
#include <set>
#include <map>
using namespace std;
int main() {

    const long N = 1e9;
   set<long> s;
   set<std::pair<long, long> > t;
    map<long, long> r;
    long q;
    cin >> q;
    long cnt= 0;
    while (q--) {
        long w; cin >> w;
        if (w == 1) {
            ++cnt;
            long m; cin >> m;
            s.insert(cnt);
            t.insert(make_pair(m, N -cnt));
            r[cnt] = m;
        }
        else if (w == 2) {
            long num = *(s.begin());
            cout << num << " ";
            s.erase(num);
            t.erase(make_pair(r[num], N - num));
            r.erase(num);
        }
        else if (w == 3) {
            pair<long, long> cust = *t.rbegin();
            long num = N - cust.second; long spend = cust.first;
            cout << num << " ";
            s.erase(num);
            t.erase(cust);
            r.erase(num);
        }
    }


}
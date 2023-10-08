#include <iostream>
#include <set>

using namespace std;

int main()
{
    cout << "[IN]:\n";
    int n, x;
    set<int, greater<int>> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "[OUT]:\n";
    for (const auto& i : s) cout << i << endl;

    system("pause");
}
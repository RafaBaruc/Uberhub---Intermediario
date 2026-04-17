#include <bits/stdc++.h>

using namespace std;


int main()
{
    map<int, double> preco;
    preco[1] = 4;
    preco[2] = 4.5;
    preco[3] = 5;
    preco[4] = 2;
    preco[5] = 1.5;
    int x, c;
    cin >> x >> c;
    cout << "Total: R$ " << fixed << setprecision(2) << preco[x] * c << endl;

    return 0;
}

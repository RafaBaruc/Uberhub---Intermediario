#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tam = 10;
    int n[tam];
    for (int i = 0; i < tam; i++){
        cin >> n[i];
    }
    
    sort(n, n + tam);
    for (int i = 0; i < tam; i++){
        cout << n[i] << " ";
    }
    cout << endl;
    
    sort(n, n + tam, greater<int>());
    for (int i = 0; i < tam; i++){
        cout << n[i] << " ";
    }
    cout << endl;
    
    return 0;
}
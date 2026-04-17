#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> ddd;
    
    ddd[61] = "Brasilia";
    ddd[71] = "Salvador";
    ddd[11] = "Sao Paulo";
    ddd[21] = "Rio de Janeiro";
    ddd[32] = "Juiz de Fora";
    ddd[19] = "Campinas";
    ddd[27] = "Vitoria";
    ddd[31] = "Belo Horizonte";
    
    int n;
    cin >> n;
    
    if(ddd[n] ==""){
        cout << "DDD nao cadastrado" << endl;
    }else{
        cout << ddd[n] << endl;
    }
    
    return 0;
}

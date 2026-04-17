#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> computador;
    map<int, int> atualizacoes;
    
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        int app, versao;
        cin >> app >> versao;
        computador[app] = versao;
    }
     
    for(int i = 0; i < m; i++){
        int app, versao;
        cin >> app >> versao;
        if(atualizacoes[app]<versao){
            atualizacoes[app] = versao;
        }
    }
    
    for(auto [app, versao] : atualizacoes){
        if(computador.find(app)==computador.end() || computador[app]<versao){
            cout << app << " " << atualizacoes[app] << endl;
        }
    }
    
    
    return 0;
}

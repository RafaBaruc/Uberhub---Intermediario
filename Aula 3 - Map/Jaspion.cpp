#include <bits/stdc++.h>

using namespace std;

void traduz(string s, map<string, string> t){
    for(auto [jpn, ptbr] : t){
        if (s == jpn) {
            cout << ptbr;
            return;
        }
    }
    cout << s;
}

int main()
{
    map<string, string> traducao;
    int x, c;
    c = 0;
    cin >> x;
    while(true){
        if(c==x)break;
        
        int n, m;
        cin >> n >> m;
        string a;
        getline(cin,a);
        for(int i = 0; i < n; i++){
            string japones, portugues;
            getline(cin, japones);
            getline(cin, portugues);
            traducao[japones] = portugues;
        }
        
        for(int i = 0; i < m; i++){
            string letra;
            getline(cin, letra);
            string word;
            letra.push_back(' ');
            for(auto ch : letra){
                if(ch==' '){
                    traduz(word, traducao);
                    cout << " ";
                    word = "";
                }else{
                    word.push_back(ch);
                }
            }
            cout << endl;
        }
        c++;
        cout << endl;
        traducao.clear();
    }
    
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    string v; // string de vogais
    for(int i = 0;i < (int) (s.size());i++){
        if(s[i] == 'a') v.push_back(s[i]);
        if(s[i] == 'e') v.push_back(s[i]);
        if(s[i] == 'i') v.push_back(s[i]);
        if(s[i] == 'o') v.push_back(s[i]);
        if(s[i] == 'u') v.push_back(s[i]);
    }
    
    int j = (int)(v.size()-1);
    bool igual = true;
    
    for(int i = 0;i < (int) (v.size()/ 2);i++){
        if(v[i] != v[j]){
            igual = false;
            break;
        }
        j--;
    }
    
    if(igual){
        cout << "S";
    }else{
        cout << "N";
    }
    
    return 0;
}
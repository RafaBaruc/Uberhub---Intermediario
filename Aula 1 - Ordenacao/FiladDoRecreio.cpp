#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int tam;
        cin >> tam;
        int n[tam], b[tam];
        for (int i = 0; i < tam; i++){
            cin >> n[i];
            b[i] = n[i];
        } 
        
        sort(n, n + tam, greater<int>());
    
        int count = 0;
        for (int i = 0; i < tam; i++){
            if(n[i] != b[i]){
                count++;
            }
        }
    
    cout << tam - count << endl;
    
    }
   
    return 0;
}
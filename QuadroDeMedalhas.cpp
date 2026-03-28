#include <bits/stdc++.h>

using namespace std;

typedef struct {
	string nome;
	int o, p , b;
} Pais;

bool cmp(Pais a, Pais b){
    if (a.o != b.o) return a.o > b.o;
    if (a.p != b.p) return a.p > b.p;
    if (a.b != b.b) return a.b > b.b;
    return a.nome < b.nome;
}

int main()
{
	int n;
	cin >> n;
	
	Pais paises[n];
	
	for(int i = 0; i < n; i++) cin >> paises[i].nome >> paises[i].o >> paises[i].p >> paises[i].b;
	
	sort(paises, paises + n, cmp);
	
	for(int i = 0; i < n; i++) cout << paises[i].nome << " " << paises[i].o << " " << paises[i].p << " " << paises[i].b << endl;

	return 0;
}
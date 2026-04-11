#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int id = 0;
	int pontos = 0;
	int pontosFeitos = 0;
	int pontosLevados = 0;
	double cestaAvg() {
		if(pontosLevados == 0) return pontosFeitos;
		return (double)pontosFeitos/pontosLevados;
	}
} Time;

bool cmp(Time a, Time b) {
	if (a.pontos != b.pontos) return a.pontos > b.pontos;
	if (a.cestaAvg() != b.cestaAvg()) return a.cestaAvg() > b.cestaAvg();
	if (a.pontosFeitos != b.pontosFeitos) return a.pontosFeitos > b.pontosFeitos;
	return a.id < b.id;
}

int main()
{
	int h = 1;
	while(true) {
		int n;
		cin >> n;
		if(n == 0)break;

		Time times[n];

		for(int i = 0; i < n; i++) {
			times[i].id = i + 1;
		}

		for(int i = 0; i < n * (n - 1) / 2; i++) {
			int id, id2, casa, foradecasa;
			cin >> id >> casa >> id2 >> foradecasa;

			if(casa > foradecasa) {
				times[id - 1].pontos += 2;
				times[id2 - 1].pontos += 1;
			} else {
				times[id - 1].pontos += 1;
				times[id2 - 1].pontos += 2;
			}

			times[id - 1].pontosFeitos += casa;
			times[id - 1].pontosLevados += foradecasa;

			times[id2 - 1].pontosFeitos += foradecasa;
			times[id2 - 1].pontosLevados += casa;
		}

		sort(times, times + n, cmp);
        if(h>1)cout << endl;
		cout << "Instancia " << h << endl;
		for(int i = 0; i < n; i++) {
			cout << times[i].id;
			if(i != n - 1) cout << " ";
		}
		cout << endl;
		h++;
	}
	return 0;
}
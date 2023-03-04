#include <iostream>
#include <vector>
using namespace std;
int main() {

	int pocet = 1;
	
	while (true) {
		int z;
		int i;
		int m;
		int l;
		cin >> z >> i >> m>> l;
		if (z == 0 && i == 0 && m == 0 && l == 0) {
			break;
		}
		vector<int> v;
		v.push_back(l);
		bool flag = false;
		bool zac = true;
		if ((z == i && i == m && l == m) && z!= 0 || (z == m && i == l)) {
			cout << "Case " << pocet << ": " << 1 << endl;
		}
		else {
			do {
				l = (z * l + i) % m;
				v.push_back(l);
				if (v.at(0) == l) {
					flag = true;
				}
				else
				{
					for (int i = 1; i < v.size() - 1; i++)
					{
						if (v.at(i) == l) {
							flag = true;
							zac = false;
						}
					}
				}
			} while (!flag);
			if (zac) {
				cout << "Case " << pocet << ": " << v.size() - 1 << endl;
			}
			else {
				cout << "Case " << pocet << ": " << v.size() - 2 << endl;
			}
		}
		pocet++;
	}
	return 0;
}
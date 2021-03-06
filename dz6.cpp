#include "dz6.h"
using namespace std;

int main()
{
	int n = 2;
	Item** it = new Item*[n];
	int i = 0;

	Book* b = new Book[n / 2];
	cout << "Enter " << n / 2 << " books:" << endl;
	for (int j = 0; j < n / 2; j++, i++) {
		b[j] = initBook();
		cout << endl;
		it[i] = &b[j];
	}

	cout << "Enter " << n / 2 << " magazines:" << endl;
	Magazine* m = new Magazine[n / 2];
	for (int j = 0 ; j < n / 2; j++, i++) {
		m[j] = initMagazine();
		cout << endl;
		it[i] = &m[j];
	}
	
	for (i = 0; i < n; i++) {
		cout << endl << i + 1 << ".";
		it[i]->Show();
	}
	
	char c;
	cin>>c;

	delete[] it;
	delete[] b;
	delete[] m;

    return 0;
}


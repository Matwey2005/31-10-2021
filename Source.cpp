//Апарович Матвей 0
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian"); 
	int a, b, c, d, r;
	cin >> a >> b >> c;
	d = 0;
	r = 0;
	if (a > 0) {
		d  += 1; 
	}
	if (b > 0) {
		d  += 1;
	}
	if (c > 0) {
		d += 1;
	}
	if (a < 0) {
	r  += 1;
	}
	if (b < 0) {
		r  += 1;
	}
	if (c < 0) {
		r  += 1; 
	}
	cout << d << endl; 
	cout << r << endl; 
	return 0; 
}
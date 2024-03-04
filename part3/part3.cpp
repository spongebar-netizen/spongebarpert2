#include <iostream>
using namespace std;

int main() {
	float nNilMath, nNilfisika, nrerata;
	string status;
	cout << "masukkan nilai matematika = ";
	cin >> nNilMath;

	cout << "masukkan nilai fisika = ";
	cin >> nNilfisika;

	nrerata = (nNilMath + nNilfisika) / 2;

	if (nrerata >= 60) {
		status = "Lulus Jalur rerata";
	}
	else if (nNilMath >= 70) {
		status = "Lulus Jalur Nilai Matematika";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "status Kelulusan = " << status << endl;
}
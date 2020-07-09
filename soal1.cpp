#include <iostream>
using namespace std;

int main ()
{
	int i, n, besar, kecil, data;
	
	cout << "Masukan jumlah Angka : ";
	cin >> n;
	cout <<"\n";
	cout << "Masukan angka ke-1 : ";
	cin >> besar;
	kecil = besar;
	
	for (i=1; i<n; i++)
	{
		cout << "Masukan angka ke-" << i+1 << " : ";
		cin >> data;
		if (data > besar)
		{
			besar = data;
		}
		if (data < kecil)
		{
			kecil = data;
		}
	}
		cout << "\nNilai Terbesar dari data adalah : " << besar;
		cout << "\nNilai Terkecil dari data adalah : " << kecil;
}

		

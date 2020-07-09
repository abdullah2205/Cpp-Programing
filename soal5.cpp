#include <iostream>
using namespace std;

int main()
{
	int n, i, nilai;
	char predikat;
	
	cout << "Masukan banyak Matkul : ";
	cin >> n;
	cout << "\n";
	
	for (i=0; i<n; i++)
	{
		cout << "Masukan nilai Matkul ke-" << i+1 << " : ";
		cin >> nilai;
		if (nilai >= 90 && nilai <=100)
		{
			predikat = 'A';
			cout << "Predikat : " << predikat << "\n";
		}
		if (nilai >= 80 && nilai <=89)
		{
			predikat = 'B';
			cout << "Predikat : " << predikat << "\n";
		}
		if (nilai >= 70 && nilai <=79)
		{
			predikat = 'C';
			cout << "Predikat : " << predikat << "\n";
		}
		if (nilai >= 60 && nilai <=69)
		{
			predikat = 'D';
			cout << "Predikat : " << predikat << "\n";
		}
		if (nilai >= 0 && nilai <=59)
		{
			predikat = 'E';
			cout << "Predikat : " << predikat << "\n";
		}
		
	}
}

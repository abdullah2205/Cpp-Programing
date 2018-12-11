#include <iostream>
#include <iomanip>
using namespace std; 

int data[20], nilai[51];
char pilih, ulang; 

int main()
{
	cout << "		===================================\n";
	cout << "		|  PROGRAM RATA-RATA NILAI SISWA  |\n";
	cout << "		===================================\n";
	while (true)
	{
		int k=1, j=1, l=1, banyak, id_gan, id_gen;
		float rr=0, nilai_gen=0, nilai_gan=0;
		int i=1,y=1,x=1;
		float rr2=0, nilai_gen2=0, nilai_gan2=0;
		
		cout << "\nHitung Manual atau Otomatis? (m/o) : "; //hitung manual atau otomatis
		cin >> pilih;
		system("clear");
		if (pilih == 'm') //hitung manual
		{	
			cout << "Anda pilih Manual\n";
			cout << "\nMasukan banyak daftar ID (1-50) : " ;
			cin >> banyak; //juga berguna untuk pembagi seluruh nilai
			id_gen = banyak /2; //pembagi nilai genap
			id_gan = (banyak - 1) / 2 + 1; //pembagi nilai ganjil
//----------------------------------------------------------------------
			while (j<=banyak)
			{
				cout << "Masukan nilai ID ke-" << j << " : ";
				cin >> nilai[j];
				rr += nilai[j]; //menambahakan seluruh nilai id  berdasarkan inputan
				if (j%2 == 1)
				{
					nilai_gan += nilai[j]; //menambahkan nilai ganjil ke variable nilai_gan
				}
				else if (j%2 == 0)
				{
					nilai_gen += nilai[j]; //menambahkan nilai genap ke variable nilai_gen
				}
				j++;
			}
			system("clear");
//----------------------------------------------------------------------
			cout << "Anda pilih Manual\n"; 
			cout << "\n------------------------\n"; 
			cout << "|   ID\t | Nilai Ujian |\n";
			cout << "------------------------\n";
			while (k<=banyak) //output-an nilai yang dimasukan secara manual
			{
				printf("|  %i\t |%8i     |\n", k, nilai[k]);
				k++;
			}
			cout << "------------------------\n";
		
			cout << "\n==========================================================";
			cout << "\n Rata-rata nilai dari seluruh ID adalah " << setprecision(4) << rr/banyak;
			cout << "\n Rata-rata nilai dari ID Gasal adalah " << setprecision(4) << nilai_gan/id_gan;
			cout << "\n Rata-rata nilai dari ID Genap adalah " << setprecision(4) << nilai_gen/id_gen;
			cout << "\n Nilai ID yang lebih dari = 65 adalah ";
//----------------------------------------------------------------------
			while (l<=banyak) //nilai lebih dari 65 manual
			{
				if (nilai[l] >= 65)
				{
					cout << l << "| ";
				}
				l++;
			}
		cout << "\n==========================================================\n";
		}
//----------------------------------------------------------------------	
		
		if (pilih == 'o') //hitung otomatis
		{
			
			system("clear");
			data[1] = 65; data[2] = 65; data[3] = 70; data[4] = 95; 
			data[5] = 70; data[6] = 34; data[7] = 80; data[8] = 95;
			data[9] = 23; data[10] = 56; data[11] = 98; data[12] = 100;
			data[13] = 34; data[14] = 55; data[15] = 82; data[16] = 81;
			data[17] = 56; data[18] = 45; data[19] = 33; data[20] = 100;
//----------------------------------------------------------------------
			cout << "Anda pilih Otomatis\n"; //array berdasarkan nilai yang sudah di tentukan
			cout << "\n------------------------\n";
			cout << "|   ID\t | Nilai Ujian |\n";
			cout << "------------------------\n";
			while (i<=20)
			{
				printf("|  %i\t |%8i     |\n", i, data[i]);
				i++;
			}
			cout << "------------------------\n";
//----------------------------------------------------------------------			
			while (x<=20)
			{
				rr2 += data[x]; //menambahakan seluruh nilai id otomatis berdasarkan isi aray
				if (x%2 == 1)
				{
					nilai_gan2 += data[x]; //menambahkan nilai ganjil ke variable nilai_gan2
				}
				else if (x%2 == 0)
				{
					nilai_gen2 += data[x]; //menambahkan nilai genap ke variable nilai_gen2
				}
				x++;
			}	
			cout << "\n==========================================================";
			cout << "\n Rata-rata nilai dari seluruh ID adalah " << setprecision(4) << rr2/20;
			cout << "\n Rata-rata nilai dari ID Gasal adalah " << setprecision(4) << nilai_gan2/10;
			cout << "\n Rata-rata nilai dari ID Genap adalah " << setprecision(4) << nilai_gen2/10;
			cout << "\n Nilai ID yang lebih dari = 65 adalah ";
//----------------------------------------------------------------------
			while (y<=20) //nilai lebih dari 65 
			{
				if (data[y] >= 65)
				{
					cout << y << "| ";
				}
				y++;
			}
		cout << "\n==========================================================\n";
		}
//----------------------------------------------------------------------
	cout << "\nMau Ulangi? (y/t) : "; //jika akan mengulang
	cin >> ulang;
	if (ulang == 't')
	break;
	}
}

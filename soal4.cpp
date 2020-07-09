#include<math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n, i, ss, kdr, akar;
	cout <<"Masukan panjang sisi  : ";
	cin >>ss;
	cout <<"Berapa kali perkecilan : ";
	cin >>n;
	cout << "\n";
	
	for(i=0; i<n; i++)
	{
		ss = ss / 2;
		kdr = ss*ss;
		akar = sqrt(kdr + kdr);
		ss = akar;
		cout << "Perkecilan ke-"<< i+1 <<" : ";
		cout << setprecision(4) << ss <<"\n";
	}
}

#include <iostream>
using namespace std;

int main()
{	
	float j1, j2, b1, b2;
	int h1 = 3000;
	int h2 = 500;
	
	cout << "Masukan lama parkir (jam): "; 
	cin >> j1;
	cout << "\n";
	
	if (j1 < 2)
	{
		b1 = j1*h1;
		cout << "Lama parkir " << j1 <<" Jam, biaya " << b1;
	}
	
	else if (j1 > 1)
	{
		j2 = j1 - 1;
		b2 = (j2*h2)+h1;
		
		cout <<"Lama parkir " << j1 <<" Jam, biaya : " << b2;
	}
}

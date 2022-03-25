#include <iostream>
using namespace std;

int main() 
{
	int p,q,r,s,t,u,w,jumlah = 0;
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	
	cout << "OPERASI PENJUMLAHAN, PENGURANGAN, DAN PERKALIAN PADA MATRIKS \n\n" ;
	cout << "KETENTUAN (Ordo matriks x dan y harus diisi sama) \n\n" ;
	
	
	cout << "----- Input Data Matriks Kamu ----- " << endl;
	
	cout << "Masukkan Jumlah Baris Matriks X:  ";
	cin >> r;
	
	cout << "Masukkan Jumlah Kolom Matriks X:  ";
	cin >> s;

	cout << "Masukkan Jumlah Baris Matriks Y:  ";
	cin >> t;
	
	cout << "Masukkan Jumlah Kolom Matriks Y:  ";
	cin >> u;
	
	// isilah matriks x
    cout << "------------------------------------" << endl;
    cout << "Isilah elemen untuk Matriks X       " << endl;
    for(p=0;p<r;p++)
	{
        for(q=0;q<s;q++)
		{
			// isi nilai Matriks X lalu simpan ke var array x
            cout << "Nilai Matriks X ["<<p<<"]["<<q<<"] : ";cin>>matriks1[p][q]; 
        }
        cout <<	endl;
    }
    
    // Perintah menampilkan Matriks X
    cout << "Matriks X                           " << endl;
    for(p=0;p<r;p++)
	{
        for(q=0;q<s;q++){
            cout << matriks1[p][q]<<" "; //menampilkan matriks X dengan memanggil var array x
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
    
    
	// isilah matriks Y
	cout << "Isilah elemen untuk Matriks Y        " << endl;
    for(p=0;p<t;p++)
	{
        for(q=0;q<u;q++)
		{
            // isi nilai matriks Y simpan ke variable array y
			cout << "Nilai Matriks Y ["<<p<<"]["<<q<<"] : ";cin >>matriks2[p][q]; 
        }
        cout << endl;
    }

	// Perintah menampilkan Matriks Y
    cout << "Matriks Y 							 " << endl;
    for(p=0;p<t;p++)
	{
        for(q=0;q<u;q++){
            cout << matriks2[p][q]<<" "; //menampilkan matriks Y dengan memanggil var array y
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
    
    // Penjumlahan Matriks
	cout << "Hasil Penjumlahan Matriks X dan Y adalah: \n  ";
	for(p=0; p<r; p++)
	{
		for(q=0; q<s; q++){
			hasil[p][q] = matriks1[p][q] + matriks2[p][q];
			cout << hasil[p][q] << "\t";
		}
		cout << endl;
	}
	
	// Pengurangan Matriks
	cout << "Hasil Pengurangan Matriks X dan Y adalah: \n  ";
	for(p=0; p<r; p++)
	{
		for(q=0; q<s; q++){
			hasil[p][q] = matriks1[p][q] - matriks2[p][q];
			cout << hasil[p][q] << "\t";
		}
		cout << endl;
	}
	
	// Perkalian Matriks
	
	cout << "Hasil Perkalian Matriks X dan Y adalah  : \n  ";
	for(p=0; p<r; p++) 
	{
		for(q=0; q<u; q++) {
			for(w=0; w<t; w++) {
				jumlah = jumlah + matriks1[p][q] * matriks2[p][q];
			}
			hasil[p][q] = jumlah;
			jumlah = 0;
			
			for(p=0; p<r; p++) {
				for(q=0; q<s; q++){
					cout << hasil[p][q] << "\t ";
				}
				cout << endl;
			}
		}
	}	
}

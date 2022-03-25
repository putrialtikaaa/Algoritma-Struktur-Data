#include<iostream>
using namespace std;

int main() {
	
	int i,j,m,n,p,q,k,jumlah = 0;
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	
	cout<<"===== Input Data Matriks Kamu ===== "<<endl;
	
	cout<<"Masukkan jumlah baris matriks A: ";
	cin>> m;
	
	cout<<"Masukkan jumlah kolom matriks A: ";
	cin>> n;

	cout<<"Masukkan jumlah baris matriks B: ";
	cin>> p;
	
	cout<<"Masukkan jumlah kolom matriks B: ";
	cin>> q;
	
	//Memasukkan isi matriks
    cout<<"------------"<<endl;
    cout<<"Input elemen Matriks A"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Nilai ["<<i<<"] ["<<j<<"] : ";cin>>matriks1[i][j]; //input nilai matriks A simpan ke variable array a
        }
        cout<<endl;
    }
    
	
	cout<<"Input elemen Matriks B"<<endl;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<"Nilai ["<<i<<"] ["<<j<<"] : ";cin>>matriks2[i][j]; //input nilai matriks B simpan ke variable array b
        }
        cout<<endl;
    }
	
	//Menampilkan Matriks
	cout<<"Matriks Kamu : "<<endl;
    cout<<"------------"<<endl;
    cout<<"Matriks A "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<matriks1[i][j]<<" "; //tampilkan matriks A dengan memanggil variable array a
        }
        cout<<endl;
    }
   
    cout<<"Matriks B "<<endl;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<matriks2[i][j]<<" "; //tampilkan matriks B dengan memanggil variable array b
        }
        cout<<endl;
    }
    cout<<endl;
	
	//Penjumlahan Matriks
	cout<<"Hasil Penjumlahan matriks: \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			hasil[i][j] = matriks1[i][j] + matriks2[i][j];
			cout<< hasil[i][j] << "\t";
		}
		cout<<endl;
	}
	
	//Pengurangan Matriks
	cout<<"Hasil Pengurangan matriks: \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];
			cout<< hasil[i][j] << "\t";
		}
		cout<<endl;
	}
	
	//Perkalian Matriks
	cout<< "Hasil Perkalian matriks: \n";
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				for(k=0; k<p; k++){
					jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
				}
				hasil[i][j] = jumlah;
				jumlah = 0;
					}
				}
				
				for(i=0; i<m; i++) 
				{
					for(j=0; j<n; j++)
					{
						cout<< hasil[i][j] << "\t";
					}
					cout<<endl;
				}
			}
		}
}

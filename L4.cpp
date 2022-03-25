#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int polinom1[100]; int polinom2[100]; int polinom3[100];
  
  int i1;     int p=0;
  int maxP1;
  
  cout << "KETENTUAN !!! n" << endl;
  cout << "=> P1 : Persamaan1 " << endl;
  cout << "=> P2 : Persamaan2 " << endl;
  cout << "=> P3 : Persamaan3 " << endl << endl;
  cout << "*******************************************************************************" << endl;
  cout << "                   OPERASI ARITMATIKA POLINOM DASAR  \n\n";
  cout << "*******************************************************************************" << endl;
   
  cout << "Isilah Batas Polinom  Persamaan 1  = "; cin >> maxP1;
  
  for(i1=0 ; i1<=maxP1-1 ; i1++)
  {
  	cout << "-Isilah Nilai Koeffisien Polinom X^" << p << " = " ;
  	cin  >> polinom1[i1]; p++; 
  }
  	
  cout << "Maka Nilai Persamaan 1 ialah : " << endl;
  
  for(i1=maxP1-1 ; i1>=0 ; i1--)
  {
  	p--; cout << " + ("<<polinom1[i1]<<"X^"<<p<<")"; 
  }
  
  for(;maxP1<=11; maxP1++)
  { 
  	polinom1[maxP1]=0;
  }    

  int i2 ; p=0;
  do 
  {
  	cout << "\n\nIsilah Batas Polinom  Persamaan 2 = " ; cin >> maxP1;  
  }
  while(maxP1>11);
  	
  for(i2=0 ; i2<=maxP1-1 ; i2++)
  {
	cout << "-Isilah Nilai Koeffisien Polinom X^" << p << " = " ;
  	cin  >> polinom2[i2]; p++;
  }
  cout << "Maka Nilai Persamaan 2 ialah : ";
  
  for(i2=maxP1-1 ; i2>=0 ; i2--)
  {
  	p--; cout << " + ("<<polinom2[i2]<<"X^"<<p<<")"; 
  }
  
  for(; maxP1<=11; maxP1++ )
  {    
  	polinom2[maxP1]=0; 
  }

  int i3; p=0;
  do 
  {
  	cout << "\n\nIsilah Batas Polinom  Persamaan 3  = " ; cin >> maxP1;   
  }
  while(maxP1>11);
  
  for(i3=0 ; i3<=maxP1-1 ; i3++)
  {
	cout << "-Isilah Nilai Koeffisien Polinom X^" <<p<< " = " ;
  	cin>>polinom3[i3]; p++;
  }
  	cout << "Maka Nilai Persamaan 3 ialah : ";
  	
  for(i3=maxP1-1 ; i3>=0 ; i3--)
  {
  	p--; cout <<" + ("<<polinom3[i3]<<"X^"<<p<<")"; 
  }
  
  for(;maxP1<=11; maxP1++)
  { 
  	polinom3[maxP1]=0;
  }

  cout <<"\n\n*******************************************************************************";
  cout << "\n Hasil EMPAT OPERASI ARITMATIKA dasar antara lain : ";
  cout <<"\n*******************************************************************************";
  
  cout <<"\n\n(Penjumlahan) \n";
  cout <<" P1 + P2  =  "<<polinom1[10]           << "x^10 + "<<polinom1[9]+polinom2[9]<<"x^9 + "
                        <<polinom1[8]+polinom2[8]<< "x^8 + " <<polinom1[7]+polinom2[7]<<"x^7 + "
                        <<polinom1[6]+polinom2[6]<< "x^6 + " <<polinom1[5]+polinom2[5]<<"x^5 + "
                        <<polinom1[4]+polinom2[4]<< "x^4 + " <<polinom1[3]+polinom2[3]<<"x^3 + \n"
                        <<polinom1[2]+polinom2[2]<< "x^2 + " <<polinom1[1]+polinom2[1]<<"x^1 + "
                        <<polinom1[0]+polinom2[0]<< "x^0 ";

  cout <<"\n\n(Pengurangan) \n";
  cout <<" P1 + P2  =  "<<polinom1[10]           <<"x^10 + "<<polinom1[9]-polinom2[9]<<"x^9 + "
                        <<polinom1[8]-polinom2[8]<<"x^8 + " <<polinom1[7]-polinom2[7]<<"x^7 + "
                        <<polinom1[6]-polinom2[6]<<"x^6 + " <<polinom1[5]-polinom2[5]<<"x^5 + "
                        <<polinom1[4]-polinom2[4]<<"x^4 + " <<polinom1[3]-polinom2[3]<<"x^3 + \n"
                        <<polinom1[2]-polinom2[2]<<"x^2 + " <<polinom1[1]-polinom2[1]<<"x^1 + "
                        <<polinom1[0]-polinom2[0]<<"x^0 ";

  cout <<"\n\n()Perkalian) \n";
  cout <<" P1 * P3  =  "<<polinom1[10]*polinom3[1]<<"x^11 + "<<polinom1[9]*polinom3[1]<<"x^10+ "
                        <<polinom1[8]*polinom3[1]<<"x^9 + " <<polinom1[7]*polinom3[1]<<"x^8 + "
                        <<polinom1[6]*polinom3[1]<<"x^7 + " <<polinom1[5]*polinom3[1]<<"x^6 + "
                        <<polinom1[4]*polinom3[1]<<"x^5 + " <<polinom1[3]*polinom3[1]<<"x^4 + \n"
                        <<polinom1[2]*polinom3[1]<<"x^3 + " <<polinom1[1]*polinom3[1]<<"x^2 + "
                        <<polinom1[0]*polinom3[1]<<"x^1 "
                        
				        <<polinom1[10]*polinom3[0]<<"x^10 + "<<polinom1[9]*polinom3[0]<<"x^9 + "
				        <<polinom1[8]*polinom3[0]<<"x^8 +\n "<<polinom1[7]*polinom3[0]<<"x^7 + "
				        <<polinom1[6]*polinom3[0]<<"x^6 + "  <<polinom1[5]*polinom3[0]<<"x^5 + "
				        <<polinom1[4]*polinom3[0]<<"x^4 + "  <<polinom1[3]*polinom3[0]<<"x^3 + "
				        <<polinom1[2]*polinom3[0]<<"x^2 + "  <<polinom1[1]*polinom3[0]<<"x^1 + \n"
				        <<polinom1[0]*polinom3[0]<<"x^0 ";

  cout <<"\n\n(Turunan) \n";
  cout <<" P2    =  "	<<polinom2[9]*9<<"x^8 + "
				        <<polinom2[8]*8<<"x^7 + "<<polinom2[7]*7<<"x^6 + "
				        <<polinom2[6]*6<<"x^5 + "<<polinom2[5]*5<<"x^4 + "
				        <<polinom2[4]*4<<"x^3 + "<<polinom2[3]*3<<"x^2 + \n"
				        <<polinom2[2]*2<<"x^1 + "<<polinom2[1]*1<<"x^0 + ";
				                
  cin.get();
  return 0;				                
}

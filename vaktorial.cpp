#include <iostream>
using namespace std;
//variable global
  int B;
//prototype disimpan diatas agar semua dapat mengetahui ada nya program pemfaktoran untuk dipanggil
int pemfaktoran (int B);
//Program Utama
int main () {
    cout << "MASUKAN ANGKA YANG AKAN DI FAKTORKAN:"; cin >> B;//inputan angka yang akan di faktorialkan
  cout << "Hasil Faktorial dari "<<B<<" adalah: "<<endl;
  cout << "~~~"<<pemfaktoran(B)<<"~~~"<<endl;//memanggil program dibawah
  cout <<"••••••••••••••••••••TERIMAKASIH°°°°°°°°°°°°°°°°°°°°";
return 0;
}
//program faktorial
int pemfaktoran (int B) {
  int A=1;
  for (int c=B;c!=0;c--) {
    cout << c;
    A=A*c; //perkalian
    if (c!=1)
    cout << "X";
    else cout << "=";
}
return A;
}
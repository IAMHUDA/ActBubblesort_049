

#include <iostream>
using namespace std;


int a[20];        //deklarasi array a dengan ukuran 20
int n;            //deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {    //method untuk input
	while (true) {  //looping
		cout << "masukan banyaknya elemen pada array : ";  //output ke layar 
		cin >> n;  //input dari pengguna
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break;  //keluar dari loop 
		else {
			cout << "\narray dapat mempunyai maksimal 20 elemen .\n";  //output ke layar
		}
	}
	cout << endl;   //output baris kosong
	cout << "==================" << endl; //output ke layar
	cout << "masukan elemen array" << endl; //output ke layar
	cout << "==================" << endl; //output ke layar


	for (int i = 0; i < n; i++) {  //looping dengan i dimulai dari 0
		cout << "Data ke-" << (i + 1) << ": ";   //output ke layar 
		cin >> a[i];   //input dari pengguna
		
	}
}
void display() {  //method untuk menampilkan hasil
	cout << endl;  //output baris kosong
	cout << "==================" << endl;  //output ke layar
	cout << "elemen array yang telah tersusun " << endl;    // output ke layar
	cout << "==================" << endl;    // output ke layar
	for (int j = 0; j < n; j++) {     //looping dengan j dimalai dari 0 hinngga n 1
		cout << a[j] << endl;        //output ke layar
	}
	cout << endl;    //output baris kosong
}

void bubbleSortArray() {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {

	input();
	bubbleSortArray();
	display();
	return 0;
}
// 1.	int angka = 7
//		char huruf = m
//		string = negara
// 
// 2.	#include <iostream>
//		using namespace std;
// 
//      int main() {
//		int nilai = 75;
// 
//		Conditional statement if
// 
//		if (nilai >= 60) {
//          cout << "Anda lulus!" << endl;
//		}
//
//		Conditional statement if-else
// 
//		if (nilai >= 60) {
//          cout << "Anda lulus!" << endl;
//		}
//		else {
//          cout << "Anda belum lulus." << endl;
//		}
// 
// 3.	#include <iostream>
//		using namespace std;
//
//		struct DetailAlamat {
//		string kabupaten;
//		string kota;
//		};
//
//		struct Mahasiswa {
//		string nim;
//		string nama;
//		DetailAlamat alamat;
//		int umur;
//		};
//		int main() {
//		Mahasiswa mhs[3];
//		for (int i = 0; i < 3; i++) {
//			cout << "Data ke-" << (i + 1) << ":" << endl;
//			cout << "Nomor Mahasiswa :";
//			cin >> mhs[i].nim;
//			cout << "Nama Mahasiswa : ";
//			cin >> mhs[i].nama;
//
//			cout << "Alamat Mahasiswa : " << endl;
//			cout << "\t Nama kabupaten : ";
//			cin >> mhs[i].alamat.kabupaten;
//			cout << "\t Nama Kota : ";
//			cin >> mhs[i].alamat.kota;
//			cout << "Umur Mahasiswa : ";
//			cin >> mhs[i].umur;
//			cin.ignore(1, '\n');
//			cout << endl;
//		}
//		for (int i = 0; i < 3; i++) {
//			cout << endl;
//			cout << "Data Mahasiswa Ke-" << (i + 1) << ":" << endl;
//			cout << "\n NIM : " << mhs[i].nim;
//			cout << "\n Nama :" << mhs[i].nama;
//			cout << "\n Alamat : ";
//			cout << "\n \t Desa : " << mhs[i].alamat.kabupaten;
//			cout << "\n \t Kota : " << mhs[i].alamat.kota;
//			cout << "\n Umur : " << mhs[i].umur;
//			cout << endl;
//			}
//
//4.        #include <iostream>
//          using namespace std;
//
//          string name;
//          int nVario, nBeat, nNmax, nPCX, nAerox;
//          int hVario = 25, hBeat = 17, hNmax = 30, hPCX = 35, hAerox = 32;
//
//          void input() {
//              cout << "Nama Pembeli : ";
//              cin >> name;
//              cout << "Jumlah Vario : ";
//              cin >> nVario;
//
//              cout << "Jumlah Beat : ";
//              cin >> nBeat;
//
//              cout << "Jumlah Nmax : ";
//              cin >> nNmax;
//
//              cout << "Jumlah PCX : ";
//              cin >> nPCX;
//
//              cout << "Jumlah Aerox : ";
//              cin >> nAerox;
//
//          }
//
//          int TotalHarga() {
//          return (nVario * hVario) + (nBeat * hBeat) + (nNmax * hNmax) + (nPCX * hPCX) + (nAerox * hAerox);
//
//          }
//
//          void Display() {
//          cout << "Total Harga : " << TotalHarga() << endl;
//
//          }
//
//          int main() {
//          input();
//			Display();
//			}
// 
//5.        #include <iostream>
//          using namespace std;
//
//          int main() {
//            char pilihan;
//
//            do {
//                cout << "Berangkat ambil laundry" << endl;
//                cout << "Antri laundry" << endl;
//                cout << "Ambil laundry" << endl;
//                cout << "Apakah mau antri kembali" << endl;
//                cin >> pilihan;
//            }
//
//            while (pilihan == 'y' || pilihan == 'y');
//            }
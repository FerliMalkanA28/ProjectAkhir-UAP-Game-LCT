// Project Cerdas Cermat

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void poin_a (char jawab){
	int isi = 0;
	if (jawab == 'a'){
		isi = isi + 10;
	}
	else {
		isi = isi + 0;
	}
}

void poin_b (char jawab){
	int isi = 0;
	if (jawab == 'b'){
		isi = isi + 10;
	}
	else {
		isi = isi + 0;
	}
}

void poin_c (char jawab){
	int isi = 0;
	if (jawab == 'c'){
		isi = isi + 10;
	}
	else {
		isi = isi + 0;
	}
}

int main()
{
	// Deklarasi seluruh variabel
	int a, b, c, hasil;
	char mulai, jawaban;
	int isi = 0;
	
	
	// Halaman Awal
	cout << "=================================== \n";	
	cout << "Selamat Datang di Game LCT Komputer \n";
	cout << "=================================== \n";
	
	cout << endl << endl << endl;
	
	cout << "Bukan hanya tentang keseruan, tapi juga \n";
	cout << "tentang kebermanfaatan. \n";
	
	cout << endl << endl;
	
	cout << "- Ferli Malkan Amien (2117051050) - \n";
	cout << "- Ahmad Irvandi (21170510--) -" << endl << endl;
	
	cout << "Mulai (y/n): ";
	cin  >> mulai;
	
	if (mulai == 'y' || mulai == 'Y'){
		system("CLS");
		
		cout << "Peraturan Permainan: ";
		cout << "1. Dilarang bekerja sama \n";
		cout << "2. Dilarang joki \n";
		cout << "3. Diperbolehkan menggunakan google" << endl << endl;
		
		cout << "- Press any key to continue -";
		getch();
		system("CLS");
		
		// Soal Nomor 1
		cout << "1. Kepanjangan dari CPU adalah....  " << endl;
		cout << "a. Centaur Processing Utility" << endl;
		cout << "b. Central Processing Unit" << endl;
		cout << "c. Central Process Utility" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_b(jawaban);
		
		cout << endl << endl;
		
		// Soal Nomor 2
		cout << "2. Waktu akses pada RAM adalah waktu yang dibutuhkan untuk melakukan.... " << endl;
		cout << "a. Operasi baca " << endl;
		cout << "b. Operasi tulis" << endl;
		cout << "c. Operasi baca atau tulis" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_c(jawaban);
		
		cout << endl << endl;
		
		//Soal Nomor 3
		cout << "3. Bagian dari CPU yang berfungsi menghubungkan seluruh bagian dari CPU adalah ...." << endl;
		cout << "a. Cpu interconnection" << endl;
		cout << "b. Arithmetic and logic unit" << endl;
		cout << "c. Control unit" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_a(jawaban);
		
		cout << endl << endl;
		
		//Soal Nomor 4
		cout << "4. Port yang digunakan untuk menambahkan perangkat-perangkat seperti VGA card, audio card, LAN card, dan firewire adalah...." << endl;
		cout << "a. Port USB" << endl;
		cout << "b. Port ekspansi" << endl;
		cout << "c. Port serial" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_b(jawaban);
		
		cout << endl << endl;
		
		//Soal Nomor 5
		cout << "5. Versi pertama Microsoft Windows, yang disebut dengan Windows1.0 dirilis pada tanggal..." << endl;
		cout << "a. 18 januari 1984" << endl;
		cout << "b. 19 maret 1983" << endl;
		cout << "c. 20 november 1985" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_c(jawaban);
		
		cout << endl << endl;
		
		//Soal Nomor 6
		cout << "6. Alamat-alamat dalam halaman web dikenal dengan nama..." << endl;
		cout << "a. IP" << endl;
		cout << "b. URL" << endl;
		cout << "c. HTTP" << endl;
		cout << "Jawab : ";
		cin  >> jawaban;
		
		poin_b(jawaban);
		
		cout << endl << endl;
		
		
		getch(); 
	}
	
	else{
		exit(0);
	}
	
	
	return 0;
	
	
	
}

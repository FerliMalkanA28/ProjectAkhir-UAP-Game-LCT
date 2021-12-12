// Project Cerdas Cermat

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int Kalkulasi(int x) {
  return 2 * x;
}

int main(){
	// Deklarasi seluruh variabel
	int a, b, c, Nilai_Akhir, poin_1, poin_2, poin_3, poin_4, poin_5, poin_6, poin_7, poin_8, poin_9, poin_10;
	char mulai, jawaban, ulang;
	int Nilai = 0;
	int Poin_Jawaban[10];
	
	do{
		
		system("CLS");
		
		// Halaman Awal
		cout << "======================================= \n";	
		cout << "  Selamat Datang di Game LCT Komputer   \n";
		cout << "======================================= \n";
		
		cout << endl << endl;
		
		cout << "Bukan hanya tentang keseruan, tapi juga \n";
		cout << "tentang kebermanfaatan. \n";
		
		cout << endl << endl;
		
		cout << "- Ferli Malkan Amien \t (2117051050) - \n";
		cout << "- Ahmad Irvandi \t (2117051089) -" << endl << endl;
		
		cout << " \t Mulai (y/n): ";
		cin  >> mulai;
		
		if (mulai == 'y' || mulai == 'Y'){
			system("CLS");
			
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "Peraturan Permainan: \n";
			cout << "1. Dilarang bekerja sama \n";
			cout << "2. Dilarang melakukan praktik joki \n";
			cout << "3. Diperbolehkan menggunakan Google \n";
			cout << "4. Setiap jawaban benar diberi poin + \n";
			cout << "   (range 1 - 10) sesuai dengan level soal \n";
			cout << "5. Setiap jawaban salah poin -5" << endl << endl;
			
			cout << " \t - Press any key to continue -";
			getch();
			system("CLS");
			
			// Soal Nomor 1
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "1. Kepanjangan dari CPU adalah....  " << endl;
			cout << "a. Centaur Processing Utility" << endl;
			cout << "b. Central Processing Unit" << endl;
			cout << "c. Central Process Utility" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;
			
			if (jawaban == 'b' || jawaban == 'B'){
				poin_1 = 3;
			} else{
				poin_1 = 0;
			}
			
			Poin_Jawaban[0] = poin_1;
			system("CLS");
			
			
			// Soal Nomor 2
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "2. Waktu akses pada RAM adalah waktu yang dibutuhkan untuk melakukan.... " << endl;
			cout << "a. Operasi baca " << endl;
			cout << "b. Operasi tulis" << endl;
			cout << "c. Operasi baca atau tulis" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;
			
			if (jawaban == 'c' || jawaban == 'C'){
				poin_2 = 4;
			} else{
				poin_2 = 0;
			}

			Poin_Jawaban[1] = poin_2;
			system("CLS");
			
			//Soal Nomor 3
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "3. Bagian dari CPU yang berfungsi menghubungkan seluruh bagian dari CPU adalah ...." << endl;
			cout << "a. CPU interconnection" << endl;
			cout << "b. Arithmetic and logic unit" << endl;
			cout << "c. Control unit" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'a' || jawaban == 'A'){
				poin_3 = 10;
			} else{
				poin_3 = 0;
			}

			Poin_Jawaban[2] = poin_3;
			system("CLS");
			
			
			//Soal Nomor 4
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "4. Port yang digunakan untuk menambahkan perangkat-perangkat \n";
			cout << "   seperti VGA card, audio card, LAN card, dan firewire adalah...." << endl;
			cout << "a. Port USB" << endl;
			cout << "b. Port ekspansi" << endl;
			cout << "c. Port serial" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'b' || jawaban == 'B'){
				poin_4 = 8;
			} else{
				poin_4 = 0;
			}

			Poin_Jawaban[3] = poin_4;
			system("CLS");
			
			
			//Soal Nomor 5
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "5. Versi pertama Microsoft Windows, yang disebut dengan \n";
			cout << "   Windows 1.0 dirilis pada tanggal..." << endl;
			cout << "a. 18 Januari 1984" << endl;
			cout << "b. 19 Maret 1983" << endl;
			cout << "c. 20 November 1985" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'c' || jawaban == 'C'){
				poin_5 = 7;
			} else{
				poin_5 = 0;
			}

			Poin_Jawaban[4] = poin_5;
			system("CLS");
			
			
			//Soal Nomor 6
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "6. Alamat-alamat dalam halaman web dikenal dengan nama..." << endl;
			cout << "a. IP" << endl;
			cout << "b. URL" << endl;
			cout << "c. HTTP" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'b' || jawaban == 'B'){
				poin_6 = 5;
			} else{
				poin_6 = 0;
			}

			Poin_Jawaban[5] = poin_6;
			system("CLS");
			
			
			//Soal Nomor 7
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "7. Biner 1101 jika dikonversikan ke dalam bentuk \n";
			cout << "   desimal akan bernilai...." << endl;
			cout << "a. 13" << endl;
			cout << "b. 9" << endl;
			cout << "c. 5" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'a' || jawaban == 'A'){
				poin_7 = 2;
			} else{
				poin_7 = 0;
			}

			Poin_Jawaban[6] = poin_7;
			system("CLS");
			
			
			//Soal Nomor 8
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "8. Game yang dikembangkan oleh MiHoYo yang mengadaptasi  \n" ;
			cout << "   gaya grafis anime yang pada saat ini menjadi salah satu \n";
			cout << "   game yang terlaris di dunia bernama... " << endl;
			cout << "a. Valorant" << endl;
			cout << "b. Genshin Impact" << endl;
			cout << "c. Zuma" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'b' || jawaban =='B'){
				poin_8 = 6;
			} else{
				poin_8 = 0;
			}

			Poin_Jawaban[7] = poin_8;
			system("CLS");
			
			
			//Soal Nomor 9
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "8. Sebutan bagi fitur lampu warna warni yang terdapat  \n" ;
			cout << "   pada periferal elektronik dan dapat di atur kecepatan, \n";
			cout << "   kecerahan, warna, maupun animasinya adalah... " << endl;
			cout << "a. LCT" << endl;
			cout << "b. LED" << endl;
			cout << "c. RGB" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'c' || jawaban == 'C'){
				poin_9 = 2;
			} else{
				poin_9 = 0;
			}

			Poin_Jawaban[8] = poin_9;
			system("CLS");
			
			
			//Soal Nomor 10
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			cout << "10. Series gaming yang dikeluarkan oleh HP yang mana pada  \n" ;
			cout << "    tahun 2020 lalu mengalami perubahan logo yang semula \n";
			cout << "    kompleks menjadi lebih simple memiliki nama... " << endl;
			cout << "a. ROG" << endl;
			cout << "b. OMEN" << endl;
			cout << "c. LEGION" << endl;
			cout << "Jawab : ";
			cin  >> jawaban;

			if (jawaban == 'b' || jawaban == 'B'){
				poin_10 = 3;
			} else{
				poin_10 = 0;
			}

			Poin_Jawaban[9] = poin_10;
			system("CLS");
			
			
			//looping kalkulasi nilai akhir
    			for(int i = 0; i < 10; i++) {
        			Nilai += Poin_Jawaban[i];
    			}
			
			Nilai_Akhir = Kalkulasi(Nilai);
			
			
			// Output Nilai dan kata kata motivasi
			cout << "======================================= \n";	
			cout << "           Game LCT Komputer            \n";
			cout << "======================================= \n";
			
			if (Nilai_Akhir == 100){
				cout << "Nilai kamu adalah : " << Nilai_Akhir << endl;
				cout << "Tingkatkan prestasimu!!" << endl;
			} 
			else if (Nilai_Akhir < 100 && Nilai_Akhir > 50){
				cout << "Nilai kamu adalah : " << Nilai_Akhir << endl;
				cout << "Kamu pasti bisa mendapat 100, sedikit lagi!!" << endl;
			}
			else {
				cout << "Nilai kamu adalah : " << Nilai_Akhir << endl;
				cout << "Terus semangat yaa belajarnya, Kamu pasti bisa!!" << endl;
			}
			
			
			// Opsi mengulangi program atau tidak
	        cout << endl;
	        cout << "Apakah Anda ingin menggunakan program ini kembali? \n";
			cout << "(Input 'Y' atau 'y' jika ingin menggunakan kembali) :  ";
	        cin  >> ulang;
		}
		
		else{
			system("CLS");
			cout << "Terima kasih telah menggunakan program ini! \n\n";
			cout << "- Press any key to exit -";
			getch();
			system("CLS");
			exit(0);
		}
	} 
	
	while (ulang == 'y' || ulang == 'Y');	
	
	system("CLS");
	cout << "\n Terima kasih telah menggunakan program ini! \n\n";
	cout << "- Press any key to exit -";
	getch();
	system("CLS");
	exit(0);
			
	return 0;
	
}

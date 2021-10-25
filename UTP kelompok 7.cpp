#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void timer(){
	int x;
	for (x=7; x>=0; x--){
		cout<<"=== Loading ===";
		Sleep(200);
		system("cls");
		cout<<"== Loading ==";
		Sleep(200);
		system("cls");
		cout<<"= Loading =";
		Sleep(200);
		system("cls");
	}
}

void load(){
	int y;
	for (y=7; y>=0; y--){
		cout<<"=== Mengecek Status Jarak ===";
		Sleep(200);
		system("cls");
		cout<<"== Mengecek Status Jarak ==";
		Sleep(200);
		system("cls");
		cout<<"= Mengecek Status Jarak =";
		Sleep(200);
		system("cls");
	}
}

void judul(){
	system ("color A");
	cout<<"Selamat Datang di Kurir Dalam Negeri\n";
	cout<<"Silahkan Pilih Menu:\n";
	cout<<"1. Antar Paket\n";
	cout<<"2. Keluar\n";
	cout<<"Tekan Angka: ";
}


int main (){
	
	judul();
	int angka, acak;;
	float berat, total, kembalian;
	string nama, nama_tujuan;
	string alamat, alamat_tujuan;
	string kode_alamat[5] = {"a. Kode 1 = Rp.10000",
							 "b. Kode 2 = Rp.15000",
							 "c. Kode 3 = Rp.20000",
							 "d. Kode 4 = Rp.25000",
							 "e. Kode 5 = Rp.30000"}; 
	int ongkir[5]= {10000, 15000, 20000, 25000, 30000}; // ongkir [0]-[4]
	int pilih[5]={1,2,3,4,5};
	cin>>angka;
	cin.ignore (1,'\n');
	system ("cls");
	
	if (angka==1){
		system ("color 7");
		cout<<"    Selamat Datang Silahkan Lengkapi Data di Bawah \n";
		cout<<"=========================================================\n";
		cout<<"Masukan Nama Pengirim: "; 
		getline (cin,nama);
		cout<<"Masukan Alamat Pengirim: ";
		getline (cin,alamat);
		cout<<"\n";
		
		cout<<"Masukan Nama Tujuan: ";
		getline (cin, nama_tujuan);
		cout<<"Masukan Alamat Tujuan: ";
		getline (cin, alamat_tujuan);
		cout<<"\n";
		
		cout<<"Masukan Berat(Kg): ";
		cin>>berat;
		system("cls");
		if (berat>0 && berat<=15){
		
		load();
		srand(time(NULL));
		acak= rand()%11;
		if (acak>0 && acak<=2){
			cout<<"Jarak Wilayah(km): "<<acak<<"\n";
			cout<< "Wilayah anda Memasuki Kode Wilayah: "<<pilih[0];
			getch();
			system("cls");
			
		} else if (acak>2 && acak<=4){
			cout<<"Jarak Wilayah(km): "<<acak<<"\n";
			cout<< "Wilayah anda Memasuki Kode Wilayah: "<<pilih[1];
			getch();
			system("cls");
			
		} else if (acak>4 && acak<=6){
			cout<<"Jarak Wilayah(km): "<<acak<<"\n";
			cout<< "Wilayah anda Memasuki Kode Wilayah: "<<pilih[2];
			getch();
			system("cls");
			
		} else if (acak>6 && acak<=8){
			cout<<"Jarak Wilayah(km): "<<acak<<"\n";
			cout<< "Wilayah anda Memasuki Kode Wilayah: "<<pilih[3];
			getch();
			system("cls");
			
		} else if (acak>8 && acak<=10){
			cout<<"Jarak Wilayah(km): "<<acak<<"\n";
			cout<< "Wilayah anda Memasuki Kode Wilayah: "<<pilih[4];
			getch();
			system("cls");	
		}
		cout<<"Ongkir Bedasarkan Kode Alamat\n";	
		cout<<"Masukan Kode Alamat:\n";
		for (int i=0; i<=4;i++){
			cout<<kode_alamat[i]<<"\n";
		}
		cout<<"Masukan Kode: ";
		cin>>angka;
		system ("cls");
		
		if (angka==pilih[0] && acak>0 && acak<=2){
			system ("color F");
			total= berat * ongkir[0];
			cout<<"Total Harga: Rp."<<total<<"\n";
			cout<<"Masukan Uang Pembayaran: Rp.";
			cin>>angka;
			system("cls");
			
			if (angka >= total){
				
			timer();
			cout<<"=========STRUK ANDA=========\n";
			cout<<"Nama Pengirim: "<<nama<<"\n";
			cout<<"Alamat Pengirim: "<<alamat<<"\n";
			cout<<"Nama Tujuan: "<<nama_tujuan<<"\n";
			cout<<"Alamat Tujuan: "<<alamat_tujuan<<"\n\n";
			cout<<"=============================="<<"\n";
			cout<<"Total Harga: Rp. "<<total<<"\n";
			cout<<"Pembayaran: Rp.  "<<angka<<"\n\n";
			cout<<"============================"<<"\n";
			kembalian = angka-total;
			cout<<"Total kembalian: Rp "<<kembalian << "\n";
			getch();
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Jasa Ini";
			getch();
			system ("cls");
			main();
				
			} else {
				cout<<"Uang Anda Tidak Mencukupi";
				getch();
				system("cls");
				main();
			}
			
		
		} else if (angka==pilih[1] && acak>2 && acak<=4){
			system ("color F");
			total= berat * ongkir[1];
			cout<<"Total Harga: Rp."<<total<<"\n";
			cout<<"Masukan Uang Pembayaran: Rp.";
			cin>>angka;
			system("cls");
			
			if (angka >=total){
				
			timer();
			cout<<"=========STRUK ANDA=========\n";
			cout<<"Nama Pengirim: "<<nama<<"\n";
			cout<<"Alamat Pengirim: "<<alamat<<"\n";
			cout<<"Nama Tujuan: "<<nama_tujuan<<"\n";
			cout<<"Alamat Tujuan: "<<alamat_tujuan<<"\n\n";
			cout<<"=============================="<<"\n";
			cout<<"Total Harga: Rp. "<<total<<"\n";
			cout<<"Pembayaran: Rp.  "<<angka<<"\n\n";
			cout<<"============================"<<"\n";
			kembalian = angka-total;
			cout<<"Total kembalian: Rp "<<kembalian << "\n";
			getch();
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Jasa Ini";
			getch();
			system ("cls");
			main();
			
			} else {
				cout<<"Uang Anda Tidak Mencukupi";
				getch();
				system("cls");
				main();
			}
	
			
		} else if (angka==pilih[2] && acak>4 && acak<=6){
			system ("color F");
			total= berat * ongkir[2];
			cout<<"Total Harga: Rp."<<total<<"\n";
			cout<<"Masukan Uang Pembayaran: Rp.";
			cin>>angka;
			system("cls");
		
			if (angka >=total){
				
			timer();
			cout<<"=========STRUK ANDA=========\n";
			cout<<"Nama Pengirim: "<<nama<<"\n";
			cout<<"Alamat Pengirim: "<<alamat<<"\n";
			cout<<"Nama Tujuan: "<<nama_tujuan<<"\n";
			cout<<"Alamat Tujuan: "<<alamat_tujuan<<"\n\n";
			cout<<"=============================="<<"\n";
			cout<<"Total Harga: Rp. "<<total<<"\n";
			cout<<"Pembayaran: Rp.  "<<angka<<"\n\n";
			cout<<"============================"<<"\n";
			kembalian = angka-total;
			cout<<"Total kembalian: Rp "<<kembalian << "\n";
			getch();
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Jasa Ini";
			getch();
			system ("cls");
			main();
			
			}else {
				cout<<"Uang Anda Tidak Mencukupi";
				getch();
				system("cls");
				main();
			}
		
			
		} else if (angka==pilih[3] && acak>6 && acak<=8){
			system ("color F");
			total= berat * ongkir[3];
			cout<<"Total Harga: Rp."<<total<<"\n";
			cout<<"Masukan Uang Pembayaran: Rp.";
			cin>>angka;
			system("cls");
			
			if (angka >=total){
				
			timer();
			cout<<"=========STRUK ANDA=========\n";
			cout<<"Nama Pengirim: "<<nama<<"\n";
			cout<<"Alamat Pengirim: "<<alamat<<"\n";
			cout<<"Nama Tujuan: "<<nama_tujuan<<"\n";
			cout<<"Alamat Tujuan: "<<alamat_tujuan<<"\n\n";
			cout<<"=============================="<<"\n";
			cout<<"Total Harga: Rp. "<<total<<"\n";
			cout<<"Pembayaran: Rp.  "<<angka<<"\n\n";
			cout<<"============================"<<"\n";
			kembalian = angka-total;
			cout<<"Total kembalian: Rp "<<kembalian << "\n";
			getch();
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Jasa Ini";
			getch();
			system ("cls");
			main();
			
			}else {
				cout<<"Uang Anda Tidak Mencukupi";
				getch();
				system("cls");
				main();
			}
			
		} else if (angka==pilih[4] && acak>8 && acak<=10){
			system ("color F");
			total= berat * ongkir[4];
			cout<<"Total Harga: Rp."<<total<<"\n";
			cout<<"Masukan Uang Pembayaran: Rp.";
			cin>>angka;
			system("cls");
			
			if (angka >=total){
				
			timer();
			cout<<"=========STRUK ANDA=========\n";
			cout<<"Nama Pengirim: "<<nama<<"\n";
			cout<<"Alamat Pengirim: "<<alamat<<"\n";
			cout<<"Nama Tujuan: "<<nama_tujuan<<"\n";
			cout<<"Alamat Tujuan: "<<alamat_tujuan<<"\n\n";
			cout<<"=============================="<<"\n";
			cout<<"Total Harga: Rp. "<<total<<"\n";
			cout<<"Pembayaran: Rp.  "<<angka<<"\n\n";
			cout<<"============================"<<"\n";
			kembalian = angka-total;
			cout<<"Total Kembalian: Rp "<<kembalian << "\n";
			getch();
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Jasa Ini";
			getch();
			system ("cls");
			main();
			
			}else {
				cout<<"Uang Anda Tidak Mencukupi";
				getch();
				system("cls");
				main();
			}
			
		} else {
			system ("color 4");
			cout<<"=== WARNING! ===\n";
			cout<<"Maaf Kode Tujuan Anda Tidak Tersedia";
			getch();
			system("cls");
			main();
		}
		
      	} else{
      	cout<<"Maaf Kami tidak Menerima Pesanan lebih dari 15 Kg\n";
		cout<<"Pesanan Terlalu Berat!";
		getch();
		system("cls");
		main();
		
	  	}

	} else{
		system ("color F");
		cout<<"Terima Kasih, Silahkan Datang Kembali";
	}
	return 0;
}

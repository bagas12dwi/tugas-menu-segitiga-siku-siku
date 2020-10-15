//Program Menu Segitiga
//NIM : 20051397076
//Nama : Bagas Dwi Sulistyo
//Kelas : Manajemen Informatika 2020B

#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;

void hitungSisiMiring(float alas, float tinggi, float sMiring){
    cout << "\nHitung Sisi Miring"<< endl;
    cout << "-------------------------"<< endl;
    cout << "Masukkan alas          : ";
    cin >> alas;
    cout << "Masukkan Tinggi        : ";
    cin >> tinggi;
    sMiring = sqrt((alas*alas) + (tinggi*tinggi));
    cout << "-------------------------" << endl;
    cout << "Sisi Miring nya adalah : " << sMiring << endl;
}

void kelilingSisiMiring(float a, float b, float c, float kel){
    cout << "\nHitung Keliling Segitiga"<< endl;
    cout << "--------------------------"<< endl;
    cout << "Masukkan alas          : ";
    cin >> a;
    cout << "Masukkan Tinggi        : ";
    cin >> b;
    c = sqrt((a*a) + (b*b));
    cout << "--------------------------" << endl;
    cout << "Sisi Miring nya adalah : " << c << endl;
    kel = a+b+c;
    cout << "--------------------------" << endl;
    cout << "Kelilingnya adalah     : "<<kel;
}

void hitungLuas(float alas, float tinggi, float luas){
    cout << "\nMenghitung Luas Segitiga"<< endl;
    cout << "------------------------"<< endl;
    cout << "Masukkan Alas         : ";
    cin >> alas;
    cout << "Masukkan Tinggi       : ";
    cin >> tinggi;
    luas = alas*tinggi/2;
    cout << "------------------------"<< endl;
    cout << "Luasnya adalah        : "<< luas;
}

void hitungKeliling(float a, float b, float c, float keliling){
    cout << "\nMenghitung Keliling Segitiga"<< endl;
    cout << "----------------------------"<< endl;
    cout << "Masukkan sisi Alas       : ";
    cin >> a;
    cout << "Masukkan sisi Tinggi     : ";
    cin >> b;
    cout << "Masukkan Sisi Miring     : ";
    cin >> c;
    keliling = a+b+c;
    cout << "---------------------------"<< endl;
    cout << "Kelilingnya adalah       : "<<keliling;
}

void menu(){
    cout << "-------Menu Segitiga Siku-Siku-------" << endl;
    cout << "1. Hitung Panjang Sisi" << endl;
    cout << "2. Hitung Luas" << endl;
    cout << "3. Hitung Keliling" << endl;
    cout << "4. Keluar Program" << endl;
    cout << "\n";
}

int main()
{
    int pil, ulang, pil2;
    float alas, tinggi, sMiring, luas, c, keliling;
    do{

        system("cls");
        menu();
        cout << "" ;
        cout << "Pilihan : " ;
        cin >> pil;
        cout << "" ;

        switch(pil)
        {
            case 1:
            {
                hitungSisiMiring(alas, tinggi, sMiring);
                break;
            }
            case 2:
            {
                hitungLuas(alas, tinggi, luas);
                break;
            }
            case 3:
            {
                cout << "Apakah Sisi Miring Sudah diketahui?\n1. Sudah\n2. Belum"<< endl;
                cout << "Pilihan : ";
                cin >> pil2;
                switch(pil2){
                    case 1:{
                        hitungKeliling(alas, tinggi, sMiring, keliling);
                        break;
                    }
                    case 2:{
                        kelilingSisiMiring(alas, tinggi, sMiring, keliling);
                        break;
                    }
                }

                break;
            }
            case 4:
            {
                ExitProcess(0);
            }
        }
        cout << "" ;
        cout <<"\nApakah anda ingin menginputkan data lagi?\n1. Ya\n2. Tidak\n";
        cout <<"Pilihan : ";
        cin >> ulang;
    } while (ulang == 1);


}

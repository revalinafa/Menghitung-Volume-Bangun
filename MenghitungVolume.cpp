#include <iostream>
#include <conio.h>

using namespace std;

int r, t, s, p, l, menu;
char n;
float hasil;
const float pi = 3.14;

void header()
{
    cout << "+-----------------------------------------------+" << endl;
    cout << "|   SELAMAT DATANG DI PROGRAM  MENCARI VOLUME   |" << endl;
    cout << "+-----------------------------------------------+" << endl;
}

void main_menu()
{
    system("cls");
    header();
    cout << "Volume apa yang kamu cari?" << endl;
    cout << "1. Menghitung Volume Kerucut" << endl;
    cout << "2. Menghitung Volume Bola" << endl;
    cout << "3. Menghitung Volume Tabung" << endl;
    cout << "4. Menghitung Volume Kubus" << endl;
    cout << "5. menghitung Volume Balok" << endl << endl;
    cout << "Tekan ~. Untuk Keluar" << endl << endl;
    cout << "Pilih Menu : ";
    cin >> menu;
}

void kerucut(int r, int t)
{
    system("cls");
    header();
    hasil = 1.0 / 3.0 * pi * r * r * t;
    cout << "Volume Kerucut adalah " << hasil << endl;
}

void bola(int r)
{
    system("cls");
    header();
    hasil = 4.0 / 3.0 * pi * r * r * r;
    cout << "Volume Bola adalah " << hasil << endl;
}

void tabung(int r, int t)
{
    system("cls");
    header();
    hasil = pi * r * r * t;
    cout << "Volume Tabung adalah " << hasil << endl;
}

void kubus(int s)
{
    system("cls");
    header();
    hasil = s * s * s;
    cout << "Volume Kubus adalah " << hasil << endl;
}
void balok(int p, int l, int t)
{
    system("cls");
    header();
    hasil = p * l * t;
    cout << "Volume Balok adalah " << hasil << endl;
}

int main()
{
    do{
        main_menu();

        if(menu == 1) {
            system("cls");
            header();
            cout << "Masukkan jari-jari : ";
            cin >> r;
            cout << "Masukkan tinggi : ";
            cin >> t;
            kerucut(r, t);
        } else if(menu == 2) {
            system("cls");
            header();
            cout << "Masukkan jari-jari : ";
            cin >> r;
            bola(r);
        } else if(menu == 3) {
            system("cls");
            header();
            cout << "Masukkan jari-jari : ";
            cin >> r;
            cout << "Masukkan tinggi : ";
            cin >> t;
            tabung(r, t);
        } else if(menu == 4) {
            system("cls");
            header();
            cout << "Masukkan sisi : ";
            cin >> s;
            kubus(s);
        } else if(menu == 5) {
            system("cls");
            header();
            cout << "Masukkan panjang : ";
            cin >> p;
            cout << "Masukkan lebar : ";
            cin >> l;
            cout << "Masukkan tinggi : ";
            cin >> t;
            balok(p, l, t);
        } else {
            cout << "Terima Kasih telah menggunakan Program ini. Tekan apapun untuk keluar.";
            getch();
            return 0;
        }

        cout << "Ingin menghitung lagi? (yes/no) ketik y atau n :  ";
        cin >> n;
        system("cls");

    } while(n == 'y' || n == 'Y');

    return 0;
}
#include <iostream>
using namespace std;


float perasegipanjang(float p, float l) {
        return p * l;
}

    float lingkaran(float r) {
        return 3.14 * r * r;

    }

    float segitiga(float a, float t) {
        return 0.5 * a * t;

    }

int main() {
        float nilai[10];
        float panjang, lebar, jejari, alas, tinggi;
        int pilihan;
        bool menu;
        menu = true;
        while (menu == true)
        {
            cout << "\n\n============";
            cout << "\n M E N U";
            cout << "\n\n============";
            cout << "\n 1. Luas persegi panjang";
            cout << "\n 2. Luas lingkaran";
            cout << "\n 3. Luas segitiga";
            cout << "\n 4. Aarray";
            cout << "\n 5. Keluar";
            cout << "\n Pilihan (1/2/3/4/5) : ";
            cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                cout << "Masukan panjang = ";
                cin >> panjang;
                cout << "Masukan lebar = ";
                cin >> lebar;
                cout << "\nLuas persegi panjang = " << perasegipanjang(panjang, lebar);
                break;

            case 2:
                cout << "Masukan jari-jari = ";
                cin >> jejari;
                cout << "\nLuas lingkaran = " << lingkaran(jejari);
                break;

            case 3:
                cout << "Masukan alas = ";
                cin >> alas;
                cout << "Masukan tinggi = ";
                cin >> tinggi;
                cout << "\nLuas segitiga = " << segitiga(alas, tinggi);
                break;

            case 4:
                cout << "Mengisi Array\n";
                for (int i = 0; i < 10; i++) {
                    cout << "\nNilai ke-" << (i + 1) << ": ";

                }
                break;
            case 5:
                menu = false;
            default:
                cout << "Pilihan Salah!!";
                break;
            }



        }


    
}


 


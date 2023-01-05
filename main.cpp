#include "header.h"

using namespace std;

int main(){

    int pilihan, x;
    infotype node;
    string back;
    list l;
    adr p;

    createList_1301213292(l);
    while(!0)
	{
        cout << "======MENU======" << endl;
        cout << "1. Menambahkan N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Menampilkan nilai terbesar pada list" << endl;
        cout << "4. Menampilkan nilai di tengah list" << endl;
        cout << "0. Exit" << endl;
        cout << "Masukkan menu: ";
        cin >> pilihan;

        if(pilihan == 1){
            first(l) == NULL;
            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> x;

            while(x--){
                cout << "Masukkan data baru: ";
                cin >> node;
                inserLast_1301213292(l, newElement_1301213292(node));
            }
            cout << "Kembali ke menu utama?(Y/N): ";
            cin >> back;
            if (back != "Y"){
                return 0;
            }
        } else if(pilihan == 2){
            showAll_1301213292(l);
        } else if(pilihan == 3){
            adr p = findMax_1301213292(l);
            if(p == NULL){
                cout << "List kosong";
            } else {
                cout << info(p) << endl;
            }
        } else if (pilihan == 4){
            showMiddle_1301213292(l);
        } else if (pilihan == 0){
            cout << "ANDA TELAH KELUAR DARI PROGRAM"<< endl;
            return 0;
        } else {
            cout << "Invalid Input";
        }
	}
	return 0;
}

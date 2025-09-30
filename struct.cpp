#include <iostream>
using namespace std;


struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    mhs.nama = "arrapi";
    mhs.NIM = "103112430043";

    cout << "Nama: " << mhs.nama << endl
         <<  "NIM: " << mhs.NIM;

}

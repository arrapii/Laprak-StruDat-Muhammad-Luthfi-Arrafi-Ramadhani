#include <iostream> // Memasukkan library untuk input-output
using namespace std; // fungsinya supaya nggak ribet ngetik std::cout terus menerus. Jadi kita bisa langsung tulis cout.

struct Node{ // buat struktur data Node buat nyimpen data stack.
    int data; // Di node tadi, kita simpan angka atau data (disini tipe datanya integer). kenapa integer? karena stacknya mau nyimpen angka bulat.
    Node *next; // penghubung ke node berikutnya. Nah pointer ini yang ngarah ke node lain.
};

bool isEmpty(Node *top){ // Membuat pointer baru (temp) yang menunjuk ke node paling atas, atau top.
    return top == nullptr; // Kalau top-nya null, berarti stacknya kosong, jadi balikin true. Kalo nggak, balikin false.
}

void push(Node *&top, int data){ // Ini fungsi buat masukin data ke stack (ke bagian paling atas).
    Node *newNode = new Node(); // Bikin node baru di memory buat nampung data yang mau dimasukin ke stack.
    newNode->data = data; // isi node baru dengan angka yang mau dimasukin
    newNode->next = top; // Bikin node baru ini nunjuk ke node yang sekarang (top). 
    top = newNode; // Sekarang top-nya diganti jadi node baru. Jadi node baru yang tadi otomatis jadi yang paling atas atau top.
}

int pop(Node *&top){ // Fungsi buat ngeluarin data paling atas atau top dari stack. 
    if(isEmpty(top)){ // Cek dulu: jika top kosong, jika kosong berarti tidak bisa pop.
        cout << "Stack kosong, tidak bisa pop!" << endl; // Kasih keterangan kalau stacknya kosong.
        return 0; // mengembalikan 0 sebagai tanda gagal pop sebelumnya.
    }
    int poppedData = top->data; // Simpan data dari node teratas (top) ke variabel poppedData, karena nanti akan dikembalikan.
    Node *temp = top; // Buat pointer sementara (temp) yang nunjuk ke node teratas (top), supaya kita bisa hapus nanti.
    top = top->next; // Pindahin top ke node berikutnya (di bawahnya).
    delete temp; // Hapus node yang tadi di-pop (supaya tidak memakan memory)
    return poppedData; // Balikin nilai node teratas yang sudah diambil.
}

void show(Node *top){ // Fungsi buat nampilin isi stack dari atas sampai bawah.
    if(isEmpty(top)){ // Cek dulu apakah stacknya kosong.
        cout << "Stack kosong." << endl; // Jika kosong berarti tampilkan keterangan tsb.
        return; // Keluar atau berhenti dari fungsi karena tidak sudah ada lagi buat ditampilkan.
    }
    cout << "TOP -> "; // Tampilkan keterangan "TOP ->" sebagai penanda urutan dari atas.
    Node *temp = top; // Membuat pointer baru (disini temp) yang menunjuk ke node paling atau top.
    while(temp != nullptr){ // Looping tetap jalan selama masih ada node (belum NULL).
        cout << temp->data << " -> "; // Tampilkan data node sekarang, terus panah buat tanda lanjut.
        temp = temp->next; // Pindah ke node berikutnya. (di bawahnya)
    }
    cout << "NULL" << endl; // Tandai akhir list dengan tulisan NULL.
}

int main() { // Fungsi utama program
    Node *stack = nullptr; // Awalnya stack masih kosong, jadi top sama dengan null.
    push(stack, 10); // Masukin angka 10 ke stack. Top sekarang 10.
    push(stack, 20); // Masukin 20 ke stack. Sekarang top = 20, di bawahnya 10.
    push(stack, 30); // Masukin 30. Sekarang top = 30, lalu 20, lalu 10.
    cout << "menampilkan isi stack: " << endl; // Kasih teks dulu biar outputnya jelas.
    show(stack); // Tampilkan semua isi stack.
    cout << "POP: " << pop(stack) << endl; // Pop satu elemen dari stack dan langsung tampilkan nilai yang di-pop.
    cout << "menampilkan sisa stack: " << endl; // Kasih keterangan lagi biar kita tau ini tampilan setelah pop.
    show(stack); // Tampilkan isi stack setelah pop.
    return 0; // Program selesai dengan status sukses.
}















// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next; 
// }; 

// bool isEmpty(Node *top)
// {
//     return top == nullptr;
// }

// void push(Node *&top, int data)
// {
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->next = top; 
//     top = newNode;
// }

// int pop(Node *&top)
// {
//     if (isEmpty(top))
//     {
//         cout << "Stack kosong, tidak dapat pop!" << endl;
//         return 0;
//     }

//     int poppedData = top->data;
//     Node *temp = top;
//     top = top->next;

//     delete temp;
//     return poppedData;
// }

// void show(Node *top)
// {
//     if (isEmpty(top))
//     {
//         cout << "Stack Kosong." << endl;
//         return;
//     }

//     cout << "TOP -> ";
//     Node *temp = top;

//     while (temp != nullptr)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }

//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *stack = nullptr;

//     push(stack, 10);
//     push(stack, 20);
//     push(stack, 30);

//     cout << "Menampilkan isi stack:" << endl;
//     show(stack);

//     cout << "Pop: " << pop(stack) << endl;

//     cout << "Menampilkan sisa stack:" << endl;
//     show(stack);

//     return 0;
// }
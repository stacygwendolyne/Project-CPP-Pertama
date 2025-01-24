#include <iostream> // Awalan
#include <iomanip>  // Untuk format angka
using namespace std;

int main() {
    int pilihan; 
    int jumlahPesanan;
    double totalBiaya = 0.0;

    // Harga dessert
    const double hargaMochi = 25000.0;
    const double hargaIceCream = 99000.0;
    const double hargaCromboloni = 50000.0;
    const double hargaCroissant = 45000.0;
    const double hargaJellycatCake = 230000.0;
    const double hargaCremeBrulee = 30000.0;

    do { // Loop
        // Menu Pemesanan Makanan
        cout << "\n--------- Go-Nyam ---------\n";
        cout << "1. Mochi        - Rp 25.000\n";
        cout << "2. Ice Cream    - Rp 99.000\n";
        cout << "3. Cromboloni   - Rp 50.000\n";
        cout << "4. Croissant    - Rp 45.000\n";
        cout << "5. Jellycat Cake - Rp 230.000\n";
        cout << "6. Creme Brulee - Rp. 30.000\n";
        cout << "7. Lihat Total Pembayaran\n";
        cout << "8. Keluar\n";
        cout << "\n---------------------------\n";
        cout << "Masukkan pilihan Anda (1-8): ";
        cin >> pilihan;    

        switch (pilihan) {
            case 1:  // Mochi
                cout << "Masukkan jumlah Mochi yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaMochi;
                cout << "Mochi berhasil ditambahkan ke pesanan.\n";
                break;

            case 2:  // Ice Cream
                cout << "Masukkan jumlah Ice Cream yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaIceCream;
                cout << "Ice Cream berhasil ditambahkan ke pesanan.\n";
                break;

            case 3:  // Cromboloni
                cout << "Masukkan jumlah Cromboloni yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaCromboloni;
                cout << "Cromboloni berhasil ditambahkan ke pesanan.\n";
                break;

            case 4:  // Croissant
                cout << "Masukkan jumlah Croissant yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaCroissant;
                cout << "Croissant berhasil ditambahkan ke pesanan.\n";
                break;

            case 5: // Jellycat Cake
                cout << "Masukkan jumlah Jellycat Cake yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaJellycatCake;
                cout << "Jellycat Cake berhasil ditambahkan ke pesanan.\n";
                break;

            case 6: // Creme Brulee
                cout << "Masukkan jumlah Creme Brulee yang ingin dipesan: ";
                cin >> jumlahPesanan;
                totalBiaya = jumlahPesanan * hargaCremeBrulee;
                cout << "Creme Brulee berhasil ditambahkan ke pesanan.\n";
                break;

            case 7:  // Lihat Total Pembayaran
                cout << fixed << setprecision(2);  // Format angka dengan 2 desimal
                cout << "Total Pembayaran: Rp " << totalBiaya << endl;
                break;

            case 8:  // Keluar
                cout << "Terima kasih telah memesan! Silahkan menunggu & selamat menikmati.\n";
                break;

            default:
                cout << "Pilihan tidak valid! Coba lagi.\n";
                break;
        }
    } while (pilihan != 8);  // Program berhenti jika pilihan = 8

    return 0;
}

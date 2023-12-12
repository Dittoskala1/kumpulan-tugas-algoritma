#include <iostream>

using namespace std;

int main()
{
    int ekonomi = 100000 , bisnis = 200000 , eksekutif = 300000,jumlahtiket;
    double diskon , promo , hargatotal,tambah;
    int tiket;
    char ulang;
    do
    {
  
  // input nya gays //
  
  cout << "=========================================="<<endl;
  cout << " MENU PEMESANAN TIKET KERERTA :)"<<endl;
  cout << " ekonomi   : Rp.100000/tiket    (1)"<<endl;
  cout << " bisnis    : Rp.200000/tiket    (2)"<<endl;
  cout << " eksekutif : Rp.300000/tiket    (3)"<<endl;
  cout << " silahkan pilih tiket :";
  cin  >> tiket;
  cout << " masukan jumlah tiket :";
  cin >> jumlahtiket;
  
  // switch nya gays //
  
 switch (tiket) {
            case 0:
                cout << " Terimakasih sudah memesan!\n";
            break;

            case 1:
                hargatotal = 100000*jumlahtiket;
                 cout << " ekonomi dengan harga Rp.100.000 "<< jumlahtiket << " harga Rp."<<hargatotal<<endl;
            break;

            case 2:
                hargatotal = 200000*jumlahtiket;
                 cout << " bisnis dengan harga Rp.200.000"<< jumlahtiket << " harga Rp."<<hargatotal<<endl;
            break;

            case 3:
                  hargatotal = 300000*jumlahtiket;
                cout << " eksekutif dengan harga Rp.300.000"<< jumlahtiket << " harga Rp."<<hargatotal<<endl;
            break;

            default:
                cout << " Menu tidak tersedia!\n";
            break;
    
  }
  
  // if else //
  
  if (hargatotal >= 500000){
      diskon = hargatotal*10/100;
  }
  
  else if (hargatotal >= 300000){
      diskon = (hargatotal*5)/100;
  }
  
  else if (hargatotal >= 200000){
      diskon = hargatotal*2/100;
  }
  
  // Perhitungan diskon //
  
  double hargadisc = hargatotal - diskon;
  
  if (hargatotal >= 500000){
      cout << " selamat anda mendapatkan diskon 10%"<<endl;
      cout << " total pembayaran Menjadi Rp."<< hargadisc<<endl;
  }
  
  else if (hargatotal >= 300000){
      cout << " selamat anda mendapatkan diskon 5%"<< endl;
      cout << " total pembayaran Menjadi Rp."<< hargadisc<<endl;
  }
  
  else if (hargatotal >= 200000){
      cout << " selamat anda mendapatkan diskon 2%"<< endl;
      cout << " total pembayaran Menjadi Rp."<< hargadisc<<endl;
  }
  
   cout << endl;
        
        cout<< " ingin memilih menu lain (y/t)";
        cin >> ulang;
        cout<<endl;
    }
    while (ulang!= 't');
 
    cout << "Terimakasih...";
 
    cout << endl;
  
  
   return 0;
}

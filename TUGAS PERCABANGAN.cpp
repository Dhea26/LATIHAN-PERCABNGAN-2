#include<iostream>
#include<string>
using namespace std;
int main(){
    int belanja; 
	int total_harga;
	int batas_diskon = 1102019;
    string ktp;
    string status;
    cout<<"Status"<<endl;
    cout<<"A.Menikah dan memiliki anak"<<endl;
    cout<<"B.Menikah dan belum memiliki anak"<<endl;
    cout<<"C.Belum Menikah tetapi memiliki kartu keanggotaan"<<endl;
    cout<<"D.Menikah tetapi tidak memiliki kartu keanggotaan"<<endl;
    cout<<"Silahkan masukkan status Anda : ";
    cin>>status;
    cout<<"Masukkan asal berdasarkan KTP : ";
    cin>>ktp;
    cout<<"Total belanja anda : ";
    cin>>belanja;
    if(belanja>=batas_diskon){
        if(ktp != "makassar"){
        cout<<"Anda mendapatkan tambahan diskon sebesar 10%"<<endl;
            if(status =="A"){
                cout<<"Anda mendapatkan diskon 75% + 10%"<<endl;
                total_harga = belanja - (belanja *0.85);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;

            }
            else if(status =="B"){
                cout<<"Anda mendapatkan diskon 50% + 10%"<<endl;
                total_harga = belanja - (belanja*0.6);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status =="C"){
                cout<<"Anda mendapatkan diskon 25% + 10%"<<endl;
                total_harga = belanja - (belanja*0.35);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status =="D"){
                cout<<"Anda mendapatkan diskon 10% + 10%"<<endl;
                total_harga = belanja - (belanja*0.2);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
        }
        else{
            if(status =="A"){
                cout<<"Anda mendapatkan diskon 75%"<<endl;
                total_harga = belanja - (belanja *0.75);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status =="B"){
                cout<<"Anda mendapatkan diskon 50%"<<endl;
                total_harga = belanja - (belanja*0.5);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status =="C"){
                cout<<"Anda mendapatkan diskon 25%"<<endl;
                total_harga = belanja - (belanja*0.25);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
            else if(status =="D"){
                cout<<"Anda mendapatkan diskon 10%"<<endl;
                total_harga = belanja - (belanja*0.1);
                cout<<"Jumlah yang harus dibayarkan : "<<total_harga<<endl;
            }
        }
    }
    else{
        cout<<"Jumlah yang harus dibayarkan"<<belanja<<endl;
    }
    return 0;
}

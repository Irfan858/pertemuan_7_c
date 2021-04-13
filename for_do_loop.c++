#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    int input, i,j;
    char ulang = 'y';

    while (ulang == 'y')
    {
        cout<<"Program Segitiga Pagar dengan For Do Loop"<<endl;
        cout<<"Created By Irfan Kurniawan"<<endl;
        cout<<"============================================="<<endl;
        cout<<"Masukkan Jumlah baris : ";
        cin>>input;

        cout<<endl;

        for (i = 1; i <= input; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout<<" #";
            }
            cout<< endl;
        }
            cout<<"Apakah Anda ingin melanjutkan(y/t) : ";
            cin>>ulang;
    }    

    cout<<"Program telah selesai di jalankan"<<endl;
    cout<<"Anda Keluar Dari Program"<<endl;
}
// NAMA     : MUHAMAD RIZKY FUAD
// NRP        : 5022221243
// JURUSAN    : TEKNIK ELEKTRO

#include <iostream>
#include <cmath>

using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int main()
{
    double elevXmax;
    int Xmax,Vawal1;
    float Vtangensial1,Vawal2,Vtangensial2;
    
    elevXmax=SUDUT*2*3.14159/180;
    
    cin >> Vtangensial1;
    if(Vtangensial1>=1 && Vtangensial1<=10)
    {
        Vawal1=Vtangensial1-1;
    }else if(Vtangensial1>=11 && Vtangensial1<=20)
    {
        Vawal1=Vtangensial1-3;
    }else if(Vtangensial1>=21 && Vtangensial1<=30)
    {
        Vawal1=Vtangensial1-5;
    }else
    {
        cout << "!! Batas input kecepatan tangensial hanya sampai 30 !!" << endl;
    }
    
    Xmax=pow(Vawal1,2)*sin(elevXmax);
    Xmax=Xmax/GRAVITASI;
    
    cout << Xmax << " ";
    
    Vawal2=sqrt(Xmax*GRAVITASI/sin(elevXmax));
    
    if(Vtangensial1>=1 && Vtangensial1<=10)
    {
        Vtangensial2=Vawal2+1;
    }else if(Vtangensial1>=11 && Vtangensial1<=20)
    {
        Vtangensial2=Vawal2+3;
    }else if(Vtangensial1>=21 && Vtangensial1<=30)
    {
        Vtangensial2=Vawal2+5;
    }
    
    cout << Vtangensial2;
}

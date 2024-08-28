#include <iostream>
#include "banka.h"
#include "banka.cpp"

using namespace std;

int main(){
    banka musteri1("Ali kayahan",1123,0);
    banka musteri2("Berna Ozan",1153,20.0);

    musteri1.hesabaparayatir(250);
    musteri2.hesabaparayatir(3500.0);

    
    musteri1.hesaptanparacek(350);
    musteri2.hesaptanparacek(12.5);

    musteri1.bilgilerigetir();
    cout<<endl;
    musteri2.bilgilerigetir();






    return 0;
}
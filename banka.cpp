#include "banka.h"

banka::banka(string _ad,int _hesapno,float _bakiye){
    bakiye = 0.0;
    ad = _ad;
    hesapno = _hesapno;
    bakiye = bakiye + _bakiye;
}

 void banka::setad(string _ad){
    ad = _ad;
 }
    
string banka::getad(){
    return ad;
}

void banka::sethesapno(int _hesapno){
    hesapno = _hesapno;
}

int banka::gethesapno(){
    return hesapno;
}

void banka::bilgilerigetir(){
    cout<<"Hesap Adı: "<<ad<<endl<<"Hesap No: "<<hesapno<<endl<<"Bakiye: "<<bakiye<<endl;
}

void banka::hesabaparayatir(float miktar){
    bakiye = bakiye + miktar;
}

void banka::hesaptanparacek(float miktar){
    if(bakiye-miktar<0){
        cout<<"Yetersiz bakiye !"<<endl;
    }
    else
        bakiye = bakiye - miktar;
}
#pragma once
using namespace std;
#include <iostream>


class banka{
private:
    string ad;
    int hesapno;
    float bakiye;
public:
    banka(string _ad,int _hesapno,float _bakiye);
    void setad(string _ad);
    string getad();
    void sethesapno(int _hesapno);
    int gethesapno();
    void bilgilerigetir();
    void hesabaparayatir(float miktar);
    void hesaptanparacek(float miktar);

};


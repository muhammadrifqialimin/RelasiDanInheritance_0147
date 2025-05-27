#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main(){
    Ibu* varIbu = new Ibu("dini");
    Ibu* varIbu2 = new Ibu("novi");
    anak* varAnak1 = new anak("bima");
    anak* varAnak2 = new anak("Jokowi");
    anak* varAnak3 = new anak("Indra");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);
    
    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
}
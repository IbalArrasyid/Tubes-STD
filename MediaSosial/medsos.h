#ifndef MEDSOS_H_INCLUDED
#define MEDSOS_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

struct Medsos {
    int Tagihan_perbulan;
    std::string Nama_medsos;
    std::string Tempo_tagihan;
    std::string Metode_pembayaran;
    float Freshman_diskon;
};

typedef struct elmlist_child *address_child;

struct elmlist_child{
    infotype_child info;
    address_child next;
    address_child prev;
};

struct List_child{
    address_child first;
    address_child last;
};

/** TIDAK PERLU MODIFIKASI */
void createList(List_child &L);
void insertFirst(List_child &L, address_child P);
void insertLast(List_child &L, address_child P);
void insertAfter(address_child Prec, address_child P);
void deleteFirst(List_child &L, address_child &P);
void deleteLast(List_child &L, address_child &P);
void deleteAfter(address_child Prec, address_child &P);


/** PERLU MODIFIKASI */
address_child alokasi(infotype_child x);
void dealokasi(address_child &P);
address_child findElm(List_child L, infotype_child x);
void printInfo(List_child L);

//void add_Medsos(List_langganan &LL, adr_langganan L);
//void show_All_Medsos(List_langganan LL);
//void show_ALL_Medsos_on_Pengguna();
//void delete_Medsos(List_langganan &LL, std::string Nama_medsos);

#endif // MEDSOS_H_INCLUDED

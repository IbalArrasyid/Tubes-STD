#ifndef PENGGUNA_H_INCLUDED
#define PENGGUNA_H_INCLUDED

#include <iostream>
#include "relasi.h"

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

struct Pengguna {
    std::string Nama;
    std::string NIM;
    std::string Jenis_Kelamin;
    int Semester;
};

typedef Pengguna infotype_parent;
typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    List_relasi child;
    address_parent next;
};

struct List_parent {
    address_parent first;
};

/** TIDAK PERLU MODIFIKASI */
void createList(List_parent &L);
void insertFirst(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);

/** PERLU MODIFIKASI */
address_parent alokasi(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_parent L, infotype_parent x);
void printInfo(List_parent L);

//adr_pengguna createPengguna(std::string Nama, std::string NIM, std::string Jenis_Kelamin, int Semester);
//void add_Parent(List_parent &LP, address_parent P);
//void show_All_Pengguna(List_parent LP);
//void delete_Pengguna(List_parent &LP, std::string NIM);

#endif // PENGGUNA_H_INCLUDED

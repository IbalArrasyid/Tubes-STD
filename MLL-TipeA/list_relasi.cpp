#include "list_relasi.h"

void createList(List_relasi &L) {
    first(L) = NULL;
}

address_relasi alokasi(address_child C) {
    address_relasi P = new elmlist_relasi;
    info(P) = C;
    next(P) = NULL;
    return P;
}

void insertFirst(List_relasi &L, address_relasi P) {
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List_relasi L) {
    address_relasi P = first(L);
    while (P != NULL) {
        cout << "-> Nama Media: " << info(info(P)).Nama_Media << endl;
        cout << "   Email: " << info(info(P)).email << endl;
        cout << "   Username: " << info(info(P)).username << endl;
        P = next(P);
    }
}



address_relasi findElm(List_relasi L, address_child C) {
    address_relasi P = first(L);
    while(P != NULL) {
        if(info(P)== C) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_relasi &Prec, address_relasi P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

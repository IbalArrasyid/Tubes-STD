#include "list_parent.h"

void createList(List_parent &L) {
    /**
    * FS : first(L) diset Nil
    */
    first(L) = NULL;
}

address_parent alokasi(infotype_parent x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = NULL;
    createList(child(P));
    return P;
}

void insertFirst(List_parent &L, address_parent P) {
    /**
    * IS : List_parent L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List_parent L
    *      next dari last elemen menunjuk ke first elemen
    */
    address_parent Q;
    if(first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        Q = first(L);
        while(next(Q) != first(L)) {
            Q = next(Q);
        }
        next(P) = first(L);
        next(Q) = P;
        first(L) = P;
    }
}


void printInfo(List_parent L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    address_parent P = first(L);
    while (P != NULL) {
        cout << "NIM: " << info(P).NIM << endl;
        cout << "Nama: " << info(P).nama << endl;
        cout << "Email: " << info(P).email << endl;
        cout << "Media Sosial:" << endl;
        printInfo(child(P));  // Print info dari list relasi (child)
        P = next(P);
    }
}

address_parent findElm(List_parent L, infotype_parent x) {
    /**
    * IS : List_parent L mungkin kosong
    * FS : mengembalikan elemen dengan info email = x.email,
    * FS : mengembalikan elemen dengan info = x,
           mengembalikan Nil jika tidak ditemukan
    */
    address_parent P = first(L);
    while (P != NULL) {
        if (info(P).email == x.email) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void dealokasi(address_parent &P) {
    /**
    * FS : mengembalikan elemen P ke sistem
    */
    delete P;
}

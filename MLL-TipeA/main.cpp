#include <iostream>
#include "list_child.h"
#include "list_parent.h"

int main() {
    List_parent LP;
    List_child LC;

    address_parent P;
    address_child C;
    address_relasi R;

    createList(LP);
    createList(LC);

    /** insert parent */
    P = alokasi({1, "Muhammad Iqbal Arrasyid", "MIA@gmail.com"});
    insertFirst(LP, P);
    P = alokasi({2, "iqbal", "edit@gmail.com"});
    insertFirst(LP, P);
    P = alokasi({3, "arrasyid", "rasyi@gmail.com"});
    insertFirst(LP, P);
    P = alokasi({4, "muhammad", "muhammad@gmail.com"});
    insertFirst(LP, P);

    cout << "list parent" << endl;
    printInfo(LP);

    /** insert child */
    C = alokasi({"Instagram", "MIA@gmail.com", "mia26"});
    insertFirst(LC, C);
    C = alokasi({"Twitter", "edit@gmail.com", "iqbal27"});
    insertFirst(LC, C);
    C = alokasi({"Facebook", "rasyi@gmail.com", "rasyi26"});
    insertFirst(LC, C);
    C = alokasi({"Thread", "muhammad@gmail.com", "muhammad1"});
    insertFirst(LC, C);

    cout << "list child" << endl;
    printInfo(LC);

    /** RELASIKAN PARENT DENGAN CHILD **/
    P = findElm(LP, {4, "Muhammad Iqbal Arrasyid", "MIA@gmail.com"}); // Ganti dengan NIM yang sesuai
    C = findElm(LC, {"Instagram", "MIA@gmail.com", "mia26"}); // Ganti dengan email yang sesuai
    R = alokasi(C);
    insertFirst(child(P), R);
    C = findElm(LC, {"Thread", "muhammad@gmail.com", "muhammad1"}); // Ganti dengan email yang sesuai
    R = alokasi(C);
    insertFirst(child(P), R);

//    P = findElm(LP, {2, "", ""}); // Ganti dengan NIM yang sesuai
//    C = findElm(LC, {"", "email3", ""}); // Ganti dengan email yang sesuai
//    R = alokasi(C);
//    insertFirst(child(P), R);
//
//    P = findElm(LP, {3, "", ""}); // Ganti dengan NIM yang sesuai
//    C = findElm(LC, {"", "email1", ""}); // Ganti dengan email yang sesuai
//    R = alokasi(C);
//    insertFirst(child(P), R);
//
//    cout << endl << "Setelah Direlasikan" << endl;
//    cout << "list parent" << endl;
//    printInfo(LP);
//
//    cout << endl << "list child" << endl;
//    printInfo(LC);
//
//    /** KELEBIHAN DARI BENTUK IIIB: jika salah satu child diedit **/
//    C = findElm(LC, {"", "email1", ""}); // Ganti dengan email yang sesuai
//    info(C).Nama_Media = "MediaX";
//
//    cout << endl << "Setelah Child Diedit" << endl;
//    cout << "list parent" << endl;
//    printInfo(LP);
//
//    cout << endl << "list child" << endl;
//    printInfo(LC);

    return 0;
}

#include "header.h"

void createList_1301213292(list &l){
    first(l) = NULL;
}

adr newElement_1301213292(infotype x){
    adr p = new element;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void inserLast_1301213292(list &l, adr p){
    if (first(l) != NULL) {
        adr q = first(l);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    } else {
        first(l) = p;
    }
}

void showAll_1301213292(list l){
    if (first(l) != NULL){
        adr p = first(l);
        while(p != NULL){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else{
        cout << "List kosong !" << endl;
    }
}

void showMiddle_1301213292(list l){
    if (first(l) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        int len = 0;
        adr p = first(l);

        while (p != NULL) {
            len++;
            p = next(p);
        }
        int middle = len/2;
        p = first(l);
        while(middle--) {
            p = next(p);
        }
        cout << "Data tengah nya adalah: ";
        cout << info(p) << endl;
    }
}

adr findMax_1301213292(list l){
    adr p, q;
    p = first(l);
    int temp = 0;
    while(p != NULL){
        if(info(p) > temp){
            temp = info(p);
            q = p;
        }
        p = next(p);
    }
    return q;
}

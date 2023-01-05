#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;
#define info(p) (p) -> info
#define next(p) (p)-> next
#define first(l) ((l).first)

typedef int infotype;
typedef struct element *adr;

struct list{
    adr first;
};

struct element{
    infotype info;
    adr next;
};


void createList_1301213292(list &l);
void inserLast_1301213292(list &l, adr p);
void showAll_1301213292(list l);
void showMiddle_1301213292(list l);
adr findMax_1301213292(list l);
adr newElement_1301213292(infotype x);

#endif // HEADER_H_INCLUDED

#ifndef _CDS_H_
#define _CDS_H_
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode node;
struct LNode {
    ElemType data;
    struct LNode *next;
};
typedef struct LList list;
struct LList {
    node *head;
    node *rear;
};

list* initList ();
node* insertRear (ElemType num, list *L);
void PrintList (list *L);
node* searchList (list *L, ElemType t);
node* searchPre (list *L, ElemType t);
void deleteList (list *L, ElemType t);

#endif

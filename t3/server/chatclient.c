
#include "chatclient.h"


#define CLIENTLIST_COMPARATOR(e1, e2) (e1->id - e2->id)
SGLIB_DEFINE_LIST_FUNCTIONS(strCliente, CLIENTLIST_COMPARATOR, next)

#define SALACHATLIST_COMPARATOR(e1, e2) (e1->id - e2->id)
SGLIB_DEFINE_LIST_FUNCTIONS(strSalaChat, SALACHATLIST_COMPARATOR, next)

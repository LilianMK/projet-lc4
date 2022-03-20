#include <stdlib.h>
#include <stdio.h>
#include <unbounded_int.h>

unbounded_int string2unbounded_int(const char *e);
unbounded_int ll2unbounded_int(long long i);
char *unbounded_int2string(unbounded_int i);
int unbounded_int_cmp_unbounded_int(unbounded_int a, unbounded_int b);
int unbounded_int_cmp_ll(unbounded_int a, long long b);
unbounded_int unbounded_int_somme(unbounded_int a, unbounded_int b);
unbounded_int unbounded_int_difference(unbounded_int a, unbounded_int b);
unbounded_int unbounded_int_produit(unbounded_int a, unbounded_int b);
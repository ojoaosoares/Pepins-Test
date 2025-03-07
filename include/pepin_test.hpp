#ifndef PEPIN_TEST
#define PEPIN_TEST

#include <gmpxx.h>

typedef unsigned long long ull;

mpz_class n_fermat_number(ull n);

bool pepin_test(mpz_class F, ull n);

#endif


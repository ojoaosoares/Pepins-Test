#include "pepin_test.hpp"

mpz_class n_fermat_number(ull n)
{
    return (mpz_class(1) << (1 << n)) + 1;
}

bool pepin_test(mpz_class F, ull n) {

    mpz_class r = 5 % F, limit = (mpz_class(1) << (n)) - 1;

    for (size_t i = 0; i < limit; i++)
        r = (r*r) % F;

    return r == (F - 1);
}

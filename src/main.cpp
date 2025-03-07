#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "pepin_test.hpp"

using namespace std;

void usage() {
    std::cout << "Usage: ./mersenne_primality_test -i [N] [-m METHOD] [-n]\n"
              << "  -i index - Index of the Mersenne number to be tested (e.g., 5 for M_5 = 2^5 - 1)\n"
              << "  -m METHOD  - Method LL for Lucas Lehmer method or F for Fermat method (LL method is default)\n"
              << "  -n         - Prints the corresponding Mersenne number\n";
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        usage();
        return 1;
    }

    unsigned long long n = 0; // Inicializa o índice
    bool show = false;

    int opt;
    while ((opt = getopt(argc, argv, "i:m:n")) != -1) {
        switch (opt) {
            case 'i':
                n = std::atoll(optarg); // Armazena o índice do número de Mersenne
                break;
            case 'n':
                show = true;
                break;
            default:
                usage();
                return 1;
        }
    }

    if (n == 0) {
        usage();
        return 1;
    }

    mpz_class F = n_fermat_number(n);

    cout << "The "<< n << "º Fermat Number (2^(2^"  << n << ") + 1) ";

    if (n > 1)
    {
        bool prime = pepin_test(F, n);

        if (prime)
            cout << "is a prime number\n";
        else
            cout << "is not a prime number\n";
    }

    else
       cout << "is a prime number\n";

    if (show)
        cout << F << '\n';

    return 0;
}

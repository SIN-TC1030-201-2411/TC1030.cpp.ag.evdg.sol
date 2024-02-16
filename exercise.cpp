#include "fraccion.hpp"
#include "matfrac.hpp"
#include <iostream>

int main()
{
    fraccion f{5,7};
    fraccion g{3,8};
    fraccion s;
    fraccion m;

    s=f.suma(g);
    m=f.multiplica(g);

    f.imprime(); std::cout << "\n";
    g.imprime(); std::cout << "\n";
    s.imprime(); std::cout << "\n";
    m.imprime(); std::cout << "\n";

    matfrac m1("m1.f"), m2("m2.f"), m3("m3.f");
    m1.imprime();
    std::cout << "+\n";
    m2.imprime();

    if (m1.igualA(m2))
    {
       std::cout << "m1 es igual a m2 \n";
    }
    else
    {
        std::cout << "m1 es diferente a m2 \n";
    }

    std::cout << "=\n";
    m2.suma(m1).imprime();

    if (m2.suma(m1).igualA(m3))
    {
        std::cout << "Suma correcta \n";
    }
    else {
        std::cout << "Suma incorrecta \n";
    }

    m3.imprime();
}
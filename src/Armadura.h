//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ARMADURA_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ARMADURA_H
#include <iostream>

using namespace std;

class Armadura {
public:
    Armadura();

    static string tipoDeMetal(int codDeArmadura);
    static int nivelDeResistenciaMax(int codDeArmadura);
    static double valorEnDolares(int codDeArmadura);

    friend ostream &operator<<(ostream &os, const Armadura &armadura);

};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ARMADURA_H

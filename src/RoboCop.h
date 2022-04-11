//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H

#include <ostream>
#include "Robot.h"
#include "Policia.h"
#include "Armadura.h"


class RoboCop: public Robot, Policia{
private:
    string numSerie;
    int nivelDeDano{};
    int codigoDeArmadura{};
public:
    RoboCop();

    RoboCop(const string &numSerie, int nivelDeDano, int codigoDeArmadura);

    static string dispara();
    static string detiene();

    const string &getNumSerie() const;

    void setNumSerie(const string &numSerie);

    int getNivelDeDano() const;

    void setNivelDeDano(int nivelDeDano);

    int getCodigoDeArmadura() const;

    void setCodigoDeArmadura(int codigoDeArmadura);

    void setNombre(string);

    string seConfigura();
    string seRecarga();


    friend ostream &operator<<(ostream &os, const RoboCop &cop);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H

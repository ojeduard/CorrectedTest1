//
// Created by Maikol Guzman Alan on 4/8/22.
//



#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H

#include <iostream>
#include "Humanoide.h"
#include "Guerrero.h"

using namespace std;

class Alien: public Humanoide{
private:
    double estatura{};
public:
    Alien(double velocidad, double estatura);

    Alien();

    virtual ~Alien();

    double getEstatura() const;

    void setEstatura(double estatura);


    string corre() const override;
    void setColor(const string &color) override;

    int setValor(double) override;

    friend ostream &operator<<(ostream &os, const Alien &alien);

    string toString() override;


};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H

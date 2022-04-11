//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H

#include <iostream>
#include "RoboCop.h"
#include "Guerrero.h"


using namespace std;

class Humanoide: public RoboCop, Guerrero{
private:
    double velocidad{};
public:
    Humanoide(double velocidad);

    Humanoide();

    virtual ~Humanoide();

    double getVelocidad() const;
    void setVelocidad(double velocidad);

    virtual int setValor(double) = 0;
    virtual  string toString() = 0;

    virtual string corre() const;
    virtual void setColor(const string &color);

    friend ostream &operator<<(ostream &os, const Humanoide &humanoide);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H

//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H

#include <ostream>
#include "Humanoide.h"

class Predator: public Humanoide{
private:
    double peso{};
public:

    Predator(double peso);

    Predator();

    virtual ~Predator();

    double getPeso() const;

    void setPeso(double peso);

    void setColor(const string &color) override;
    string corre() const override;
    void setVelocidad(int);

    int setValor(double) override;
    string toString() override;

    friend ostream &operator<<(ostream &os, const Predator &predator);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H

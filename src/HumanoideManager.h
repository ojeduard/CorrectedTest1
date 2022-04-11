//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H

#include <ostream>
#include "Humanoide.h"
#include "Alien.h"
#include "Predator.h"
#include "vector"

class HumanoideManager {
private:
    vector<Humanoide*> humanoideLista;
public:
    HumanoideManager();

    void setHumanoideLista(const vector<Humanoide *> &humanoideLista);

    const vector<Humanoide *> &getHumanoideLista() const;

    void ingresaHumanoide(Humanoide* humanoide);
    string retornaSoloAliens();
    string retornaTodos();


};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H

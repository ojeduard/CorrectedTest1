//
// Created by Estudiante on 10/04/2022.
//

#include "HumanoideManager.h"
#include "Alien.h"
#include <sstream>

HumanoideManager::HumanoideManager() {

}

void HumanoideManager::setHumanoideLista(const vector<Humanoide *> &_humanoideLista) {
    vector<Humanoide*> humanoideLista = _humanoideLista;

}

void HumanoideManager::ingresaHumanoide(Humanoide *humanoide) {
    humanoideLista.push_back(humanoide);
}

string HumanoideManager::retornaSoloAliens() {
    stringstream s;
    for (auto eachAlien: humanoideLista) {
        if (eachAlien->toString() != "[--------------------------------------Soy Predator---------------------------]"){
            s << eachAlien->toString() <<"---";
        }

    }
    return s.str();
}

string HumanoideManager::retornaTodos() {
    stringstream s;
    for (auto eachHumanoide: humanoideLista) {
        if (eachHumanoide->toString() != "[--------------------------------------Soy Predator---------------------------]"){
            s << static_cast<const Alien &>(*eachHumanoide) <<"---";
        }else{
            s << static_cast<const Predator &>(*eachHumanoide) <<"---";
        }
    }
    return s.str();
}

const vector<Humanoide *> &HumanoideManager::getHumanoideLista() const {
    return humanoideLista;
}










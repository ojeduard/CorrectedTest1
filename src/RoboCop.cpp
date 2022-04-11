//
// Created by Estudiante on 10/04/2022.
//

#include "RoboCop.h"



RoboCop::RoboCop() {
    numSerie = " ";
    nivelDeDano = 0;
    codigoDeArmadura = 0;
}

void RoboCop::setNombre(string _nombre) {
    nombre = _nombre;
}
RoboCop::RoboCop(const string &numSerie, int nivelDeDano, int codigoDeArmadura) : numSerie(numSerie),
                                                                                  nivelDeDano(nivelDeDano),
                                                                                  codigoDeArmadura(codigoDeArmadura) {}

string RoboCop::dispara() {
    return "Como Robocop, me encanta disparar a los malos";
}

string RoboCop::detiene() {
    return "Como Robocop, me encanta detener a los malos";
}

const string &RoboCop::getNumSerie() const {
    return numSerie;
}

void RoboCop::setCodigoDeArmadura(int _codigoDeArmadura) {
    codigoDeArmadura = _codigoDeArmadura;
}

int RoboCop::getCodigoDeArmadura() const {
    return codigoDeArmadura;
}

void RoboCop::setNivelDeDano(int _nivelDeDano) {
    nivelDeDano = _nivelDeDano;
}

int RoboCop::getNivelDeDano() const {
    return nivelDeDano;

}

void RoboCop::setNumSerie(const string &_numSerie) {
    numSerie = _numSerie;
}

string RoboCop::seConfigura() {
    return "El Robot se Autoconfigura";
}

string RoboCop::seRecarga() {
    return "El Robot se Auto Recarga a: 100.000000";
}

ostream &operator<<(ostream &os, const RoboCop &cop) {
    os << static_cast<const Policia &>(cop) << ' ' << static_cast<const Robot &>(cop) <<", armadura: [Tipo de metal: " << Armadura::tipoDeMetal(cop.codigoDeArmadura)
    << ", Nivel de resistencia: " << Armadura::nivelDeResistenciaMax(cop.codigoDeArmadura)
    << ", Valor en dólares: " <<Armadura::valorEnDolares(cop.codigoDeArmadura) << "] , numSerie: " << cop.numSerie
       << ", nivelDeDano: " << cop.nivelDeDano << ", codigoDeArmadura: " << cop.codigoDeArmadura;
    return os;
}



//
// Created by Estudiante on 10/04/2022.
//

#include "Guerrero.h"

Guerrero::Guerrero(const string &color) : color(color) {}

Guerrero::Guerrero() {
    color = "Negro plateado";
}

string Guerrero::seDefiende() {
    return "Como guerrero me defiendo como gato panza arriba.";
}

string Guerrero::ataca() {
    return "Como guerrero me encanta atacar.";
}

string Guerrero::muere() {
    return "Ahhhhhh, muero, hoy es buen día para morir.";
}

void Guerrero::setColor(const string &_color) {
    color = _color;
}

const string &Guerrero::getColor() const {
    return color;
}

ostream &operator<<(ostream &os, const Guerrero &guerrero) {
    os << "[Guerrero] color: " << guerrero.color;
    return os;
}

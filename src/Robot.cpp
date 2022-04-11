//
// Created by Estudiante on 10/04/2022.
//

#include "Robot.h"

Robot::Robot() {
    nivelDeBateria = 100;
    numSensores = 2000;
}

Robot::Robot(double nivelDeBateria, int numSensores) : nivelDeBateria(100), numSensores(2000) {}

Robot::~Robot() {

}

double Robot::getNivelDeBateria() const {
    return nivelDeBateria;
}

void Robot::setNivelDeBateria(double nivelDeBateria) {
    nivelDeBateria = nivelDeBateria;
}

int Robot::getNumSensores() const {
    return numSensores;
}

void Robot::setNumSensores(int numSensores) {
    numSensores = numSensores;
}

std::ostream &operator<<(std::ostream &os, const Robot &robot) {
    os << "[Robot] nivelDeBateria: " << robot.nivelDeBateria << ", numSensores: " << robot.numSensores;
    return os;
}

string Robot::seConfigura() {
    return "Yo, como robot me puedo configurar.";
}

string Robot::seRecarga() {
    return "Yo, como robot busco como recargar la bateria";
}




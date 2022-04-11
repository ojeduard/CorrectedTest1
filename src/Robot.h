//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H

#include <iostream>

using namespace std;

class Robot {
protected:
    double nivelDeBateria{};
    int numSensores{};
public:
    Robot();

    Robot(double nivelDeBateria, int numSensores);

    virtual ~Robot();

    double getNivelDeBateria() const;

    void setNivelDeBateria(double nivelDeBateria);

    int getNumSensores() const;

    void setNumSensores(int numSensores);

    string seConfigura();
    string seRecarga();

    friend std::ostream &operator<<(std::ostream &os, const Robot &robot);
    string dispara();
    string detiene();

};

#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H

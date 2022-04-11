//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_GUERRERO_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_GUERRERO_H
#include <iostream>

using namespace std;


class Guerrero {
protected:
    string color;
public:
    Guerrero();
    Guerrero(const string &color);

    const string &getColor() const;

    virtual void setColor(const string &color);

    static string seDefiende();
    static string ataca();
    static string muere();

    friend ostream &operator<<(ostream &os, const Guerrero &guerrero);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_GUERRERO_H

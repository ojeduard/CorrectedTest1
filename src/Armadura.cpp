//
// Created by Estudiante on 10/04/2022.
//

#include "Armadura.h"


Armadura::Armadura() {}

string Armadura::tipoDeMetal(int codDeArmadura) {
    string disp;
    if (codDeArmadura == 1){
        disp = "Aluminio";
    }else if (codDeArmadura == 2){
        disp = "Titanio";
    }else if (codDeArmadura == 3){
        disp = "Acero";
    }else{
        disp = "Oro";
    }
    return disp;
}

int Armadura::nivelDeResistenciaMax(int codDeArmadura) {
    if (codDeArmadura == 1){
        return 50;
    }else if (codDeArmadura == 2){
        return 95;
    }else if (codDeArmadura == 3) {
        return 85;
    }
    return 70;

}

double Armadura::valorEnDolares(int codDeArmadura) {
    if (codDeArmadura == 1) {
        return 2.5;
    } else if (codDeArmadura == 2) {
        return 3.4;
    } else if (codDeArmadura == 3) {
        return 2.9;
    }
    return 1.7;
}

ostream &operator<<(ostream &os, const Armadura &armadura) {
    return os;
}

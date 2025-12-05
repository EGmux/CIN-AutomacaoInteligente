#include "Engine.h"
#include "Headers.h"
#include "variable/InputVariable.h"

int main(){

    fuzzylite::Engine* Sistema = new fuzzylite::Engine;
    
    Sistema->setName("BolinhaFlutuante");
    Sistema->setDescription("Bolinha que deve permanecer estacionária em uma determinada altura(Tubo,Ventoinha,Bolinha,Sensor)");

    fuzzylite::InputVariable* Aceleracao = new fuzzylite::InputVariable;
    Aceleracao->setName("Aceleracao");
    Aceleracao->setDescription("Aceleracao da bolinha");
    Aceleracao->setEnabled(true);
    Aceleracao->setRange(0, 10); // cm, M ou mm?
    A
    
    

}
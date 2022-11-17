#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    Stocznia stocznia{};
    unsigned int przetransportowane = 0;
    unsigned int liczba_zaglowcow = 0;
    while(przetransportowane < towar){
        Statek* s1 = stocznia();
        przetransportowane += s1->transportuj();
        if(dynamic_cast<Zaglowiec*>(s1) != nullptr){
             liczba_zaglowcow++;
        }
        delete s1;
    }
    return liczba_zaglowcow;
}
//
// Created by Juliette Ricard on 06/03/2024.
//

#include "Arme.h"

using namespace std;

// Constructeurs
Arme::Arme(std::string nom, int degats) : m_nom{nom}, m_degats{degats} {
    assert(m_degats >= 0);
}

//Getters et Setters
std::string Arme::getNom() const {
    return m_nom;
}

int Arme::getDegats() const {
    return m_degats;
}

void Arme::setNom(std::string nouveauNom) {
    m_nom = nouveauNom;
}

void Arme::setDegats(int nouveauxDegats) {
    assert(nouveauxDegats >= 0);
    m_degats = nouveauxDegats;
}

// Méthodes
void Arme::changer(std::string nom, int degats) {
    assert(degats >= 0);
    m_nom = nom;
    m_degats = degats;
}

void Arme::afficher() const {
    cout << "Arme : " << m_nom << " (Degats : " << m_degats << ")" << endl;
}
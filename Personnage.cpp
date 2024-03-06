//
// Created by Juliette Ricard on 05/03/2024.
//

#include "Personnage.h"

using namespace std;

// Constructeurs & Destructeurs
Personnage::Personnage(Arme arme) : m_arme{arme} {}

Personnage::Personnage(Personnage const& autre) : m_arme{autre.m_arme}{}

Personnage::~Personnage() {}

// Méthodes

void Personnage::recevoirDegats(int nbDegats) {
    m_vie = m_vie - nbDegats;

    if (m_vie < 0)
        m_vie = 0;
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie = m_vie + quantitePotion;

    if (m_vie > 100)
        m_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const {
    return m_vie > 0;
}
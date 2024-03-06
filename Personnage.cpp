//
// Created by Juliette Ricard on 05/03/2024.
//

#include "Personnage.h"

using namespace std;

Personnage::Personnage(std::string nomArme, int degatsArme) {
    m_nomArme = nomArme;
    m_degatsArme = degatsArme;
    assert(m_degatsArme >= 0);
}

Personnage::Personnage(Personnage const& autre) {
    m_nomArme = autre.m_nomArme;
    m_degatsArme = autre.m_degatsArme;
}
void Personnage::recevoirDegats(int nbDegats) {
    m_vie = m_vie - nbDegats;

    if (m_vie < 0)
        m_vie = 0;
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie = m_vie + quantitePotion;

    if (m_vie > 100)
        m_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme) {
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() {
    return m_vie > 0;
}
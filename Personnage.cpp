//
// Created by Juliette Ricard on 05/03/2024.
//

#include "Personnage.h"

using namespace std;


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
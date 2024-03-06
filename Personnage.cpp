//
// Created by Juliette Ricard on 05/03/2024.
//

#include "Personnage.h"

using namespace std;

// Constructeurs & Destructeurs
Personnage::Personnage(string nom) : m_nom{nom} {}
Personnage::Personnage(string nom, Arme arme) : m_nom{nom}, m_arme{arme} {}
Personnage::Personnage(string nom, Personnage const& autre) : m_nom{nom}, m_arme{autre.m_arme}{}
Personnage::~Personnage() {}

// Méthodes

void Personnage::recevoirDegats(int nbDegats) {
    cout << m_nom << " perd " << nbDegats << " degats\n" << endl;
    m_vie = m_vie - nbDegats;

    if (m_vie < 0)
        m_vie = 0;
}

void Personnage::attaquer(Personnage &cible) {
    cout << m_nom << " attaque " << cible.m_nom << endl;
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    cout << m_nom << " boit une potion et gagne " << quantitePotion << " points de vie \n" << endl;
    m_vie = m_vie + quantitePotion;

    if (m_vie > 100)
        m_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
    cout << m_nom << " change d'arme" << endl;
    m_arme.afficher();
}

bool Personnage::estVivant() const {
    return m_vie > 0;
}

void Personnage::afficherEtat() const {
    cout << m_nom << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
}
//
// Created by Juliette Ricard on 05/03/2024.
//

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include <cassert>
#include "Arme.h"

class Personnage{
    public:
        Personnage(std::string nom);
        Personnage(std::string nom, Arme arme);
        Personnage(std::string nom, Personnage const& autre);
        ~Personnage();

        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant() const;
        void afficherEtat() const;

    private:
        std::string m_nom;
        int m_vie{100};
        int m_mana{100};
        Arme m_arme;
};

#endif //PERSONNAGE_H

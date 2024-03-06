//
// Created by Juliette Ricard on 05/03/2024.
//

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include <cassert>

class Personnage{
    public:
        Personnage() = default;
        Personnage(std::string nomArme, int degatsArme);
        Personnage(Personnage const& autre);
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant();

    private:

        int m_vie{100};
        int m_mana{100};
        std::string m_nomArme{"Epee rouillee"};
        int m_degatsArme{10};
};

#endif //PERSONNAGE_H

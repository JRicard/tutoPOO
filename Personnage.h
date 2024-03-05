//
// Created by Juliette Ricard on 05/03/2024.
//

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>

class Personnage{
    public:

        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant();

    private:

        int m_vie;
        int m_mana;
        std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
        int m_degatsArme;
};

#endif //PERSONNAGE_H

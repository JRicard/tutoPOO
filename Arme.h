//
// Created by Juliette Ricard on 06/03/2024.
//

#ifndef ARME_H
#define ARME_H

#include <string>
#include <iostream>
#include <cassert>

class Arme {
    public:
        Arme() = default;
        Arme(std::string nom, int degats);

        std::string getNom() const;
        int getDegats() const;
        void setNom(std::string nouveauNom);
        void setDegats(int nouveauxDegats);

        void changer(std::string nom, int degats);
        void afficher() const;

    private:
        std::string m_nom{"Epee rouillee"};
        int m_degats{10};
};



#endif //ARME_H

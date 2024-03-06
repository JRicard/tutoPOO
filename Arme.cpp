//
// Created by Juliette Ricard on 06/03/2024.
//

#include "Arme.h"

Arme::Arme(std::string nom, int degats) : m_nom{nom}, m_degats{degats} {
    assert(m_degats >= 0);
}

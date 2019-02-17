#ifndef MODGENERATOR_H
#define MODGENERATOR_H

#include "./Mod.h"
#include "./WeaponHeaders.h"

class Weapon;
class ModGenerator{

    public:

    static void modCreatorAndApplier(Mod mod, Weapon* weapon);

};

#endif
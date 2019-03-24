#include "../Headers/IncreasedAttackSpeed.h"
#include "../../Items/Headers/Weapon.h"

IncreasedAttackSpeed::IncreasedAttackSpeed(Mod base){
    Rollers roller;

    increasedSpeed = roller.boundedIntRoller(base.getLowerMin(), base.getLowerMax());

}

void IncreasedAttackSpeed::applyToItem(Weapon& weapon){
    float increasedPercent = (float) increasedSpeed / 100;
    float addedAttackSpeed = weapon.getAttackSpeed() * increasedPercent;
    float newSpeed = weapon.getAttackSpeed() + addedAttackSpeed;
    weapon.setAttackSpeed(newSpeed);

    std::string modString = std::to_string(increasedSpeed) + "\% increased attack speed\n";
    weapon.addToModList(modString);
}

int IncreasedAttackSpeed::getIncreasedSpeed(){ return increasedSpeed; }

void IncreasedAttackSpeed::setIncreasedSpeed(int newSpeed){ increasedSpeed = newSpeed; }

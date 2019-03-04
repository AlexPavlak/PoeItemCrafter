#include <iostream>
#include "./Items/Headers/JeweledFoil.h"
#include "./Rollers/Headers/Orbs.h"

int main(){

    Orbs orbs;
    JeweledFoil myFoil(83);
    orbs.transmute(myFoil, myFoil.getBasePrefix(), myFoil.getBaseSuffix());
    std::cout <<"applying mods" <<std::endl;
    myFoil.applyMods();

    std::cout<<"printing item"<<std::endl;
    myFoil.printItem(); 
}
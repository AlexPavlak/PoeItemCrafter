
CXX = g++
RM = -rm 

CFLAGS = -Wall
CXXFLAGS = -std=c++11

Item_Headers = Items/Headers/*.h
Item_Source = Items/src/*.cpp
Mod_Headers = Mods/Headers/*.h 
Mod_Source = Mods/src/*.cpp 
Roller_Header = Rollers/Headers/*.h 
Roller_Source = Rollers/src/*.cpp 
main: ${Item_Headers} ${Item_Source} ${Mod_Headers} ${Mod_Source} ${Roller_Header} ${Roller_Source} main.cpp 
	  ${CXX} -o ./Build/$@ ${CFLAGS} ${CXXFLAGS} $^
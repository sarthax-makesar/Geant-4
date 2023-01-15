//
//  physics.hpp
//  Project
//
//  Created by Sarthak on 27/11/22.
//

#ifndef physics_hpp
#define physics_hpp

#include <stdio.h>
#include"G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"
#include "G4OpticalPhysics.hh"

class MyPhysicsList : public G4VModularPhysicsList
{
public:

    MyPhysicsList();
    ~MyPhysicsList();
};

#endif /* physics_hpp */

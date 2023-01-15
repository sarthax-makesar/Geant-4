//
//  physics.cpp
//  Project
//
//  Created by Sarthak on 27/11/22.
//

#include "physics.hpp"


MyPhysicsList::MyPhysicsList()
{
    RegisterPhysics(new G4EmStandardPhysics());
    RegisterPhysics(new G4OpticalPhysics());
}
MyPhysicsList::~MyPhysicsList()
{}

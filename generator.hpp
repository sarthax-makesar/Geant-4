//
//  generator.hpp
//  Project
//
//  Created by Sarthak on 27/11/22.
//

#ifndef generator_hpp
#define generator_hpp

#include <stdio.h>
#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"

class MyPrimaryGenerator: public G4VUserPrimaryGeneratorAction
{
    public :
    MyPrimaryGenerator();
    ~MyPrimaryGenerator();
    
    virtual void GeneratePrimaries(G4Event*) ;
private:
    G4ParticleGun *fParticleGun;
    
    
};

#endif /* generator_hpp */

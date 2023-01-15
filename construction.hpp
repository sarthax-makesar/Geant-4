#ifndef construction_hpp
#define construction_hpp
#include "G4SystemOfUnits.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"

#include "detector.hpp"
#include <stdio.h>

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public :
    MyDetectorConstruction();
    ~MyDetectorConstruction();
    virtual G4VPhysicalVolume *Construct();
    
private:
    G4LogicalVolume *logicDetector;
    virtual void ConstructSDandField();
};
#endif /* construction_hpp */



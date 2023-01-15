//
//  detector.hpp
//  Project
//
//  Created by Sarthak on 08/01/23.
//

#ifndef detector_hpp
#define detector_hpp

#include <stdio.h>
#include "G4VSensitiveDetector.hh"
#include "G4AnalysisManager.hh"
#include "G4RunManager.hh"


class MySensitiveDetector : public G4VSensitiveDetector
{
    public : MySensitiveDetector(G4String);
     ~MySensitiveDetector();

private :
virtual G4bool ProcessHits(G4Step *, G4TouchableHistory *);
};

#endif /* detector_hpp */

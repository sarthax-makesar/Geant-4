//
//  run.hpp
//  Project
//
//  Created by Sarthak on 11/01/23.
//

#ifndef run_hpp
#define run_hpp

#include "G4UserRunAction.hh"
#include "G4AnalysisManager.hh"

#include "G4Run.hh"
#include <stdio.h>

class MyRunAction : public G4UserRunAction
{
public:
    MyRunAction();
    ~MyRunAction();

    virtual void BeginOfRunAction(const G4Run*);
    virtual void EndOfRunAction(const G4Run*);
};

#endif /* run_hpp */

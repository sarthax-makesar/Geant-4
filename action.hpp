//
//  action.hpp
//  Project
//
//  Created by Sarthak on 27/11/22.
//

#ifndef action_hpp
#define action_hpp

#include <stdio.h>
#include "G4VUserActionInitialization.hh"
#include "generator.hpp"
#include "run.hpp"

class MyActionInitialization: public G4VUserActionInitialization
{
    public :
    MyActionInitialization();
    ~MyActionInitialization();
    
    virtual void Build() const;
    
};

#endif /* action_hpp */

//
//  action.cpp
//  Project
//
//  Created by Sarthak on 27/11/22.
//

#include "action.hpp"

MyActionInitialization::MyActionInitialization()
{}
MyActionInitialization::~MyActionInitialization()
{}

void MyActionInitialization::Build() const
{
    MyPrimaryGenerator *generator = new MyPrimaryGenerator();
    SetUserAction(generator);
    
    MyRunAction *runAction = new MyRunAction();
    SetUserAction(runAction);
}

//
//  detector.cpp
//  Project
//
//  Created by Sarthak on 08/01/23.
//

#include "detector.hpp"
#include "G4AnalysisManager.hh"



MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{}
MySensitiveDetector :: ~MySensitiveDetector()
{}

G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{
    G4Track *track = aStep->GetTrack();
    track->SetTrackStatus(fStopAndKill);
    
    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint();
    
    G4ThreeVector posPhoton = preStepPoint->GetPosition();
    
    //G4cout<<"Photon Position : " <<posPhoton<<G4endl;
    
    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
    G4int copyNo = touchable->GetCopyNumber();
    //G4cout <<"Copy Number"<< copyNo<<G4endl;
    
    G4VPhysicalVolume *physVol = touchable->GetVolume();
    G4ThreeVector posDetector = physVol->GetTranslation();
    
    G4cout<<" Detector Position"<< posDetector<<G4endl;
    
    G4int evt= G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();

    G4AnalysisManager *man = G4AnalysisManager::Instance();
    man->FillNtupleDColumn(0,evt);
    man->FillNtupleDColumn(1,posDetector[0]);
    man->FillNtupleDColumn(2,posDetector[1]);
    man->FillNtupleDColumn(3,posDetector[2]);
    man->AddNtupleRow(0);
}



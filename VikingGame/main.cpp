// SfmlGameTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

#include "Game.h"
#include "DumDumState.h"
#include "Level1State.h"
#include "PhysicsTestState.h"

int main()
{    
    Game::Instance(1280, 800)->Initialize();
    Game::Instance(1280, 800)->GetStateMachine()->AddState(new Level1State(), false);
    //Game::Instance(1280, 800)->GetStateMachine()->AddState(new DumDumState(), false);
    //Game::Instance(1920, 1080)->GetStateMachine()->AddState(new PhysicsTestState(), false);

    Game::Instance(1280, 800)->Run();

    return 0;
}


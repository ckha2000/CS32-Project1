//
//  main.cpp
//  Project1
//
//  Created by christopher kha on 1/11/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

//#include "Game.h"
//
//int main()
//{
//    // Create a game
//    // Use this instead to create a mini-game:   Game g(3, 4, 2);
//    Game g(7, 8, 25);
////    Game g(1, 2, 2);
//
//    // Play the game
//    g.play();
//}

#include "Arena.h"
#include "History.h"
#include "Player.h"
#include "globals.h"
#include <iostream>
using namespace std;

int main()
{
    Arena a(4, 4);
    a.addPlayer(2, 4);
    a.addZombie(3, 2);
    a.addZombie(2, 3);
    a.addZombie(1, 4);
    a.player()->moveOrAttack(LEFT);
    a.player()->moveOrAttack(UP);
    a.player()->moveOrAttack(LEFT);
    a.player()->moveOrAttack(LEFT);
    a.player()->moveOrAttack(DOWN);
    a.player()->moveOrAttack(DOWN);
    a.player()->moveOrAttack(LEFT);
    a.player()->moveOrAttack(UP);
    a.player()->moveOrAttack(UP);
    a.player()->moveOrAttack(UP);
    a.history().display();
    cerr << "====" << endl;
}

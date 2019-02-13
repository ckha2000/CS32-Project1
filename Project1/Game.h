//
//  Game.h
//  Project1
//
//  Created by christopher kha on 1/11/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#ifndef Game_h
#define Game_h

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};

#endif /* Game_h */

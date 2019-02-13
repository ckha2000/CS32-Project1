//
//  Zombie.h
//  Project1
//
//  Created by christopher kha on 1/11/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#ifndef Zombie_h
#define Zombie_h

class Arena;

class Zombie
{
public:
    // Constructor
    Zombie(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool getAttacked(int dir);
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};

#endif /* Zombie_h */

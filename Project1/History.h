//
//  History.h
//  Project1
//
//  Created by christopher kha on 1/11/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#ifndef History_h
#define History_h

#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int m_nRows, m_nCols;
    int m_deadZombies[MAXROWS][MAXCOLS];
};

#endif /* History_h */

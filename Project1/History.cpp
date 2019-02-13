//
//  History.cpp
//  Project1
//
//  Created by christopher kha on 1/11/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#include "History.h"
#include "globals.h"

#include <iostream>
using namespace std;

History::History(int nRows, int nCols){
    m_nRows = nRows;
    m_nCols = nCols;
    
    for(int r = 0; r < m_nRows; r++){
        for(int c = 0; c < m_nCols; c++){
            m_deadZombies[r][c] = 0;
        }
    }
}

bool History::record(int r, int c){
    if(!(r < 1 || r > m_nRows) && !(c < 1 || c > m_nCols)){
        m_deadZombies[r-1][c-1]++;
        return true;
    }
    return false;
}

void History::display() const{
    clearScreen();
    for(int r = 0; r < m_nRows; r++){
        for(int c = 0; c < m_nCols; c++){
            if(m_deadZombies[r][c] == 0){
                cout << '.';
            }else
            if(m_deadZombies[r][c] >=  26){
                cout << 'Z';
            }else{
                cout << ((char)('A' + m_deadZombies[r][c] - 1));
            }
        }
        cout << endl;
    }
    cout << endl;
}

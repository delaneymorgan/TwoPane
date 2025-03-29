//
// Created by craig on 23/03/25.
//

#ifndef TPOUTPUT_H
#define TPOUTPUT_H

#include <ostream>

#include <ncurses.h>

class TPOutput : public std::ostream {
public:
    TPOutput();

    virtual ~TPOutput();

private:
    WINDOW *m_Window;
};


#endif // TPOUTPUT_H

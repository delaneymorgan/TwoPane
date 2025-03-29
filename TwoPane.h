//
// Created by craig on 23/03/25.
//

#ifndef TWO_PANE_H
#define TWO_PANE_H

#include <ostream>

#include <ncurses.h>

#include "TPInput.h"
#include "TPOutput.h"

class TPInput;
class TPOutput;

class TwoPane {
public:
    explicit TwoPane(int cmdRow, size_t historySize = 100);

    virtual ~TwoPane();

    std::istream GetInput();
    std::ostream GetOutput();

private:
    TPInput m_Input;
    TPOutput m_Output;
};


#endif // TWO_PANE_H

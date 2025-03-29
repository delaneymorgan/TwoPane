//
// Created by craig on 23/03/25.
//

#include "TwoPane.h"

#include <iostream>

#include "TPInput.h"
#include "TPOutput.h"

TwoPane::TwoPane(int cmdRow, size_t historySize) : m_Input(cmdRow, historySize), m_Output() {
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    timeout(-1);
}

TwoPane::~TwoPane() {
    endwin();
}

std::istream TwoPane::GetInput() {
    return m_Input;
}

std::ostream TwoPane::GetOutput() {
    return m_Output;
}

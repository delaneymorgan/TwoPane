//
// Created by craig on 23/03/25.
//

#include "TPInput.h"

#include <stdexcept>

TPInput::TPInput(int row, size_t historySize) : m_Row(row),
                                                    m_HistorySize(historySize),
                                                    m_History(),
                                                    m_Window() {
    m_Window = newwin(1, 80, row, 0);
    if (m_Window == nullptr) {
        throw std::runtime_error("Failed to create window");
    }
    wrefresh(m_Window);
}

TPInput::~TPInput() {
    delwin(m_Window);
}

//
// Created by craig on 23/03/25.
//

#ifndef TPINPUT_H
#define TPINPUT_H

#include <istream>
#include <string>
#include <utility>
#include <utility>
#include <vector>

#include <ncurses.h>

class TPInput : public std::istream {
    typedef std::pair<std::string, size_t> TBuffer;
    typedef std::vector<TBuffer> THistory;

public:
    TPInput(int row, size_t historySize);

    virtual ~TPInput();

private:
    unsigned int m_Row;
    size_t m_HistorySize;
    THistory m_History;
    WINDOW *m_Window;
};


#endif // TPINPUT_H

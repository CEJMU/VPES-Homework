#include <iostream>
#include <iomanip>
#include <systemc>

#include "memory.h"
#include "processor.h"

int sc_main (int argc, char ** argv)
{
    processor cpu0("cpu0", "stimuli1.txt", sc_core::sc_time(1, sc_core::SC_NS));

    // TODO: add your code here

    std::cout << '\n' << "Name "
              << std::setfill(' ') << std::setw(10)
              << "Time" << " "
              << std::setfill(' ') << std::setw(5)
              << "CMD" << "   "
              << std::setfill(' ') << std::setw(8)
              << "Address"
              << "   " << std::hex
              << std::setfill(' ') << std::setw(8)
              << "Data"
              << " " << '\n'
              << "-------------------------------------------"
              << '\n';

    sc_core::sc_start();

    std::cout << '\n';
    return 0;
}

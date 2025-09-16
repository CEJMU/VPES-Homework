#pragma once

#include <format>
#include <iostream>
#include <systemc>

SC_MODULE(Monitor)
{
public:
    sc_core::sc_in<bool> A, B, Z;

    SC_CTOR(Monitor)
    {
        std::cout << "time\tA\tB\tF\n";
        SC_METHOD(monitor);
        sensitive << A << B << Z;
        dont_initialize();
    }

private:
    void monitor()
    {
        std::cout << std::format("{}\t{:d}\t{:d}\t{:d}\n",
                                 sc_core::sc_time_stamp().to_default_time_units(),
                                 A.read(),
                                 B.read(),
                                 Z.read());
    }
};

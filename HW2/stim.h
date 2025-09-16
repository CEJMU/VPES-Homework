#pragma once

#include <systemc>

SC_MODULE(stim)
{
public:
    sc_core::sc_out<bool> A, B;

    SC_CTOR(stim)
    {
        SC_THREAD(stim_gen);
    }

private:
    void stim_gen()
    {
        wait(sc_core::SC_ZERO_TIME);
        A.write(false);
        B.write(false);
        wait(10, sc_core::SC_NS);
        A.write(false);
        B.write(true);
        wait(15, sc_core::SC_NS);
        A.write(true);
        B.write(false);
        wait(10, sc_core::SC_NS);
        A.write(true);
        B.write(true);
        wait(10, sc_core::SC_NS);
        A.write(false);
        B.write(false);
        wait(10, sc_core::SC_NS);
        sc_core::sc_stop();
    }
};

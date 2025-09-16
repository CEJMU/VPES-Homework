#include "exor.h"
#include "stim.h"
#include "mon.h"

#include <systemc>

using namespace sc_core;

int sc_main(int, char**)
{
    sc_signal<bool> sigA, sigB, sigZ;

    stim Stim1("Stimulus");
    Stim1.A(sigA);
    Stim1.B(sigB);

    exor DUT("exor");
    DUT.A(sigA);
    DUT.B(sigB);
    DUT.Z(sigZ);

    Monitor mon("Monitor");
    mon.A(sigA);
    mon.B(sigB);
    mon.Z(sigZ);

    sc_start();
    return 0;
}

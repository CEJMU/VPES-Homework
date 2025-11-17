#include <iostream>
#include <systemc>

#include "kpn.h"

using namespace sc_core;

int sc_main(int argc, char** argv)
{
    kpn kahn("kpn");
    sc_start();
    return 0;
}

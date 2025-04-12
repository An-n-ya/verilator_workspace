#include "Vexample.h"
#include "verilated.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vexample *top = new Vexample;
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    delete top;
    exit(0);
}

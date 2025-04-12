.PHONY: all example

all: example


example:
	verilator -Wall -cc vsrc/example.v --exe csrc/main.cpp
	make -j -C obj_dir -f Vexample.mk Vexample

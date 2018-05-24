// Copyright 2018 Bederdinov Daniil

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/hypothec_calculator.h"

int main(int argc, const char** argv) {
    HypothecCalculator app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}

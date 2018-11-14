#ifndef GA_PARAMETERS_H
#define GA_PARAMETERS_H

const int M = 1; // 무기종류, 예비실험 10
const int K = 16; // 타겟종류,repair 예비실험 12
const int S = 16;
const int LB = 1;
const int ITERATION = 10;
const int KEEP = 3;
const int TIME_LIMIT = 72;
const int MODE_BRIEF = 0, MODE_DETAIL = 1, MODE_TEST = 2;
const int MODE_C_ERROR = 0, MODE_R_ERROR = 1, MODE_RANGE_ERROR = 2;
const int FLAG_SHORTAGE = 0, FLAG_SAME = 1, FLAG_EXCESS = 2;
const int NON_ESCAPABLE = 0, ESCAPABLE = 1;
const double CROSSOVER_RATE = 0.7;
const double MUTATION_RATE = 0.001;
static const int GENERATIONS = 1000;

#endif 

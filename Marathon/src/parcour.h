#if !defined(_parcours_)
#define _parcours_
#include "runner.h"
#include <vector>
#include <iostream>



class parcour
{
public:
    parcour();
    //int km = 42;
    void windset(runner test, int phases);
    std::vector<runner> run(std::vector<runner>test);
    void print(std::vector<runner>Allrunner);
    std::vector<float>slopes;     //table for the slopes of parcour
    std::vector<float>supplies;   //table for supplies during the parcour
    std::vector<float>app_hyd;    //table for the app_hyd of each runner
    std::vector<float>phases;     //table for the phases of the parcour
    std::vector<float>wind;       //table for the wind impact
    runner hydratation(runner test);
};


#endif

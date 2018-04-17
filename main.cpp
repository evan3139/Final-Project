/*
    Authors: Evan Wildenhain, John Sullivan ( Gets buttfucked by his "girlfriend" [ Shes really a tranny Just sayin ] )
    Started on 4/7/18
*/

#include "functions.h"
#include "bigint/bigint.h"




int main(int argc, char *argv[])
{
    std::vector<frequency> storage;
    if(argc > 0)
    {
        for(int r = 1; r < argc; r++)
        {
            std::ifstream infile;
            infile.open(argv[r]);
            frequency i;
            i.freqValue(infile);
            storage.push_back(i);
        }
        return 0;
    }
}


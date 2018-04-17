/**
 * Started by Najib 3/21/18
 **/
#include "functions.h"
#include "bigint/bigint.h"

frequency::frequency()
{ 
   frequencies.push_back(0);
}

std::vector<int> frequency::freqValue(std::ifstream &infile)
{
    std::vector<int> freqs (17576);
    char ch, b[3];
    int n = 0, result = 0;
    while(infile.get(ch))
    {
       ch = tolower(ch);
       if(((ch -'a') >= 0 && (ch-'a') <= 25))
       { 
            if (n <= 2) b[n] = ch;
            else if(n==2) result = (int)((b[0] - 'a') * 676) + (int)((b[1] - 'a') * 26) + (int)(b[2] - 'a');
            else
            {
                freqs[result] += 1;
                result = (int)((b[0] - 'a') * 676) + (int)((b[1] - 'a') * 26) + (int)(b[2] - 'a');
                b[0] = b[1];
                b[1] = b[2];
                b[2] = ch;
                std::cout<<b[0] << b[1] << b[2] << ",";
            }
            result = 0 , n++;
       }
    }
    std::cout<<b[0]<<b[1]<<b[2]<<std::endl;
    return freqs;
}
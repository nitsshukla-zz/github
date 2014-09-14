#include <stdio.h>
#include <string.h>
#include<iostream>
#include <math.h>
#include<fstream>
using namespace std;
ofstream myfile;
void runEratosthenesSieve(int upperBound) {
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
                  myfile << m << ",";

                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)
            if (!isComposite[m])
                  myfile << m << "," ;
      delete [] isComposite;
}

// Driver Program to test above function
int main()
{
    myfile.open("out.txt");
    runEratosthenesSieve(10000000000);
    return 0;
}

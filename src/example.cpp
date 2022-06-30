// C++ Cookbook
// By D. Ryan Stephens, Christopher Diggins, Jonathan Turkanis, Jeff Cogswell
// 11.17. Computing the Fast Fourier Transform

#include <iostream>
#include <complex>
#include <cmath>
#include <iterator>
#include "fftHelper.h"
#include "dofft.h"
#include "dofft.cpp"

using namespace std;

int main()
{
  typedef complex<double> cx;
  cx a[] = {cx(0, 0), cx(1, 1), cx(3, 3), cx(4, 4),
            cx(4, 4), cx(3, 3), cx(1, 1), cx(0, 0)};
  cx b[8];
  DoFft fft = DoFft();
  fft.fft(a, b, 3);
  for (int i = 0; i < 8; ++i)
    cout << b[i] << "\n";
}

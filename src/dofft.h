#ifndef DOFFT_H
#define DOFFT_H

class DoFft
{
private:
public:
    template <class Iter_T>
    void fft(Iter_T a, Iter_T b, int log2n);
};

#endif
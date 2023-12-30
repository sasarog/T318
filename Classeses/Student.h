#pragma once
#include "Chelovek.h"
namespace classes {
    class Student : public Chelovek
    {
    private:
        double _srBall;
    public:
        void SetSrBall(double srBall);
        double GetSrBall();
        void Print();
    };


}
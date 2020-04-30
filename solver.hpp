#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include <complex>

using namespace std;


double solve(RealVariable x);
double solve(RealVariable x, RealVariable y);
double solve(ComplexVariable x);

class RealVariable{
    public:

    RealVariable(): unknownAmount(0), unknownPow(0), _re(0), result(0){
    }
    RealVariable(RealVariable& copyMe){
        this->unknownAmount = copyMe.unknownAmount;
        this->unknownPow = copyMe.unknownPow;
        this->_re = copyMe._re;
        this->result = copyMe.result;
    }

    double unknownAmount;
    double unknownPow;

    double _re;
    double result;


    RealVariable& operator*(double times){
        this->unknownAmount = this->unknownAmount * times;
        return *this;
    }

    friend RealVariable& operator*(double times, RealVariable x);
    friend RealVariable& operator+(RealVariable x, RealVariable y);
    friend RealVariable& operator+(double addMe, RealVariable x);
    friend RealVariable& operator/(RealVariable x, double splitByMe);
    friend RealVariable& operator==(RealVariable x, RealVariable y);
    
    RealVariable& operator+(double addMe){
        this->_re=this->_re+addMe;
        return *this; //placeHolder
    }
    

    RealVariable& operator-(double minus){
        this->_re = this->_re-minus;
        return *this;
    }

    friend RealVariable& operator-(RealVariable x, RealVariable y);

    RealVariable& operator==(double newResult){
        this->result = newResult;
        return *this;
    }

    RealVariable& operator^(double newPow){
        this->unknownPow = newPow;
        return *this;
    }
};

class ComplexVariable{
    public:

    double unknownAmount;
    // bool unknownIsImaginry;
    

    double _re;
    double _im;

    friend ComplexVariable& operator*(double times, ComplexVariable x);
    friend ComplexVariable& operator+(ComplexVariable x, ComplexVariable y);
    friend ComplexVariable& operator+(double addMe, ComplexVariable x);
    friend ComplexVariable& operator-(ComplexVariable x, ComplexVariable y);
    friend ComplexVariable& operator==(ComplexVariable x, ComplexVariable y);

    ComplexVariable& operator-(double subtractMe){
        return *this; //placeHolder
    }

    ComplexVariable& operator==(double result){
        return *this; //placeHolder
    }

    ComplexVariable& operator^(double newPow){
        return *this; //placeHolder
    }

    ComplexVariable& operator+(double addMe){
        return *this;
    }

    ComplexVariable& operator/(double splitByMe){
        return *this;
    }

    ComplexVariable& operator+(complex<double> y){
        return *this; //placeHolder
    }




};



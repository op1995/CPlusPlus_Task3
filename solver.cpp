#include "solver.hpp"

using namespace std;
using namespace solver;



double solver::solve(RealVariable x){
    double answer = x.result - x._re;
    answer = answer/x.unknownAmount;
    return answer;
    // return 5; //placeholder
};

double solver::solve(RealVariable x, RealVariable y){
    return 5; //placeholder
};

double solver::solve(ComplexVariable x){
    return 5; //placeHolder
};

RealVariable& solver::operator*(double times, RealVariable& x){
    // RealVariable answer(x);
    // answer.unknownAmount = answer.unknownAmount * times;
    // return answer;
    return x; //placeHolder
};
RealVariable& solver::operator+(RealVariable& x, RealVariable& y){
    return x; //placeHolder
};
RealVariable& solver::operator+(double addMe, RealVariable& x){
    x._re=x._re+addMe;
    return x; //placeHolder
};

RealVariable& solver::operator-(RealVariable& x, RealVariable& y){
    return x; //placeHolder
};

RealVariable& solver::operator==(RealVariable& x, RealVariable& y){
    return x; //placeHolder
};

RealVariable& solver::operator/(RealVariable& x, double splitByMe){
    x.unknownAmount=x.unknownAmount/splitByMe;
    return x;
};




ComplexVariable& solver::operator*(double times, ComplexVariable& x){
    return x; //placeHolder
};

ComplexVariable& solver::operator+(ComplexVariable& x, ComplexVariable& y){
    return x; //placeHolder
};

ComplexVariable& solver::operator+(double addMe, ComplexVariable& x){
    return x; //placeHolder
};

ComplexVariable& solver::operator-(ComplexVariable& x, ComplexVariable& y){
    return x; //placeHolder
};

ComplexVariable& solver::operator==(ComplexVariable& x, ComplexVariable& y){
    return x; //placeHolder
};



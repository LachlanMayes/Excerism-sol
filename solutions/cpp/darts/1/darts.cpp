#include "darts.h"
#include <cmath>

namespace darts {
int score(double x, double y){
   int points =  0;
    double equation = pow(x,2) + pow(y,2);
    if (sqrt(equation) <= 10.0) {
        points = 1;
    }
    if (sqrt(equation) <= 5.0){
        points =  5;
    }
    if (sqrt(equation) <= 1.0){
        points =  10;
    }
        
    return points;
}
} // namespace darts
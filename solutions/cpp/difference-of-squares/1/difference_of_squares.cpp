#include "difference_of_squares.h"
#include <cmath>
namespace difference_of_squares {
int square_of_sum(int num){
   int count = (num * (num + 1)) / 2;
    return count * count;
}
int sum_of_squares(int num){
  int  count = 0;
    while(num != 0){
        count = count + num * num;
        num--;
    } return count;
}
int difference(int num){
    return square_of_sum(num) - sum_of_squares(num);
}
}  // namespace difference_of_squares

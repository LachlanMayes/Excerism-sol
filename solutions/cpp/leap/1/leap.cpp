#include "leap.h"
#include <iostream>

namespace leap {
bool is_leap_year(int year){
    bool leap = false;
   if (year % 4 == 0){
       leap =  true;
       if (year % 100 == 0 ){
           leap = false;
       }
       if (year % 400 == 0){
           leap =  true;
       }
   } 
   
    return leap;
}
}  // namespace leap

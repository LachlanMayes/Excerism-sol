#include "raindrops.h"
using namespace std;
#include <string>

namespace raindrops {
string convert(int number){
    string sound = "";
    string p = "";
    (number % 3 == 0) ? sound = "Pling" : p = "";
    (number % 5 == 0) ? sound += "Plang" : p = "";
    (number % 7 == 0) ? sound += "Plong" : p = "";
    if (sound == ""){
        sound = to_string(number);
    }
    return sound;
}
    
};  // namespace raindrops

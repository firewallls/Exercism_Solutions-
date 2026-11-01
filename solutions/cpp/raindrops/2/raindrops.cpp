#include "raindrops.h"
#include <string>
namespace raindrops {
// TODO: add your solution here
    std::string convert(int number){
        std::string str = "";
        if ((number%3)==0){
            str = str+"Pling";
        }
        if ((number%5)==0){
            str = str+"Plang";
        }
        if ((number%7)==0){
            str = str+"Plong";
        }
        if (str.empty()) {
            return std::to_string(number);
        }
        return str;
    }
}  // namespace raindrops

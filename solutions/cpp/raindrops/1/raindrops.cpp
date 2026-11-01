#include "raindrops.h"
#include <string>
namespace raindrops {
// TODO: add your solution here
    bool is_div_3(int num){
        return (num%3)==0;
    }
    bool is_div_5(int num){
        return (num%5)==0;
    }
    bool is_div_7(int num){
        return (num%7)==0;
    }
    std::string convert(int number){
        std::string str = "";
        if (is_div_3(number)){
            str = str+"Pling";
        }
        if (is_div_5(number)){
            str = str+"Plang";
        }
        if (is_div_7(number)){
            str = str+"Plong";
        }
        if (str.empty()) {
            return std::to_string(number);
        }
        return str;
    }
}  // namespace raindrops

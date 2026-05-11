#include "raindrops.h"
#include <string>
using namespace std;
namespace raindrops {
    
// TODO: add your solution here

    string convert(int raindrops){
        string result="";//搬到內部 這樣才可以每次呼叫時重製
        if (raindrops%3==0){
            result+="Pling";
        }
        if (raindrops%5==0){
            result+="Plang";
        }
        if (raindrops%7==0){
            result+="Plong";
        }
        if (result.empty()){
            result+=to_string(raindrops);
        }
        return result;
    }
}  // namespace raindrops

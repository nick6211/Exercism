#include "darts.h"
#include "cmath"
namespace darts {

// TODO: add your solution here
    int score(float x,float y){
        int result;
        if (sqrt(pow(x,2)+pow(y,2))<=1){
            result = 10;
        }else if (sqrt(pow(x,2)+pow(y,2))<=5){
            result = 5;
        }else if (sqrt(pow(x,2)+pow(y,2))<=10){
            result = 1;
        }else {
            result = 0;
        }
        return result;
    }
}  // namespace darts

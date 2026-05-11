using namespace std;
namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
    public:
    int x_coordinate;
    int y_coordinate;
    Alien (int x, int y){
         x_coordinate = x;
         y_coordinate = y;
      }
     int health = 3;
     int get_health(){
      return health;
     }
    bool is_alive(){
        if (health > 0){
            return true;
        }else{
            return false;
        }
    }
    bool hit(){
        if (health >0){
            health-=1;
            return true;
        }else{
            return false;
        }
    }
    bool teleport(int x_new,int y_new){
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }

    bool collision_detection(Alien x){
        if((x.x_coordinate == x_coordinate)&&(x.y_coordinate == y_coordinate)){
            return true;
            
        }else{
            return false;
        }
    }
    
    
    
        };
        
}  // namespace targets

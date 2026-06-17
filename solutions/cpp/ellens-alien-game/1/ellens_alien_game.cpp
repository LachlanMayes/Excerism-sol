namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
public:

Alien(int x, int y){
    x_coordinate = x;
    y_coordinate = y;
    health = 3;
        }
int get_health(){
    return health;
}
bool hit(){
    bool state = true;
    health -= 1;
    if(health < 0){
        state = false;
    }
    return state;
}
bool is_alive(){
bool state = true;
    if(health <= 0){
        state = false;
    }
    return state;
}
bool teleport(int x_new,int y_new){
    x_coordinate = x_new;
    y_coordinate = y_new;
    return true;
}
bool collision_detection(Alien alien){
    bool dead = false;
    if(alien.x_coordinate == x_coordinate){
        dead = true;
    }
    return dead;
}
int x_coordinate;
int y_coordinate;
    
private: 
int health;
 };
}  // namespace targets
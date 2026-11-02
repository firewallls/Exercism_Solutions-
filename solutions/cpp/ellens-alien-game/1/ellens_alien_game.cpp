namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        public:
            Alien(int x, int y){
                x_coordinate = x;
                y_coordinate = y;
            }
            int x_coordinate{};
            int y_coordinate{};
            int get_health(){
                return health;
            }
            bool hit(){
                health -= 1;
                if (health < 0){
                    health = 0;
                }
                if (health == 0){
                    alive = false;
                }
                return true;
            }
            bool teleport(int x, int y){
                x_coordinate = x;
                y_coordinate = y;
                return true;
            }
            bool is_alive(){
                return alive;
            }
            bool collision_detection(const Alien cls){
                return (cls.x_coordinate == x_coordinate) && (cls.y_coordinate == y_coordinate);
            }
        private:
            bool alive{true};
            int health{3};
};
}  // namespace targets

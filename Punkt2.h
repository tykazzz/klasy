class Punkt2
{

        double x;
        double y;
    
    public:
        
        static int number_of_instances;
    
        Punkt2();
        Punkt2(double X, double Y, bool kartez = 1);
        ~Punkt2();

        //settery
        void setX(double _x);
        void setY(double _y);
        
        //gettery
        double getX();
        double getY();

        //współrzędne biegunowe
        double getRadius();
        double getAngle();
        
        //odległość punktu od punktu _p
        double getDistance( Punkt2 _p);
};
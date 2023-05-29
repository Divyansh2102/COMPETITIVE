class ParkingSystem {
public:
    int bc=0,mc=0,sc=0;
    ParkingSystem(int big, int medium, int small) {
        bc=big,mc=medium,sc=small;
    }
    
    bool addCar(int car) {
        if(car==1 && bc>0){bc-=1;return true;}
        else if(car==2 && mc>0){mc-=1;return true;}
        else if(car==3 && sc>0){sc-=1;return true;}
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
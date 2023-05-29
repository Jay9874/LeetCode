class ParkingSystem {
private:
    int *Cars = new int[3];

    

public: 
    ParkingSystem(int big, int medium, int small) {
        Cars[0] = big;
        Cars[1] = medium;
        Cars[2] = small;
    }
public: 
    bool addCar(int carType) {
        if(Cars[carType-1] > 0){
            Cars[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
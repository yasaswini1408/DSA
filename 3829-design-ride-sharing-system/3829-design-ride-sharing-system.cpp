class RideSharingSystem {
public:
    vector<int>rider;
    vector<int>driver;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        rider.push_back(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push_back(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if(rider.empty()||driver.empty()) return {-1,-1};
        int p=driver[0];
        int q=rider[0];
        rider.erase(rider.begin());
        driver.erase(driver.begin());
        return {p,q};
    }
    
    void cancelRider(int riderId) {
        for(int i=0;i<rider.size();i++){
            if(rider[i]==riderId){ 
                rider.erase(rider.begin()+i);
                break;
            }
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
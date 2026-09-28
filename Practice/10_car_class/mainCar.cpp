#include "Car.hpp"
#include "CarDealer.hpp"

int main(void){
    //create car object
    Car my_car;
    my_car.printInfo();

    my_car.setMake("Ferrari");
    my_car.setModel("f15");
    my_car.setYear(2015);
    my_car.setMPG(15.3);

    my_car.printInfo();

    //create another car
    Car ferrari_spidderman("Ferrari", "Spider", 2021, 19.3);
    Car ferrari_greengob("Ferrari", "Super GT", 2020, 20.2);

    //create a car dealer
    CarDealer ferrari_lakeland;

    ferrari_lakeland.addCar(my_car);
    ferrari_lakeland.addCar(ferrari_spidderman);
    ferrari_lakeland.addCar(ferrari_greengob);

    ferrari_lakeland.showInventory();

    return 0;
}
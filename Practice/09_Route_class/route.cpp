#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

/*
TODO
1) Print transport info in print method
2) set transport (only car, train, plane)
3) set the transport in the constructor
4) create a train route from chicago to Miami and print info about it

*/

//create a route structure
class Route {
public:
    //Constructor is called when an object is created
    //constructor doesnt have a return type (not even void)
    //constructor is named the same as the structure
    Route(const std::string& src, const std::string& dest, const std::string& tr = "Car") {
        source = src;
        destination = dest;
        transport = tr;
        updateLength();
    }
    void print() const {
        // Source = "abc" // You cant do this in a constant method
        std::cout << "{" << source << " -> " << destination << ", " << length << ", " << transport << "}\n";
    }

    //Setters (mutator functions)
    void setDestination(const std::string& dest){
        destination = dest;
        updateLength();
    }

    void setSource(const std::string& src){
        source = src;
        updateLength();
    }

   // void setTransport(const std::string& tr){

    

    //getters
    std::string getSource() const{
        return source;
    }
    std::string getDestination() const{
        return destination;
    }
    int getLength(){
        return length;
    }

private:
    void updateLength() {
        //imagine this is a complex method that updates the distance
        length = rand() % 1000 + 100;
    }


    std::string source;
    std::string destination;
    std::string transport;
    int length;
};

int main(void) {
    srand(time(0));
    //Create a route object
    Route trip("Lakeland", "Orlando");
    //trip.source = "Lakeland";
    //trip.destination = "Orlando";
    //trip.length = 40;

    trip.print();

    Route summer_trip("Lakeland", "Detroit");
    summer_trip.print();

    summer_trip.setDestination ("New York");
    summer_trip.print();

    std::cout << "source: " << summer_trip.getSource() << std::endl;


    return 0;
}
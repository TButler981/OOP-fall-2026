#include <iostream>
#include <random>
#include <vector>

void playGame(std::vector<int> &PastRolls, std::mt19937 &gen);
int rolling(std::mt19937 &gen);

//These boolean functions act as a switch that turns on after the first roll

int main(void) {
    // Generating the seed
    int seed;
    std::cout << "Enter the seed ";
    std::cin >> seed;
    
    // Initialize a random number engine with a seed
    std::mt19937 eng(seed);

    //Define a distribution
    std::uniform_int_distribution<int> dist(1, 6);
    
    //Defining a vector that store past rolls and can be iterated through.
    std::vector<int> v1;
    
    playGame(v1, eng);

    return 0;
}

void playGame(std::vector<int> &PastRolls, std::mt19937 &gen){
    int rolledNum = rolling(gen);
    static bool FirstRollCheck;
    bool *const checkPtr = &FirstRollCheck;

    
    //base case(s) (
    if (*checkPtr == 0){
        if (rolledNum == 2 || rolledNum == 3 || rolledNum == 12){
            std::cout << "You lose" << std::endl;
            return;
        }
        if (rolledNum == 7 || rolledNum == 11){
            std::cout << "You win" << std::endl;
            return;
        }
    }
    *checkPtr = 1;
    if (rolledNum == 7 && *checkPtr == 1){
        std::cout << "You lose" << std::endl;
        return;
    }
    for (int r: PastRolls){
        if (rolledNum == r){
            std::cout << "You win" << std::endl;
            return;
        }
    }
    //) base cases end.
    PastRolls.push_back(rolledNum);
    playGame(PastRolls, gen);
}

int rolling(std::mt19937 &gen){
    std::uniform_int_distribution<int> dist(1, 6);
    int roll1 = dist(gen);
    int roll2 = dist(gen);
    int rollsum = roll1 + roll2;
    std::cout << "You rolled " << roll1 << " + " << roll2 << " = " << rollsum << std::endl;
    return rollsum;
}
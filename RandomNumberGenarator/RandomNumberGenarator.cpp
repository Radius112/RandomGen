#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <random>
#include <iomanip>
class Random {
private:
    static Random Rand;
    std::string Text = { "QWERTYUIOPASDFGHJKLZXCVBNM=-][';/.,`*/-" };
public:
    static Random& randomgen() {
        return Rand;
    };
    std::string  Rstring(bool Print) {
        std::random_device rd;
        std::mt19937 generator(rd());

        std::shuffle(Text.begin(), Text.end(), generator);

        if(Print)
          std::cout << Text.substr(0 ,39) << "\n";
        
        return Text.substr(0, 39);
    }
    void Rint(bool print) {
        //totaly did not steal it from google
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        if(print)
          for (int count = 0; count <= 1; ++count)
           {
            std::cout << std::rand();
           }
    }
    void Rdouble(bool print) {

        std::srand(std::time(nullptr));
       if(print)
          for (int i = 0; i < 1; i++)
             std::cout <<std::setprecision(10) << 10000 + (double)(rand()) / ((double)(RAND_MAX / (10000,  10000))) << "\n";
     
    }
};
Random Random::Rand;
int main(){
    // put true if you want to print it out
    // put false if you dont to print it out
    Random::randomgen().Rdouble(true);
}
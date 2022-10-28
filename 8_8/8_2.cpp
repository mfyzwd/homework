#include <iostream>
struct CandyBar
{
    std::string name;
    double weight;
    int heat;
};
void cb(CandyBar &x, const char * brand = "Millennium Munch", const double weight = 2.85, const int heat = 350);
void print(CandyBar &x); 
int main()
{
    CandyBar x;
    cb(x);
    cb(x,"A",2.5,30);
    return 0;
}
 
void cb(CandyBar &x, const char * name, const double weight, const int heat)
{
    x.name = name;
    x.weight = weight;
    x.heat = heat;
    print(x);
}
 
void print(CandyBar &x)
{
    std::cout << "nrand: " << x.name << std::endl;
    std::cout << "weight: " << x.weight << std::endl;
    std::cout << "heat: " << x.heat << std::endl;
}
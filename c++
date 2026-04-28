#include <iostream>
#include <string>
#include <vector>

struct CityProfile {
    std::string name = "Virar";
    std::string district = "Palghar";
    std::string railway_status = "Terminal Station (Western Line)";
    std::vector<std::string> landmarks = {"Arnala Fort", "Rajodi Beach", "Jivdani Mata Temple"};
};

int main() {
    CityProfile vr;
    
    std::cout << "--- " << vr.name << " City Record ---\n";
    std::cout << "District: " << vr.district << "\n";
    std::cout << "Status:   " << vr.railway_status << "\n";
    std::cout << "Top Sites: ";
    for(const auto& site : vr.landmarks) std::cout << site << " | ";
    std::cout << std::endl;
    
    return 0;
}

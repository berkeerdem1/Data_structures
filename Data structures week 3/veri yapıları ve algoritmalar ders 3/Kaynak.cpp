#include <iostream>

class Mesafe {
private:
    int metre;
    float cm;
public:
    void degerAta(int metre, float cm);
    void degerAl();
    void goster();
};

void Mesafe::degerAta(int metre, float cm) {
    this->metre = metre;
    this->cm = cm;
}

void Mesafe::degerAl() {
    std::cout << "\n metre gir";
    std::cin >> metre;
    std::cout << "cm gir";
    std::cin >> cm;
}

void Mesafe::goster() {
    std::cout << metre << "metre" << cm << "cm'dir";
}

int main()
{
    Mesafe m1;
    m1.degerAl();
    m1.goster();
    m1.degerAta(180, 19.7);
    m1.goster();
}

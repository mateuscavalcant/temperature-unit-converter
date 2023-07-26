#include <iostream>
#include <string>

struct {
    double celsius;
    double kelvin;
    double fahrenheit;
} Num;

double KelvinToCelsius() {
    return Num.celsius = Num.kelvin - 273.15;
}

double kelvinToFahrenheit() {
    return Num.kelvin * 9.0 / 5.0 - 459.67;
}

double CelsiusToKelvin() {
    return Num.kelvin = 273.15 + Num.celsius;
}

double celsiusToFahrenheit() {
    return Num.celsius * 9.0 / 5.0 + 32;
}

double fahrenheitToKelvin() {
    return (Num.fahrenheit + 459.67) * 5.0 / 9.0;
}

double fahrenheitToCelsius() {
    return (Num.fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    std::string unidade1;
    std::string unidade2;

    std::cout << "Escolha uma unidade: ";
    std::cin >> unidade1;

    if (unidade1 == "kelvin") {
        std::cout << "Converter " << unidade1 << " para qual unidade?" << std::endl;
        std::cin >> unidade2;
        
        if (unidade2 == "celsius") {
            std::cout << "Digite o valor: ";
            std::cin >>  Num.kelvin;
            std::cout << Num.kelvin << " kelvin equivale a " << KelvinToCelsius() << " celsius" << std::endl;

        } else if (unidade2 == "fahrenheit") { 
            std::cout << "Digite o valor: ";
            std::cin >>  Num.kelvin;
            std::cout << Num.kelvin << " kelvin equivale a " << kelvinToFahrenheit() << " fahrenheit" << std::endl;

        } else {
            std::cout << "Unidade inválida";
        }

    } else if (unidade1 == "celsius") {
        std::cout << "Converter " << unidade1 << " para qual unidade?" << std::endl;
        std::cin >> unidade2;
        
        if (unidade2 == "kelvin") {
            std::cout << "Digite o valor: ";
            std::cin >>  Num.celsius;
            std::cout << Num.celsius << " celsius equivale a " << CelsiusToKelvin() << " kelvin" << std::endl;

        } else if (unidade2 == "fahrenheit") {
             std::cout << "Digite o valor: ";
            std::cin >>  Num.celsius;
            std::cout << Num.celsius << " celsius equivale a " << celsiusToFahrenheit() << " fahrenheit" << std::endl;

        } else {
            std::cout << "Unidade inválida";
        }

    } else if (unidade1 == "fahrenheit") {
        std::cout << "Converter " << unidade1 << " para qual unidade?" << std::endl;
        std::cin >> unidade2;
        
        if (unidade2 == "kelvin") {
            std::cout << "Digite o valor: ";
            std::cin >>  Num.fahrenheit;
            std::cout << Num.fahrenheit << " fahrenheit equivale a " << fahrenheitToKelvin() << " kelvin" << std::endl;

        } else if (unidade2 == "celsius") {
            std::cout << "Digite o valor: ";
            std::cin >>  Num.fahrenheit;
            std::cout << Num.fahrenheit << " fahrenheit equivale a " << fahrenheitToCelsius() << " celsius" << std::endl;

        } else {
            std::cout << "Unidade inválida";
        }
        
    } else {
        std::cout << "Unidade inválida";
    }
    
    return 0;
}

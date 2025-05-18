#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    //TODO: declare your variables. We will need weight, height, 
    //      Kilo conversion (please declare as a constant), 
    //      meter conversion (please declare as a constant),
    //      weight in kilos, and height in meters
    double weight;
    double height;
    const double KILO_CONVERSION = 0.453;
    const double METER_CONVERSION = 0.0254;
    double kiloWeight;
    double meterHeight;

    std::cout << "BMI Calculator...." << std::endl;


    //TODO: Prompt the user to enter their weight in pounds
    std::cout << "Enter your weight (lbs): ";
    std::cin >> weight;

    //TODO: Prompt the user to enter their height in inches
    std::cout << "Enter your height (inches): ";
    std::cin >> height;

    //TODO: Calculate the BMI using the height and weight that was given
    double bmi = (weight * 703) / pow(height, 2);

    //TODO: Convert the weight into kilograms
    kiloWeight = weight * 0.453;

    //TODO: Convert the height into meters
    meterHeight = height * METER_CONVERSION;

    //TODO: Display the BMI, height (in meters), and weight (in kilograms). Remember to format each result to two decimal places
    std::cout << std::fixed << std::setprecision(2) << "BMI: " << bmi << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Height (M): " << meterHeight << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Weight (KG): " << kiloWeight << std::endl;

    return 0;
}
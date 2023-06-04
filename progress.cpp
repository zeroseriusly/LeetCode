#include <iostream>
#include <ctime>

int main()
{
    int counter = 0;
    int total = 0;
    int completionPercentage = 0;
    time_t startTime = std::time(nullptr);
    double predictedTime = 0.0;

    std::cout << "Enter the total value: ";
    std::cin >> total;

    int startingValue;
    std::cout << "Enter the starting value: ";
    std::cin >> startingValue;

    while (counter < total)
    {
        int input;
        std::cout << "Enter 1 to increase counter: ";
        std::cin >> input;

        if (input == 1)
        {
            counter++;
            completionPercentage = ((startingValue + counter) * 100) / total;

            // Calculate predicted time till completion in hours
            time_t currentTime = std::time(nullptr);
            double timeElapsed = difftime(currentTime, startTime);
            double timeBetweenInputs = timeElapsed / counter;
            predictedTime = ((total - startingValue) - counter) * timeBetweenInputs / 3600.0; // Convert seconds to hours

            std::cout << "Counter: " << counter << std::endl;
            std::cout << "Completion Percentage: " << completionPercentage << "%" << std::endl;
            std::cout << "Predicted Time Till Completion: " << predictedTime << " hours" << std::endl;
        }
    }

    std::cout << "Counter reached the total value. Program terminated." << std::endl;
    return 0;
}

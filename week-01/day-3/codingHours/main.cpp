#include <iostream>

int main(int argc, char const *argv[]) {
    std::cout << "Hello, World!" << std::endl << std::endl;
    int hoursCodedDayly = 6;
    float semesterLenghtInWeeks = 17;
    int daysWorkedWeekly = 5;
    float hoursWorkedWeekly = 52;
    float hoursSpentCoding = hoursCodedDayly*semesterLenghtInWeeks*daysWorkedWeekly;
    float codingTimePercent = (hoursSpentCoding / (hoursWorkedWeekly * semesterLenghtInWeeks)) * 100;

    std::cout << "Believe it or not, an average Green Fox Academy attendee spends " << hoursSpentCoding << " hours coding during the course." << std::endl;
    std::cout << "(Moreover, this is the exact horsepower value of the new Alfa Romeo Guila QV. Coincidence? Hardly!)" << std::endl << std::endl;
    std::cout << "This means, one spends "<< codingTimePercent << " % of her/his time coding." << std::endl;


    return 0;
}
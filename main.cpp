#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    // Get the current time
    auto now = system_clock::now();
    auto current_time = system_clock::to_time_t(now);

    // Convert the time to a tm struct
    std::tm* time_info = std::localtime(&current_time);

    // Extract year, month, and day from the tm struct
    int year = time_info->tm_year + 1900;
    int month = time_info->tm_mon + 1;  // Month is 0-based
    int day = time_info->tm_mday;

    // Display today's date
    std::cout << "Today's Date: " << year << '-' << month << '-' << day << std::endl;

    return 0;
}

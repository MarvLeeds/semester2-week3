#include <stdio.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hane of a clock
    unsigned char hour = 3;
    printf("Hour hand ==> %u\n", hour);

    // 2. the total population of a country, eg. China has approximately 1.4billion people
    unsigned long long population = 1400000000ULL;
    printf("Population: %llu\n", population);

    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    long long minutesDiff = -525600LL;
    printf("Minutes difference: %lld\n", minutesDiff);

    // 4. the mean temperature in Leeds over a one-year period
    float meanTemp = 11.5f;
    printf("Mean temperature: %.2f C\n", meanTemp);

    // 5. a precise GPS location to within 10cm distance
    double latitude  = 53.80077812345;
    double longitude = -1.54907812345;
    printf("GPS: %.11f, %.11f\n", latitude, longitude);

    // 6. a calculation of pi to 12 decimal places 
    double pi = 3.141592653589793;
    printf("pi (12 d.p.) = %.12f\n", pi);


    return 0;
}
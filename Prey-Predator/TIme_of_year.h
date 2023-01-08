//
// Created by PC1 on 07.01.2023.
//

#ifndef PREY_PREDATOR_TIME_OF_YEAR_H
#define PREY_PREDATOR_TIME_OF_YEAR_H
#include <string>

struct Seasons{
    std::string winter = "winter";
    std::string spring = "spring";
    std::string summer = "summer";
    std::string autumn = "autumn";
};

class TIme_of_year {
private:
    int days;
    int year;
    Seasons season;
public:
    TIme_of_year()
    {
        days = 0;
        year = 0;
    }
    TIme_of_year(int day,int year)
    {
        this->days = day;
        this->year = year;
    }
    void transformation_from_days_to_years();
    bool transform_need();
    void next_day();
    int get_day();
    std::string get_season();
};


#endif //PREY_PREDATOR_TIME_OF_YEAR_H

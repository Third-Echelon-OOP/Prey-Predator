//
// Created by PC1 on 07.01.2023.
//

#ifndef PREY_PREDATOR_TIME_OF_YEAR_H
#define PREY_PREDATOR_TIME_OF_YEAR_H


class TIme_of_year {
private:
    int day;
    int year;
public:
    TIme_of_year()
    {
        day = 0;
        year = 0;
    }
    TIme_of_year(int day,int year)
    {
        this->day = day;
        this->year = year;
    }
    void transformation_from_days_to_years();
    bool transform_need();
    void next_day();
    int get_day();
};


#endif //PREY_PREDATOR_TIME_OF_YEAR_H

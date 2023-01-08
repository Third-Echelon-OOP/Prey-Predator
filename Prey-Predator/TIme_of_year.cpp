//
// Created by PC1 on 07.01.2023.
//

#include "TIme_of_year.h"
void TIme_of_year::transformation_from_days_to_years()
{
    if(transform_need())
    {
        if(days>365){
            days=days-365;
            year++;
        }
        else if(days==365)
        {
            days=0;
            year++;
        }
    }
}
bool TIme_of_year::transform_need()
{
    if(days>=365)return true;
    else return false;
}
void TIme_of_year::next_day()
{
    days++;
    transformation_from_days_to_years();
}
int TIme_of_year::get_day()
{
    return day;
}
std::string TIme_of_year::get_season()
{
    if(day<=89) return season.winter;
    else if(day>=90 && day<=181) return season.spring;
    else if(day >= 182&& day<=273) return season.summer;
    else return season.autumn;
}
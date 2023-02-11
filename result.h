#ifndef RESULT_H
#define RESULT_H


#include <iostream>
#include "course.h"

using namespace std;


class Result {
public:

    Result();

    float GetMark() const;

    void SetMark(float mark);
    void GetUnit(Unit &unit) const;
    void SetUnit(const Unit &unit);
private:
    float m_mark;
    Unit m_object_unit;

};



float Result::GetMark() const
{
    return m_mark;
}

void Result::SetMark(float mark)
{
    m_mark = mark;
}

void Result::GetUnit(Unit &unit) const
{
    unit = m_object_unit;
}

void Result::SetUnit(const Unit &unit)
{
    m_object_unit = unit;
}

ostream & operator <<( ostream & os, const Result & R )
{
    os << R.m_unit << "Mark: " << R.m_mark << "\n";

    return os;
}

istream & operator >>( istream & input, Result & R)
{
    input >> R.m_unit >> R.m_mark;
    return input;
}






















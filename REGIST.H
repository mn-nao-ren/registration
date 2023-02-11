// REGIST.H - Registration class definition
// author KRI
// modified smr

#ifndef REGIST_H
#define REGIST_H


#include <iostream>
#include "course.h"

using namespace std;

const unsigned MaxCourses = 10;

/**
 * \class Registration
 * \brief an object of class Registration will contain data about the registration,
 * which includes the student ID number, the semester year as a number, the number of courses represented by
 * the member variable called count, and an array of Courses.
 *
 * A Registration object is created by invoking the constructor.
 *
 * A Registration object can perform the action of getting the value of count using the GetCount() method.
 * It can also perform the action of getting the value of the credits with the GetCredits() method.
 * The ostream and istream operators are declared as friends of the registration class,
 * they can get access to the class's data, private or otherwise.
 *
 */


class Registration {
public:
  /**
  * \brief This registration constructor will implement/initialize/create a Registration object.
  * \return It returns an object implemented according to the Registration class's definition
  */
  Registration();


  /**
  * \brief The public GetCredits() method is an unsigned method that returns the value of a Course object's
  * credits member attribute. Each Registration object contains an array of Course objects.
  * \return m_credits credits of type int
  *
  *
  */

  unsigned GetCredits() const;

  /**
  * \brief The public GetCount() method is an unsigned method that returns the value of the number of courses
  * found in one Registration object.
  *
  * \return m_count count of the number of courses, type int
  *
  *
  */
  unsigned GetCount() const;

private:
   /**
   * /brief A private member variable of the Registration class
   *
   * student ID number
   */
  long m_studentID;             // student ID number

  /**
   * /brief A private member variable of the Registration class
   *
   * semester year as a positive number
   */
  unsigned m_semester;          // semester year, number

  /**
   * /brief A private member variable of the Registration class
   *
   * number of courses
   */
  unsigned m_count;

   /**
   * /brief an array of Course objects
   *
   * an array of Course objects
   */
  Course courses[MaxCourses];
  Unit tempUnit;

  for(unsigned i = 0; i < m_count; i++)
  {
      m_results[i].GetUnit(tempUnit);
      sum += tempUnit.GetCredits();
  }

  return sum;

};

unsigned Registration::GetCount() const
{
  return m_count;
}

istream & operator >>( istream & input, Registration & R )
{
    input >> R.m_studentID >> R.m_semester >> R.m_count;

    for(unsigned i = 0; i < R.m_count; i++)
        input >> R.m_results[i];

    return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
    os << "Student ID: " << R.m_studentID << '\n'
        << "Semester: " << R.m_semester << '\n';

    for(unsigned i = 0; i < R.m_count; i++)
        os << R.m_results[i] << '\n';

    return os;
}

#endif


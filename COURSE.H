#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string.h>  // C string library

using namespace std;

const unsigned CourseNameSize = 10;


     /**
	 * \class Course
	 * \brief an object of the Course class will contain data about the course name, course section, and the
	 * course credits.
	 *
	 * A Course object contains the course name, section and the credits as its member attributes, which will
	 * be assigned when the constructor is invoked and the parameter values will be assigned to its respective
     * member attribute.
     * A Course object can perform the actions of setting the value of the member attribute credit by passing
     * in the parameter cred when invoking the SetCredits() method. It can also perform the action of getting
     * the value of the member attribute
     * credit by invoking the GetCredits() method and then assigning the return value to a variable of type
     * int.
     *
     * The ostream and istream operators are declared as friends the Course class. This means that they can
     * access the class's member attributes data, private or otherwise.
     *
	 * \author Tan June Hong
	 * \version 01
	 * \date 2/8/2023, Tan June Hong, Started
     *
	 *
     */


class Course {
public:
  Course();


  /**
  * \brief This Course constructor is the long-form constructor that initializes a registration object
  * with the following parameters as shown below:
  * \param nam is the name of the unit, assigned to m_name
  * \param  sect is the registration's section; assigned to m_section
  * \param cred, assigned to m_credits,
  * represents the credits awarded for this particular Course, represented by the Course object
  * \return an object of the Course class implemented according to the class definition
  */
  Course( const char * nam, char sect, unsigned cred );


  /**
  * \brief The public GetCredits() method is an unsigned method that returns the value of the private m_credits
  * attribute. It is unsigned because the number of credits for one Course is always a positive number
  * \return m_credits, number of credits the Course is worth, type int.
  *
  */
  unsigned GetCredits() const;


  /**
  * \brief The public and void type SetCredits() method takes a parameter called cred and assigns it to
  * the private m_credits member attribute.
  *
  *
  */
  void SetCredits( unsigned cred );

  friend ostream & operator <<( ostream & os, const Course & C );
  friend istream & operator >>( istream & input, Course & C );

private:
  char m_name[CourseNameSize];
  char m_section;
  int  m_credits;
};


inline unsigned Course::GetCredits() const
{
  return credits;
}

inline void Course::SetCredits( unsigned cred )
{
  credits = cred;
}

#endif

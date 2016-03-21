#ifndef STOPER_H
#define STOPER_H

#include "IStoper.h"

#include <ctime>
#include <iostream>

/*! 
 * \file
 * \brief Implementacja interfejsu IStoper
 */


/*! \brief Implementacja klasy Stoper
 *
 */
class Stoper: IStoper {
private:
  /*! \brief Przechowuje czas startu stopera.
   *
   */
  clock_t start;

  /*! \brief Przechowuje czas stopu stopera.
   *
   */
  clock_t stop;

public:

  /*! \brief Implementacja funkcji start z interfejsu IStoper
   */
  virtual void start();

  /*! \brief Implementacja funkcji stop z interfejsu IStoper
   */
  virtual void stop();

  /*! \brief Implementacja funkcji getElapsedTime z interfejsu IStoper
   */
  virtual double getElapsedTime();
};


#endif

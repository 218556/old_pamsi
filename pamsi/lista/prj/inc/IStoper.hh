#ifndef ISTOPER_H
#define ISTOPER_H

/*!
 * \file
 * \brief Interfejs IStoper
 */


/*! \brief Klasa IStoper
 */
class IStoper {
 protected:
  /*! \brief Start stopera.
   */
  virtual void start() = 0;

  /* ! \brief Stop stopera.
   */
  virtual void stop() = 0;

  /*! \brief Pobierz czas, który upłynął.
   */
  virtual double getElapsedTime() = 0;

};

#endif

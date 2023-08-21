
#ifndef CENTRALMANGENTSYSTEM_H
#define CENTRALMANGENTSYSTEM_H

#include <string>
#include vector



/**
  * class centralmangentSystem
  * 
  */

class centralmangentSystem
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  centralmangentSystem ();

  /**
   * Empty Destructor
   */
  virtual ~centralmangentSystem ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  List job;
  List applicant;
  List interviwes;
  lists selections;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of job
   * @param new_var the new value of job
   */
  void setJob (List new_var)   {
      job = new_var;
  }

  /**
   * Get the value of job
   * @return the value of job
   */
  List getJob ()   {
    return job;
  }

  /**
   * Set the value of applicant
   * @param new_var the new value of applicant
   */
  void setApplicant (List new_var)   {
      applicant = new_var;
  }

  /**
   * Get the value of applicant
   * @return the value of applicant
   */
  List getApplicant ()   {
    return applicant;
  }

  /**
   * Set the value of interviwes
   * @param new_var the new value of interviwes
   */
  void setInterviwes (List new_var)   {
      interviwes = new_var;
  }

  /**
   * Get the value of interviwes
   * @return the value of interviwes
   */
  List getInterviwes ()   {
    return interviwes;
  }

  /**
   * Set the value of selections
   * @param new_var the new value of selections
   */
  void setSelections (lists new_var)   {
      selections = new_var;
  }

  /**
   * Get the value of selections
   * @return the value of selections
   */
  lists getSelections ()   {
    return selections;
  }
private:


  void initAttributes () ;

};

#endif // CENTRALMANGENTSYSTEM_H

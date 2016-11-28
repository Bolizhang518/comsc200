//
//  GradedActivity.h
//  as8
//
//  Created by Jeff on 10/8/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef GradedActivity_h
#define GradedActivity_h

 // This program demonstrates the GradedActivity class.
 #include <iostream>
 #include "GradedActivity.h"
 using namespace std;

class GradedActivity
 {
 protected:
 double score; // To hold the numeric score
 
 public:
     
 // Default constructor
 GradedActivity()
 { score = 0.0; }

 // Constructor
 GradedActivity(double s)
 { score = s; }

 // Mutator function
void setScore(double s)
 { score = s; }

 // Accessor functions
 double getScore() const
{ return score; }

 //char getLetterGrade() const;
virtual char getLetterGrade() const
     {
         char  letterGrade; // To hold the letter grade
         
         if (score > 89)
             letterGrade = 'A';
         else if (score > 79)
             letterGrade = 'B';
         else if (score > 69)
             letterGrade = 'C';
         else if (score > 59)
             letterGrade = 'D';
         else
             letterGrade = 'f';
         
         return letterGrade;
     }
 };




#endif /* GradedActivity_h */

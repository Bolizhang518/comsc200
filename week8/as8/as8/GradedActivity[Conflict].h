//  comsc 200
//  GradedActivity.h
//  as8
//  completed
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

 char getLetterGrade() const;

 };


#endif /* GradedActivity_h */

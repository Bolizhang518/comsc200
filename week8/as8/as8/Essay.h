//
//  Essay.h
//  as8
//
//  Created by Jeff on 10/8/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Essay_h
#define Essay_h
#include <sstream>
#include <string>
#include "GradedActivity.h"
using namespace std;


 class Essay :public GradedActivity{
 private:
     int grammer ,spelling ,length ,content ;
 public:
     Essay(){
         grammer = 0;
         spelling =0;
         length = 0;
         content = 0;
     }
    Essay(int g,int s,int l,int c){
        setGrammer(g);
        setSpelling(s);
        setLength(l);
        setContent(c);
        setScore(g,s,l,c);
    }
    void setGrammer(int g){
        grammer = g;
    }
    int getGrammer(){
    return grammer;
    }

    void setSpelling(int s){
        spelling = s;
    }
    int getspelling(){
    return spelling;
    }

    void setLength(int l){
        length = l;
    }
    int getlenght(){
    return length;
    }

    void setContent(int c){
        content = c;
    }
    int getcontent(){
    return content;
    }
    void setScore(int g,int s, int l, int c)
    { score = s + g + l +c; }

 // Accessor functions
   double getScore() const
   { return score; }

   string toString();
   string getLetterGrade();
    friend ostream &operator << (ostream &, const Essay &);
};

 string Essay::toString(){
    stringstream ss;
  ss << "\n Grammer Point: " << this->getGrammer() << " \n Spelling points:"
      <<this->getspelling() << "\n Length points: " << this->getlenght()
      <<" \n Content points: " << this->getcontent() <<endl;
  return ss.str();

  }

  string Essay::getLetterGrade(){
  stringstream ss;
      if(score>80)
      ss<<"A" << endl;
      else if (score >65)
          ss<<"B";
      else
          ss<<"c" << endl;
  return ss.str();
  }




#endif /* Essay_h */

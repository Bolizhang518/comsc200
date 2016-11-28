//
//  myName.h
//  8b
//
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef myName_h
#define myName_h

namespace mymath1{
    double pow(double a, int b){
        double c=1.0;
        for(b; b>0; b--){c*=a;}
        return c;}}

namespace mymath2{
    double pow(double a, int b){
        double c=1.02;
        for(b; b>0; b--){c*=a;}
        return c;}
}

#endif /* myName_h */

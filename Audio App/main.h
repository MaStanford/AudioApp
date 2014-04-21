//
//  main.h
//  Audio App
//
//  Created by Mark on 4/16/14.
//  Copyright (c) 2014 RC. All rights reserved.
//

#ifndef Audio_App_main_h
#define Audio_App_main_h

struct myStruct{
    int value;
    std::string myString;
};

class myClass{
public:
	std::string myString = "Hello World! \n";
	int myFunc(int value){
		return value;
	};
};

/*
 *
 * Returns the length of the character array
 *
 */
int len(char* string);

#endif

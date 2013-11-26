/*
 * IApprovable.h
 *
 *  Created on: 2013.11.26.
 *      Author: thamm
 */

#ifndef IAPPROVABLE_H_
#define IAPPROVABLE_H_

#include <string>

class IApprovable
{
    public:
        virtual ~IApprovable() {};
        virtual std::string toString() = 0;
};

#endif /* IAPPROVABLE_H_ */

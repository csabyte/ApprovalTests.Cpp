/*
 * Approvals.cpp
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#include <stdio.h>
#include "Approvals.h"

Approvals::Approvals() {}

Approvals::~Approvals() {}

int Approvals::verify(const std::string& sContent) {
    return sContent.size();
}


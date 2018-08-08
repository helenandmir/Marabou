/*********************                                                        */
/*! \file Simulator.h
** \verbatim
** Top contributors (to current version):
**   Guy Katz
** This file is part of the Marabou project.
** Copyright (c) 2016-2017 by the authors listed in the file AUTHORS
** in the top-level source directory) and their institutional affiliations.
** All rights reserved. See the file COPYING in the top-level source
** directory for licensing information.\endverbatim
**/

#ifndef __Simulator_h__
#define __Simulator_h__

#include "ActivationSignature.h"
#include "InputQuery.h"

class Simulator
{
public:
    void processInputQuery( const InputQuery &inputQuery );
    void log( const String &message ) const;
    void collectOneSignature();

    InputQuery _originalQuery;
    List<ActivationSignature> _signatures;
};

#endif // __Simulator_h__

//
// Local Variables:
// compile-command: "make -C ../.. "
// tags-file-name: "../../TAGS"
// c-basic-offset: 4
// End:
//
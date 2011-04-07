// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2011 Paul Fitzpatrick, Anne van Rossum
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _YARP2_PLATFORMSIGNAL_
#define _YARP2_PLATFORMSIGNAL_

#include <yarp/conf/system.h>
#ifdef YARP_HAS_ACE
#  include <ace/OS_NS_unistd.h>
#  include <ace/OS_NS_signal.h>
#else
#  include <signal.h>
#  define ACE_SignalHandler sighandler_t
#endif

#endif
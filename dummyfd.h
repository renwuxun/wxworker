//
// Created by renwuxun on 3/8/16.
//

#ifndef WXWORKER_DUMMYFD_H
#define WXWORKER_DUMMYFD_H


#include <fcntl.h>
#include <unistd.h>


int wx_dummyfd_open();

int wx_dummyfd_get();

int wx_dummyfd_close();


#endif //WXWORKER_DUMMYFD_H

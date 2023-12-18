// pe12-3a.h
#ifndef PE12_3A_H
#define PE12_3A_H

#define METRIC 0
#define US 1


void set_mode(int m);
void get_info(int mode, double * distance, double * fuel);
void show_info(int mode, double distance, double fuel);


#endif

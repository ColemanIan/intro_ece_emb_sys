#define SIZE (20)
#ifndef __INSERTION_SORT_H_
#define __INSERTION_SORT_H_

#include <stdio.h>

void request_array();
void print_array(int a[], int length);
void print_statistics(int a[], int length);
void insertion_sort(int a[], int length);
void insertion_sort_rev(int a[], int length);
float find_median(int a[], int length);
float find_median(int a[], int length);
float find_mean(int a[], int length);
int find_maximum(int a[], int length);
int find_minimum(int a[], int length);
#endif

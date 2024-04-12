//
//  main.h
//  das_c
//
//  Created by Yaser Ahmed on 12/04/2024.
//
#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void swap(int *a, int *b);
float area_of_rectangle(float length, float width);
float perimeter_of_rectangle(float length, float width);
float area_of_circle(float radius);
float perimeter_of_circle(float radius);
int SumOfDigits(int num);
int oddEven(int num);
void divide(int num1, int num2);
int findMax(int num1, int num2, int num3);
int findMin(int num1, int num2, int num3);
float findAvrage(int num1, int num2, int num3);
float ConvertTemperature(float celsius);
float grossSalary(float basicSalary);
void currency_notes(int amount);
#endif /* MAIN_H */
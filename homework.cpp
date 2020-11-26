// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This program calculates the cost of pizza
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This function calculate the cost of pizza.
  const double labor = 0.75;
  const double rent = 1.0;
  const double hst = 1.13;
  const double materials = 0.5;
  float diameter;
  float final;
  float without_hst;

  // input
  std::cout << "Enter the diameter of the pizza (inch)" << std::endl;
  std::cin >> diameter;

  // process
  without_hst = labor + rent + (materials * diameter);
  final = without_hst * hst;

  // output
  std::cout << "" << std::endl;
  std::cout << "The total cost of pizza is $" << (final) << std::endl;
}

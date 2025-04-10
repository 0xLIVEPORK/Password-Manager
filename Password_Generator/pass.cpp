#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>

std::string Generate_Password(unsigned short length)
{
  std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz"
                      "0123456789"
                      "!@#$%^&*()";

  std::string Generated;
  for(int i = 0; i < length; i++)
  {
    Generated += chars[rand() % chars.length()]; //Generated concatenate everytime the for loop runs until it reaches (length - 1) rand gives a huge number between 0 and 32767 remainder %, you might question what if rand = 0 woudn't that be division by 0? But that's not true because the modulo operator is not actually a division it just gives you the remainder and the programmers of t hat funciton are smart enough to think aobut the edge cases like what if hte input is 0.
  }
}

#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>
#include <ctime>

struct PW_Management
{
  std::string word_list[4] = 
  {
    "She Said Take Your Time", 
    "Don't Have to Rush",
    "RAGHHHHHHHHHHHHHHH",
    "IDK WHAT TF IM DOING"
  };

  std::string Generated;
  std::string random_word = word_list[rand() % (sizeof(word_list) / sizeof(word_list[0]))];
  unsigned short length;
  std::string* pgen;



  std::string Generate_Password(unsigned short length)
  {
  std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz"
                      "0123456789"
                      "!@#$%^&*()";

    for(int i = 0; i < length; i++)
    {
      Generated += chars[rand() % chars.length()];
    }



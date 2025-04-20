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

std::string Encrypted;
  std::string Encrypt_Password(std::string Generated)
  {
    std::string Encrypted = Generated;
    for (int i = 0; i < Generated.length(); i++)
    {
      Encrypted[i] ^= random_word[i % random_word.length()];
    }

    return Encrypted;
  }

  std::string Cipher(std::string Encrypted)
  {
    std::string Deciphered = Encrypted;
    for(int i = 0; i < Deciphered.length(); i++)
    {
      Deciphered[i] ^= random_word[i % random_word.length()];
    }

    return Deciphered;
  }
};


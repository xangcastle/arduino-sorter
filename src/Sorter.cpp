/*
Sorter.cpp - Library for check sorter 8 cassethes.
Created by Cesar Abel Ramirez, March 27, 2019.
*/

#include <Arduino.h>
#include "Sorter.h"

Sorter::Sorter(int pin1, int pin2, int pin3, int pin4)
{
   pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT);
   pinMode(pin3, OUTPUT);
   pinMode(pin4, OUTPUT);
   A = pin1;
   B = pin2;
   C = pin3;
   D = pin4;
}

int Sorter::toSort(String account)
{
  // checking cassethe1
  if(_cuenta1 == account){
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 1;
  } else if (_cuenta1 == ""){
    _cuenta1 = account;
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 1;
  }

  // checking cassethe2
  if(_cuenta2 == account){
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 2;
  } else if (_cuenta2 == ""){
    _cuenta2 = account;
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 2;
  }

  // checking cassethe3
  if(_cuenta3 == account){
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 3;
  } else if (_cuenta3 == ""){
    _cuenta3 = account;
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    return 3;
  }

  // checking cassethe4
  if(_cuenta4 == account){
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 4;
  } else if (_cuenta4 == ""){
    _cuenta4 = account;
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 4;
  }

  // checking cassethe5
  if(_cuenta5 == account){
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 5;
  } else if (_cuenta5 == ""){
    _cuenta5 = account;
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 5;
  }

  // checking cassethe6
  if(_cuenta6 == account){
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 6;
  } else if (_cuenta6 == ""){
    _cuenta6 = account;
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 6;
  }

  // checking cassethe7
  if(_cuenta7 == account){
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 7;
  } else if (_cuenta7 == ""){
    _cuenta7 = account;
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    return 7;
  }

  // checking cassethe8
  if(_cuenta8 == account){
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    return 8;
  } else if (_cuenta8 == ""){
    _cuenta8 = account;
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    return 8;
  }

}

int Sorter::release()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  return 0;
}

int Sorter::cleanAccounts()
{
  _cuenta1 = "";
  _cuenta2 = "";
  _cuenta3 = "";
  _cuenta4 = "";
  _cuenta5 = "";
  _cuenta6 = "";
  _cuenta7 = "";
  _cuenta8 = "";
  return 0;
}

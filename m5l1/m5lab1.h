//m2lab1.h
//MYKAYLA LEWIS
// 2/23/26
// Header file for Animal Shelter adventure program
 
#ifndef M2LAB1_H
#define M2LAB1_H
 
// --- Shop / Path Functions ---
void go_shop();   // Player enters the pet store
void walk();      // Player walks away
 
// --- Dog Branch ---
void dog();       // Player chooses to look at dogs
void puppy();     // Player adopts a puppy
void d_adult();   // Player adopts an adult dog
void d_senior();  // Player adopts a senior dog
 
// --- Cat Branch ---
void cat();       // Player chooses to look at cats
void kitten();    // Player adopts a kitten
void c_adult();   // Player adopts an adult cat
void c_senior();  // Player adopts a senior cat
 
#endif // M2LAB1_H
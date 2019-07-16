//We start with a base, abstract class Instrument.

//it reserves (e.g. protected) the name of the instrument
//        it should provide a play() pure virtual function.
//Next, we add another abstract class, StringedInstrument which inherits from Instrument. It

//        introduces numberOfStrings and
//sound() pure virtual function what's implementation is yet unknown
//but with the help of the sound() the play() method is fully implementable
//StringedInstrument has 3 descendants, namely:-

//Electric Guitar (6 strings, "Twang")
//Bass Guitar (4 strings, "Duum-duum-duum")
//Violin (4 strings, "Screech")
//The Workshop should be invoked by the main function.

//------------------------
//Test 1 Play

//         Electric Guitar, a 6-stringed instrument that goes Twang

//        Bass Guitar, a 4-stringed instrument that goes Duum-duum-duum

//      Violin, a 4-stringed instrument that goes Screech

//    Test 2, create Electric, Bass Guitar with 7 and 5 strings.

//Test 2 Play

//        Electric Guitar, a 7-stringed instrument that goes Twangg

//      Bass Guitar, a 5-stringed instrument that goes Duum-duum-duum


#include <iostream>
#include "Instrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"


int main()
{
    std::cout << "Test 1, create Electric Guitar, Bass Guitar and Violin with default strings." << std::endl;
    ElectricGuitar guitar;
    BassGuitar bassGuitar;
    Violin violin;

    std::cout << "Test 1 Play" << std::endl;
    guitar.play();
    bassGuitar.play();
    violin.play();

    std::cout << "Test 2, create Electric Guitar, Bass Guitar with 7 and 5 strings ." << std::endl;
    ElectricGuitar guitar2(7);
    BassGuitar bassGuitar2(5);

    std::cout << "Test 2 Play" << std::endl;
    guitar2.play();
    bassGuitar2.play();

    return 0;
}
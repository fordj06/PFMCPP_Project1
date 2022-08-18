#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: robot
//  action 1: the robot moves forward
robot.forward();
//  action 2: the robot turns left 90 degrees 
robot.left_90();
//  action 3: the robot sleeps
robot.sleep();
//  2)
//  Noun: dog
//  action 1: the dog runs
dog.run();
//  action 2: the dog jumps
dog.jump();
//  action 3: the dog eats
dog.eat();
//  3)
//  Noun: sensor
//  action 1: the sensor measures temperature
sensor.measureTemperature
//  action 2: the sensor measures humidity
sensor.measureHumidity
//  action 3: the sensor measures light
sensor.measureLight
//  4)
//  Noun:       eyes
//  action 1:   the eyes blink
eyes.blink();
//  action 2:   the eyes close
eyes.close();
//  action 3:   the eyes squint
eyes.squint();
//  5)
//  Noun:       aeroplane
//  action 1:   the aeroplane takes off
aeroplane.takeOff();
//  action 2:   the aeroplane lands 
aeroplane.land();
//  action 3:   the aeroplane adjust pitch
aeroplane.pitchAdjust();
//  6)
//  Noun: Washing machine
//  action 1: Washing machine fills with water
washingsMachine.fillWater();
//  action 2: washing machine releases detergent 
washingMachine.releaseDetergent();
//  action 3: washing machine spins
washingMachine.spin();
//  7)
//  Noun: HVAC
//  action 1: HVAC turns fans on 
HVAC.fansRotate();
//  action 2: HVAC heats
HVAC.heat();
//  action 3: HVAC cools
HVAC.cool();
//  8)
//  Noun: Phone
//  action 1: phone rings
phone.ring();
//  action 2: phone updates display
phone.updateDisplay();
//  action 3: phone vibrates
phone.vibrate();
//  9)
//  Noun:laptop
//  action 1: laptop boots up
laptop.boot();
//  action 2: laptop shuts down
laptop.shutDown();
//  action 3: laptop connects to internet
laptop.connectInternet();
//  10)
//  Noun: NPC
//  action 1: NPC runs in circle 
NPC.walkCircle();
//  action 2: NPC speaks
NPC.speak();
//  action 3: NPC despawn
NPC.despawn();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

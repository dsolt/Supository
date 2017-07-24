/*
 * This is a comment.  Dave wrote it for Chelsey.  It is not going to be 
 * used to create the final program.  It is ignored by the compiler.
 */

// This is also a comment.  It uses a different format.  

/*
This uses the same format as the first comment, but it is UGLY because it is 
hard to tell where the comment begins and ends. 
*/


/* 
 * So C is very simple language.  There are only a few constructs in the 
 * language.... for, while, if, switch, function calls.
 */


#include <stdio.h>   // This tells the compiler to go find a file called
                     // stdio.h somewhere on your system and read it in so
                     // it knows what the functions look like that print do 
                     // standard input and output (standard IO, stdio)
                     //
                     // This is probably one of the harder parts of learning
                     // a new language... learning about the code that already 
                     // exists that you need to do anything interesting.  
                     // stdio is used a lot!  Many things are in there.  How 
                     // do you find out what?  You can look for the file in 
                     // /usr/include, but mostly you just learn from other
                     // people or books or uncles. 
/*
 * This is your program.  It is called main.  It is always called main
 * "main" is a special name for a function that tells the compiler this 
 * is where the program starts executing.   It takes two arguments...
 * argc = how many command lines arguments did the user add when running 
 * argv = a list (or array) of strings... one for ech command line argument
 *
 * Its also possible to have a main() with no arguments... that's just a 
 * shortcut if you know you don't ever plan to look at the command line
 * in your program.
 */
int main(int argc, char *argv[]) 

{
   int i;	// <- declares a variable for us to keep track of stuff
   int total = 0;  // <- another one, but this one we also set it to be 0
                   // right away.

/*
 * Here is one of the basic C constructs... it tells the compiler to 
 * make a program that sets i=1 then, then test if it should execute the 
 * code between { and }.  In this case if i is less than argc it executes
 * the code in { }'s.   Then add one to i, and do it again (except we don't
 * set i=1 again):
 *
 * for (AAAA ; BBBB ; CCCC) { 
 *    DDDDD
 * }  
 *
 * 1) Do AAAAA
 * 2) Test BBBB
 * 3) If BBB is true do DDDDD, then CCCCC then goto step 2
 */

   for (i = 1; i < argc; i=i+1) {   
      total = total + atoi(argv[i]); // convert argument i to an integer
                                     // then add it to total
   } 

/*
 * printf.... This prints stuff out to the standard output (the screen)
 * There is a lot to learn here.  The important thing to learn is how 
 * to find out more about printf... you need to type "man printf" and there 
 * will be lots of information about printf and how to use it.  LOTS of 
 * info there.  You can look at that as you have time.
 */
   printf("Program (%s) found the sum of command line to be %d\n", 
           argv[0], total);  // Hey, what is argv[0]? (remind me!)
 
/* 
 * All programs in linux exit with a value.  This return from main
 * will determine that value.  0 is usually considered a value of "everything 
 * worked great and the program worked as expected"
 */
   return 0;
}

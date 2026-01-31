#include <iostream> 
#include <cmath> 

/* 
Task
You will write a program that calculates magic max hit values in Old School RuneScape, 
organizing the results into a neatly formatted table using output manipulators 
like setw, setfill, and justification directives (left, right).

*/

using namespace std; 

int main () { 
/*    
     step 1 : Prompt the user to enter their Magic level (integer) and Magic bonus (integer).
*/ 


int magicLevel , magicBonus ;

cout << "Enter your Magic level: "<<endl;
cin >> magicLevel; 

cout << "Enter your Magic bonus:" << endl;
cin >> magicBonus;

/* step 2 : For each spell compute the max hit using the formula and table of spells above. */

/* Max Hit=⌊Base Damage×(1+ 
100
Magic Level
​
 )× 
1+ 
100
Magic Bonus
​
 
​

*/
string spell =  "Spell"; 
string baseDamg = "BaseDmg";
string level = "Level"; 
string bouns = "bonus"; 
string maxHit = "MaxHit";

cout << spell ; 
cout <<"----------------------------------------------"<<endl;

    return 0; 
}
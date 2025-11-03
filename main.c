#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
//each row has five words in them, so just multiply the number of rows by five (except row 49 which only has two, so 5*48+2
char words[242][30] = {
    "Shine", "Dick", "Severance", "Apple", "Friend", //1
    "Jack", "Is", "Albert", "Jacob", "Moses", //2
    "Matthew", "Dread", "Terror", "Head", "Sheldon", //3
    "Start", "Genesis", "End", "Revelation", "C", //4
    "Pillow", "Children", "Season", "One", "Two", //5
    "Three", "Greetings", "Universe", "Half", "Him", //6
    "Her", "His", "Hers", "Hot", "Dense", //7
    "Four", "Five", "Six", "Seven", "Eight", //8
    "Nine", "Ten", "Jew", "Christian", "Hindu", //9
    "Buddhist", "Islam", "Atheist", "Agnostic", "Lap", //10
    "Algebra", "Ice", "All", "Stinky", "Nothing", //11
    "Calculus", "Don't", "Ryan", "Python", "Elliott", //12
    "Smith", "Everything", "Means", "Nothing", "To", //13
    "Me", "Death", "Multiverse", "Popular", "Morgan", //14
    "Siblings", "Brother", "Sister", "The", "Adam", //15
    "Sleep", "Stay", "Redrum", "Family", "And", //16
    "Either", "Or", "Rodney", "Levi", "Daisy", //17
    "Rainbow", "Hardness", "Vodka", "Balloon", "Cozy", //18
    "Wings", "Creed", "Grass", "Roots", "Paperwork", //19
    "Hunting", "Wow", "Devon", "Forget", "God", //20
    "Terrible", "Art", "Virus", "USA", "Canada", //21
    "China", "Mexico", "Addition", "Russia", "Jesus", //22
    "Christ", "Poor", "Richard", "Satan", "Switch", //23
    "Saint", "Isolating", "Wood", "Play", "CPU", //24
    "GPU", "RAM", "Bible", "Stone", "Body", //25
    "Last", "People", "Cut", "They", "Will", //26
    "You", "Danger", "Run", "!", "Alex", //27
    "Danny", "Jack", "Bend", "Hut", "Help", //28
    "Goodbye", "Hello", "What", "Horror", "Am", //29
    "Hope", "Fear", "Obscure", "Rumor", "Doom", //30
    "Think", "Of", "And", "Also", "Because", //31
    "Those", "That", "Before", "Wind", "Kill", //32
    "Murder", "Back", "Stab", "Angel", "Pause", //33
    "Replace", "Feel", "Like", "Monster", "Tall", //34
    "Twin", "Book", "First", "Second", "Third", //35
    "Metal", "Medal", "Medical", "Falling", "Bombs", //36
    "Where", "Hear", "2025", "Red", "Orange", //37
    "Yellow", "Green", "Blue", "Purple", "Violet", //38
    "Peach", "Temple", "Linux", "Windows", "Microsoft", //39
    "Apple", "Mac", "Windows", "Libre", "Liberty", //40
    "English", "Spanish", "Bombs", "Compile", "Shoot", //41
    "Crap", "Spoiled", "Open", "Close", "Sailor", //42
    "Tiny", "Mother", "Father", "Social", "C++", //43
    "Butter", "Syrup", "Lasanga", "State", "Hunger", //44
    "Mango", "Elden", "Opened", "Closed", "Pizza", //45
    "Tower", "Play", "Station", "Walls", "Alpha", //46
    "Moron", "Lock", "Fight", "Run", "One", //47
    "Control", "Underground", "Sun", "Enemy", "Team", //48
    "Cat", "Dog" //49 
};


int z; //not x or i
int min = 0; //minimum words
int max = 219; //maximum words (don't know if they are up to date)

void gen(void) {
    int rir = (rand() % (max - min + 1)) + min;
    printf("%s [%d]\n", words[rir], z); //easy generator function so no need for boilerplate (looking at you java)
}

int main(void) {
    srand(time(NULL) ^ getpid()); //seeds rng 
    system("clear"); //clears screen using bash script (only works on linux)
    sleep(1); //pauses for a second 
    for(z = 0; z <= 255; z++){
		gen();
		sleep(1);
	}
    return 0;
}   

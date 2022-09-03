#include <bits/stdc++.h>
#include<ctime>
using namespace std;

int main(){

srand((unsigned int) time (NULL));
	
	// int a = rand()%6;
	
	
	// cout <<a<<endl;
	string description[]={"Incredibly curious- investigates anything new and enjoys watching me do things. Gets frustrated if a barrier prevents her from 'helping'",
	"Dependently playful- doesnt much enjoy playing on her own unless a puzzle toy with food. Brings me balls and stuffed toys. Steals things off of tables if bored and prances away while looking back to try and get me involved.",
	"Sits near me and looks at me in the backyard- gets excited when pick up a ball or the frisbee.",
	"Naughty and she knows it: sometimes she gets things she knows she isnt supposed to have, and becomes immune to all commands. She'll fold her ears back and run from me if I try to take it, and only 'find it!' seems to get her to abandon the item (dunno why that one). She knows drop it, bring it, leave it, etc... but a rock or stick will cause these commands to not work.",
	"Foot sleeper: she sleeps at my feet, and if get up at night to take a piss, she gets up and comes to the bathroom so she can sleep at my feet again. Issuing stay before leave only prolongs her arrival.",
	"Too smart for anyone's good: knows upward of 55 commands, and about 20-30 phrases on top of that. Cannot discuss eating without her starting to drool; words to avoid include food, eat, hungry, meal, f-o-0-d, e-a-t, h-u-n-g-r-y, and m-e-a-l. Must also avoid treat names. Has figured out how to open baby gates and the back door unless securely locked."};
	
	string name[] = {"bailey", "max", "charlie", "buddy", "ricky", "jack", "duke", "cooper", "lucky", "oliver", "sam", "muphy", "rocky", "jake", "tucker", "toby", "cody", "bear", "lumi", "lucy", "daisy", "rosie", "sophie", "emma", "lola", "coco", "lily", "molly", "maggie", "ruby", "annie", "Bella","Bonnie", "Cali","Chloe","Cleo", "Dixie","Ella","Ellie","Gigi","Grace","roxy","rosy","zoye","rumy","sally","layla","rommi","daina","leily","oliver","max","charlie","sammy","tigger","toby","oscar","shadow","jack","simba","leo","milo","tiger","smokey","buddy","sam","simon","jasper",
                     "oreo","rocky","alex","andy","dylan","tango","tiger","adele","agatha","amelia","amidala","Anastasia","athena","autumn","bella","barley","callie","candy","carmilla","chelsa","chloe","daisy","dana","dandelion","dinah","flora","fluff","lily","linda","maggie","pearl","polly","noelle","bessie",
                     "bella","brownie","magic","dottie","rosie","snowflakes","gertie","bossy","betsie","annabelle","smokey","foxy","pearl","ella","sadie","sweetie","millie","minnie"};

    string dog_breed[] = {"vikhan Sheepdog", "Sinhala hound", "jonangi","bakharwal","pandikona","tangkhul","chippiparai"};
    string cat_breed[] = {"bengal", "persian", "siamese","bombay","exotic","himalaya","maine coon","billi"};
	

			cout<<"======================Dogs data============================="<<endl;

		

		for (int i = 1; i <=25; i++)
		{
			cout<<"{\nKey:"<<i<<",\nName:"<<"\""<<name[i]<<"\""<<",\nImage:"<<"\"/dog"<<i<<".jpg"<<"\""<<",\nCategory:\"Dog\","<<"\nGender:"<<(i%3==0 ? "\"Female\"," : "\"Male\",")<<"\nAge:""\""<<rand()%30+1<<" Years\","<<"\nLocation:\"Sector "<<((rand()%20+1)*6)+1<<"\""<<",\nDescription:"<<"\""<<description[rand()%6]<<"\""<<",\nFWC:\"Yes\""<<",\nbreed:"<<"\""<<dog_breed[i%7]<<"\""<<",\nSterilized:\"yes\"\n}"<<endl;
		}
		
		
		
		
			cout<<"======================Cats data============================="<<endl;
		
		for (int i = 26; i <=50; i++)
		{
			cout<<"{\nKey:"<<i<<",\nName:"<<"\""<<name[i]<<"\""<<",\nImage:"<<"\"/cat"<<i-25<<".jpg"<<"\""<<",\nCategory:\"Cat\","<<"\nGender:"<<(i%3==0 ? "\"Female\"," : "\"Male\",")<<"\nAge:""\""<<rand()%30+1<<" Years\","<<"\nLocation:\"Sector "<<((rand()%20+1)*6)+1<<"\""<<",\nDescription:"<<"\""<<description[rand()%6]<<"\""<<",\nFWC:\"Yes\""<<",\nbreed:"<<"\""<<cat_breed[i%7]<<"\""<<",\nSterilized:\"yes\"\n}"<<endl;
			// cout<<"{\nKey:"<<i<<",\nName:"<<name[i]<<",\nimage:"<<"/cIt"<<i<<",\nbreed:"<<cat_breed[i%7]<<"\nC"<<endl;
}
			
		
			
			
	return 0;
}

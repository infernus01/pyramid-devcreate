#include <bits/stdc++.h>
#include<ctime>
using namespace std;

int main(){

srand((unsigned int) time (NULL));
	
	// int a = rand()%6;
	
	
	// cout <<a<<endl;
	string description[]={"Lorem ipsum","Sarabjot","Hellowwww","haan yaar","bolo kya hai","mehek"};
	
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

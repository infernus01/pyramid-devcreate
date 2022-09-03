#include "iostream"
using namespace std;

int main(){
	// string name[] = {"madhav", "gupta", "manibhushan","madhavi", "guptain", "mani"};
	// string br[] = {"street dog","pitbull","street dog","street cat","kuchh bhi","simple cat"};
	
	// string gn[] = {"male", "female"};
	string name[] = {"bailey", "max", "charlie", "buddy", "ricky", "jack", "duke", "cooper", "lucky", "oliver", "sam", "muphy", "rocky", "jake", "tucker", "toby", "cody", "bear", "lumi", "lucy", "daisy", "rosie", "sophie", "emma", "lola", "coco", "lily", "molly", "maggie", "ruby", "annie", "Bella",
                     "Bonnie", "Cali","Chloe","Cleo", "Dixie","Ella","Ellie","Gigi","Grace","roxy","rosy","zoye","rumy","sally","layla","rommi","daina","leily","oliver","max","charlie","sammy","tigger","toby","oscar","shadow","jack","simba","leo","milo","tiger","smokey","buddy","sam","simon","jasper",
                     "oreo","rocky","alex","andy","dylan","tango","tiger","adele","agatha","amelia","amidala","Anastasia","athena","autumn","bella","barley","callie","candy","carmilla","chelsa","chloe","daisy","dana","dandelion","dinah","flora","fluff","lily","linda","maggie","pearl","polly","noelle","bessie",
                     "bella","brownie","magic","dottie","rosie","snowflakes","gertie","bossy","betsie","annabelle","smokey","foxy","pearl","ella","sadie","sweetie","millie","minnie"};

    string dog_breed[] = {"vikhan Sheepdog", "Sinhala hound", "jonangi","bakharwal","pandikona","tangkhul","chippiparai"};
    string cat_breed[] = {"bengal", "persian", "siamese","bombay","exotic","himalaya","maine coon","billi"};
	
			cout<<"======================Dogs data============================="<<endl;
		
			
		// }
		for (int i = 1; i <=50; i++)
		{
			cout<<"{\nkey:"<<i<<",\nname:"<<name[i]<<",\nbreed:"<<dog_breed[i%7]<<"\n}"<<endl;
		}
		
		
		
		
			cout<<"======================Cats data============================="<<endl;
		
		for (int i = 51; i <=100; i++)
		{
			cout<<"{\nkey:"<<i<<",\nname:"<<name[i]<<",\nbreed:"<<cat_breed[i%7]<<"\n}"<<endl;
		}
			
		
			
			
	return 0;
}

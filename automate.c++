#include "iostream"
using namespace std;

int main(){
	string name[] = {"madhav", "gupta", "manibhushan","madhavi", "guptain", "mani"};
	string br[] = {"street dog","pitbull","street dog","street cat","kuchh bhi","simple cat"};
	
	string gn[] = {"male", "female"};
	
			cout<<"======================Dogs data============================="<<endl;
			for(int j=0; j<=2; j++){
			cout<<"{\nkey:"<<j<<",\nname:"<<"'"<<name[j]<<"'"<<",\nbreed: "<<"'"<<br[j]<<"'"<<",\n},\n";
			
		}
		
		
			cout<<"======================Cats data============================="<<endl;
			for(int j=3; j<=5; j++){
			cout<<"{\nkey:"<<j<<",\nname:"<<"'"<<name[j]<<"'"<<",\nbreed: "<<"'"<<br[j]<<"'"<<",\n},\n";
			
		}
			
		
			
			
	return 0;
}

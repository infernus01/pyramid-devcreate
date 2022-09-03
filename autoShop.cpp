#include <bits/stdc++.h>
#include<ctime>
using namespace std;

int main(){

srand((unsigned int) time (NULL));
	
	// int a = rand()%6;
	
    string food[] = {"Vegan Organic ","Duck and Chickpea","dost","Hungry Bark","Gerber Oatmeal Cerial","Meow","Calico","Couscous","Fine Dog Food","Better Bones"} ;
    // a= food
    string meds[] = {"whiskas","Super Can","Dog chow","Vimocat","Dr.Pet","Omeprazol","salsa","endolav"};
    string access[] = {"carry bag","dental chew","razor","tie","groomingKit","Strong belt","Thin belt"};

	// cout <<a<<endl;
	string descriptionFood[]={"Good in fiber, proteins and helps in boosting immune system.","Very good for calcium.", "Boosts immune."};
	// string descriptionmeds[]={"Good in fiber, proteins and helps in boosting immune system.","Very good for calcium.", "Boosts immune."};
	string descriptionaccess[]={"fun for the pet, harmless for the pet.","Strong."};



			cout<<"======================Food data============================="<<endl;

		

		for (int i = 1; i <=9; i++)
		{
			cout<<"{\nid:"<<i<<",\nName:"<<"\""<<food[i]<<"\""<<",\nImage:"<<"\"/food"<<i<<".jpg"<<"\""<<",\nCategory:\"food\","<<"\nDescription:"<<"\""<<descriptionFood[rand()%3]<<"\""<<",\nprice:"<<"\""<<((rand()%200)+200)<<"\""<<"\n}"<<endl;
		}
		
		
		
		
			cout<<"======================Cats data============================="<<endl;
            for (int i = 1; i <=7; i++)
		{
			cout<<"{\nid:"<<i<<",\nName:"<<"\""<<access[i]<<"\""<<",\nImage:"<<"\"/access"<<i<<".jpeg"<<"\""<<",\nCategory:\"accessories\","<<"\nDescription:"<<"\""<<descriptionaccess[rand()%3]<<"\""<<",\nprice:"<<"\""<<((rand()%200)+200)<<"\""<<"\n}"<<endl;
		}
		
		
// 		for (int i = 26; i <=50; i++)
// 		{
// 			cout<<"{\nid:"<<i<<",\nName:"<<"\""<<name[i]<<"\""<<",\nImage:"<<"\"/cat"<<i-25<<".jpg"<<"\""<<",\nCategory:\"Cat\","<<"\nGender:"<<(i%3==0 ? "\"Female\"," : "\"Male\",")<<"\nAge:""\""<<rand()%30+1<<" Years\","<<"\nLocation:\"Sector "<<((rand()%20+1)*6)+1<<"\""<<",\nDescription:"<<"\""<<description[rand()%6]<<"\""<<",\nFWC:\"Yes\""<<",\nbreed:"<<"\""<<cat_breed[i%7]<<"\""<<",\nSterilized:\"yes\"\n}"<<endl;
// 			// cout<<"{\nid:"<<i<<",\nName:"<<name[i]<<",\nimage:"<<"/cIt"<<i<<",\nbreed:"<<cat_breed[i%7]<<"\nC"<<endl;
// }
			
	      for (int i = 1; i <=8; i++)
		{
			cout<<"{\nid:"<<i<<",\nName:"<<"\""<<meds[i]<<"\""<<",\nImage:"<<"\"/med"<<i<<".jpg"<<"\""<<",\nCategory:\"medicines\","<<"\nDescription:"<<"\""<<descriptionFood[rand()%3]<<"\""<<",\nprice:"<<"\""<<((rand()%200)+200)<<"\""<<"\n}"<<endl;
		}
			
			
			
	return 0;
}

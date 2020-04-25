//text adventure game with functions - 3 different endings

#include <iostream>
#include <string>
using namespace std;

//my functions

/*endings*/

//sister drives you home
void ending1(string sister)
{
	
	if (sister == "yes")
	{
		cout << "You walk over to Jane and she just smiles at you.";
		cout << "\n - Mandy called and said you were here.";
		cout << "\n - Who is Mandy?";
		cout << "\n - The cashier inside. Come on Evan, I'm taking you home.";
		cout << "\nYou get in the car and drive home with your sister Jane.\n The end.";
	}
	else //dont call sister
	{
		cout << "While you try to run away, Jane sees you and smiles. She walked over and says:";
		cout << "\n - Mandy called and said you were here.";
		cout << "\n - Who is Mandy?";
		cout << "\n - The cashier inside. Come on Evan, I'm taking you home.";
		cout << "\nYou get in the car and drive home with your sister Jane.\n The end.";
	}
}

//police take you home
void ending2(string police)
{
	
	if (police == "yes")
	{
		cout << "The officer grumbles and gets out of the car. How old are you, he asks.";
		cout << "\nYou reply, 'I'm 17, sir.'";
		cout << "\nHe sighs and says come on, kid. I'm taking you home to your parents.";
		cout << "\nYou drive home with the police officer, terrified of what's to come. The end.";
	}
	else // you lie to the police
	{
		cout << "No sir.\n.The officer takes one look at you and asks you to walk in a straight line.\nYou fail miserably and he sighs and says, 'Come on son, I'm taking you home to your parents.'";
		cout << "\nYou drive home with the police officer, terrified of what's to come. The end.";
	}
}
 //jess picks you up
void ending3(string calljess)
{
	
	if (calljess == "yes")
	{
		cout << "You call Jess and she picks up and agrees to come get you.\nYou wait outside and within 10 minutes, Jess you're in the passenger seat of her car fast asleep on the way home.";
		cout << "\nThe end.";
	}
	else //don't call Jess
	{;
		cout << "You keep walking and somehow, Jess pulls up beside you.";
		cout << "Did Samantha call you?";
		cout << "She smiles and says 'Get in'. You fall fast asleep in the passenger seat while she drives you home.\nThe end.";
	}
}

//call samantha
void answer3sam(string callsam)
{
	string calljess, police;
	
	if (callsam == "yes")
	{
		cout << "\nYou take your phone out of your pocket and dial Samantha's number. She picks up on the third ring.";
		cout << "\n - 'Hello?'";
		cout << "\n - 'Hey Sam, it's Evan. I'm in the middle of nowhere, can you come get me?'";
		cout << "\n - 'Uh hey Evan, I'm kind of in the middle of something right now, but maybe you can call Jessica?'";
		cout << "\n - 'Ugh okay.' \nYou hang up and sigh. You don't really want Jessica to come pick you up, but you are very tired. Do you call her?";
		cout << "\nType 'yes' or 'no'. ";
		cin >> calljess;
		ending3(calljess);
	}
	else //don't call samantha
	{
		cout << "You keep walking and hear sirens. There's no point in running. ";
		cout << "\nA police officer pulls up next you and asks if you have been drinking. What do you say?";
		cout << "\nType 'yes' or 'no'.";
		cin >> police;
		ending2(police);
		
	}
}

// donation
void answer3donation(string donation)
{
	string sister;
	
	if (donation == "yes")
	{
		cout << "You put money into the jar and the clerk smiles at you.";
		cout << "\nYou walk out of the store and start walking towards the highway when you see a familiar car by pump #6... your sister!";
		cout << "\nYou're curious as to why your sister is getting gas at 1am, but you're not sure if you should go see her, as you are drunk.";
		cout << "\nDo you call out to her or try to get away before she sees you?";
		cout << "\nType 'call' or 'run'.";
		cin >> sister;
		ending1(sister);
	}
	else //no donation
	{
		cout << "\nYou walk out of the store and start walking towards the highway when you see a familiar car by pump #6... your sister!";
		cout << "\nYou're curious as to why your sister is getting gas at 1am, but you're not sure if you should go see her, as you are drunk.";
		cout << "\nDo you call out to her or try to get away before she sees you?";
		cout << "\nType 'call' or 'run'.";
		cin >> sister;
		ending1(sister);
	}
}

//the chips on the ground
void answer3chips(string chips)
{
	string police, jess;
	
	if (chips == "eat")
	{
		cout << "You bend over and start picking up the chips when you hear sirens. There's no point in running.";
		cout << "\nA police officer pulls up next you and asks if you have been drinking. What do you say?";
		cout << "\nType 'yes' or 'no'.";
		cin >> police;
		ending2(police);
	}
	else //don't pick up chips
	{
		cout << "You keep walking and you see a car up ahead slowing down.";
		cout << "\nThey pull up in front of you and your friend Jess steps out of the car!";
		cout << "\nShe asks what you're doing and if you want a ride home. Do you accept?";
		cout << "\nType 'yes' or 'no'. ";
		cin >> jess;
		ending3(jess);
	}
}

//hitchhike
void answer2hh(string hitchhike)
{
	
	string callsam;
	
	if (hitchhike == "yes")
	{
		cout << "You stick your thumb out but you forgot it's pitch black outside and cars are going 110. Nobody is going to stop for you so you keep walking.";
		cout << "\n You're starting to get hungry... should you try to call your friend Samantha to see if she can pick you up?";
		cout << "\n Type 'yes' or 'no'. ";
		cin >> callsam;
		answer3sam(callsam);
	}
	else //no hitchhike attempt
	{
		cout << "You keep walking down the highway. You're starting to get hungry... should you try to call your friend Samantha to see if she can pick you up?";
		cout << "\n Type 'yes' or 'no'. ";
		cin >> callsam;
		answer3sam(callsam);
	}
}

//payment in gas station
void answer2pmt(string payment)
{
	string donation, chips;
	
	if (payment == "cash")
	{
		cout << "You take out your wallet and give the clerk a $5 bill. She gives you your change. Do you want to donate to the IWK cash box?";
		cout << "\n Type 'yes' or 'no'. ";
		cin >> donation;
		answer3donation(donation);
	}
	else //paid with debit
	{
		cout << "You take your debit card out of your wallet and pay for your chips.";
		cout << "\n You leave the gas station and open your bag of chips and start eating. Mmmmm these are hitting different...";
		cout << "\n oh no! You accidentally drop your bag of chips and they spill everywhere onto the ground. But you're so hungry... do you pick them up and eat them or keep walking?";
		cout << "\nType 'eat' or 'leave'. ";
		cin >> chips;
		answer3chips(chips);
	}
}

//gas station
void answer1(string gasstation)
{
	string hitchhike, payment;
	
	if (gasstation == "walk")
	{
		cout << "You decide it is not worth it to go inside... You keep walking down the highway, a few cars passing you on the way. \nDo you want to try to hitchkike to get home faster?";
		cout << "\n Type 'yes' or 'no'. ";
		cin >> hitchhike;
		answer2hh(hitchhike);
	}
	else //go inside
	{
		cout << "You walk into the gas station. The floors are wet and there is nobody in the store except the clerk. ";
		cout << "\n You walk to the chip section and get some Sweet Chili Heat Doritos - your favourite. You go up to the clerk who tells you your total of $3.75.";
		cout << "\n Do you pay cash or debit? Type 'cash' or 'debit'. ";
		cin >> payment;
		answer2pmt(payment);
	}
}

//calling functions & beginning of story
int main ()
{
	//defining my variables
	string gasstation;
	
	cout << "You are walking down an empty highway at 1am on a summer night. You were out drinking with your buddies when you hear police sirens, so you run. ";
	cout << "\nYou're really plastered but you're craving some chippys right now and you can see a gas station up ahead. \nDo you go inside and risk he employee calling the cops or do you keep walking?";
	cout << "\n Type 'walk' or 'inside'.";
	cin >> gasstation;
	answer1(gasstation);

}





#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>
#include <ctime>
#include <windows.h>
#include "kAOL.cpp"

// prototype for Elite Talker 
int EliteTalker(char usersString[]);
int TimeView();
void Hug(char usersString[]);
void eHug(char usersString[]);
void killwelcome();
void SendIM();

// Add these functions
//void AimLogIn();
//void SendMail();
//HWND NewMail();


int main()
{
	//chatsend and variables
	char usersString[265];

	SendMessage(FindAOL(), WM_SETTEXT, 0, (LPARAM) "Chaos Theory");

	//Chatsend when opened
	SendChat("<font face=\"Arial\" color=#0000FF>Çh<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#000000>Åd<font face=\"Arial\" color=#0000FF>mi<font face=\"Arial\" color=#000000>ni<font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>ràt<font face=\"Arial\" color=#0000FF>òr <font face=\"Arial\" color=#000000>Vè<font face=\"Arial\" color=#0000FF>rs<font face=\"Arial\" color=#000000>iòn<font face=\"Arial\" color=#0000FF> Lò<font face=\"Arial\"color=#000000>ád<font face=\"Arial\" color=#0000FF>èd. ");
	SendChat("<font face=\"Arial\" color=#0000FF>Çò<font face=\"Arial\" color=#000000>d<font face=\"Arial\"color=#0000FF>èd <font face=\"Arial\" color=#0000FF>in<font face=\"Arial\" color=#000000> C++");
	SendChat("<font face=\"Arial\" color=#0000FF>by <font face=\"Arial\" color=#000000>cr<font face=\"Arial\" color=#0000FF>im<font face=\"Arial\" color=#000000>in<font face=\"Arial\" color=#0000FF>aL<font face=\"Arial\" color=#000000> ànd <font face=\"Arial\" color=#0000FF>Wà<font face=\"Arial\" color=#000000>rl<font face=\"Arial\" color=#0000FF>òck.");


	//Enter Elite talker function when program loads
	EliteTalker(usersString);

	//program starts
	do {
		cout << "Enter string to send to chat: ";
		gets_s(usersString);
		//	SendChat(usersString);

		//chatsend for exiting the program
		if (strcmp(usersString, "'exit") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Cl<font face=\"Arial\" color=#000000>øs<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> Ch<font face=\"Arial\" color=#0000FF>àø<font face=\"Arial\" color=#000000>s<font face=\"Arial\" color=#0000FF> Th<font face=\"Arial\" color=#000000>èø<font face=\"Arial\" color=#0000FF>ry.");
			system("CLS");
		}

		//chatsend for shouts
		else if (strcmp(usersString, "'shouts") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Vi<font face=\"Arial\" color=#000000>èw<font face=\"Arial\" color=#0000FF>in<font face=\"Arial\" color=#000000>g<font face=\"Arial\" color=#0000FF> Sh<font face=\"Arial\" color=#000000>øù<font face=\"Arial\" color=#0000FF>ts.");
			SendChat("<font face=\"Arial\" color=#0000FF>Xe<font face=\"Arial\" color=#000000>ek,<font face=\"Arial\" color=#0000FF> De<font face=\"Arial\" color=#000000>str<font face=\"Arial\" color=#0000FF>oy,<font face=\"Arial\" color=#000000> ka<font face=\"Arial\" color=#0000FF>sh, <font face=\"Arial\" color=#000000>fe<font face=\"Arial\" color=#0000FF>aR,<font face=\"Arial\" color=#000000> l<font face=\"Arial\" color=#0000FF>e<font face=\"Arial\" color=#000000>x,<font face=\"Arial\" color=#0000FF> jí<font face=\"Arial\" color=#000000>sh,<font face=\"Arial\" color=#0000FF> lí<font face=\"Arial\" color=#000000>ll<font face=\"Arial\" color=#0000FF>y.");
			system("CLS");
		}

		//chatsend for advertisment
		else if (strcmp(usersString, "'adv") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Çh<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#000000>Åd<font face=\"Arial\" color=#0000FF>mi<font face=\"Arial\" color=#000000>ni<font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>ràt<font face=\"Arial\" color=#0000FF>òr <font face=\"Arial\" color=#000000>Vè<font face=\"Arial\" color=#0000FF>rs<font face=\"Arial\" color=#000000>iòn.");
			SendChat("<font face=\"Arial\" color=#0000FF>Çò<font face=\"Arial\" color=#000000>d<font face=\"Arial\"color=#0000FF>èd <font face=\"Arial\" color=#0000FF>in<font face=\"Arial\" color=#000000> C++");
			SendChat("<font face=\"Arial\" color=#0000FF>by <font face=\"Arial\" color=#000000>cr<font face=\"Arial\" color=#0000FF>im<font face=\"Arial\" color=#000000>in<font face=\"Arial\" color=#0000FF>aL<font face=\"Arial\" color=#000000> ànd <font face=\"Arial\" color=#0000FF>Wà<font face=\"Arial\" color=#000000>rl<font face=\"Arial\" color=#0000FF>òck.");
		}

		// idler not complete
		else if (strcmp(usersString, "'ídlè") == 0)
		{
			SendChat("Enter repeat time of idler:");
			system("CLS");
		}

		//view commands
		else if (strcmp(usersString, "'coms") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Vi<font face=\"Arial\" color=#000000>èw<font face=\"Arial\" color=#0000FF>in<font face=\"Arial\" color=#000000>g<font face=\"Arial\" color=#0000FF> Cò<font face=\"Arial\" color=#000000>mm<font face=\"Arial\" color=#0000FF>àn<font face=\"Arial\" color=#000000>ds.");
			cout << "'adv     - advertise program.     " << endl;
			cout << "'coms    - view commands.         " << endl;
			cout << "'exit    - exit program.          " << endl;
			cout << "'idle	  - chatroom idler.        " << endl;
			cout << "'shouts  - shouts out to people.  " << endl;
			cout << "'clear   - clears console.        " << endl;
			cout << "'etext   - enter elite text.      " << endl;
			cout << "'ctext   - close elite text.      " << endl;
			cout << "'hug     - hug person.            " << endl;
			cout << "'mail    - open write mail.       " << endl;
			cout << "'date    - current d/t/date.      " << endl;
			cout << "'new     - open new mail.         " << endl;
			cout << "'haol    - hide AOL.              " << endl;
			cout << "'saol    - show aol.              " << endl;
			cout << "'addb    - add buddy.			   " << endl;
			cout << "'write   - write mail to recpient." << endl;
			cout << "'im      - send im to recipient.  " << endl;
		}

		//clears console 
		else if (strcmp(usersString, "'clear") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Cl<font face=\"Arial\" color=#000000>èà<font face=\"Arial\" color=#0000FF>rèd<font face=\"Arial\" color=#000000> Cø<font face=\"Arial\" color=#0000FF>ns<font face=\"Arial\" color=#000000>ølè.");
			system("CLS");
		}

		//call to elite text
		else if (strcmp(usersString, "'etext") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b>Lø<font face=\"Arial\" color=#000000>àd<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> El<font face=\"Arial\" color=#0000FF>ítè<font face=\"Arial\" color=#000000> Tè<font face=\"Arial\" color=#0000FF>xt.");
			EliteTalker(usersString);
			system("CLS");
		}

		//call to hug person function
		else if (usersString[0] == '\'' && usersString[1] == 'h' && usersString[3] == 'g')
		{
			Hug(usersString);
			system("CLS");
		}

		// if no commands where used send regular string
		else if (strcmp(usersString, "'ctèxt") == 0)
		{
			SendChat(usersString);
			system("CLS");
		}

		//call to view date and time
		else if (strcmp(usersString, "'date") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Ví<font face=\"Arial\" color=#000000>èw<font face=\"Arial\" color=#0000FF>íng<font face=\"Arial\" color=#000000> Cù<font face=\"Arial\" color=#0000FF>rr<font face=\"Arial\" color=#000000>ènt<font face=\"Arial\" color=#0000FF> Dà<font face=\"Arial\" color=#000000>tè <font face=\"Arial\" color=#0000FF>A<font face=\"Arial\" color=#000000>n<font face=\"Arial\" color=#0000FF>d<font face=\"Arial\" color=#000000> Tí<font face=\"Arial\" color=#0000FF>mè.");
			TimeView();
			system("CLS");
		}

		//write mail to a specific recipian
		else if (strcmp(usersString, "'write") == 0)
		{
			char recpianString[] = { "<font face=\"Arial\" color=#0000FF>Mà<font face=\"Arial\" color=#000000>íl<font face=\"Arial\" color=#0000FF> Rè<font face=\"Arial\" color=#000000>cí<font face=\"Arial\" color=#0000FF>pí<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>t: <font face=\"Arial\" color=#000000>" };
			char recipian[265];

			cout << "Enter the s/n of the recipian: ";
			gets_s(recipian);

			HWND  hwndEmail = 0, hwndSendTo = 0;

			ClickToolbar(2);
			do {
				hwndEmail = FindWindowEx(FindMDI(), 0, "AOL Child", "Write Mail");
				hwndSendTo = FindWindowEx(hwndEmail, 0, "_AOL_Edit", 0);
			} while (hwndSendTo == 0);

			SendMessage(hwndSendTo, WM_SETTEXT, 0, (LPARAM)recipian);
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Öp<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> W<font face=\"Arial\" color=#0000FF>rít<font face=\"Arial\" color=#000000>è <font face=\"Arial\" color=#0000FF>Mà<font face=\"Arial\" color=#000000>íl.");
			strcat(recpianString, recipian);
			Sleep(100);
			SendChat(recpianString);
			system("CLS");
		}

		//call to open new mail
		else if (strcmp(usersString, "'new") == 0)
		{
			ClickToolbar(1);
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Öp<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> N<font face=\"Arial\" color=#0000FF>è<font face=\"Arial\" color=#000000>w <font face=\"Arial\" color=#0000FF>Mà<font face=\"Arial\" color=#000000>íl. ");
		}

		//call to hide AOL
		else if (strcmp(usersString, "'haol") == 0)
		{
			HideAOL();
			system("CLS");
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF> Hí<font face=\"Arial\" color=#000000>dí<font face=\"Arial\" color=#0000FF>ng<font face=\"Arial\" color=#000000> A<font face=\"Arial\" color=#0000FF>Ö<font face=\"Arial\" color=#000000>L<font face=\"Arial\" color=#0000FF> Wí<font face=\"Arial\" color=#000000>nd<font face=\"Arial\" color=#0000FF>øw.");
		}

		//call to show AOL
		else if (strcmp(usersString, "'saol") == 0)
		{
			ShowAOL();
			system("CLS");
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Sh<font face=\"Arial\" color=#000000>øw<font face=\"Arial\" color=#0000FF>íng<font face=\"Arial\" color=#000000> A<font face=\"Arial\" color=#0000FF>Ö<font face=\"Arial\" color=#000000>L<font face=\"Arial\" color=#0000FF> Wí<font face=\"Arial\" color=#000000>nd<font face=\"Arial\" color=#0000FF>øw.");
		}

		//kill aol window
		else if (strcmp(usersString, "'kill") == 0)
		{
			killwelcome();
			cout << "blah" << endl;
		}

		//add buddy
		else if (strcmp(usersString, "'addb") == 0)
		{
			//	SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Öp<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> A<font face=\"Arial\" color=#0000FF>d<font face=\"Arial\" color=#000000>d<font face=\"Arial\" color=#0000FF> Bù<font face=\"Arial\" color=#000000>dd<font face=\"Arial\" color=#0000FF>y<font face=\"Arial\" color=#000000> Wí<font face=\"Arial\" color=#0000FF>nd<font face=\"Arial\" color=#000000>øw.");
			AddBuddy("doubletoker", "kryogeniks");
		}

		//IM specific user
		else if (strcmp(usersString, "'im") == 0)
		{
			char IMtoPERSON[] = { "<font face=\"Arial\" color=#0000FF>I<font face=\"Arial\" color=#000000>M<font face=\"Arial\" color=#0000FF> Rè<font face=\"Arial\" color=#000000>cí<font face=\"Arial\" color=#0000FF>pí<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>t: <font face=\"Arial\" color=#000000>" };
			char recipiant[17];

			cout << "Enter Persons Name you want to IM:";
			gets_s(recipiant);

			ClickToolbar(3);
			HWND hwndInstantMessage = 0, hwndATL = 0, hwndAOLsendMessage = 0, hwndActualIM = 0, hwndImTextBox = 0;

			do {
				hwndInstantMessage = FindWindowEx(FindMDI(), 0, "AOL Child", "Instant Messages: ");
				Sleep(50);
			} while (hwndInstantMessage == 0);

			hwndATL = FindWindowEx(hwndInstantMessage, 0, "ATL:671F3398", 0);
			hwndAOLsendMessage = FindWindowEx(hwndATL, 0, "_AOL_IndWnd", 0);
			hwndImTextBox = FindWindowEx(hwndAOLsendMessage, 0, "_AOL_Edit", 0);

			SendMessage(hwndImTextBox, WM_SETTEXT, 0, (LPARAM)recipiant);
			strcat(IMtoPERSON, recipiant);
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Öp<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> N<font face=\"Arial\" color=#0000FF>è<font face=\"Arial\" color=#000000>w<font face=\"Arial\" color=#0000FF> I<font face=\"Arial\" color=#000000>M.");
			Sleep(50);
			SendChat(IMtoPERSON);
		}

		//go to a specific keyword
		else if (strcmp(usersString, "'kw") == 0)
		{
			Keyword("gmail.com");
		}

		//sends regular string if no coms where used.
		else
		{
			SendChat(usersString);
			system("CLS");
		}

	} while (strcmp(usersString, "'exit") != 0);

	system("PAUSE");
	return 0;
}


// Elite text
int EliteTalker(char usersString[])
{
	do {
		cout << "Elite Text: ";
		gets_s(usersString, 265);

		// change Text ASCII to elite 
		for (int i = 0; i < 265; ++i)
		{
			if (usersString[i] == 'a') usersString[i] = 'à';
			else if (usersString[i] == 'e') usersString[i] = 'è';
			else if (usersString[i] == 'O') usersString[i] = 'Ö';
			else if (usersString[i] == 'o') usersString[i] = 'ø';
			else if (usersString[i] == 'i') usersString[i] = 'í';
			else if (usersString[i] == 'u') usersString[i] = 'ù';

			if (usersString[i] == 0) break;
		}

		SendChat(usersString);
		
		//closes elite text
		if (strcmp(usersString, "'ctèxt") == 0)
		{
			SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Cl<font face=\"Arial\" color=#000000>øs<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> El<font face=\"Arial\" color=#0000FF>ítè<font face=\"Arial\" color=#000000> Tè<font face=\"Arial\" color=#0000FF>xt.");
			system("CLS");
		}

	} while (strcmp(usersString, "'ctext") != 0);
	return 0;
}

//hug person
void Hug(char usersString[])
{
	// reset userRecieveHug when returning in to function
	char usersRecievingHug[17] = { '\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0' };

	for (int i = 0; i < 17; ++i)
	{
		usersRecievingHug[i] = usersString[5 + i];
		if (usersString[5 + i] == 0) break;
	}

	//print out string is too long if chars are over 16
	if (usersRecievingHug[16] != 0)
		SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#000000>Åd<font face=\"Arial\" color=#0000FF>mi<font face=\"Arial\" color=#000000>ni<font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>ràt<font face=\"Arial\" color=#0000FF>òr<font face=\"Arial\" color=#000000> <font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>rí<font face=\"Arial\" color=#0000FF>ng<font face=\"Arial\" color=#000000> ís<font face=\"Arial\" color=#0000FF> tøø<font face=\"Arial\" color=#000000> lø<font face=\"Arial\" color=#0000FF>ng.");

	//continue with a regular hug if chars are 16 or less
	else
	{
		char FrontOfHug[] = { "((((((((((((((((((<font face=\"Arial\" color=#000000> " };
		strcat(FrontOfHug, usersRecievingHug);

		char HugWithFrontAndUsersName[250];
		strcpy(HugWithFrontAndUsersName, FrontOfHug);

		char EndOfHug[] = { "<font face=\"Arial\" color=#0000FF> ))))))))))))))))))<font face=\"Arial\" color=#000000>" };
		strcat(HugWithFrontAndUsersName, EndOfHug);
		SendChat(HugWithFrontAndUsersName);

		system("CLS");
	}
}


//elitehug person
void eHug(char usersString[])
{
	// reset userRecieveHug when returning in to function
	char usersRecievingHug[17] = { '\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0' };

	for (int i = 0; i < 17; ++i)
	{
		usersRecievingHug[i] = usersString[5 + i];
		if (usersString[5 + i] == 0) break;
	}

	//print out string is too long if chars are over 16
	if (usersRecievingHug[16] != 0)
		SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#000000>Åd<font face=\"Arial\" color=#0000FF>mi<font face=\"Arial\" color=#000000>ni<font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>ràt<font face=\"Arial\" color=#0000FF>òr<font face=\"Arial\" color=#000000> <font face=\"Arial\" color=#0000FF>st<font face=\"Arial\" color=#000000>rí<font face=\"Arial\" color=#0000FF>ng<font face=\"Arial\" color=#000000> ís<font face=\"Arial\" color=#0000FF> tøø<font face=\"Arial\" color=#000000> lø<font face=\"Arial\" color=#0000FF>ng.");

	//continue with a regular hug if chars are 16 or less
	else
	{
		char FrontOfHug[] = { "(((((((((<font face=\"Arial\" color=#000000> " };
		strcat(FrontOfHug, usersRecievingHug);

		char HugWithFrontAndUsersName[250];
		strcpy(HugWithFrontAndUsersName, FrontOfHug);

		char EndOfHug[] = { "<font face=\"Arial\" color=#0000FF> )))))))))<font face=\"Arial\" color=#000000> løvèr gírl." };
		strcat(HugWithFrontAndUsersName, EndOfHug);
		SendChat(HugWithFrontAndUsersName);
	}
}

//function to view time
int TimeView()
{
	struct tm *ptr_time;
	time_t lt;
	lt = time('\0');
	ptr_time = localtime(&lt);

	SendChat(asctime(ptr_time));

	return 0;
}

//function to kill welcome window
void killwelcome()
{
	HWND WelcomeWindow;

	WelcomeWindow = (FindMDI(), 0, "AOL Child", 0);
	ShowWindow(WelcomeWindow, SW_HIDE);
}


//sends an IM to specfic user
void SendIM()
{
	char IMtoPERSON[] = { "<font face=\"Arial\" color=#0000FF>I<font face=\"Arial\" color=#000000>M<font face=\"Arial\" color=#0000FF> Rè<font face=\"Arial\" color=#000000>cí<font face=\"Arial\" color=#0000FF>pí<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>t: <font face=\"Arial\" color=#000000>" };
	char recipiant[17];

	cout << "Enter Persons Name you want to IM:";
	gets_s(recipiant);

	strcat(IMtoPERSON, recipiant);
	SendChat("<font face=\"Arial\" color=#0000FF>Ch<font face=\"Arial\" color=#000000>àò<font face=\"Arial\" color=#0000FF>s<font face=\"Arial\" color=#000000> Th<font face=\"Arial\" color=#0000FF>èô<font face=\"Arial\" color=#000000>ry<font face=\"Arial\" color=#0000FF> Åd<font face=\"Arial\" color=#000000>mi<font face=\"Arial\" color=#0000FF>ni<font face=\"Arial\" color=#000000>st<font face=\"Arial\" color=#0000FF>rà<font face=\"Arial\" color=#000000>tòr<font face=\"Arial\" color=#0000FF><b> · </b><font face=\"Arial\" color=#0000FF>Öp<font face=\"Arial\" color=#000000>èn<font face=\"Arial\" color=#0000FF>èd<font face=\"Arial\" color=#000000> N<font face=\"Arial\" color=#0000FF>è<font face=\"Arial\" color=#000000>w<font face=\"Arial\" color=#0000FF> I<font face=\"Arial\" color=#000000>M.");
	Sleep(50);
	SendChat(IMtoPERSON);

	ClickToolbar(3);
	HWND hwndInstantMessage = 0, hwndATL = 0, hwndAOLsendMessage = 0, hwndActualIM = 0, hwndImTextBox = 0;

	do {
		hwndInstantMessage = FindWindowEx(FindMDI(), 0, "AOL Child", "Instant Messages: ");
		Sleep(50);
	} while (hwndInstantMessage == 0);

	hwndATL = FindWindowEx(hwndInstantMessage, 0, "ATL:671F3398", 0);
	hwndAOLsendMessage = FindWindowEx(hwndATL, 0, "_AOL_IndWnd", 0);
	hwndImTextBox = FindWindowEx(hwndAOLsendMessage, 0, "_AOL_Edit", 0);

	SendMessage(hwndImTextBox, WM_SETTEXT, 0, (LPARAM)IMtoPERSON);
}




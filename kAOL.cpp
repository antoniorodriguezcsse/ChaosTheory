/*
 * Name:		kAOL.cpp 
 * Description:	This is the aol inline functions for c++
 *
 * Tested:		void AddBuddy(char *sn, char *grp);
 *				void ClickIcon(HWND hwndIcon);
 *				void ClickToolbar(UINT Icon);
 *				HWND FindAOL();
 *				HWND FindChat();
 *				HWND FindMDI();
 *				HWND FindToolbar();
 *				void HideAOL();
 *				void Keyword(char *kw);
 *				void SendChat(char *chat);
 *				void ShowAOL();
 *
 * Not Done:	void ChatAllow();
 *				void ChatClose();
 *				void ChatIgnore(char szName[]);
 *				void ChatInfo(char szName[]);
 *				void ChatEject(char szName[]);
 *				BOOL IsChatOwner();
 *				void Keyword();
 *				void SendEMail();
 *				void SendIM();
 *
 */

#include "ChaosTheory.hpp"

void AddBuddy(char *sn, char *grp)
{
	char keyword[MAX_PATH] = "aol://9294:", group[49] = {0};
	HWND hwndAddBuddy = 0, hwndRadio = 0, hwndEdit = 0, hwndSave = 0, hwndModal = 0;

	if (strlen(sn) == 0) return;
	strcat(keyword, sn);
	Keyword(keyword);
	(grp == 0) ? strcat(group, "Buddies") : strcat(group, grp);
	do
	{
		hwndAddBuddy = FindWindowEx(FindMDI(), 0, "AOL Child", "Add to Buddy List");
	}
	while (hwndAddBuddy == 0);
	do
	{
		hwndRadio = 0;	
		for(int i = 0; i < 2; i++) hwndRadio = FindWindowEx(hwndAddBuddy, hwndRadio, "_AOL_RadioBox", 0);
	}
	while (hwndRadio == 0);
	ClickIcon(hwndRadio);
	do
	{
		hwndEdit = FindWindowEx(hwndAddBuddy, 0, "_AOL_Edit", 0);
	}
	while (hwndEdit == 0);
	SendMessage(hwndEdit, WM_SETTEXT, 0,(LPARAM) group);
	Sleep(10);
	do
	{
		hwndSave = FindWindowEx(hwndAddBuddy, 0, "_AOL_Icon", 0);
	}
	while (hwndEdit == 0);
	ClickIcon(hwndSave);
	do
	{
		hwndModal = FindModal();
	}
	while (hwndModal == 0);
	KillModal(hwndModal);
}

void ClickIcon(HWND hwndIcon)
{
    SendMessage(hwndIcon, WM_LBUTTONDOWN, 0, 0);
	SendMessage(hwndIcon, WM_KEYUP, VK_SPACE, 0);
}

void ClickToolbar(UINT Icon)
{
	HWND hwndIcon = 0;

	for (; Icon > 0; --Icon)
	{
		hwndIcon = FindWindowEx(FindToolbar(), hwndIcon, "_AOL_Icon", 0);
		if (hwndIcon == 0) return;
	}
	ClickIcon(hwndIcon);
}

HWND FindAOL()
{
    return FindWindowEx(0, 0, "AOL Frame25", 0);
}
 
HWND FindChat()
{
    HWND hwndChild = 0, hwndAOLChatForm = 0;
     
    do
    {
		hwndAOLChatForm = FindWindowEx(hwndChild, 0, "_AOL_Static", "AOL_CHAT_FORM");
        if (hwndAOLChatForm) break;
        hwndChild = FindWindowEx(FindMDI(), hwndChild, "AOL Child", 0);
    }
    while (hwndChild);
    return hwndChild;
}

HWND FindModal()
{
	return FindWindowEx(0, 0, "_AOL_Modal", 0);
}

HWND FindMDI()
{
    return FindWindowEx(FindAOL(), 0, "MDIClient", 0);
}

HWND FindToolbar()
{
	HWND hwndToolbar;
	 
	hwndToolbar = FindWindowEx(FindAOL(), 0, "AOL Toolbar", 0);
	return FindWindowEx(hwndToolbar, 0, "_AOL_Toolbar", 0);
}

void HideAOL()
{
	ShowWindow(FindAOL(), SW_HIDE);
}

void Keyword(char *kw)
{
	char keyword[MAX_PATH] = "aol://1722:";

	strcat(keyword, kw);
	ShellExecute(0, 0, keyword, 0, 0, SW_SHOW);
}

void KillModal(HWND hwndModal)
{
	SendMessage(hwndModal, WM_CLOSE, 0, 0);
}
 
void SendChat(char *chat)
{
    HWND hwndChatBox;

    hwndChatBox = FindWindowEx(FindChat(), 0, "RICHCNTL", 0);
    SendMessage(hwndChatBox, WM_SETTEXT, 0,(LPARAM) chat);
	Sleep(10);
    SendMessage(hwndChatBox, WM_CHAR, 13, 0);
	Sleep(10);
}

void ShowAOL()
{
	ShowWindow(FindAOL(), SW_SHOW);
}
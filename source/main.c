#include <3ds.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Animations:
#include <clear_animations.h>
#include <animations.h>
#include <anim_hidden.h>

// Terminal Features:
#include <terminal_menu.h>
#include <terminal_text.h>
#include <terminal_art.h>

static SwkbdCallbackResult MyCallback(void* user, const char** ppMessage, const char* text, size_t textlen)
{
	if (strstr(text, "War never changes"))
	{
		*ppMessage = "No it doesn't :(\n\n\nSadly";
		return SWKBD_CALLBACK_CONTINUE;
	}

	if (strstr(text, "I don't enjoy killing but when done rightousley, it's just another chore"))
	{
		*ppMessage = "Killing is not good either way! DON'T KILL PEOPLE!!!!!!";
		return SWKBD_CALLBACK_CLOSE;
	}

	if (strstr(text, "Waging war against good people is bad for the soul"))
	{
		*ppMessage = "It is... It really is";
		return SWKBD_CALLBACK_CLOSE;
	}

	if (strstr(text, "And don't get me started on the futility of dusting a collapsed house!"))
	{
		*ppMessage = "Now doing that won't be that smart (it would take a hella long time). Why did you even bring this up in the first place?";
		return SWKBD_CALLBACK_CLOSE;
	}

	if (strstr(text, "If you believe in something enough, you must be willing to let it burn, lest it claim you"))
	{
		*ppMessage = "Ok and that is the most badass thing I have ever heard anyone say ever!\n\nEven more badass than the doom slayer saying 'rip and tear, until it is done'!";
		return SWKBD_CALLBACK_CLOSE;
	}

	return SWKBD_CALLBACK_OK;
}

void printfile(const char* path)
{
	FILE* f = fopen(path, "r");
	if (f)
	{
		char mystring[100];
		while (fgets(mystring, sizeof(mystring), f))
		{
			int a = strlen(mystring);
			if (mystring[a-1] == '\n')
			{
				mystring[a-1] = 0;
				if (mystring[a-2] == '\r')
					mystring[a-2] = 0;
			}
			puts(mystring);
		}
		fclose(f);
	}
}

int main(int argc, char **argv)
{
	// Settings
	int clearAnimationType = 1;
	int clearAnimationSpeed = 5;

	int selectedSetting = 1;

	bool isBackgroundDark = true;

	// Checks
	bool isNotePadOpen = false;
	bool isTypingAnEmoji = false;
	bool isInSettings = false;
	bool isInArtLibrary = false;

	// Keys
	char keysNames[32][32] = {
		"KEY_A", "KEY_B", "KEY_SELECT", "KEY_START",
		"KEY_DRIGHT", "KEY_DLEFT", "KEY_DUP", "KEY_DDOWN",
		"KEY_R", "KEY_L", "KEY_X", "KEY_Y",
		"", "", "KEY_ZL", "KEY_ZR",
		"", "", "", "",
		"KEY_TOUCH", "", "", "",
		"KEY_CSTICK_RIGHT", "KEY_CSTICK_LEFT", "KEY_CSTICK_UP", "KEY_CSTICK_DOWN",
		"KEY_CPAD_RIGHT", "KEY_CPAD_LEFT", "KEY_CPAD_UP", "KEY_CPAD_DOWN"
	};

	// Main Code
	gfxInitDefault();
	PrintConsole topScreen, bottomScreen;
	consoleInit(GFX_TOP, &topScreen);
	consoleInit(GFX_BOTTOM, &bottomScreen);

	consoleSelect(&topScreen);
	Result rc = romfsInit();
	if (rc)
		printf("romfsInit: %08lX\n", rc);
	else
	{
		printf("romfs Init Successful!\n");
		printfile("romfs:/hidden_file.txt");
		printfile("romfs:/funny_face.txt");
	}
	PlayAnimation(1);
	printf("\033[32mTerminal Loading.\033[0m\n");
	svcSleepThread(2500000000);
	printf("\033[32mTerminal Loaded!\033[0m\n");
	svcSleepThread(1000000000);
	consoleClear();

	consoleSelect(&bottomScreen);
	DisplayTerminalMenu(1, false, 0);

	while (aptMainLoop())
	{
		hidScanInput();
		u32 kDown = hidKeysDown();

		if (isNotePadOpen == true){
			static SwkbdState swkbd;
			static char mybuf[200];
			static SwkbdStatusData swkbdStatus;
			static SwkbdLearningData swkbdLearning;
			SwkbdButton button = SWKBD_BUTTON_NONE;
			bool didit = false;

			if (kDown & KEY_DUP)
			{
				didit = true;
				swkbdInit(&swkbd, SWKBD_TYPE_NORMAL, 3, -1);
				swkbdSetInitialText(&swkbd, mybuf);
				swkbdSetHintText(&swkbd, "Your text here...");
				swkbdSetButton(&swkbd, SWKBD_BUTTON_LEFT, "Cancel", false);
				swkbdSetButton(&swkbd, SWKBD_BUTTON_MIDDLE, "Exit", true);
				swkbdSetButton(&swkbd, SWKBD_BUTTON_RIGHT, "Continue", true);
				swkbdSetFeatures(&swkbd, SWKBD_PREDICTIVE_INPUT);
				SwkbdDictWord words[2];
				swkbdSetDictWord(&words[0], "lenny", "( ͡° ͜ʖ ͡°)");
				swkbdSetDictWord(&words[1], "shrug", "¯\\_(ツ)_/¯");
				swkbdSetDictionary(&swkbd, words, sizeof(words)/sizeof(SwkbdDictWord));
				static bool reload = false;
				swkbdSetStatusData(&swkbd, &swkbdStatus, reload, true);
				swkbdSetLearningData(&swkbd, &swkbdLearning, reload, true);
				reload = true;
				button = swkbdInputText(&swkbd, mybuf, sizeof(mybuf));
			}

			if (kDown & KEY_DDOWN){
				consoleClear();
			}

			if (kDown & KEY_A){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(2, true, 0);
				consoleSelect(&topScreen);
				DisplayTerminalText(3);
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(2, false, 0);
			}

			if (kDown & KEY_START){
				isNotePadOpen = false;
				consoleClear();
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}

			if (didit)
			{
				if (button != SWKBD_BUTTON_NONE){
					printf("\x1b[32m");
					printf(mybuf);
					printf("\x1b[0m\n");
				}
			}
		}
		else if (isInArtLibrary == true){
			consoleSelect(&bottomScreen);
			consoleClear();
			DisplayTerminalMenu(5, false, 0);
			
			if (kDown & KEY_A){
				consoleSelect(&topScreen);
				consoleClear();
				DisplayArt(1);
			}
			else if (kDown & KEY_B){
				consoleSelect(&topScreen);
				consoleClear();
				DisplayArt(2);
			}
			else if (kDown & KEY_X){
				consoleSelect(&topScreen);
				consoleClear();
				DisplayArt(3);
			}
			else if (kDown & KEY_Y){
				consoleSelect(&topScreen);
				consoleClear();
				DisplayArt(4);
			}
			else if (kDown & KEY_START){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
				isInArtLibrary = false;
			}
		}
		else if (isInSettings == true){
			consoleSelect(&bottomScreen);
			consoleClear();
			// First Checks
			if (clearAnimationSpeed == 1){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 1);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 11);
				}
			}
			else if (clearAnimationSpeed == 2){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 2);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 12);
				}
			}
			else if (clearAnimationSpeed == 3){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 3);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 13);
				}
			}
			else if (clearAnimationSpeed == 4){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 4);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 14);
				}
			}
			else if (clearAnimationSpeed == 5){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 5);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 15);
				}
			}
			else if (clearAnimationSpeed == 6){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 6);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 16);
				}
			}
			else if (clearAnimationSpeed == 7){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 7);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 17);
				}
			}
			else if (clearAnimationSpeed == 8){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 8);
				}
				else if (clearAnimationType == 9){
					DisplayTerminalMenu(3, false, 18);
				}
			}
			else if (clearAnimationSpeed == 9){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 9);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 19);
				}
			}
			else if (clearAnimationSpeed == 10){
				if (clearAnimationType == 1){
					DisplayTerminalMenu(3, false, 10);
				}
				else if (clearAnimationType == 2){
					DisplayTerminalMenu(3, false, 20);
				}
			}

			// Main
			if (selectedSetting == 1){
				printf("\x1b[9;30H\033[32m ");
				printf("\x1b[8;30H\033[32m<");
			}
			if (selectedSetting == 2){
				printf("\x1b[8;30H\033[32m ");
				printf("\x1b[9;30H\033[32m<");
			}
			if (kDown & KEY_DDOWN){
				if (selectedSetting == 1){
					selectedSetting = 2;
				}
				else if (selectedSetting == 2){
					selectedSetting = 1;
				}
			}
			else if (kDown & KEY_DRIGHT){
				if (selectedSetting == 1){
					if (clearAnimationSpeed == 10){
						clearAnimationSpeed = 10;
					}
					else {
						clearAnimationSpeed = clearAnimationSpeed + 1;
					}
				}
				else if (selectedSetting == 2){
					if (clearAnimationType == 2){
						clearAnimationType = 1;
					}
					else if (clearAnimationType == 1){
						clearAnimationType = 2;
					}
				}
			}
			else if (kDown & KEY_DLEFT){
				if (selectedSetting == 1){
					if (clearAnimationSpeed == 1){
						clearAnimationSpeed = 1;
					}
					else {
						clearAnimationSpeed = clearAnimationSpeed - 1;
					}
				}
				else if (selectedSetting == 2){
					if (clearAnimationType == 2){
						clearAnimationType = 1;
					}
					else if (clearAnimationType == 1){
						clearAnimationType = 2;
					}
				}
			}
			else if (kDown & KEY_START){
				isInSettings = false;
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}
		}
		else if (isNotePadOpen == false & isInSettings == false & isInArtLibrary == false){
			if (kDown & KEY_START) break;
			else if (kDown & KEY_A){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, true, 0);
				consoleSelect(&topScreen);
				consoleClear();
				DisplayTerminalText(1);
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}
			else if (kDown & KEY_B){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, true, 0);
				consoleSelect(&topScreen);
				consoleClear();
				DisplayTerminalText(2);
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}
			else if (kDown & KEY_X){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(2, false, 0);
				consoleSelect(&topScreen);
				consoleClear();
				isNotePadOpen = true;
			}
			else if (kDown & KEY_Y){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(3, false, 0);
				consoleSelect(&topScreen);
				consoleClear();
				isInSettings = true;
			}
			else if (kDown & KEY_L){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, true, 0);
				consoleSelect(&topScreen);
				consoleClear();
				AnimationHidden(0);
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}
			else if (kDown & KEY_SELECT){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, true, 0);
				consoleSelect(&topScreen);
				consoleClearAnimation(clearAnimationType, clearAnimationSpeed * 1000);
				consoleClear();
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(1, false, 0);
			}
			else if (kDown & KEY_DUP){
				consoleSelect(&bottomScreen);
				consoleClear();
				DisplayTerminalMenu(5, false, 0);
				consoleSelect(&topScreen);
				consoleClear();
				isInArtLibrary = true;
			}
			else if (kDown & KEY_R){
				consoleSelect(&topScreen);
				consoleClear();
				printfile("romfs:/hidden_file.txt");
			}
		}

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}
	gfxExit();
	return 0;
}
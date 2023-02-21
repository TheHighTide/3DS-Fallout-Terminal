char str1[1] = "MainMenu";

void DisplayTerminalMenu(int menuID, bool slashed, int variation){
    if (menuID == 1){
        if (slashed == true){
            printf("\033[9m");
            printf("\033[32mB = Display System Info\n");
	        printf("A = Display Terminal Info\n");
            printf("X = Terminal Notepad\n");
            printf("Y = Open Settings\n");
            printf("UP = Art Library\n");
            printf("SELECT = Clear Screen\033[0m\n");
	        printf("\x1b[30;1H\033[32mSTART = Exit");
        }
        else if (slashed == false){
            printf("\033[32mB = Display System Info\n");
	        printf("A = Display Terminal Info\n");
            printf("X = Terminal Notepad\n");
            printf("Y = Open Settings\n");
            printf("UP = Art Library\n");
            printf("SELECT = Clear Screen\033[0m\n");
	        printf("\x1b[30;1H\033[32mSTART = Exit\033[0m");
        }
    }
    else if (menuID == 2){
        if (slashed == true){
            printf("\033[9m\033[32m");
            printf("UP = Clear Screen\n");
            printf("DOWN = Open Keyboard\n");
            printf("A = About Terminal Notepad\x1B[0m\033[0m\n");
	        printf("\x1b[30;1H\003[32mSTART = Exit Notepad\033[0m");
        }
        else if (slashed == false){
            printf("\033[32m");
            printf("UP = Clear Screen\n");
            printf("DOWN = Open Keyboard\n");
            printf("A = About Terminal Notepad\n");
	        printf("\x1b[30;1HSTART = Exit Notepad\033[0m");
        }
    }
    else if (menuID == 3){
        if (slashed == false){
            if (variation == 1){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 1\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 2){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 2\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 3){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 3\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 4){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 4\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 5){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 5\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 6){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 6\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 7){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 7\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 8){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 8\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 9){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 9\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 10){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 10\n");
                printf("Clear Animation = 1\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 11){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 1\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 12){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 2\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 13){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 3\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 14){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 4\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 15){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 5\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 16){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 6\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 17){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 7\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 18){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 8\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 19){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 9\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
            if (variation == 20){
                printf("\033[32m");
                printf("Terminal Settings\n");
                printf("-------------------------\n");
                printf("Down = Select Setting\n");
                printf("Left + Right = Change Value\n\n");
                printf("Animation Settings\n");
                printf("-------------------------\n");
                printf("Clear Animation Speed = 10\n");
                printf("Clear Animation = 2\n");
	            printf("\x1b[30;1HSTART = Exit Settings\033[0m");
            }
        }
    }
    else if (menuID == 5){
        if (slashed == false){
            printf("\033[32mA = Art 1\n");
	        printf("B = Art 2\n");
            printf("X = Art 3\n");
	        printf("\x1b[30;1H\033[32mSTART = Exit Art Library");
        }
        else if (slashed == true){
            printf("\033[9m");
            printf("\033[32mA = Art 1\n");
	        printf("B = Art 2\n");
            printf("X = Art 3\n");
	        printf("\x1b[30;1H\033[32mSTART = Exit Art Library");
        }
    }
    else{
        return;
    }
}
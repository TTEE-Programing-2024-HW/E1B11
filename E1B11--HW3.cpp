#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printWelcomeScreen() {
    printf(" ____________________________\n");
    printf("|          Welcome!          |��\n");
    printf("|Hello C!                    |�n\n");
    printf("|Hello world!                |�n\n");
    printf("|E1B11 Learned to make       |�n\n");
    printf("|       �{���]�p-HW3         |�n\n");
    printf("|                            |�n\n");
    printf("|                            |�n\n");
    printf("|The process will continue~  |�n\n");
    printf("|                            |�n\n");
    printf("|Next, please follow the     |�n\n");
    printf("|instructions.               |�n\n");
    printf("|                            |�n\n");
    printf("|Pyro                        |�n\n");
    printf("|Hydro                       |�n\n");
    printf("|Anemo                       |�n\n");
    printf("|Electro                     |�n\n");
    printf("|Dendro                      |�n\n");
    printf("|Cryo                        |�n\n");
    printf("|Geo...                      |�n\n");
    printf("|   Press any key to continue|�n\n");
    printf(" ^V^V^V^V^V^V^V^V^V^V^V^V^V^V^��\n");
    system("PAUSE");
    system("CLS");
}

#define ROWS 9
#define COLS 9

void inseats(char seats[ROWS][COLS]) {
    // Initialize the seating chart to empty seats
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = '-';
        }
    }
}

void plcfixseats(char seats[ROWS][COLS]) {
    int fixedseats = 10;
    int count = 0;

    srand(time(NULL)); // Initialize random seed

    while (count < fixedseats) {
        int row = rand() % ROWS;
        int col = rand() % COLS;

        if (seats[row][col] != '*') {
            seats[row][col] = '*';
            count++;
        }
    }
}

void printSeats(char seats[ROWS][COLS]) // Set seating chart
{
    printf("\\123456789\n"); // Columns
    for (int i = ROWS - 1; i >= 0; i--) {  // Rows
        printf("%d", i + 1);
        for (int j = 0; j < COLS; j++) {
            printf("%c", seats[i][j]);
        }
        printf("\n");
    }
}





void printMenu() { // Main menu
    printf("-------------[Booking System]--------------\n");
    printf("|                                         |\n");
    printf("|           a. Available seats            |\n");
    printf("|                                         |\n");
    printf("|           b. Arrange for you            |\n");
    printf("|                                         |\n");
    printf("|           c. Choose by yourself         |\n");
    printf("|                                         |\n");
    printf("|           d. Exit                       |\n");
    printf("|                                         |\n");
    printf("-------------------------------------------\n");
}



int findrandSeat(char seats[ROWS][COLS], int *row, int *col) { // Choose one seat
    int att = 0;
    int max_att = ROWS * COLS;

    while (att < max_att) {
        *row = rand() % ROWS;
        *col = rand() % COLS;

        if (seats[*row][*col] == '-') {
            seats[*row][*col] = '@';
            return 1;
        }
        att++;
    }
    return 0;
}

int findrandSeatpair(char seats[ROWS][COLS], int *row, int *col) { // Choose pair seats
    int att = 0;
    int max_att = ROWS * (COLS - 1); // Avoid selecting the last column

    while (att < max_att) {
        *row = rand() % ROWS;
        *col = rand() % (COLS - 1); // Ensure that the randomly selected column is not the last column

        if (seats[*row][*col] == '-' && seats[*row][*col + 1] == '-') {
            seats[*row][*col] = '@';
            seats[*row][*col + 1] = '@';
            return 1;
        }
        att++;
    }
    return 0;
}

int findrandSeattri(char seats[ROWS][COLS], int *row, int *col) { // Choose triple seats
    int att = 0;
    int max_att = ROWS * (COLS - 2); // Avoid selecting the last two columns

    while (att < max_att) {
        *row = rand() % ROWS;
        *col = rand() % (COLS - 2); // Ensure that the randomly selected columns are not the last two columns

        if (seats[*row][*col] == '-' && seats[*row][*col + 1] == '-' && seats[*row][*col + 2] == '-') {
            seats[*row][*col] = '@';
            seats[*row][*col + 1] = '@';
            seats[*row][*col + 2] = '@';
            return 1;
        }
        att++;
    }
    return 0;
}

int findrandSeatquad(char seats[ROWS][COLS], int *row, int *col) { // Choose four seats
    int att = 0;
    int max_att = ROWS * (COLS - 3); // Avoid selecting the last three columns

    while (att < max_att) {
        *row = rand() % ROWS;
        *col = rand() % (COLS - 3); // Ensure that the randomly selected columns are not the last three columns

        // Scenario 1: Four seats in a row
        if (seats[*row][*col] == '-' && seats[*row][*col + 1] == '-' &&
            seats[*row][*col + 2] == '-' && seats[*row][*col + 3] == '-') {
            seats[*row][*col] = '@';
            seats[*row][*col + 1] = '@';
            seats[*row][*col + 2] = '@';
            seats[*row][*col + 3] = '@';
            return 1;
        } else if (*row < ROWS - 1 &&
                   seats[*row][*col] == '-' && seats[*row][*col + 1] == '-' &&
                   seats[*row + 1][*col] == '-' && seats[*row + 1][*col + 1] == '-') {
            // Scenario 2: Four seats divided into two rows
            seats[*row][*col] = '@';
            seats[*row][*col + 1] = '@';
            seats[*row + 1][*col] = '@';
            seats[*row + 1][*col + 1] = '@';
            return 1;
        }
        att++;
    }
    return 0;
}

void clearScreen() {
    // Clear screen (cross-platform)
    // Use system("cls") on Windows
    // Use system("clear") on Unix
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    char seats[ROWS][COLS];
    char choice;

    inseats(seats);
    plcfixseats(seats);

printWelcomeScreen(); /*Export personal style main screen*/

int password;
int i=0;
	for(i=0;i<3;i++)
	{
	if(i==1)
    {
    	printf("Wrong password, 2 chances left\n");
	}
    if(i==2)
    {
    	printf("Wrong password again, 1 chances left\n");
	}
		printf("Please enter the four-character password 2024:");
        scanf("%d",&password);
        /*Password is correct to jump out of the loop*/
		if(password==2024)
        {
	       printf("password correct~");
           system ("PAUSE");
	       system ("CLS");
	       break;
	    } 
    }
    /*Password error termination program*/
    if(i==3)
		{
		printf("password wrong!\n");
		system ("PAUSE");
		return 0;
	    }

    while (1) {
        printMenu(); // Print main menu
        printf("Please select an option: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printSeats(seats); // Bring in the previously set seating chart
                printf("Press enter to return to the main menu.");
                getchar(); // Capture carriage return
                getchar(); // Capture carriage return
                clearScreen(); // clear screen
                break;
            case 'b': {
                int numSeats;
                printf("How many seats do you need? (1-4): "); // Selecting 1~4 seat(s) 
                scanf("%d", &numSeats);

                if (numSeats < 1 || numSeats > 4) { // Wrong data
                    printf("Invalid number of seats. Please select between 1 and 4.\n");
                } else {
                    int row, col;
                    int success = 0;
                    switch (numSeats) { // According to various schemes, the user's optional seats are marked with the corresponding number of @
                        case 1: // One seat
                            success = findrandSeat(seats, &row, &col);
                            break;
                        case 2: // Pair seats
                            success = findrandSeatpair(seats, &row, &col);
                            break;
                        case 3: // triple seats
                            success = findrandSeattri(seats, &row, &col);
                            break;
                        case 4: // four seats
                            success = findrandSeatquad(seats, &row, &col);
                            break;
                    }

                    if (success) { // Meet the criteria
                        printSeats(seats);
                        printf("Do you want to take the seat(s)? (y/n): ");
                        char confirm;
                        scanf(" %c", &confirm);

                        if (confirm == 'y' || confirm == 'Y') { // Confirm to select this seat and record @ as * 
                            if (numSeats == 1) {   // If one seat
                                seats[row][col] = '*';
                            } else if (numSeats == 2) { // Else if two seats
                                seats[row][col] = '*';
                                seats[row][col + 1] = '*';
                            } else if (numSeats == 3) { // Else if three seats
                                seats[row][col] = '*';
                                seats[row][col + 1] = '*';
                                seats[row][col + 2] = '*';
                            } else if (numSeats == 4) {   // Else if four seats
                                if (seats[row][col] == '@' && seats[row][col + 1] == '@' &&  // Scenario 1
                                    seats[row][col + 2] == '@' && seats[row][col + 3] == '@') {
                                    seats[row][col] = '*';
                                    seats[row][col + 1] = '*';
                                    seats[row][col + 2] = '*';
                                    seats[row][col + 3] = '*';
                                } else if (seats[row][col] == '@' && seats[row][col + 1] == '@' &&  // Scenario 2
                                           seats[row + 1][col] == '@' && seats[row + 1][col + 1] == '@') {
                                    seats[row][col] = '*';
                                    seats[row][col + 1] = '*';
                                    seats[row + 1][col] = '*';
                                    seats[row + 1][col + 1] = '*';
}
                            }
                            printf("Seat(s) confirmed.\n");
                        } else {  // Cancel this selection and restore the seats to empty seats
                            if (numSeats == 1) {
                                seats[row][col] = '-';
                            } else if (numSeats == 2) {
                                seats[row][col] = '-';
                                seats[row][col + 1] = '-';
                            } else if (numSeats == 3) {
                                seats[row][col] = '-';
                                seats[row][col + 1] = '-';
                                seats[row][col + 2] = '-';
                            } else if (numSeats == 4) {
                                if (seats[row][col] == '@' && seats[row][col + 1] == '@' &&
                                    seats[row][col + 2] == '@' && seats[row][col + 3] == '@') {
                                    seats[row][col] = '-';
                                    seats[row][col + 1] = '-';
                                    seats[row][col + 2] = '-';
                                    seats[row][col + 3] = '-';
                                } else if (seats[row][col] == '@' && seats[row][col + 1] == '@' &&
                                           seats[row + 1][col] == '@' && seats[row + 1][col + 1] == '@') {
                                    seats[row][col] = '-';
                                    seats[row][col + 1] = '-';
                                    seats[row + 1][col] = '-';
                                    seats[row + 1][col + 1] = '-';
                                }
                            }
                            printf("Seat(s) canceled.\n"); 
                        }
                    } else {
                        printf("No available seats for the requested number.\n");
                    }
                }
                printf("Press enter to return to the main menu.");
                getchar(); // Capture carriage return
                getchar(); // Capture carriage return
                clearScreen(); // clear screen
                break;
            }
            case 'c':  // Allow users to choose their own available seats
			  {
                int row, col;
                char confirm;
                while (1) {
                    printSeats(seats);
                    printf("Enter the seat choice (row-col): ");
                    scanf("%d-%d", &row, &col);
                    row--; // Coordinates start from 0
                    col--; // Coordinates start from 0

                    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) // If the seat is already used or the input data does not match
					{
                    	system("CLS");
                        printf("Invalid seat choice. Please try again.\n");
                        continue;
                    }

                    if (seats[row][col] == '-') // If the seat is empty
					{
                    	system("CLS");
                        seats[row][col] = '@'; // Record empty seat as @
                        printSeats(seats);
                        printf("Do you want to take this seat? (y/n): ");
                        scanf(" %c", &confirm);
                        getchar(); // Capture carriage return

                        if (confirm == 'y' || confirm == 'Y') {
                            seats[row][col] = '*'; // And record @ as *
                            printf("Seat confirmed.\n");
                            break;
                        } else {
                            seats[row][col] = '-'; // Record @ as an empty seat
                            printf("\n");
                            break;
                        }
                    } else {
                    	system("CLS");
                        printf("Seat already taken. Please choose another seat.\n"); // Tell the user that the seat is already in use and ask the user to re-enter
                        
                    }
                }

                printf("Press enter to return to the main menu.");
                getchar(); // Capture carriage return
                getchar(); // Capture carriage return 
                clearScreen(); // clear screen
                break;
            }
            case 'd':
	        system ("CLS");
	        char answer;
		    printf("'Continue? (y/n)'");/*Output whether to continue executing the program*/
		    scanf(" %c",&answer);
	if(answer=='Y'||answer=='y')/*Enter Yy to return to the main menu*/
	{
	system ("PAUSE");
	system ("CLS");
	break;
	}
	else if(answer=='N'||answer=='n')/*Enter Nn to end the program*/
	{
		return 0;
	}
    while(answer!='Y'&&answer!='y'&&answer!='N'&&answer!='n')/*
Enter additional characters and ask the user to re-enter*/
	{
			printf("Wrong message, please re-enter:");
			scanf(" %c",&answer);
	if(answer=='Y'||answer=='y')
	{
	system ("PAUSE");
	system ("CLS");
	break;
	}
	else if(answer=='N'||answer=='n')
	{
		return 0;
	}
	}
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Press enter to return to the main menu.");
                getchar(); // Capture carriage return
                getchar(); // Capture carriage return
                clearScreen(); // clear screen
                break;
        }
    }

    return 0;
}
// End



/*�߱o:�o���@�~�۸��e�X�����@�~���ܩ��㪺���״��ɡA�ר�O�Ψ쥭�`�Ұ󤤨S�ϥιL��rand()���
�A���o���h��Ǯɶ����h�˩��աA�~��}�l��z�����´�{���[�c�A�ӳo�ӵ{���X�ڨC�Ӱ϶����]�w�W��
��void�Ӱ��椺���{���B�@�A�Ҧpabcd�ﶵ��������b���{���X�N�O���b�e����|�ؤ��(�ĥ|�ؤ�פS��
��اΦ�)������{�����g���A��D��汵����ϥΪ̫��Ub���䤧��A�A��e�����{���]�w�@�ӱa�X��i
�ӡA�o�ˬ۸��ڲĤ@�����g�k�N�۹�²�ƪ��@�ǡA�ӥB�P�˪���k�ٯ���abc���\�ϥΦP�@�Ӯy���A�ﵽ
���e�\�h�����D�A��c�ﶵ�h�O�M�Χ��y����}�l�P�w�ϥΪ̿�ܪ��y��O�_�bab�ﶵ�N�w�g�Q�e�ΡA�p
�G�����Ůy��N�N-���令@�A�ø߰ݨϥΪ̬O�_��w��e�y��A�T�{��w��N�|�N��e��@�A������*���A��
�M�o���@�~�W�[�F�D�`�h�ڹ�{���y�����{��(�S�O�Ob����4�ش��F�ܦh�g�k�~���\debug)�A���]�O�I�X�F��
�h���ɶ��M�ߤO�A�̫�ש󧹦��F�o�椸���@�~�m�ߡC*/

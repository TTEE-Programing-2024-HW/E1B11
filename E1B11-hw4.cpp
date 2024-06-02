#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�q�ǥ͵��c��
typedef struct {
    char name[50];
    int ID;
    int math;
    int physics;
    int english;
    float average;
} Student;

// �w�q�ǥͰ}�C�M�ǥͼƶq
Student students[10];
int student_count = 0;

// �M�̨禡
void clear_screen() {
    system("clear || cls");
}

// �w��e��
void printWelcomeScreen() {
    printf(" ____________________________\n");
    printf("|          Welcome!          |��\n");
    printf("|Hello C!                    |�n\n");
    printf("|Hello world!                |�n\n");
    printf("|E1B11 Learned to make       |�n\n");
    printf("|       �{���]�p-HW4         |�n\n");
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

// �K�X���Ҩ禡
int password_ver() {
    int password;
    int i = 0;
    for (i = 0; i < 3; i++) {
        if (i == 1) {
            printf("Wrong password, 2 chances left\n");
        }
        if (i == 2) {
            printf("Wrong password again, 1 chance left\n");
        }
        printf("Please enter the four-character password 2024: ");
        scanf("%d", &password);
        if (password == 2024) {
            printf("Password correct~\n");
            system("PAUSE");
            system("CLS");
            return 1;
        }
    }
    printf("Password wrong!\n");
    system("PAUSE");
    return 0;
}

// �p�⥭�����Z
float cal_average(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

// ��J�ǥͦ��Z
void enter_student_grades() {
    clear_screen();
    int n;
    printf("�п�J�ǥͼƶq (5~10): ");
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        printf("��J���~�A�п�J5��10���������: ");
        while (getchar() != '\n'); // �M�ſ�J�w�İ�
    }
    for (int i = 0; i < n; i++) {
        printf("�п�J��%d�Ӿǥͪ��m�W: ", i + 1);
        scanf("%s", students[student_count].name);
        printf("�п�J��%d�Ӿǥͪ��Ǹ� (6����): ", i + 1);
        while (scanf("%d", &students[student_count].ID) != 1 || students[student_count].ID < 100000 || students[student_count].ID > 999999) {
            printf("��J���~�A�п�J6���ƪ��Ǹ�: ");
            while (getchar() != '\n');
        }
        printf("�п�J��%d�Ӿǥͪ��ƾǦ��Z (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].math) != 1 || students[student_count].math < 0 || students[student_count].math > 100) {
            printf("��J���~�A�п�J0��100���������: ");
            while (getchar() != '\n');
        }
        printf("�п�J��%d�Ӿǥͪ����z���Z (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].physics) != 1 || students[student_count].physics < 0 || students[student_count].physics > 100) {
            printf("��J���~�A�п�J0��100���������: ");
            while (getchar() != '\n');
        }
        printf("�п�J��%d�Ӿǥͪ��^�y���Z (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].english) != 1 || students[student_count].english < 0 || students[student_count].english > 100) {
            printf("��J���~�A�п�J0��100���������: ");
            while (getchar() != '\n');
        }
        students[student_count].average = cal_average(students[student_count].math, students[student_count].physics, students[student_count].english);
        student_count++;
    }
    clear_screen();
}

// ��ܾǥͦ��Z
void display_student_grades() {
    clear_screen();
    printf("�Ҧ��ǥͪ����Z�p�U:\n");
    printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^�y\t�������Z\n");
    for (int i = 0; i < student_count; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[i].name, students[i].ID, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("�����N���^�D���...");
    getchar();
    getchar();
}

// �j���ǥͦ��Z
void search_student_grades() {
    clear_screen();
    char search_name[50];
    printf("�п�J�n�j�����ǥͩm�W: ");
    scanf("%s", search_name);
    int found = 0;
    for (int i = 0; i < student_count; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("�m�W: %s\n", students[i].name);
            printf("�Ǹ�: %d\n", students[i].ID);
            printf("�ƾ�: %d\n", students[i].math);
            printf("���z: %d\n", students[i].physics);
            printf("�^�y: %d\n", students[i].english);
            printf("�������Z: %.1f\n", students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("�����ǥ�: %s\n", search_name);
    }
    printf("�����N���^�D���...");
    getchar();
    getchar();
}

// ���Z�ƦW
void grade_ranking() {
    clear_screen();
    // �_�w�Ƨ�
    for (int i = 0; i < student_count - 1; i++) {
        for (int j = 0; j < student_count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("�ǥͦ��Z�ƦW�p�U:\n");
    printf("�m�W\t�Ǹ�\t�������Z\n");
    for (int i = 0; i < student_count; i++) {
        printf("%s\t%d\t%.1f\n", students[i].name, students[i].ID, students[i].average);
    }
    printf("�����N���^�D���...");
    getchar();
    getchar();
}

// �h�X�t��
int exit_system() {
    clear_screen();
    char confirm;
    printf("�T�w���}�H (y/n): ");
    while (1) {
        scanf(" %c", &confirm);
        if (confirm == 'y' || confirm == 'Y') {
            return 1;
        } else if (confirm == 'n' || confirm == 'N') {
            return 0;
        } else {
            printf("��J���~�A�п�J��y���Ρ�n��: ");
        }
    }
}

// �D���
void main_menu() {
    while (1) {
        clear_screen();
        printf("------------[Grade System]----------\n");
        printf("|  a. ��J�ǥͦ��Z                 |\n");
        printf("|  b. ��ܾǥͦ��Z                 |\n");
        printf("|  c. �j���ǥͦ��Z                 |\n");
        printf("|  d. ���Z�ƦW                     |\n");
        printf("|  e. �h�X�t��                     |\n");
        printf("------------------------------------\n");
        printf("�п�J�z�����: ");
        char item;
        scanf(" %c", &item);

        switch (item) {
            case 'a':
                enter_student_grades();
                break;
            case 'b':
                display_student_grades();
                break;
            case 'c':
                search_student_grades();
                break;
            case 'd':
                grade_ranking();
                break;
            case 'e':
                if (exit_system()) {
                    return;
                }
                break;
            default:
                printf("�L�Ŀ�ܡA�Э��s��J...\n");
                break;
        }
    }
}

int main() {
    printWelcomeScreen();
    if (password_ver()) {
        main_menu();
    }
    return 0;
}


/*�߱o:�o�����{���X���㦳�D�ԩʪ��L�ìO���c
�A�D�حn�D�C�ӿﶵ�n���O�H�禡�e�{�A�ѩ�W
���w�g����L�����{���X�A�ק�榡�ΤF�����
���ɶ��A�]��O�@�ضi�B�A���u�n���B�z�o�y�L
�[�������A��O��禡�򵲺c���X���B�J�A�ѩ�
���`�ϥε��c�{���X�A��������`���檺�榡
�ٻݷL�աA���Ldebug�ٺⶶ�Q�A�����o���ĥ|��
���m�ߡC*/ 

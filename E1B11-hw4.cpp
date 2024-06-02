#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構體
typedef struct {
    char name[50];
    int ID;
    int math;
    int physics;
    int english;
    float average;
} Student;

// 定義學生陣列和學生數量
Student students[10];
int student_count = 0;

// 清屏函式
void clear_screen() {
    system("clear || cls");
}

// 歡迎畫面
void printWelcomeScreen() {
    printf(" ____________________________\n");
    printf("|          Welcome!          |◣\n");
    printf("|Hello C!                    |▋\n");
    printf("|Hello world!                |▋\n");
    printf("|E1B11 Learned to make       |▋\n");
    printf("|       程式設計-HW4         |▋\n");
    printf("|                            |▋\n");
    printf("|                            |▋\n");
    printf("|The process will continue~  |▋\n");
    printf("|                            |▋\n");
    printf("|Next, please follow the     |▋\n");
    printf("|instructions.               |▋\n");
    printf("|                            |▋\n");
    printf("|Pyro                        |▋\n");
    printf("|Hydro                       |▋\n");
    printf("|Anemo                       |▋\n");
    printf("|Electro                     |▋\n");
    printf("|Dendro                      |▋\n");
    printf("|Cryo                        |▋\n");
    printf("|Geo...                      |▋\n");
    printf("|   Press any key to continue|▋\n");
    printf(" ^V^V^V^V^V^V^V^V^V^V^V^V^V^V^▼\n");
    system("PAUSE");
    system("CLS");
}

// 密碼驗證函式
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

// 計算平均成績
float cal_average(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

// 輸入學生成績
void enter_student_grades() {
    clear_screen();
    int n;
    printf("請輸入學生數量 (5~10): ");
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        printf("輸入錯誤，請輸入5到10之間的整數: ");
        while (getchar() != '\n'); // 清空輸入緩衝區
    }
    for (int i = 0; i < n; i++) {
        printf("請輸入第%d個學生的姓名: ", i + 1);
        scanf("%s", students[student_count].name);
        printf("請輸入第%d個學生的學號 (6位整數): ", i + 1);
        while (scanf("%d", &students[student_count].ID) != 1 || students[student_count].ID < 100000 || students[student_count].ID > 999999) {
            printf("輸入錯誤，請輸入6位整數的學號: ");
            while (getchar() != '\n');
        }
        printf("請輸入第%d個學生的數學成績 (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].math) != 1 || students[student_count].math < 0 || students[student_count].math > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數: ");
            while (getchar() != '\n');
        }
        printf("請輸入第%d個學生的物理成績 (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].physics) != 1 || students[student_count].physics < 0 || students[student_count].physics > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數: ");
            while (getchar() != '\n');
        }
        printf("請輸入第%d個學生的英語成績 (0~100): ", i + 1);
        while (scanf("%d", &students[student_count].english) != 1 || students[student_count].english < 0 || students[student_count].english > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數: ");
            while (getchar() != '\n');
        }
        students[student_count].average = cal_average(students[student_count].math, students[student_count].physics, students[student_count].english);
        student_count++;
    }
    clear_screen();
}

// 顯示學生成績
void display_student_grades() {
    clear_screen();
    printf("所有學生的成績如下:\n");
    printf("姓名\t學號\t數學\t物理\t英語\t平均成績\n");
    for (int i = 0; i < student_count; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[i].name, students[i].ID, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}

// 搜索學生成績
void search_student_grades() {
    clear_screen();
    char search_name[50];
    printf("請輸入要搜索的學生姓名: ");
    scanf("%s", search_name);
    int found = 0;
    for (int i = 0; i < student_count; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("姓名: %s\n", students[i].name);
            printf("學號: %d\n", students[i].ID);
            printf("數學: %d\n", students[i].math);
            printf("物理: %d\n", students[i].physics);
            printf("英語: %d\n", students[i].english);
            printf("平均成績: %.1f\n", students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到學生: %s\n", search_name);
    }
    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}

// 成績排名
void grade_ranking() {
    clear_screen();
    // 冒泡排序
    for (int i = 0; i < student_count - 1; i++) {
        for (int j = 0; j < student_count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("學生成績排名如下:\n");
    printf("姓名\t學號\t平均成績\n");
    for (int i = 0; i < student_count; i++) {
        printf("%s\t%d\t%.1f\n", students[i].name, students[i].ID, students[i].average);
    }
    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}

// 退出系統
int exit_system() {
    clear_screen();
    char confirm;
    printf("確定離開？ (y/n): ");
    while (1) {
        scanf(" %c", &confirm);
        if (confirm == 'y' || confirm == 'Y') {
            return 1;
        } else if (confirm == 'n' || confirm == 'N') {
            return 0;
        } else {
            printf("輸入錯誤，請輸入‘y’或‘n’: ");
        }
    }
}

// 主選單
void main_menu() {
    while (1) {
        clear_screen();
        printf("------------[Grade System]----------\n");
        printf("|  a. 輸入學生成績                 |\n");
        printf("|  b. 顯示學生成績                 |\n");
        printf("|  c. 搜索學生成績                 |\n");
        printf("|  d. 成績排名                     |\n");
        printf("|  e. 退出系統                     |\n");
        printf("------------------------------------\n");
        printf("請輸入您的選擇: ");
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
                printf("無效選擇，請重新輸入...\n");
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


/*心得:這次的程式碼較具有挑戰性的無疑是結構
，題目要求每個選項要分別以函式呈現，由於上
次已經執行過類似程式碼，修改格式用了比較少
的時間，也算是一種進步，但真要說處理得稍微
久的部分，算是把函式跟結構結合的步驟，由於
不常使用結構程式碼，對於能夠正常執行的格式
還需微調，不過debug還算順利，完成這份第四次
的練習。*/ 

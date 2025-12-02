#include <stdio.h>

struct User {
    char username[50];
    char password[50];
    int highestScore;
    int currentLevel;
};

struct Question {
    char question[200];
    char option1[100];
    char option2[100];
    char option3[100];
    char option4[100];
    int correctOption;
    int level;
};

struct Question questions[100];

int score = 0;
int timer = 15;
int selectedOption = 0;

int main() {
    struct User player;

    printf("Enter username: ");
    scanf("%s", player.username);

    printf("Enter password: ");
    scanf("%s", player.password);

    player.highestScore = 0;
    player.currentLevel = 1;

    struct Question q1 = {
        "What is the capital of France?",
        "Berlin",
        "London",
        "Paris",
        "Madrid",
        3,
        1
    };

    questions[0] = q1;

    printf("\nQuestion: %s\n", questions[0].question);
    printf("1. %s\n", questions[0].option1);
    printf("2. %s\n", questions[0].option2);
    printf("3. %s\n", questions[0].option3);
    printf("4. %s\n", questions[0].option4);

    printf("Your answer: ");
    scanf("%d", &selectedOption);

    if (selectedOption == questions[0].correctOption) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }

    printf("Score: %d\n", score);

    return 0;
}

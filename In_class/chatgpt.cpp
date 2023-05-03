#include <stdio.h>

struct account {
    char name[50];
    int account_number;
    float balance;
};

void display_account_status(int account_num) {
    FILE *fp;
    struct account user;

    fp = fopen("accounts.dat", "rb");

    while (fread(&user, sizeof(struct account), 1, fp) == 1) {
        if (user.account_number == account_num) {
            printf("Account Holder Name: %s\n", user.name);
            printf("Account Number: %d\n", user.account_number);
            printf("Account Balance: %f\n", user.balance);
            break;
        }
    }

    fclose(fp);
}
//#include <stdio.h>
//
//struct account {
//    char name[50];
//    int account_number;
//    float balance;
//};

void open_new_account() {
    FILE *fp;
    struct account user;

    fp = fopen("accounts.dat", "ab");

    printf("Enter Account Holder Name: ");
    scanf("%s", user.name);
    printf("Enter Account Number: ");
    scanf("%d", &user.account_number);
    printf("Enter Account Balance: ");
    scanf("%f", &user.balance);

    fwrite(&user, sizeof(struct account), 1, fp);

    fclose(fp);

    printf("Account created successfully!\n");
}
//#include <stdio.h>
//
//struct account {
//    char name[50];
//    int account_number;
//    float balance;
//};

void change_password(int account_num, char new_password[]) {
    FILE *fp;
    struct account user;

    fp = fopen("accounts.dat", "r+b");

    while (fread(&user, sizeof(struct account), 1, fp) == 1) {
        if (user.account_number == account_num) {
            strcpy(user.password, new_password);
            fseek(fp, -sizeof(struct account), SEEK_CUR);
            fwrite(&user, sizeof(struct account), 1, fp);
            break;
        }
    }

    fclose(fp);

    printf("Password changed successfully!\n");
}
//#include <stdio.h>
//
//struct payee {
//    char name[50];
//    int account_number;
//};

void add_payee(char payee_name[], int payee_account_num) {
    FILE *fp;
    struct payee new_payee;

    fp = fopen("payees.dat", "ab");

    strcpy(new_payee.name, payee_name);
    new_payee.account_number = payee_account_num;

    fwrite(&new_payee, sizeof(struct payee), 1, fp);

    fclose(fp);

    printf("Payee added successfully!\n");
}

void display_payees() {
    FILE *fp;
    struct payee payee;

    fp = fopen("payees.dat", "rb");

    while



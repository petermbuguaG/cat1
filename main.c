#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct Patron {
    char name[100];
    char pass[30];
    char email[50];
    int is_staff;
};
//function prototype
void add_patron();
int menu();
void execute_action(int action);
void view_patrons ();
void close();
int main()
{
    while(1)
        printf("COUNTY LIBRARY SYTEM!\n");
        printf("welcome MR.Titus !\n");
        execute_action(menu());
        printf("press any key to continue");
        getch();
        system("cls");

}
void add_patron() {
    struct Patron patron;
    printf("Enter name:");
    gets(patron.name);
    printf("Enter Email:");
    gets(patron.email);
    printf("Initial Password: ");
    gets(patron.pass);
    printf("Enter 1 if staff 0 otherwise: ");
    scanf("%d",&patron.is_staff);
    printf("Patron %s successfully added\n",patron.name);
}

int menu()
{
  int action;
  printf("Select an action:\n");
  printf("1. Add new patron\n");
  printf("2. View Patrons\n");
  printf("3. View Books\n");
  printf("4. Add New Book\n");
  printf("5. Exit\n");
  printf("Your Action: ");
  scanf("%d",&action);
  if(action < 1 || action > 5) {
    printf("Invalid action. Try again\n");
  }
  return action;
}

void execute_action(int action) {
    switch(action) {
    case 1:
        add_patron();
        break;
    case 2:
        view_patrons();
        break;
    case 3:
        printf("Here is a list of all books");
        break;
    case 4:
        printf("adding a new Book\n");
        break;
    case 5:
        close();
        break;
    default:
        printf("Invalid action.\n");
        return
        }
void view_patrons() {
    FILE *fp;
    struct Patron patron;
    if((fp = fopen ("patrons ","rb")) == NULL) {
    printf("unable to open file.\n");
    return;
    }
}
    printf("%20s%20s%10s\n","NAME","EMAIL","IS STAFF");
    while(feof(fp)){
        fread(&patron,sizeof(struct Patron),1,fp);
        printf("%-20s",patron.name);
        printf("%-30s",patron.email);
        printf("{%-10d\n",patron.is_staff);
        }

        fclose(fp);
void close() {
    printf("Thank you for using me.\n");
    printf("Created by Titus Njiru\n");
    sleep(2000);
    exit(0);
    }

#include <stdio.h>
#include <string.h>
struct employee {
int id; char name [50]; float salary;
};
void addEmployee() {
struct employee e; FILE *fp = fopen("employee.txt", "a");
if (fp == NULL) {
printf("Error opening file!\n"); return;
}
printf("\nEnter Employee ID: ");
scanf("%d", &e.id);
printf("Enter Employee Name: ");
scanf("%s", e.name);
printf("Enter Employee Salary: ");
scanf("%f", &e.salary);
fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
fclose(fp);
printf("Employee added successfully!\n");
}
void displayEmployees() {
struct employee e;
FILE *fp = fopen("employee.txt", "r");
if (fp == NULL) {
printf("No records found!\n");
return;
}
printf("\n-- Employee Records --\n");
while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
}
fclose(fp);
}
void searchEmployee() {
struct employee e;
FILE *fp = fopen("employee.txt", "r");
int id, found = 0;
if (fp == NULL) {
printf("No records found!\n");
return;
}
printf("\nEnter Employee ID to search: ");
scanf("%d", &id);
while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
if (e.id = id) {
printf("\nEmployee Found!\n");
printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
found = 1;
break;
}
}
if (!found)
printf("Employee with ID %d not found.\n", id);
fclose(fp);
}
void updateEmployee() {
struct employee e;
FILE *fp = fopen("employee.txt", "r");
FILE *temp = fopen("temp.txt", "w");
int id, found = 0;
if (fp == NULL) {
printf("No records found!\n");
return;
}
printf("\nEnter Employee ID to update: ");
scanf("%d", &id);
while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
if (e.id = id) {
found = 1;
printf("Enter New Name: ");
scanf("%s", e.name);
printf("Enter New Salary: ");
scanf("%f", &e.salary);
printf("Employee updated successfully!\n");
}
fprintf(temp, "%d %s %.2f\n", e.id, e.name, e.salary);
}
if (!found)
printf("Employee with ID %d not found.\n", id);
fclose(fp);
fclose(temp);
remove("employee.txt");
rename("temp.txt", "employee.txt");
void deleteEmployee() {
struct employee e;
FILE *fp = fopen("employee.txt", "r");
FILE *temp = fopen("temp.txt", "w");
int id, found = 0;
if (fp == NULL) {
printf("No records found!\n");
return;
}
printf("\nEnter Employee ID to delete: ");
scanf("%d", &id);
while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
if (e.id = id) {
found = 1;
printf("Employee deleted successfully!\n");
continue; // Skip writing to temp
}
fprintf(temp, "%d %s %.2f\n", e.id, e.name, e.salary);
}
if (!found)
printf("Employee with ID %d not found.\n", id);
fclose(fp);
fclose(temp);
remove("employee.txt");
rename("temp.txt", "employee.txt");
}
int main() {
int choice;
do {
printf("\n========== Employee Database Menu ===== =\n");
printf("1. Add Employee\n");
printf("2. Display Employees\n");
printf("3. Search Employee\n");
printf("4. Update Employee\n");
printf("5. Delete Employee\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: addEmployee(); break;
case 2: displayEmployees(); break;
case 3: searchEmployee(); break;
case 4: updateEmployee(); break;
case 5: deleteEmployee(); break;
case 6: printf("Exiting...\n"); break;
default: printf("Invalid choice! Try again.\n");
}
} while (choice != 6 );
return 0;
}

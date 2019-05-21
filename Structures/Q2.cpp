#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// #include <dos.h>
// #include <windows.h> 
#include <iostream>
using namespace std;

#define LIMIT 10000



typedef struct CarStructure Car;

struct CarStructure{
	int IDnum;
	int year;
	char make;
	Car* next;
};



Car *ScanList(Car* , int);
void InsertCar(Car*, int, int, char);
void DeleteCar(Car*, int);


int main(){

	Car head;
	head.IDnum = 100;
	head.year = 1397;
	head.make = 'P';
	head.next = NULL;

	int vehicleID=0 , vehicleYear=0;
	char vehiclemake=NULL;
	cout<<("Enter vehicle ID of new car: ");
	cin>>vehicleID;
	cout << ("Enter vehicle year of new car: ");
	cin>>vehicleYear;
	cout<<("Enter vehicle make of new car: ");
	cin>>vehiclemake;

	InsertCar(&head, vehicleID, vehicleYear, vehiclemake);

	InsertCar(&head, 200, 1392, 'I');
	InsertCar(&head, 150, 1390, 'B');
	
	cout<<("\n\nEnter vehicle ID of car to delete:\n");
	cin>>vehicleID;
	DeleteCar(&head, vehicleID);

	cout << ("\n\nEnter vehicle ID of car to delete:\n");
	cin >> vehicleID;
	DeleteCar(&head, vehicleID);

	return 0;
}


Car *ScanList(Car* head, int searchID)
{
	Car *previous, *current;
	previous = head;
	current = head->next;

	while ((current != NULL) && (current->IDnum < searchID)){
		previous = current;
		current = current->next;
	}
	return previous;
}

void InsertCar(Car* head, int ID, int year, char make)
{
	Car *newnode, *prevNode, *nextNode;
	newnode = (Car*)malloc(sizeof(Car));
	if (newnode == NULL)
		printf("Error in memory allocation!");
	newnode->IDnum = ID;
	newnode->year = year;
	newnode->make = make;

	prevNode = ScanList(head, ID);
	nextNode = prevNode->next;

	if ((nextNode == NULL) || (nextNode->IDnum != newnode->IDnum)){
		prevNode->next = newnode;
		newnode->next = nextNode;
		printf("\nNew Car has been inserted\n");
	}
	else {
		printf("Car already exists in database.\n\n");
		free(newnode);
	}

}


void DeleteCar(Car* head, int vehicleID){

	Car *delNode, *prevNode;
	prevNode = ScanList(head, vehicleID);
	delNode = prevNode->next;
	if ((delNode != NULL) && (delNode->IDnum == vehicleID)){
		prevNode->next = delNode->next;
		free(delNode);
		printf("Car has been deleted\n\n");
	}
	else { 
		printf("Vehicle not found in database.\n\n");
	}

}

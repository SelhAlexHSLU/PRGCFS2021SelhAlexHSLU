#include <stdio.h>

#define firstName_length 20
#define lastName_length 30
#define grade_count 6
#define student_count 5

struct student{
	char firstName[firstName_length];
	char lastName[lastName_length];
	float grades[grade_count];
	float average;
	
};




struct student studentArray[student_count]={
	[0].firstName = "Tony",[0].lastName = "Stark",[0].grades = {6.0,5.8,5.9,6.0,59,6.0},
	[1].firstName = "Peter",[1].lastName = "Parker",[1].grades = {4.5,4.8,5.8,3.2,5.9,5.2},
	[2].firstName = "Bruce",[2].lastName = "Banner",[2].grades = {5.5,2.8,5.3,4.8,5.4,4.5},
	[3].firstName = "Steve",[3].lastName = "Rogers",[3].grades = {4.9,3.9,5.8,2.3,4.3,5.4},
	[4].firstName = "Natasha",[4].lastName = "Romanoff",[4].grades = {5.3,5.2,5.1,5.7,4.9,5.9},
	
int main ()


	return 0;
}

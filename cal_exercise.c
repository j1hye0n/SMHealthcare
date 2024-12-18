//
//  cal_exercise.c
//  Excercise for Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define MAX_EXERCISES 100  			// Maximum number of exercises
#define MAX_EXERCISE_NAME_LEN 50	// Maximum length of the name of exercise


// To declare the structure of the exercises
static Exercise exercise_list[MAX_EXERCISES];
int exercise_list_size = 0;

/*
	description : read the information in "excercises.txt"
*/

void loadExercises(const char* EXERCISEFILEPATH) {
    FILE *file = fopen(EXERCISEFILEPATH, "r"); 
    if (file == NULL) {
        printf("There is no file for exercises! \n");
        return;
    }
	char buffer[MAX_EXERCISES];
    // ToCode: to read a list of the exercises from the given file
    while (1) {
    	fgets(buffer , MAX_EXERCISES , file); //12.18 22:00 edited
    	exercise_list_size++;
    	//printf("%s",str); double print
        if (exercise_list_size >= MAX_EXERCISES){
        	break;
		}
    }

    fclose(file);
}


/*
    description : to enter the selected exercise and the total calories burned in the health data
    input parameters : health_data - data object to which the selected exercise and its calories are added 
    return value : No
    
    operation : 1. provide the options for the exercises to be selected
    			2. enter the duration of the exercise
    			3. enter the selected exercise and the total calories burned in the health data
*/

void inputExercise(HealthData* health_data) {
    int choice, duration, i;
    
    switch (choice){
    	case 1:
    // ToCode: to provide the options for the exercises to be selected
    	{
			printf("The list of exercises: \n");
			loadExercises("exercies.txt");
			break;
		}
        case 2:
    // ToCode: to enter the exercise to be chosen with exit option
        {   printf("Exit the Exercise Option.\n");
            exit(0);
    	}
    }
            
    // To enter the duration of the exercise
    printf("Enter the duration of the exercise (in min.): ");
    scanf("%d", &duration);

    // ToCode: to enter the selected exercise and total calcories burned in the health data
    if(choice==1&&duration!=0)
    {
    	
	}
    

}

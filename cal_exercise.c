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
char EXERCISEFILEPATH = "C:\Users\urr55\Desktop\BasicProgramming\SMHealthcare\cal_exercises.txt"; // where is path declaration


/*
	description : read the information in "excercises.txt"
*/

void loadExercises(const char* EXERCISEFILEPATH) {
    FILE *file = fopen(EXERCISEFILEPATH, "r"); // edit file_path for absolute path > parameter
    if (file == NULL) {
        printf("There is no file for exercises! \n");
        return;
    }
	else{
    // ToCode: to read a list of the exercises from the given file
    	while (1) {
    		char *fgets(char* str , MAX_EXERCISES , *file); // for reading file
    		printf("%s",str); // debug code
        	if (exercise_list_size >= MAX_EXERCISES){
        		break;
			}
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
    
    switch (choice)
    	case 1:
    // ToCode: to provide the options for the exercises to be selected
    		printf("The list of exercises: \n");
			loadExercises();
            break;
        case 4:
    // ToCode: to enter the exercise to be chosen with exit option
            printf("Exit the Exercise Option.\n");
            exit();
            break;
 
    // To enter the duration of the exercise
    printf("Enter the duration of the exercise (in min.): ");
    scanf("%d", &duration);

    // ToCode: to enter the selected exercise and total calcories burned in the health data
    

}

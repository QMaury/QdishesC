/* this is a rewrite of the dishes.py program I made a while back. */
/* QMaury/Qdishes on Github */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inSink = 0;
int inMach = 0;
int machClean = 0;

int main(int) {
	/* Creates a random boolean value for 'inSink', 'inMach', and 'machClean' */
	srand(time(NULL));
	int inSink = rand() % 2;
	int inMach = rand() % 2;
	int machClean = rand() % 2;

	/* prints the previous booleans. mainly here for testing */
	printf(" %d\n", inSink);
	printf(" %d\n", inMach);
	printf(" %d\n", machClean);
	
	if(inSink == 0) {
		printf("\nThe sink is empty.\nGood job.\n");
		return 0;
	}
	else if(inSink == 1) { 
		printf("\nThe sink needs to be emptied\n");
		if(inMach == 0) {
			printf("The machine should be filled and turned on\n");
			inMach = 1;
			inSink = 0;
		}		
		else if(inMach == 1) {
			if(machClean == 0) {
			       printf("Turn on the machine\n");
			       if(inSink == 1) {
				       printf("Wait for the machine to finish running\n");
				       machClean = 1;
				       printf("Empty the machine\n");
				       inMach = 0;
				       if(inMach == 0) {
					       printf("Load the machine\n");
					       inSink = 0;
				       }
			       }
			}
			if(machClean == 1) {
				printf("Empty the machine\n");
				inMach = 0;
			       	if(inMach == 0); {/* i dont know what im doing haha!!! */
					printf("Load the machine\n");
					inMach = 1;
					inSink = 0;
				}
			}
		}
		if(inSink == 0) {
			printf("The sink is empty.\nGood job.\n");
			return 0;
	}
	return 0;
}
}

#include <stdio.h>
#include <string.h>


#define HAZARD_FILE "hazards.txt"
#define LOCATION_SIZE 100
#define TYPE_SIZE 50
#define DESCRIPTION_SIZE 200
#define NAME_SIZE 50
#define DATE_SIZE 20
#define STATUS_SIZE 20
#define LINE_SIZE 512

/* Member 1: collect a report and append it to hazards.txt */
void addHazard(void)
{
    char location[LOCATION_SIZE];
    char hazardType[TYPE_SIZE];
    char description[DESCRIPTION_SIZE];
    char reportedBy[NAME_SIZE];
    char dateReported[DATE_SIZE];
    char status[STATUS_SIZE];
    FILE *fp;

    /* TODO: Get the report details from the user. */
    /* TODO: Save one pipe-separated record in append mode. */
    /* Field order: location|hazardType|description|reportedBy|dateReported|status|dateCleared */
}

/* Member 2: display every saved report */
void viewHazards(void)
{
    char line[LINE_SIZE];
    FILE *fp;

    /* TODO: Open hazards.txt in read mode. */
    /* TODO: Read and display each record with fgets(). */
    /* TODO: Close the file and handle a missing file. */
}

/* Member 2: find reports containing the search text */
void searchHazards(void)
{
    char searchText[LOCATION_SIZE];
    char line[LINE_SIZE];
    FILE *fp;

    /* TODO: Ask the user for a location, hazard type, or keyword. */
    /* TODO: Read the file line by line and check with strstr(). */
    /* TODO: Display each matching record. */
}

/* Member 3: change a report's status to Cleared */
void updateHazardStatus(void)
{
    char searchLocation[LOCATION_SIZE];
    char dateCleared[DATE_SIZE];
    char line[LINE_SIZE];
    FILE *fp;
    FILE *temp;

    /* TODO: Find the report by location. */
    /* TODO: Write all records to a temporary file, updating the matching record. */
    /* TODO: Set status to Cleared and save the date cleared. */
    /* TODO: Close files and replace the original file with the temporary file. */
}


int main(void)
{
    /* Add the menu here when the team combines the functions. */
    return 0;
}
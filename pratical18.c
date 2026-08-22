#include <stdio.h>

int main() {
    // variable to add applicant name
    char name[50];

    // Variables to store the applicant age and vehicle choice 
    int age, choice;

    // Display the program title
    printf("Driving License Verification\n");

    // Take the applicant's name as input
    printf("Applicant Name: ");
    scanf("%s", name);

    // Take the applicant's age as input
    printf("Age: ");
    scanf("%d", &age);

    // Display the available vehicle types
    printf("Vehicle Type:\n");
    printf("1. Two Wheeler\n");
    printf("2. Four Wheeler\n");
    printf("3. Commercial Vehicle\n");

    // Take the vehicle type choice from the user
    printf("Enter vehicle type (1-3): ");
    scanf("%d", &choice);

    // Display the verification details
    printf("Driving License Verification\n");
    printf("Applicant: %s\n", name);

    // Check the selected vehicle type
    switch(choice) {
        case 1:
            // Two Wheeler eligibility
            printf("Vehicle Type: Two Wheeler\n");

            // Check if the applicant is 18 or older
            if (age >= 18)
                printf("Status: Eligible\n");
            else
                printf("Status: Not Eligible\n");

            break;

        case 2:
            // Four Wheeler eligibility
            printf("Vehicle Type: Four Wheeler\n");

            // Check if the applicant is 18 or older
            if (age >= 18)
                printf("Status: Eligible\n");
            else
                printf("Status: Not Eligible\n");

            break;

        case 3:
            // Commercial Vehicle eligibility
            printf("Vehicle Type: Commercial Vehicle\n");

            // Check if the applicant is 21 or older
            if (age >= 21)
                printf("Status: Eligible\n");
            else
                printf("Status: Not Eligible\n");

            break;

        default:
            // Display a message if an invalid choice is entered
            printf("Invalid Vehicle Type\n");
    }

    // End the program 
    return 0;
}

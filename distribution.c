/* Birthdates are mapped to a zodiac sign using function "getsign"
then I get the new schools by calling "getDistribution"
then I print out the results in the main function */

#include <stdio.h>
#include <string.h>

void getsign(int day, int month, char* sign) {
    if (month == 1) {
        if (day >= 21) {
            strcpy(sign, "Aquarius");
        } else {
            strcpy(sign, "Capricorn");
        }
    } else if (month == 2) {
        if (day >= 19) {
            strcpy(sign, "Pisces");
        } else {
            strcpy(sign, "Aquarius");
        }
    } else if (month == 3) {
        if (day >= 21) {
            strcpy(sign, "Aries");
        } else {
            strcpy(sign, "Pisces");
        }
    } else if (month == 4) {
        if (day >= 21) {
            strcpy(sign, "Taurus");
        } else {
            strcpy(sign, "Aries");
        }
    } else if (month == 5) {
        if (day >= 21) {
            strcpy(sign, "Gemini");
        } else {
            strcpy(sign, "Taurus");
        }
    } else if (month == 6) {
        if (day >= 22) {
            strcpy(sign, "Cancer");
        } else {
            strcpy(sign, "Gemini");
        }
    } else if (month == 7) {
        if (day >= 23) {
            strcpy(sign, "Leo");
        } else {
            strcpy(sign, "Cancer");
        }
    } else if (month == 8) {
        if (day >= 24) {
            strcpy(sign, "Virgo");
        } else {
            strcpy(sign, "Leo");
        }
    } else if (month == 9) {
        if (day >= 24) {
            strcpy(sign, "Libra");
        } else {
            strcpy(sign, "Virgo");
        }
    } else if (month == 10) {
        if (day >= 24) {
            strcpy(sign, "Scorpio");
        } else {
            strcpy(sign, "Libra");
        }
    } else if (month == 11) {
        if (day >= 23) {
            strcpy(sign, "Sagittarius");
        } else {
            strcpy(sign, "Scorpio");
        }
    } else if (month == 12) {
        if (day >= 22) {
            strcpy(sign, "Capricorn");
        } else {
            strcpy(sign, "Sagittarius");
        }
    }
}

void getDistribution(char* sign){
    char* signs[15] = {"Aquarius", "Capricorn", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
    int schoolNum = 0;

    printf("Student's distribution over the next 3 years.\n");
    
    for (int i = 1; i <= 3; i++) { // show distribution for 3 years
    
        for (int j=0; j<12; j++){ //
            if (strcmp(sign, signs[j]) == 0){ 
                schoolNum = (i + j) % 12 + 1; // rotate based on year
                break;
            }
        }
        printf("Year #%d : S%d\n", i, schoolNum);
    }
    printf("--------\n");
}

int main(){
    char dayMonth[8];
    int day, month;
    char sign[12];
    printf("\nEnter your birthday (day/month) format: ");
    scanf("%s",dayMonth);
    //printf("%s", dayMonth);
    sscanf(dayMonth,"%d/%d", &day, &month); //use sscanf to grab and assign ints to day and month vars
    printf("Date Entered: %d/%d\n", day, month);
    getsign(day,month,sign); // get zodiac sign based on day and month
    getDistribution(sign);
    return 0;
}
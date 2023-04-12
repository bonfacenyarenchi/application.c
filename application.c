#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct
{
    char name[50] ,email[50],course[50];
    char grade,gender,intake,programme,fees,campus,mode;
}Applicants;

int  main(){
    Applicants Applicant;
    printf("Technical University of Mombasa\n");
    printf("\n");
    printf("Contact us: \n");
    printf("\n");
    printf("Tom Mboya Street,Tudor,Mombasa\n");
    printf("P.O BOX.90420-80100\n");
    printf("+254208095365\n");
    printf("+254733955377\n");
    printf("info@tum.ac.ke\n");
    printf("\n");
    printf("####  \r Press ENTER  to start Application process!  ##### \n");
    getch();
    printf("\n");
    printf("-------Welcome to course application process-------!\n");
    printf("\n");
    printf("Please enter your full name! :  ");
    fgets(Applicant.name,50,stdin);
    printf("\n");
    printf("Enter your email! :  ");
    fgets(Applicant.email,50,stdin);
    printf("\n");

    printf("Please select a programme you would like to apply for using letters A-E: \n");
    printf("C.Certificate\n");
    printf("D.Diploma\n");
    printf("G.Degree\n");
    printf("M.Masters\n");
    printf("R.Doctorate\n");
    printf("\n");
    printf("Programme : ");
    scanf("%s",&Applicant.programme);
    getchar();

    printf("\n");
    printf("Select your gender\n");
    printf("F for female\n");
    printf("M for male\n");
    printf("X for other\n");
    printf("Gender : ");
    scanf("%s",&Applicant.gender);
    getchar();

    printf("\n");
    printf("Select Campus :\n");
    printf("K for Kwale\n");
    printf("M for Main\n");
    printf("Campus : ");
    scanf("%s",&Applicant.campus);

    printf("\n");
    printf("Select your intake time:\n");
    printf("M for May 2023\n");
    printf("S for September 2023\n");
    printf("Intake : ");
    scanf("%s",&Applicant.intake);

    printf("\n");
    printf("Select when to attend classes:\n");
    printf("P for Part-time\n");
    printf("F for Full-time\n");
    printf("E for Evenings\n");
    printf("Mode : ");
    scanf("%s",&Applicant.mode);

    printf("enter your KCSE grade: ");
    scanf("%s",&Applicant.grade);
    printf("\n");
    printf("Please enter the course you could like to apply for : ");
    getchar();
    fgets(Applicant.course,50,stdin);
    printf("\n");
    printf("**-------You selected!------**");
    printf("\n");
    printf("Name       : %s\n",Applicant.name);
    if(Applicant.gender=='F'){
        printf("Gender     : Female\n");
    }
    else if(Applicant.gender=='M'){
        printf("Gender     : Male\n");
    }
    else if(Applicant.gender=='X'){
        printf("Gender     : Other\n");
    }
    else{
        printf("Gender     : NOT SELECTED!\n");
    }
    if(Applicant.programme == 'C'){
        printf("Programme  : Certificate\n");
    }
    else if(Applicant.programme =='D'){
        printf("Programme  : Diploma\n");
    }
    else if(Applicant.programme=='G'){
        printf("Programme  : Degree\n");
    }
    else if(Applicant.programme=='M'){
        printf("Programme  : Masters\n");
    }
    else if(Applicant.programme=='R'){
        printf("Programme  : Doctorate\n");
    }
    else{
        printf("Programme  : NOT SELECTED!\n");
    }
   char Campus = Applicant.campus == 'K';
    if(Campus){
        printf("Campus     : Kwale campus\n");
    }
    else if(Applicant.campus=='M'){
        printf("Campus     : Main Campus\n");
    }
    else{
        printf("Campus     : NOT SELECTED!\n");
    }
    char Mode = Applicant.mode == 'P';
    if(Mode){
        printf("Mode       : Part-time\n");
    }
    else if(Applicant.mode=='F'){
        printf("Mode       : Full-time\n");
    }
    else if(Applicant.mode=='E'){
        printf("Mode       : Evenings\n");
    }
    else{
        printf("Mode       : NOT SELECTED!\n");
    }
   char Intake = Applicant.intake == 'M';
    if(Intake){
        printf("Intake     : May 2023\n");
    }
    else if(Applicant.intake=='S'){
        printf("Intake     : September 2023\n");
    }
    else{
        printf("Intake     : NOT SELECTED!\n");
    }
    printf("U're Email : %s",Applicant.email);
    printf("Course     : %s",Applicant.course);
    printf("\n");


    char selected=Applicant.grade=='A'||Applicant.grade=='B';
    if(selected){
        printf("\n Hello , %s",Applicant.name);
        if(Applicant.campus == 'K'){
            printf("You have been selected for the %s course in Technical University of Mombasa in  Kwale Campus \n",Applicant.course);
            printf("A letter  will be sent  %s email \n",Applicant.email);
            printf("\n");
        }
        else if(Applicant.campus=='M'){
            printf("You have been selected for the %s course in Technical University of Mombasa in  Main Campus \n",Applicant.course);
            printf("A letter  will be sent %s email  \n",Applicant.email);
            printf("\n");
        }
        else{
            printf("You did not Select  any of our campuses!");
            printf("\n");
        }
    }
    else
    {
        printf("Sorry %s you do not meet grade requirements for the %s course.\n",Applicant.name,Applicant.course);
        printf("Thank you For being patient!");
        printf("\n");
    }


    return 0;
}

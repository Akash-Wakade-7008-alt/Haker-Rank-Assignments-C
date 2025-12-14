#include <stdio.h>

/*

year 1.         year 2.                       year 3.                         year 4.

1.Physics.      A.CSE                         A.CSE.                      if student get internship(false)-->No need to study
2.Chemistry.     1.C programming.              1.Object oriented.          any subject
3.Maths.         2.Web development.             programming.
                 3.Computer Organisation.      2.DBMS.                    if student does no get intership
                                               3.Data structure
                 B.ECE                         & Algorith.                A.CES
                  1.Signal Proccessing.                                    1.Operating Systems.
                  2.Local Design.             B.ECE.                       2.Computer Network
                  3.Network Analysis.          1.Analog electronics.       3.Computer Design
                                               2.Embaded system
                  C.Mechanical                 3.MicroControllers.        B.ECE
                   1.Thermodynamics                                        1.VISI Design
                   2.Solid Mechanics.         C.Mechcanical                2.Fibre Optics
                   3.Heat Transfer.            1.Applied Mechanics.        3.Communication
                                               2.Kinamatics.               4.Digital Electronics
                                               3.Mechatronics.
                                                                          C.Mechanical
                                                                          1.Strength of Material(MOM)
                                                                          2.Mechanism of material.

*/

int main()
{
    int year, internshipStatus;
    char branch;

    printf("choose year\n");
    scanf("%d", &year);

    switch (year)
    {

    case 1:
    {
        printf("1.Physics\n2.Chemistry\n3.Maths\n");
        break;
    }

    case 2:
    {
        printf("Choose branch");

        scanf("%c", &branch);
        switch (branch)
        {

        case 'C':
            printf("1.C programming\n2.Computer Organisation\n3.Web Development");
            break;

        case 'E':
            printf("1.Signal processing\n2.Local Design\n3.Network Analysis");
            break;

        case 'M':
            printf("1.Thermodynamics\n2.Heat Transfer\n3.Solid Mechanics\n");
            break;
        }

        break;
    }

    case 3:
    {
        printf("Choose branch\n");

        scanf(" %c", &branch);

        switch (branch)
        {
        case 'C':
        {
            printf("1.Object-oriented programming\n2.DBMS\n3.Data structure and algorithm");
            break;
        }

        case 'E':
        {
            printf("1.Analog Electronics\n2.Embaded system\n3.Micro Controllers\n");
            break;
        }

        case 'M':
        {
            printf("1.Appied Mechanics\n2.Kinematics\n3.Mechatronics\n");
            break;
        }
        }

        break;
    }

    case 4:
    {

        printf("Enter your Internship Status(0,1)\n"); // 0-->got an internship, 1-->No internship
        scanf("%d", &internshipStatus);

        if (internshipStatus == 0)
        {
            printf("Congratulation for an internship\n");
        }

        else if (internshipStatus == 1)
        {

            printf("Choose branch\n");

            scanf(" %c", &branch);

            switch (branch)
            {

            case 'C':
            {
                printf("1.Operating System\n2.Computer Network\n3.Computer Design");
                break;
            }

            case 'E':
            {
                printf("1.VISI design\n2.Fibre Optics\n3.Communication\n4.Digital Electronics");
                break;
            }

            case 'M':
            {
                printf("1.Strenght of material(SOM)\n2.mechanism of material(MOM)");
                break;
            }
            }
        }
    }
    }

    return 0;
}
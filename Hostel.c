#include <stdio.h>
int main()
{
    int h,r;
    char fl;
    printf("Enter the hostel Number, floor and room no.");
    scanf("%d %c %d",&h,&fl,&r);
    
    
    switch (h)
    {
        case 17:

        switch (fl)
        {
            case 'G':

            switch (r)
            {
                case 1:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 2:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 3:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 4:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 5:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 6:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                case 7:
                printf("Occupied by 1)Rohan\n2)Mahesh\n3)Raju");
                break;

                default:
                printf("Room %d not in This floor",r);
                break;
            }
            case 'F':
            switch (r)
            {
                case 8:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 9:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 10:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 11:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 12:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 13:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                case 14:
                printf("Occupied by 1)Mukesh\n2)Odin\n3)Jatin");
                break;

                default:
                printf("Room %d not on this floor",r);
                break;


            }
            case 'S':
            switch (r)
            {
                case 15:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 16:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 17:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 18:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 19:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 20:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                case 21:
                printf("Occupied by 1)Krish\n2)Divyansh\n3)Rohit");
                break;

                default:
                printf("Room %d not on this floor",r);
                break;

            }
            case 'T':
            switch (r)
            {
                case 22:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 23:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 24:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 25:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 26:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 27:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                case 28:
                printf("Occupied by 1)Kamal\n2)Divyaj\n3)Jagdish");
                break;

                default:
                printf("Room Number %d does not exists",r);
                break;
            }
            default:
            printf("Floor does not exists");
            break; 

        }
        
        
    }
    


}
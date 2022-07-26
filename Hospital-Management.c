#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

void project_name()
{
    system("color 9");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t  Welcome \n");
    printf("\t\t\t\t\t\t\t    To \n\n");
    printf("\t\t\t\t\t\t --------------------------\n");
    printf("\t\t\t\t\t\t Infirmary Handling System \n");
    printf("\t\t\t\t\t\t --------------------------\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t  Made By \n");
    printf("\t\t\t\t\t\t\t----------- \n");
    printf("\t\t\t\t\t\t    Anirudh Suryawanshi\n\n");
    printf("\t\t\t\t\t\t       In Guidence Of \n");
    printf("\t\t\t\t\t\t     ------------------ \n");
    printf("\t\t\t\t\t\t     Akhilesh Sharma Sir\n");
    printf("\t\t\t\t\t\t\t     & \n   ");
    printf("\t\t\t\t\t\t     Hrishabh Kumar Sir");
    getch();
}

void intro()
{
    system("cls");
    system("color 6");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t--------------------------\n");
    printf("\t\t\t\t\t\t + Suryawanshi Hospital +\n");
    printf("\t\t\t\t\t\t--------------------------\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t         Address \n");
    printf("\t\t\t\t\t\t       ----------- \n");
    printf("\t\t\t\t\t\t     R.K. Plaza C-39, \n");
    printf("\t\t\t\t\t\t     Padmanabh Nagar, \n");
    printf("\t\t\t\t\t\t  Govindpura,Bhopal (M.P.)\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t      Contact Details \n");
    printf("\t\t\t\t\t\t    ------------------- \n");
    printf("\t\t\t\t\t\t   8319194220,9179231542 \n");
    getch();
}

void login()

{

    int x, i, a1;
    char pass[4], ch;
    system("cls");
    system("color 3");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-------\n");
    printf("\t\t\t\t\t\t\t Login\n");
    printf("\t\t\t\t\t\t\t-------\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t1.As Doctor\n\n");
    printf("\t\t\t\t\t\t2.As Administrator\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &x);

    if (x == 1)
    {
    ABC:
        printf("\n\n\t\t----------------------------------------------------------------------------------------   \n\n");
        printf("\t\t\t\t\t\t   -----------------\n");
        printf("\t\t\t\t\t\t    Login as Doctor\n");
        printf("\t\t\t\t\t\t   -----------------\n\n\n");
        printf("\t\t\t\t\t\tEnter 4 digit PASSWORD \n\n");
        printf("\t\t\t\t   Enter Password : ");
        for (i = 0; i < 4; i++)
        {
            ch = getch();
            pass[i] = ch;
            ch = '*';
            printf("%c", ch);
            ch = pass[i];
        }
        if (ch == 'd')
        {
            Doctor();
        }
        else
        {
            printf("\n\n\t\t--------------------------------------------------------------------------------------\n\n\n");
            printf("\t\t\t\t\t\t!!! Wrong Password !!!\n");
            printf("\n\n");
            printf("\t\t-------------------------------------------------------------------------------------------\n\n");
            printf("\t\t\t\t\t\tPress '1' to RETRY : ");
            scanf("%d", &a1);
            goto ABC;
        }
    }
    if (x == 2)
    {
    XYZ:
        printf("\n\n\t\t----------------------------------------------------------------------------------------   \n\n");
        printf("\t\t\t\t\t\t-----------------------\n");
        printf("\t\t\t\t\t\t Login as Adminisrator\n");
        printf("\t\t\t\t\t\t-----------------------\n\n\n");
        printf("\t\t\t\t\t\tEnter 4 digit PASSWORD \n\n");
        printf("\t\t\t\t   Enter Password : ");
        for (int i = 0; i < 4; i++)
        {
            ch = getch();
            pass[i] = ch;
            ch = '*';
            printf("%c", ch);
            ch = pass[i];
        }
        if (ch == 'h')
        {
            admin();
        }
        else
        {
            printf("\n\n\t\t--------------------------------------------------------------------------------------\n\n\n");
            printf("\t\t\t\t\t\t!!! Wrong Password !!!\n");
            printf("\n\n");
            printf("\t\t-------------------------------------------------------------------------------------------\n\n");
            printf("\t\t\t\t\t\tPress '1' to RETRY : ");
            scanf("%d", &a1);
            goto XYZ;
        }
    }
}

void Doctor()
{
    int a;
    char name[30];

    system("cls");
    system("color a");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t    || Welcome Doctor ||\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t Main Menu\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\t 1.Patient's Information\n\n");
    printf("\t\t\t\t\t 2.Doctors's Information\n\n");
    printf("\t\t\t\t\t 3.Pharmacy\n\n");
    printf("\t\t\t\t\t 4.Check Appointment\n\n");
    printf("\t\t\t\t\t 5.About Program\n\n");
    printf("\t\t\t\t\t 6.Log Out\n\n");
    printf("\t\t\t\t\t 7.Close Program\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        patient_Doctor();
        break;
    case 2:
        doctor_Doctor();
        break;
    case 3:
        pharmacy();
        break;
    case 4:
        // check_appointment()
    case 5:
        about_program_doctor();
        break;
    case 6:
        system("cls");
        system("color 4");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t   -------------\n");
        printf("\t\t\t\t\t\t    Logging Out\n");
        printf("\t\t\t\t\t\t   -------------\n\n");
        printf("\t\t\t\t       ||| Logging out from Doctor Window |||\n\n");
        getch();
        login();
        break;
    case 7:
        close_program();
        exit(0);
        break;
    }
}

void patient_Doctor()
{
    int a;
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t -----------------------\n");
    printf("\t\t\t\t\t\t  Patient's Information\n");
    printf("\t\t\t\t\t\t -----------------------\n\n\n");
    printf("\t\t\t\t\t 1.Search Patient\n\n");
    printf("\t\t\t\t\t 2.Record List\n\n");
    printf("\t\t\t\t\t 3.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        search_entry_Doctor();
        getch();
        break;
    case 2:
        record_list_Doctor();
        getch();
        break;
    case 3:
        Doctor();
        break;
    }
}

void doctor_Doctor()
{
    int a;
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t  ----------------------\n");
    printf("\t\t\t\t\t\t   Doctor's Information\n");
    printf("\t\t\t\t\t\t  ----------------------\n\n\n");
    printf("\t\t\t\t\t 1.Search Doctor\n\n");
    printf("\t\t\t\t\t 2.Record List\n\n");
    printf("\t\t\t\t\t 3.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        d_search_entry_Doctor();
        break;
    case 2:
        d_record_list_Doctor();
        break;
    case 3:
        Doctor();
        break;
    }
}

void pharmacy()
{
    int a;
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t----------\n");
    printf("\t\t\t\t\t\t\t Pharmacy\n");
    printf("\t\t\t\t\t\t\t----------\n\n");
    printf("\t\t\t\t\t 1.Add Medicine\n\n");
    printf("\t\t\t\t\t 2.Modify Details\n\n");
    printf("\t\t\t\t\t 3.Search Medicine\n\n");
    printf("\t\t\t\t\t 4.Delete Medicine\n\n");
    printf("\t\t\t\t\t 5.Record List\n\n");
    printf("\t\t\t\t\t 6.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        add_medicine();
        getch();
        break;
    case 2:
        modify_medicine();
        getch();
        break;
    case 3:
        search_medicine();
        getch();
        break;
    case 4:
        delete_medicine();
        getch();
        break;
    case 5:
        record_medicine();
        getch();
        break;
    case 6:
        Doctor();
        getch();
        break;
    }
}
typedef struct medicine1
{
    char medicine_name[20], medicine_for[30];
    int po_no, doze_required, quantity;
} medicine1;

void add_medicine()
{
    medicine1 *p;
    int n, o, i, j;
    FILE *fp;
    fp = fopen("Medicine_Information.txt", "a");
    system("cls");
    system("color d");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t New Entry\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\tEnter no. of medicine you want to add : ");
    scanf("%d", &n);
    printf("\n");
    p = (medicine1 *)calloc(n, sizeof(medicine1));
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\tPurchase Order no.      : ");
        scanf("%d", &p[i].po_no);
        fflush(stdin);
        printf("\t\t\t\t\tMedicine Name           : ");
        scanf("%[^\n]s", &p[i].medicine_name);
        fflush(stdin);
        printf("\t\t\t\t\tMedicine For            : ");
        scanf("%[^\n]s", &p[i].medicine_for);
        fflush(stdin);
        printf("\t\t\t\t\tDoze Required  (in mg)  : ");
        scanf("%d", &p[i].doze_required);
        fflush(stdin);
        printf("\t\t\t\t\tQuantity Required       : ");
        scanf("%d", &p[i].quantity);
        fwrite(&p[i], sizeof(medicine1), 1, fp);
        printf("\n");
    }
    fclose(fp);
    printf("\t\t ----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter '1' to add another medicine OR '0' to go back\n\n");
    printf("\t\t\t\t\t     Enter your choice : ");
    scanf("%d", &o);
    printf("\n\t\t  ----------------------------------------------------------------------------------------\n\n");
    if (o == 1)
    {
        add_medicine();
    }
    else
    {
        pharmacy();
    }
}
void modify_medicine()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Modify Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    medicine1 p1;
    FILE *fp, *fp1;
    fp = fopen("Medicine_Information.txt", "r");
    fp1 = fopen("temp4.txt", "w");
    printf("\t\t\t\t\tEnter Medicine's PO no. to be modified : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(medicine1), 1, fp))
    {
        if (p1.po_no == n)
        {
            found = 1;
            printf("\t\t\t\t\tNew Purchase Order no.      : ");
            scanf("%d", &p1.po_no);
            fflush(stdin);
            printf("\t\t\t\t\tNew Medicine Name           : ");
            scanf("%[^\n]s", &p1.medicine_name);
            fflush(stdin);
            printf("\t\t\t\t\tNew Medicine For            : ");
            scanf("%[^\n]s", &p1.medicine_for);
            fflush(stdin);
            printf("\t\t\t\t\tNew Doze Required  (in mg)  : ");
            scanf("%d", &p1.doze_required);
            fflush(stdin);
            printf("\t\t\t\t\tNew Quantity Required       : ");
            scanf("%d", &p1.quantity);
            fwrite(&p1, sizeof(medicine1), 1, fp);
            printf("\n");
        }
        fwrite(&p1, sizeof(medicine1), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp4.txt", "r");
        fp = fopen("Medicine_Information.txt", "w");

        while (fread(&p1, sizeof(medicine1), 1, fp1))
        {
            fwrite(&p1, sizeof(medicine1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    getch();
    pharmacy();
}
void search_medicine()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Search Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    medicine1 p1;
    FILE *fp;
    fp = fopen("Medicine_Information.txt", "r");
    printf("\t\t\t\t\tEnter Medicine's PO no. to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(medicine1), 1, fp))
    {
        if (p1.po_no == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t Purchase Order no.      : %d\n", p1.po_no);
            printf("\t\t\t\t\t Medicine Name           : %s\n", p1.medicine_name);
            printf("\t\t\t\t\t Medicine For            : %s\n", p1.medicine_for);
            printf("\t\t\t\t\t Doze Required  (in mg)  : %d\n", p1.doze_required);
            printf("\t\t\t\t\t Quantity Required       : %d\n", p1.quantity);
        }
    }
    fclose(fp);
    getch();
    pharmacy();
}
void delete_medicine()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Delete Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    medicine1 p1;
    FILE *fp, *fp1;
    fp = fopen("Medicine_Information.txt", "r");
    fp1 = fopen("temp4.txt", "w");
    printf("\t\t\t\t\tEnter Medicine's PO no. to be deleted : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(medicine1), 1, fp))
    {
        if (p1.po_no == n)
        {
            found = 1;
        }
        else
        {
            fwrite(&p1, sizeof(medicine1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp4.txt", "r");
        fp = fopen("Medicine_Information.txt", "w");

        while (fread(&p1, sizeof(medicine1), 1, fp1))
        {
            fwrite(&p1, sizeof(medicine1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n\n\n\t\t\t\t\t   *** Record Deleted ***");
    }
    getch();
    pharmacy();
}
void record_medicine()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t      -------------\n");
    printf("\t\t\t\t\t\t       Record List\n");
    printf("\t\t\t\t\t\t      -------------\n\n");
    medicine1 p1;
    FILE *fp;
    fp = fopen("Medicine_Information.txt", "r");
    while (fread(&p1, sizeof(medicine1), 1, fp))
    {
        printf("\t\t\t\t\t   Purchase Order no.      : %d\n", p1.po_no);
        printf("\t\t\t\t\t   Medicine Name           : %s\n", p1.medicine_name);
        printf("\t\t\t\t\t   Medicine For            : %s\n", p1.medicine_for);
        printf("\t\t\t\t\t   Doze Required  (in mg)  : %d\n", p1.doze_required);
        printf("\t\t\t\t\t   Quantity Required       : %d\n", p1.quantity);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    pharmacy();
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void admin()
{
    int a;
    char name[30];
ANI:
    system("cls");
    system("color a");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t    || Welcome Admin ||\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t Main Menu\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\t 1.Patient\n\n");
    printf("\t\t\t\t\t 2.Staff\n\n");
    printf("\t\t\t\t\t 3.About Program\n\n");
    printf("\t\t\t\t\t 4.Log Out\n\n");
    printf("\t\t\t\t\t 5.Close Program\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        patient();
        break;
    case 2:
        staff();
        break;
    case 3:
        about_program_admin();
        break;
    case 4:
        system("cls");
        system("color 4");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t-------------\n");
        printf("\t\t\t\t\t\t\t Logging Out\n");
        printf("\t\t\t\t\t\t\t-------------\n\n");
        printf("\t\t\t\t\t    ||| Logging out from Admin Window |||\n\n");
        getch();
        login();
        break;
    case 5:
        close_program();
        exit(0);
        break;
    }
}

void patient()
{
    int a;
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t---------\n");
    printf("\t\t\t\t\t\t\t Patient\n");
    printf("\t\t\t\t\t\t\t---------\n\n");
    printf("\t\t\t\t\t 1.Add Patient\n\n");
    printf("\t\t\t\t\t 2.Modify Details\n\n");
    printf("\t\t\t\t\t 3.Search Patient\n\n");
    printf("\t\t\t\t\t 4.Delete Patient\n\n");
    printf("\t\t\t\t\t 5.Record List\n\n");
    printf("\t\t\t\t\t 6.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        new_entry();
        getch();
        break;
    case 2:
        modify_entry();
        getch();
        break;
    case 3:
        search_entry();
        getch();
        break;
    case 4:
        delete_entry();
        getch();
        break;
    case 5:
        record_list();
        getch();
        break;
    case 6:
        admin();
        getch();
        break;
    }
}
typedef struct patient1
{
    char name[20], address[30], sickness[10], gender, bloodgroup[5];
    long long phone_no;
    int id, age;
} patient1;

void new_entry()
{
    patient1 *p;
    int n, o, i, j;
    FILE *fp;
    fp = fopen("Patient_Information.txt", "a");
    system("cls");
    system("color d");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t New Entry\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\tEnter no. of patient you want to add : ");
    scanf("%d", &n);
    printf("\n");
    p = (patient1 *)calloc(n, sizeof(patient1));
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\tId            : ");
        scanf("%d", &p[i].id);
        fflush(stdin);
        printf("\t\t\t\t\tName          : ");
        scanf("%[^\n]s", &p[i].name);
        fflush(stdin);
        printf("\t\t\t\t\tAge           : ");
        scanf("%d", &p[i].age);
        fflush(stdin);
        printf("\t\t\t\t\tGender        : ");
        scanf("%c", &p[i].gender);
        fflush(stdin);
        printf("\t\t\t\t\tBlood Group   : ");
        scanf("%[^\n]s", &p[i].bloodgroup);
        fflush(stdin);
        printf("\t\t\t\t\tSickness      : ");
        scanf("%[^\n]s", &p[i].sickness);
        fflush(stdin);
        printf("\t\t\t\t\tAddress       : ");
        scanf("%[^\n]s", &p[i].address);
        fflush(stdin);
        printf("\t\t\t\t\tPhone no.     : ");
        scanf("%lli", &p[i].phone_no);
        fwrite(&p[i], sizeof(patient1), 1, fp);
        printf("\n");
    }
    fclose(fp);
    printf("\t\t ----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter '1' to add another patient OR '0' to go back\n\n");
    printf("\t\t\t\t\t     Enter your choice : ");
    scanf("%d", &o);
    printf("\n\t\t  ----------------------------------------------------------------------------------------\n\n");
    if (o == 1)
    {
        new_entry();
    }
    else
    {
        patient();
    }
}
void modify_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Modify Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    patient1 p1;
    FILE *fp, *fp1;
    fp = fopen("Patient_Information.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("\t\t\t\t\tEnter Patient's Id to be modified : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        if (p1.id == n)
        {
            found = 1;
            printf("\t\t\t\t\tNew Id            : ");
            scanf("%d", &p1.id);
            fflush(stdin);
            printf("\t\t\t\t\tNew Name          : ");
            scanf("%[^\n]s", &p1.name);
            fflush(stdin);
            printf("\t\t\t\t\tNew Age           : ");
            scanf("%d", &p1.age);
            fflush(stdin);
            printf("\t\t\t\t\tNew Gender        : ");
            scanf("%c", &p1.gender);
            fflush(stdin);
            printf("\t\t\t\t\tNew Blood Group   : ");
            scanf("%[^\n]s", &p1.bloodgroup);
            fflush(stdin);
            printf("\t\t\t\t\tNew Sickness      : ");
            scanf("%[^\n]s", &p1.sickness);
            fflush(stdin);
            printf("\t\t\t\t\tNew Address       : ");
            scanf("%[^\n]s", &p1.address);
            fflush(stdin);
            printf("\t\t\t\t\tNew Phone no.     : ");
            scanf("%lli", &p1.phone_no);
            fwrite(&p1, sizeof(patient1), 1, fp);
            printf("\n");
        }
        fwrite(&p1, sizeof(patient1), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("Patient_Information.txt", "w");

        while (fread(&p1, sizeof(patient1), 1, fp1))
        {
            fwrite(&p1, sizeof(patient1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    getch();
    patient();
}
void search_entry()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    patient1 p1;
    FILE *fp;
    fp = fopen("Patient_Information.txt", "r");
    printf("\t\t\t\t\tEnter Patient's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        if (p1.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Id          : %d\n", p1.id);
            printf("\t\t\t\t\t   Name        : %s\n", p1.name);
            printf("\t\t\t\t\t   Age         : %d\n", p1.age);
            printf("\t\t\t\t\t   Gender      : '%c'\n", p1.gender);
            printf("\t\t\t\t\t   Blood Group : %s\n", p1.bloodgroup);
            printf("\t\t\t\t\t   Sickness    : %s\n", p1.sickness);
            printf("\t\t\t\t\t   Address     : %s\n", p1.address);
            printf("\t\t\t\t\t   Phone no.   : %lli\n", p1.phone_no);
        }
    }
    fclose(fp);
    getch();
    patient();
}
void search_entry_Doctor()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    patient1 p1;
    FILE *fp;
    fp = fopen("Patient_Information.txt", "r");
    printf("\t\t\t\t\tEnter Patient's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        if (p1.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Id          : %d\n", p1.id);
            printf("\t\t\t\t\t   Name        : %s\n", p1.name);
            printf("\t\t\t\t\t   Age         : %d\n", p1.age);
            printf("\t\t\t\t\t   Gender      : '%c'\n", p1.gender);
            printf("\t\t\t\t\t   Blood Group : %s\n", p1.bloodgroup);
            printf("\t\t\t\t\t   Sickness    : %s\n", p1.sickness);
            printf("\t\t\t\t\t   Address     : %s\n", p1.address);
            printf("\t\t\t\t\t   Phone no.   : %lli\n", p1.phone_no);
        }
    }
    fclose(fp);
    getch();
    patient_Doctor();
}
void delete_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Delete Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    patient1 p1;
    FILE *fp, *fp1;
    fp = fopen("Patient_Information.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("\t\t\t\t\tEnter Patient's Id to be deleted : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        if (p1.id == n)
        {
            found = 1;
        }
        else
        {
            fwrite(&p1, sizeof(patient1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("Patient_Information.txt", "w");

        while (fread(&p1, sizeof(patient1), 1, fp1))
        {
            fwrite(&p1, sizeof(patient1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n\n\n\t\t\t\t\t   *** Record Deleted ***");
    }
    getch();
    patient();
}
void record_list()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    patient1 p1;
    FILE *fp;
    fp = fopen("Patient_Information.txt", "r");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        printf("\t\t\t\t\t   Id          : %d\n", p1.id);
        printf("\t\t\t\t\t   Name        : %s\n", p1.name);
        printf("\t\t\t\t\t   Age         : %d\n", p1.age);
        printf("\t\t\t\t\t   Gender      : '%c'\n", p1.gender);
        printf("\t\t\t\t\t   Blood Group : %s\n", p1.bloodgroup);
        printf("\t\t\t\t\t   Sickness    : %s\n", p1.sickness);
        printf("\t\t\t\t\t   Address     : %s\n", p1.address);
        printf("\t\t\t\t\t   Phone no.   : %lli\n", p1.phone_no);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    patient();
}
void record_list_Doctor()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    patient1 p1;
    FILE *fp;
    fp = fopen("Patient_Information.txt", "r");
    while (fread(&p1, sizeof(patient1), 1, fp))
    {
        printf("\t\t\t\t\t   Id          : %d\n", p1.id);
        printf("\t\t\t\t\t   Name        : %s\n", p1.name);
        printf("\t\t\t\t\t   Age         : %d\n", p1.age);
        printf("\t\t\t\t\t   Gender      : '%c'\n", p1.gender);
        printf("\t\t\t\t\t   Blood Group : %s\n", p1.bloodgroup);
        printf("\t\t\t\t\t   Sickness    : %s\n", p1.sickness);
        printf("\t\t\t\t\t   Address     : %s\n", p1.address);
        printf("\t\t\t\t\t   Phone no.   : %lli\n", p1.phone_no);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    patient_Doctor();
}

void staff()

{
    int a;
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-------\n");
    printf("\t\t\t\t\t\t\t Staff\n");
    printf("\t\t\t\t\t\t\t-------\n\n");
    printf("\t\t\t\t\t 1.Doctors\n\n");
    printf("\t\t\t\t\t 2.Nurses\n\n");
    printf("\t\t\t\t\t 3.Other Members\n\n");
    printf("\t\t\t\t\t 4.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        doctor();
        break;
    case 2:
        nurse();
        break;
    case 3:
        member();
        break;
    case 4:
        admin();
        break;
    }
}

void doctor()
{
    int a;
    system("cls");
    system("color 6");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t--------\n");
    printf("\t\t\t\t\t\t\t Doctor\n");
    printf("\t\t\t\t\t\t\t--------\n\n");
    printf("\t\t\t\t\t 1.Add Doctor\n\n");
    printf("\t\t\t\t\t 2.Modify Details\n\n");
    printf("\t\t\t\t\t 3.Search Doctor\n\n");
    printf("\t\t\t\t\t 4.Delete Doctor\n\n");
    printf("\t\t\t\t\t 5.Record List\n\n");
    printf("\t\t\t\t\t 6.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        d_new_entry();
        break;
    case 2:
        d_modify_entry();
        break;
    case 3:
        d_search_entry();
        break;
    case 4:
        d_delete_entry();
        break;
    case 5:
        d_record_list();
        break;
    case 6:
        staff();
        break;
    }
}
typedef struct doctor1
{
    char name[20], speciality[20], qualification[20], checkup_fee[20], experience[20], salary[20], address[30], gender;
    long long phone_no;
    int id, age, room_no;
} doctor1;

void d_new_entry()
{
    doctor1 *d;
    int n, o, i, j;
    FILE *fp;
    fp = fopen("Doctor_Information.txt", "a");
    system("cls");
    system("color d");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t New Entry\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\tEnter no. of doctor you want to add : ");
    scanf("%d", &n);
    printf("\n");
    d = (doctor1 *)calloc(n, sizeof(doctor1));
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\tId                  : ");
        scanf("%d", &d[i].id);
        fflush(stdin);
        printf("\t\t\t\t\tName                : ");
        scanf("%[^\n]s", &d[i].name);
        fflush(stdin);
        printf("\t\t\t\t\tAge                 : ");
        scanf("%d", &d[i].age);
        fflush(stdin);
        printf("\t\t\t\t\tGender              : ");
        scanf("%c", &d[i].gender);
        fflush(stdin);
        printf("\t\t\t\t\tSpeciality          : ");
        scanf("%[^\n]s", &d[i].speciality);
        fflush(stdin);
        printf("\t\t\t\t\tQualification       : ");
        scanf("%[^\n]s", &d[i].qualification);
        fflush(stdin);
        printf("\t\t\t\t\tRoom no.            : ");
        scanf("%d", &d[i].room_no);
        fflush(stdin);
        printf("\t\t\t\t\tCheckup Fee         : ");
        scanf("%[^\n]s", &d[i].checkup_fee);
        fflush(stdin);
        printf("\t\t\t\t\tYear of Experience  : ");
        scanf("%[^\n]s", &d[i].experience);
        fflush(stdin);
        printf("\t\t\t\t\tSalary              : ");
        scanf("%[^\n]s", &d[i].salary);
        fflush(stdin);
        printf("\t\t\t\t\tAddress             : ");
        scanf("%[^\n]s", &d[i].address);
        fflush(stdin);
        printf("\t\t\t\t\tPhone no.           : ");
        scanf("%lli", &d[i].phone_no);
        fwrite(&d[i], sizeof(doctor1), 1, fp);
        printf("\n");
    }
    fclose(fp);
    printf("\t\t ----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter '1' to add another doctor OR '0' to go back\n\n");
    printf("\t\t\t\t\t     Enter your choice : ");
    scanf("%d", &o);
    printf("\n\t\t  ----------------------------------------------------------------------------------------\n\n");
    if (o == 1)
    {
        d_new_entry();
    }
    else
    {
        doctor();
    }
}
void d_modify_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Modify Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    doctor1 d;
    FILE *fp, *fp1;
    fp = fopen("Doctor_Information.txt", "r");
    fp1 = fopen("temp1.txt", "w");
    printf("\t\t\t\t\tEnter Doctor's Id to be modified : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
            printf("\t\t\t\t\tNew Id                  : ");
            scanf("%d", &d.id);
            fflush(stdin);
            printf("\t\t\t\t\tNew Name                : ");
            scanf("%[^\n]s", &d.name);
            fflush(stdin);
            printf("\t\t\t\t\tNew Age                 : ");
            scanf("%d", &d.age);
            fflush(stdin);
            printf("\t\t\t\t\tNew Gender              : ");
            scanf("%c", &d.gender);
            fflush(stdin);
            printf("\t\t\t\t\tNew Speciality          : ");
            scanf("%[^\n]s", &d.speciality);
            fflush(stdin);
            printf("\t\t\t\t\tNew Qualification       : ");
            scanf("%[^\n]s", &d.qualification);
            fflush(stdin);
            printf("\t\t\t\t\tNew Room no.            : ");
            scanf("%d", &d.room_no);
            fflush(stdin);
            printf("\t\t\t\t\tNew Checkup Fee         : ");
            scanf("%[^\n]s", &d.checkup_fee);
            fflush(stdin);
            printf("\t\t\t\t\tNew Year of Experience  : ");
            scanf("%[^\n]s", &d.experience);
            fflush(stdin);
            printf("\t\t\t\t\tNew Salary              : ");
            scanf("%[^\n]s", &d.salary);
            fflush(stdin);
            printf("\t\t\t\t\tNew Address             : ");
            scanf("%[^\n]s", &d.address);
            fflush(stdin);
            printf("\t\t\t\t\tNew Phone no.           : ");
            scanf("%lli", &d.phone_no);
            fwrite(&d, sizeof(doctor1), 1, fp);
            printf("\n");
        }
        fwrite(&d, sizeof(doctor1), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp1.txt", "r");
        fp = fopen("Doctor_Information.txt", "w");

        while (fread(&d, sizeof(doctor1), 1, fp1))
        {
            fwrite(&d, sizeof(doctor1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    getch();
    doctor();
}
void d_search_entry()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    doctor1 d;
    FILE *fp;
    fp = fopen("Doctor_Information.txt", "r");
    printf("\t\t\t\t\tEnter Doctor's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        if (d.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Id                  : %d\n", d.id);
            printf("\t\t\t\t\t   Name                : %s\n", d.name);
            printf("\t\t\t\t\t   Age                 : %d\n", d.age);
            printf("\t\t\t\t\t   Gender              : '%c'\n", d.gender);
            printf("\t\t\t\t\t   Speciality          : %s\n", d.speciality);
            printf("\t\t\t\t\t   Qualification       : %s\n", d.qualification);
            printf("\t\t\t\t\t   Room no.            : %d\n", d.room_no);
            printf("\t\t\t\t\t   Checku Fee          : %s\n", d.checkup_fee);
            printf("\t\t\t\t\t   Year of Experience  : %s\n", d.experience);
            printf("\t\t\t\t\t   Salary              : %s\n", d.salary);
            printf("\t\t\t\t\t   Address             : %s\n", d.address);
            printf("\t\t\t\t\t   Phone no.           : %lli\n", d.phone_no);
        }
    }
    fclose(fp);
    getch();
    doctor();
}
void d_search_entry_Doctor()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    doctor1 d;
    FILE *fp;
    fp = fopen("Doctor_Information.txt", "r");
    printf("\t\t\t\t\tEnter Doctor's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        if (d.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Name                : %s\n", d.name);
            printf("\t\t\t\t\t   Age                 : %d\n", d.age);
            printf("\t\t\t\t\t   Gender              : '%c'\n", d.gender);
            printf("\t\t\t\t\t   Speciality          : %s\n", d.speciality);
            printf("\t\t\t\t\t   Qualification       : %s\n", d.qualification);
            printf("\t\t\t\t\t   Room no.            : %d\n", d.room_no);
            printf("\t\t\t\t\t   Checku Fee          : %s\n", d.checkup_fee);
            printf("\t\t\t\t\t   Year of Experience  : %s\n", d.experience);
        }
    }
    fclose(fp);
    getch();
    doctor_Doctor();
}
void d_delete_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Delete Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    doctor1 d;
    FILE *fp, *fp1;
    fp = fopen("Doctor_Information.txt", "r");
    fp1 = fopen("temp1.txt", "w");
    printf("\t\t\t\t\tEnter Doctor's Id to be deleted : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
        }
        else
        {
            fwrite(&d, sizeof(doctor1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp1.txt", "r");
        fp = fopen("Doctor_Information.txt", "w");

        while (fread(&d, sizeof(doctor1), 1, fp1))
        {
            fwrite(&d, sizeof(doctor1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n\n\n\t\t\t\t\t   *** Record Deleted ***");
    }
    getch();
    doctor();
}
void d_record_list()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    doctor1 d;
    FILE *fp;
    fp = fopen("Doctor_Information.txt", "r");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        printf("\t\t\t\t\t   Id                  : %d\n", d.id);
        printf("\t\t\t\t\t   Name                : %s\n", d.name);
        printf("\t\t\t\t\t   Age                 : %d\n", d.age);
        printf("\t\t\t\t\t   Gender              : '%c'\n", d.gender);
        printf("\t\t\t\t\t   Speciality          : %s\n", d.speciality);
        printf("\t\t\t\t\t   Qualification       : %s\n", d.qualification);
        printf("\t\t\t\t\t   Room no.            : %d\n", d.room_no);
        printf("\t\t\t\t\t   Checku Fee          : %s\n", d.checkup_fee);
        printf("\t\t\t\t\t   Year of Experience  : %s\n", d.experience);
        printf("\t\t\t\t\t   Salary              : %s\n", d.salary);
        printf("\t\t\t\t\t   Address             : %s\n", d.address);
        printf("\t\t\t\t\t   Phone no.           : %lli\n", d.phone_no);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    doctor();
}
void d_record_list_Doctor()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    doctor1 d;
    FILE *fp;
    fp = fopen("Doctor_Information.txt", "r");
    while (fread(&d, sizeof(doctor1), 1, fp))
    {
        printf("\t\t\t\t\t   Name                : %s\n", d.name);
        printf("\t\t\t\t\t   Age                 : %d\n", d.age);
        printf("\t\t\t\t\t   Gender              : '%c'\n", d.gender);
        printf("\t\t\t\t\t   Speciality          : %s\n", d.speciality);
        printf("\t\t\t\t\t   Qualification       : %s\n", d.qualification);
        printf("\t\t\t\t\t   Room no.            : %d\n", d.room_no);
        printf("\t\t\t\t\t   Checku Fee          : %s\n", d.checkup_fee);
        printf("\t\t\t\t\t   Year of Experience  : %s\n", d.experience);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    doctor_Doctor();
}

void nurse()
{
    int a;
    system("cls");
    system("color 6");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-------\n");
    printf("\t\t\t\t\t\t\t Nurse\n");
    printf("\t\t\t\t\t\t\t-------\n\n");
    printf("\t\t\t\t\t 1.Add Nurse\n\n");
    printf("\t\t\t\t\t 2.Modify Details\n\n");
    printf("\t\t\t\t\t 3.Search Nurse\n\n");
    printf("\t\t\t\t\t 4.Delete Nurse\n\n");
    printf("\t\t\t\t\t 5.Record List\n\n");
    printf("\t\t\t\t\t 6.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        n_new_entry();
        break;
    case 2:
        n_modify_entry();
        break;
    case 3:
        n_search_entry();
        break;
    case 4:
        n_delete_entry();
        break;
    case 5:
        n_record_list();
        break;
    case 6:
        staff();
        break;
    }
}
typedef struct nurse1
{
    char name[20], qualification[20], salary[20], address[30], gender;
    long long phone_no;
    int id, age;
} nurse1;

void n_new_entry()
{
    nurse1 *d;
    int n, o, i, j;
    FILE *fp;
    fp = fopen("Nurse_Information.txt", "a");
    system("cls");
    system("color d");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t New Entry\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\tEnter no. of nurse you want to add : ");
    scanf("%d", &n);
    printf("\n");
    d = (nurse1 *)calloc(n, sizeof(nurse1));
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\tId            : ");
        scanf("%d", &d[i].id);
        fflush(stdin);
        printf("\t\t\t\t\tName          : ");
        scanf("%[^\n]s", &d[i].name);
        fflush(stdin);
        printf("\t\t\t\t\tAge           : ");
        scanf("%d", &d[i].age);
        fflush(stdin);
        printf("\t\t\t\t\tGender        : ");
        scanf("%c", &d[i].gender);
        fflush(stdin);
        printf("\t\t\t\t\tQualification : ");
        scanf("%[^\n]s", &d[i].qualification);
        fflush(stdin);
        printf("\t\t\t\t\tSalary        : ");
        scanf("%[^\n]s", &d[i].salary);
        fflush(stdin);
        printf("\t\t\t\t\tAddress       : ");
        scanf("%[^\n]s", &d[i].address);
        fflush(stdin);
        printf("\t\t\t\t\tPhone no.     : ");
        scanf("%lli", &d[i].phone_no);
        fwrite(&d[i], sizeof(nurse1), 1, fp);
        printf("\n");
    }
    fclose(fp);
    printf("\t\t ----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter '1' to add another nurse OR '0' to go back\n\n");
    printf("\t\t\t\t\t     Enter your choice : ");
    scanf("%d", &o);
    printf("\n\t\t  ----------------------------------------------------------------------------------------\n\n");
    if (o == 1)
    {
        n_new_entry();
    }
    else
    {
        nurse();
    }
}
void n_modify_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Modify Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    nurse1 d;
    FILE *fp, *fp1;
    fp = fopen("Nurse_Information.txt", "r");
    fp1 = fopen("temp2.txt", "w");
    printf("\t\t\t\t\tEnter Nurse's Id to be modified : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(nurse1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
            printf("\t\t\t\t\tNew Id            : ");
            scanf("%d", &d.id);
            fflush(stdin);
            printf("\t\t\t\t\tNew Name          : ");
            scanf("%[^\n]s", &d.name);
            fflush(stdin);
            printf("\t\t\t\t\tNew Age           : ");
            scanf("%d", &d.age);
            fflush(stdin);
            printf("\t\t\t\t\tNew Gender        : ");
            scanf("%c", &d.gender);
            fflush(stdin);
            printf("\t\t\t\t\tNew Qualification : ");
            scanf("%[^\n]s", &d.qualification);
            fflush(stdin);
            printf("\t\t\t\t\tNew Salary        : ");
            scanf("%[^\n]s", &d.salary);
            fflush(stdin);
            printf("\t\t\t\t\tNew Address       : ");
            scanf("%[^\n]s", &d.address);
            fflush(stdin);
            printf("\t\t\t\t\tNew Phone no.     : ");
            scanf("%lli", &d.phone_no);
            fwrite(&d, sizeof(nurse1), 1, fp);
            printf("\n");
        }
        fwrite(&d, sizeof(nurse1), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp2.txt", "r");
        fp = fopen("Nurse_Information.txt", "w");

        while (fread(&d, sizeof(nurse1), 1, fp1))
        {
            fwrite(&d, sizeof(nurse1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    getch();
    nurse();
}
void n_search_entry()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    nurse1 d;
    FILE *fp;
    fp = fopen("Nurse_Information.txt", "r");
    printf("\t\t\t\t\tEnter Nurse's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(nurse1), 1, fp))
    {
        if (d.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Id             : %d\n", d.id);
            printf("\t\t\t\t\t   Name           : %s\n", d.name);
            printf("\t\t\t\t\t   Age            : %d\n", d.age);
            printf("\t\t\t\t\t   Gender         : '%c'\n", d.gender);
            printf("\t\t\t\t\t   Qualification  : %s\n", d.qualification);
            printf("\t\t\t\t\t   Salary         : %s\n", d.salary);
            printf("\t\t\t\t\t   Address        : %s\n", d.address);
            printf("\t\t\t\t\t   Phone no.      : %lli\n", d.phone_no);
        }
    }
    fclose(fp);
    getch();
    nurse();
}
void n_delete_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Delete Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    nurse1 d;
    FILE *fp, *fp1;
    fp = fopen("Nurse_Information.txt", "r");
    fp1 = fopen("temp2.txt", "w");
    printf("\t\t\t\t\tEnter Nurse's Id to be deleted : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(nurse1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
        }
        else
        {
            fwrite(&d, sizeof(nurse1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp2.txt", "r");
        fp = fopen("Nurse_Information.txt", "w");

        while (fread(&d, sizeof(nurse1), 1, fp1))
        {
            fwrite(&d, sizeof(nurse1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n\n\n\t\t\t\t\t   *** Record Deleted ***");
    }
    getch();
    nurse();
}
void n_record_list()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    nurse1 d;
    FILE *fp;
    fp = fopen("Nurse_Information.txt", "r");
    while (fread(&d, sizeof(nurse1), 1, fp))
    {
        printf("\t\t\t\t\t   Id             : %d\n", d.id);
        printf("\t\t\t\t\t   Name           : %s\n", d.name);
        printf("\t\t\t\t\t   Age            : %d\n", d.age);
        printf("\t\t\t\t\t   Gender         : '%c'\n", d.gender);
        printf("\t\t\t\t\t   Qualification  : %s\n", d.qualification);
        printf("\t\t\t\t\t   Salary         : %s\n", d.salary);
        printf("\t\t\t\t\t   Address        : %s\n", d.address);
        printf("\t\t\t\t\t   Phone no.      : %lli\n", d.phone_no);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    nurse();
}

void member()
{
    int a;
    system("cls");
    system("color 6");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t--------\n");
    printf("\t\t\t\t\t\t\t Member\n");
    printf("\t\t\t\t\t\t\t--------\n\n");
    printf("\t\t\t\t\t 1.Add Member\n\n");
    printf("\t\t\t\t\t 2.Modify Details\n\n");
    printf("\t\t\t\t\t 3.Search Member\n\n");
    printf("\t\t\t\t\t 4.Delete Member\n\n");
    printf("\t\t\t\t\t 5.Record List\n\n");
    printf("\t\t\t\t\t 6.Back to Main Menu\n\n\n");
    printf("\t\t----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter your choice : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        b_new_entry();
        break;
    case 2:
        b_modify_entry();
        break;
    case 3:
        b_search_entry();
        break;
    case 4:
        b_delete_entry();
        break;
    case 5:
        b_record_list();
        break;
    case 6:
        staff();
        break;
    }
}
typedef struct member1
{
    char name[20], qualification[20], duty[20], salary[20], address[30], gender;
    long long phone_no;
    int id, age;
} member1;

void b_new_entry()
{
    member1 *d;
    int n, o, i, j;
    FILE *fp;
    fp = fopen("Member_Information.txt", "a");
    system("cls");
    system("color d");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t\t\t New Entry\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    printf("\t\t\t\t\tEnter no. of member you want to add : ");
    scanf("%d", &n);
    printf("\n");
    d = (member1 *)calloc(n, sizeof(member1));
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\tId            : ");
        scanf("%d", &d[i].id);
        fflush(stdin);
        printf("\t\t\t\t\tName          : ");
        scanf("%[^\n]s", &d[i].name);
        fflush(stdin);
        printf("\t\t\t\t\tAge           : ");
        scanf("%d", &d[i].age);
        fflush(stdin);
        printf("\t\t\t\t\tGender        : ");
        scanf("%c", &d[i].gender);
        fflush(stdin);
        printf("\t\t\t\t\tQualification : ");
        scanf("%[^\n]s", &d[i].qualification);
        fflush(stdin);
        printf("\t\t\t\t\tDuty          : ");
        scanf("%[^\n]s", &d[i].duty);
        fflush(stdin);
        printf("\t\t\t\t\tSalary        : ");
        scanf("%[^\n]s", &d[i].salary);
        fflush(stdin);
        printf("\t\t\t\t\tAddress       : ");
        scanf("%[^\n]s", &d[i].address);
        fflush(stdin);
        printf("\t\t\t\t\tPhone no.     : ");
        scanf("%lli", &d[i].phone_no);
        fwrite(&d[i], sizeof(member1), 1, fp);
        printf("\n");
    }
    fclose(fp);
    printf("\t\t ----------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tEnter '1' to add another member OR '0' to go back\n\n");
    printf("\t\t\t\t\t     Enter your choice : ");
    scanf("%d", &o);
    printf("\n\t\t  ----------------------------------------------------------------------------------------\n\n");
    if (o == 1)
    {
        b_new_entry();
    }
    else
    {
        member();
    }
}
void b_modify_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Modify Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    member1 d;
    FILE *fp, *fp1;
    fp = fopen("Member_Information.txt", "r");
    fp1 = fopen("temp3.txt", "w");
    printf("\t\t\t\t\tEnter Member's Id to be modified : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(member1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
            printf("\t\t\t\t\tNew Id            : ");
            scanf("%d", &d.id);
            fflush(stdin);
            printf("\t\t\t\t\tNew Name          : ");
            scanf("%[^\n]s", &d.name);
            fflush(stdin);
            printf("\t\t\t\t\tNew Age           : ");
            scanf("%d", &d.age);
            fflush(stdin);
            printf("\t\t\t\t\tNew Gender        : ");
            scanf("%c", &d.gender);
            fflush(stdin);
            printf("\t\t\t\t\tNew Qualification : ");
            scanf("%[^\n]s", &d.qualification);
            fflush(stdin);
            printf("\t\t\t\t\tNew Duty          : ");
            scanf("%[^\n]s", &d.duty);
            fflush(stdin);
            printf("\t\t\t\t\tNew Salary        : ");
            scanf("%[^\n]s", &d.salary);
            fflush(stdin);
            printf("\t\t\t\t\tNew Address       : ");
            scanf("%[^\n]s", &d.address);
            fflush(stdin);
            printf("\t\t\t\t\tNew Phone no.     : ");
            scanf("%lli", &d.phone_no);
            fwrite(&d, sizeof(member1), 1, fp);
            printf("\n");
        }
        fwrite(&d, sizeof(member1), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp3.txt", "r");
        fp = fopen("Member_Information.txt", "w");

        while (fread(&d, sizeof(member1), 1, fp1))
        {
            fwrite(&d, sizeof(member1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    getch();
    member();
}
void b_search_entry()
{
    int n;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t --------------\n");
    printf("\t\t\t\t\t\t  Search Entry\n");
    printf("\t\t\t\t\t\t --------------\n\n\n");
    member1 d;
    FILE *fp;
    fp = fopen("Member_Information.txt", "r");
    printf("\t\t\t\t\tEnter Member's Id to be searched : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(member1), 1, fp))
    {
        if (d.id == n)
        {
            printf("\t\t\t\t\t\t --------------\n");
            printf("\t\t\t\t\t\t  Record Found\n");
            printf("\t\t\t\t\t\t --------------\n\n");
            printf("\t\t\t\t\t   Id             : %d\n", d.id);
            printf("\t\t\t\t\t   Name           : %s\n", d.name);
            printf("\t\t\t\t\t   Age            : %d\n", d.age);
            printf("\t\t\t\t\t   Gender         : '%c'\n", d.gender);
            printf("\t\t\t\t\t   Qualification  : %s\n", d.qualification);
            printf("\t\t\t\t\t   Duty           : %s\n", d.duty);
            printf("\t\t\t\t\t   Salary         : %s\n", d.salary);
            printf("\t\t\t\t\t   Address        : %s\n", d.address);
            printf("\t\t\t\t\t   Phone no.      : %lli\n", d.phone_no);
        }
    }
    fclose(fp);
    getch();
    member();
}
void b_delete_entry()
{
    int n, found = 0;
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t   --------------\n");
    printf("\t\t\t\t\t\t    Delete Entry\n");
    printf("\t\t\t\t\t\t   --------------\n\n\n");
    member1 d;
    FILE *fp, *fp1;
    fp = fopen("Member_Information.txt", "r");
    fp1 = fopen("temp3.txt", "w");
    printf("\t\t\t\t\tEnter Member's Id to be deleted : ");
    scanf("%d", &n);
    printf("\n\n\t\t  -----------------------------------------------------------------------------\n\n");
    while (fread(&d, sizeof(member1), 1, fp))
    {
        if (d.id == n)
        {
            found = 1;
        }
        else
        {
            fwrite(&d, sizeof(member1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp3.txt", "r");
        fp = fopen("Member_Information.txt", "w");

        while (fread(&d, sizeof(member1), 1, fp1))
        {
            fwrite(&d, sizeof(member1), 1, fp);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n\n\n\t\t\t\t\t   *** Record Deleted ***");
    }
    getch();
    member();
}
void b_record_list()
{
    system("cls");
    system("color d");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t Record List\n");
    printf("\t\t\t\t\t\t-------------\n\n");
    member1 d;
    FILE *fp;
    fp = fopen("Member_Information.txt", "r");
    while (fread(&d, sizeof(member1), 1, fp))
    {
        printf("\t\t\t\t\t   Id             : %d\n", d.id);
        printf("\t\t\t\t\t   Name           : %s\n", d.name);
        printf("\t\t\t\t\t   Age            : %d\n", d.age);
        printf("\t\t\t\t\t   Gender         : '%c'\n", d.gender);
        printf("\t\t\t\t\t   Qualification  : %s\n", d.qualification);
        printf("\t\t\t\t\t   Duty           : %s\n", d.duty);
        printf("\t\t\t\t\t   Salary         : %s\n", d.salary);
        printf("\t\t\t\t\t   Address        : %s\n", d.address);
        printf("\t\t\t\t\t   Phone no.      : %lli\n", d.phone_no);
        printf("\t\t   -----------------------------------------------------------------------------\n\n");
    }
    fclose(fp);
    getch();
    member();
}

void about_program_doctor()
{
    system("cls");
    system("color 3");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t  ---------------\n");
    printf("\t\t\t\t\t\t   About Program\n");
    printf("\t\t\t\t\t\t  ---------------\n\n\n");
    printf("\t\t\t\t\tName        : Infirmary Handling System\n\n");
    printf("\t\t\t\t\tProgrammer  : Anirudh Suryawanshi\n\n");
    printf("\t\t\t\t\tContact     : 8319194220\n\n");
    printf("\t\t\t\t\tAddress     : Indrapuri, Sector - C, Bhopal (M.P.)\n\n");
    printf("\t\t\t\t\tEmail       : anirudhsuryawanshi759@gmail.com\n\n");
    getch();
    Doctor();
}
void about_program_admin()
{
    system("cls");
    system("color b");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t  ---------------\n");
    printf("\t\t\t\t\t\t   About Program\n");
    printf("\t\t\t\t\t\t  ---------------\n\n\n");
    printf("\t\t\t\t\tName        : Infirmary Handling System\n\n");
    printf("\t\t\t\t\tProgrammer  : Anirudh Suryawanshi\n\n");
    printf("\t\t\t\t\tContact     : 8319194220\n\n");
    printf("\t\t\t\t\tAddress     : Indrapuri, Sector - C, Bhopal (M.P.)\n\n");
    printf("\t\t\t\t\tEmail       : anirudhsuryawanshi759@gmail.com\n\n");
    getch();
    admin();
}
void close_program()
{
    system("cls");
    system("color 9");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t    -----------------\n");
    printf("\t\t\t\t\t\t     Closing Program\n");
    printf("\t\t\t\t\t\t    -----------------\n\n\n");
    printf("\t\t\t\t***** Thank you for using Infirmary Handling System *****\n\n");
    printf("\t\t\t\t\t    ***** Please Visit Again *****\n\n");
    getch();
}

int main()
{
    project_name();
    intro();
    login();
    Doctor();
    admin();

    return 0;
}
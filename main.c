#include <stdio.h>

int main()
{
    int x=0;
    do
    {
        printf("Elige de quienes quieres conocer los nombres: \n");
        printf("1- Tatarabuelos\n");
        printf("2- Abuelos Paternos y maternos\n");
        printf("3- Padre y tios paternos\n");
        printf("4-Madre y tios maternnos\n");
        printf("5- Mis Hermanas\n");
        printf("6- cuñado y Sobrinos\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("fulanito y mairanita");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("Abuelos paternos\n");
                printf("Jesus Ramirez Jaso y Maria Coronado\n");
                printf("Abuelos maternos \n");
                printf("Roman Dominguez y Mariana Hernandez\n");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("Padre\n");
                printf("Israel Ramirez Coronado\n");
                printf("Tios\n");
                printf("Josue Ramirez coronado, Pablo Ramirez Coronado,\n");
                printf(" Ruben Ramirez Coronado, Rebeca Ramirez Coronado\n");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("Madre\n");
                printf("Teresa Dominguez Hernandez\n");
                printf("Tios\n");
                printf("Patricia Dominguez Hernandez, Miguel Dominguez Hernandez\n");
                printf("Victor Dominguez Hernandez, Lucia Dominguez Hernandez\n");
                printf("\n\n");
                break;
            case 5:
                printf("Hermanas \n");
                printf("Rebeca Abigail Ramirez Dominguez\n");
                printf("y Diana Jazmin Ramirez Dominguez\n");
                printf("\n\n");
                break;
            case 6:
                printf("Cuñado\n");
                printf("Miguel Angel Vasquez\n");
                printf("Sobrinos\n");
                printf("Jesus Alberto Vasquez Ramirez\n");
                printf("Lia Katherine Vasquez Ramirez\n");
                printf("\n\n");
                break;
                default:
                printf("Opcion no valida\n");
                printf("\n\n");
        }
        
    }while(x<=6&&x>0);
    return 0;
}

# include <stdio.h>
int main(){
    for (int i =1; i<=4; i++ )
    {
        for( int j= 1; j< 5; j++)
        {
            printf("%d",j);       
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     for (int i =1; i<=4; i++ )
//     {
//         for( int j= 1; j<=i; j++)
//         {
//             printf("*");       
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 1 
// // 22
// // 333
// # include <stdio.h>

// int main(){
//     for (int i =1; i<=4; i++ )
//     {
//         for( int j= 1; j<=i; j++)
//         {
//             printf("%d",i);  
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // floyds triangle

// #include <stdio.h>
// int main()
// {
//     int k=1;
//     for (int i =1; i<=4; i++ )
//     {
//         for( int j= 1; j<=i; j++)
//         {
//             printf("%d",k);
//             k++;            
//         }
//         printf("\n");
//     }
//     return 0;
// }

// /* reverse star
// ****
//  ***
//   **
//    *
// */ 
// # include <stdio.h>
// int main()
// {
//     int n=4, i ,j,k;
//     for (i =0; i<n; i++ )
//     {
//         for (k=1; k <= i; k++ )
//         {
//                 printf(" ");
//         }
//         for(j= n; j>i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int n = 4,i,j,k;
//     for (i =1; i<=n; i++ )
//     {
//         for(j=0; j<i; j++)
//         {
//             for ( k = 1; k<=i+j; k++ )
//             {
//             printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




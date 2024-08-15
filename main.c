#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int fou, cou = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);
    }
    scanf("%d", &fou);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(fou == arr[i][j])
                cou++;
        }
    }
    if(cou > 0)
        printf("will not take number");
    else
        printf("will take number");
    return 0;
}

#include <stdio.h>

int main() {
    int a[300], choiceoption, i, j, n = 0, key, update = 0, updated_value, found;

    do
    {
        system("cls");

        printf("Pick An Option:\n");
        printf("1. Insert Value\n");
        printf("2. Display Value\n");
        printf("3. Update Value\n");
        printf("4. Search The Value\n");
        printf("5. Delete Value\n");
        printf("0. EXIT\n");
        printf("Enter An Operation Number: ");
        scanf("%d", &choiceoption);

        switch (choiceoption) {
            case 1:
                printf("How many numbers: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Insert the value at index %d: ", i);
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Array values:\n");
                for (i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
                break;

            case 3:
                printf("Enter The Value You Want To Update: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == key) {
                        printf("Enter New Value: ");
                        scanf("%d", &updated_value);
                        a[i] = updated_value;
                        printf("Updated Successfully\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Element not found\n");
                break;

            case 4:
                printf("Enter The Value You Want To Search: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == key) {
                        printf("Element Found At Index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Element not found\n");
                break;

            case 5:
                printf("Enter The Value You Want To Delete: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == key) {
                        for (j = i; j < n - 1; j++) {
                            a[j] = a[j + 1];
                        }
                        n--;
                        printf("Deleted Successfully\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Element Not Found\n");

                break;
        }
        system("pause");
    } while (choiceoption != 0);

    return 0;
}

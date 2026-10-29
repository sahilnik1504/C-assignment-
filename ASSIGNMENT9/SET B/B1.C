#include <stdio.h>

struct Item {
    int item_no;
    char item_name[50];
    float rate;
    int qty;
    float total;
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct Item items[n];
    float grand_total = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter Item No, Name, Rate, Qty for item %d: ", i + 1);
        scanf("%d %s %f %d", &items[i].item_no, items[i].item_name, &items[i].rate, &items[i].qty);
        items[i].total = items[i].rate * items[i].qty;
        grand_total += items[i].total;
    }
    printf("\nSr. No.\tItem Name\tRate\tQty\tTotal\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%d\t%.2f\n", i + 1, items[i].item_name, items[i].rate, items[i].qty, items[i].total);
    }
    printf("\t\t\t\tGrand Total : %.2f\n", grand_total);
    return 0;
}
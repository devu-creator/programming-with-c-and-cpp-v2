    char name[40], gender;
    int age, id;

    puts("Enter name: ");
    scanf("%[^\n]%*c", name);
    printf("%s", name);

    puts("\nEnter id: ");
    scanf("%d", &id);
    printf("%d", id);

    puts("\nEnter gender: 'M' or 'F' ");
    scanf("%c", &gender);
    printf("%c", gender);

    puts("\nEnter age: ");
    scanf("%d", &age);
    printf("%d", age);

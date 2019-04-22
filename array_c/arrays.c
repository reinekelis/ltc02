#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
    
    int i, n;
    
    //char temp[100];
    char word[100];
    
    const char * format = "The %s array has %d bytes and %d elements.\n";
    
    
    printf("Creating array of strings\n");
    printf("Enter n: ");
    scanf("%d", &n);
    // to set you array
    //const arr[nb_of_string][max_string_length]
    char char_array[n][100];
    for (i = 0; i < n; i++){
        printf("type word %d : ",i+1);
        scanf("%s", word);
        strcpy(char_array[i], word);
    }
    
    
    printf("Printing array of strings\n");
    for (i=0; i<n; i++)
    {
        printf("%s\n",char_array[i]);
    }
    printf (format, "char", sizeof (char_array), (sizeof (char_array) / sizeof (char))/100);
           
    printf("Creating array of numbers\n");
    printf("Enter n: ");
    scanf("%d", &n);
    int int_array[n], sum = 0, average;
    for(i=0; i<n; ++i)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d", &int_array[i]);
        sum += int_array[i];
    }
    average = sum/n;
    
    printf (format, "int", sizeof (int_array), sizeof (int_array) / sizeof (int));
    printf("Average number of your array = %d \n", average);
    
    
    return 0;
}

#include <stdio.h>
#include <string.h> 
//단어 개수 출력 1
void showWordsCount (){
    
    const char *words[4] = {"car" , "my book" , "working" , "running"};
    
    int wordCount = 4;
    
    printf("showWordsCount:");
    printf("\n");
    
    for (int i = 0; i < wordCount; i++) {
        printf("%s 단어 개수는 %lu 개 입니다.", words[i] , strlen(words[i]));
        printf("\n");
    }
    
    printf("\n");
}

//단어 개수 출력 2
void showWordsCount2 (){
    
    const char *words[4] = {"my \"big\" car " , "my \"cook\" book" , "working \"hard\" " , " \"happy\" running "};
    
    int wordCount = 4;
    
    printf("showWordsCount2:");
    printf("\n");

    for (int i = 0; i < wordCount; i++) {
        printf("%s 단어 개수는 %lu 개 입니다." , words[i] , strlen(words[i]));
        printf("\n");
    }
    
    printf("\n");
}

//단어 개수 출력 3
void showWordsCount3 (){
    

    FILE *wordFile = fopen("words.txt", "r");
    char word[100];
    
    printf("showWordsCount3:");
    printf("\n");

    while (fgets(word, 100, wordFile)) {
        
        printf("%lu \n" , strlen(word));
        
        word[strlen(word) -1] = '\0';
        
        // NSLog(@"%s 단어 개수는 %lu 개 입니다." , word , strlen(word));
        printf("%s 단어 개수는 %lu 개 입니다." , word , strlen(word));
        printf("\n");
     
    }
    
    fclose(wordFile);
    
    printf("\n");
}



int main(int argc, const char * argv[]) {
    
    //단어 개수 읽기
    showWordsCount();
    
    //단어 개수 읽기 2.
    showWordsCount2();
    
    //단어 개수 읽기 3.
    showWordsCount3();
    
    
    //단어개수 읽기 4
    if (argc == 1) {
        // NSLog(@"인자에 파일명을 입력하세요");
        return 1;
    }
    
    // FILE *wordFile = fopen(argv[1], "r");
    
    char word[100];
    
    // while (fgets(word, 100, wordFile)) {
        
    //     //printf("%lu \n" , strlen(word));
        
    //     word[strlen(word) -1] = '\0';
        
    //     NSLog(@"%s 단어 개수는 %lu 개 입니다." , word , strlen(word));
        
    // }
    
    // fclose(wordFile);
    
    printf("\n");
    
    
    return 0;
}
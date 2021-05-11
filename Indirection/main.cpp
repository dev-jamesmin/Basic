#include <stdio.h>
#include <string.h> 

void wordsLength (){
    
    const char *words[4] = {"car" , "my book" , "working" , "running"};
    
    int wordCount = 4;
    
    printf("wordsLength:");
    printf("\n");
    
    for (int i = 0; i < wordCount; i++) {
        printf("%s 단어 개수는 %lu 개 입니다.", words[i] , strlen(words[i]));
        printf("\n");
    }
    
    printf("\n");
}

void sentencesLength (){
    
    const char *words[4] = {"my \"big\" car " , "my \"cook\" book" , "working \"hard\" " , " \"happy\" running "};
    
    int wordCount = 4;
    
    printf("sentencesLength:");
    printf("\n");

    for (int i = 0; i < wordCount; i++) {
        printf("%s 단어 개수는 %lu 개 입니다." , words[i] , strlen(words[i]));
        printf("\n");
    }
    
    printf("\n");
}

void readTextFile (){
    
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
    
 
    wordsLength();
    
    sentencesLength();
    
    readTextFile();
    
    
    //단어개수 읽기 4
    if (argc == 1) {
        printf("인자에 파일명을 입력하세요");
        return 1;
    }
    
    FILE *wordFile = fopen(argv[1], "r");
    
    char word[100];
    
    while (fgets(word, 100, wordFile)) {
        
        //printf("%lu \n" , strlen(word));
        
        word[strlen(word) -1] = '\0';
        
        printf("%s 단어 개수는 %lu 개 입니다." , word , strlen(word));
        
    }
    
    fclose(wordFile);
    
    printf("\n");
    
    
    return 0;
}
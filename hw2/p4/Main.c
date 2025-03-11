#include <stdio.h>
#include <string.h>
#include "CheckID.h"
#define length 11
#define true 1
#define false 0
int main(){
    char str[length];
    char output[200];
    printf("請輸入身分證號碼: ");
    scanf("%[A-Z0-9]", str);
    if(formatCheck(str) == false){
        printf("格式錯誤!\n");
        return 0;
    }
    if(isValid(str) == false){
        printf("身分證號碼無效!\n");
        return 0;
    }
    strcat(output, "所輸入的身分證號碼: [");
    strcat(output, str);
    strcat(output, "]\n");
    strcat(output, "戶籍地: ");
    char * p =  &str[0];
    strcatHouseholdReg(p, output);
    p = &str[1];
    strcat(output, "性別: ");
    strcat(output, whichGender(p));
    strcat(output, "\n");
    p = &str[2];
    strcat(output, "身分別: ");
    strcat(output, whichIdentityType(p));
    printf("%s", output);
}

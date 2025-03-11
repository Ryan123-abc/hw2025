#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define true 1
#define false 0

const char cityCode[] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
const int cityValue[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
                         20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
                         30, 31, 32, 33, 34, 35};

int formatCheck(const char *id) {
    if (strlen(id) != 10) return false;
    if (!isupper(id[0])) return false;
    for (int i = 1; i < 10; i++) {
        if (!isdigit(id[i])) return false;
    }
    return true;
}

int isValid(const char *id) {
    int firstDigit = 0, secondDigit = 0, sum = 0;
    
    for (int i = 0; i < 26; i++) {
        if (cityCode[i] == id[0]) {
            firstDigit = cityValue[i] / 10;
            secondDigit = cityValue[i] % 10;
            break;
        }
    }

    sum += firstDigit * 1 + secondDigit * 9;
    for (int i = 1; i < 9; i++) {
        sum += (id[i] - '0') * (9 - i);
    }
    sum += (id[9] - '0') * 1;

    return (sum % 10 == 0);
}

void strcatHouseholdReg(const char *id, char *output) {
    for (int i = 0; i < 26; i++) {
        if (cityCode[i] == id[0]) {
            const char *cities[] = {"台北市", "台中市", "基隆市", "台南市", "高雄市",
                                    "新北市", "宜蘭縣", "桃園市", "新竹縣", "苗栗縣",
                                    "台中縣", "南投縣", "彰化縣", "雲林縣", "嘉義縣",
                                    "台南縣", "高雄縣", "屏東縣", "花蓮縣", "台東縣",
                                    "澎湖縣", "陽明山管理局", "金門縣", "連江縣", "嘉義市",
                                    "新竹市"};
            strcat(output, cities[i]);
            return;
        }
    }
}

const char* whichGender(const char *id) {
    return (id[1] == '1') ? "男性" : "女性";
}

const char* whichIdentityType(const char *id) {
    const char *identityTypes[] = {"台灣出生的本國國民", "台灣出生的本國國民", "台灣出生的本國國民",
                                   "台灣出生的本國國民", "台灣出生的本國國民", "台灣出生的本國國民",
                                   "原為外國人之入籍國民", "原無國籍國民", "原為香港或澳門居民的入籍國民", "原為大陸居民的入籍國民"};
    return identityTypes[id[2] - '0'];
}
  

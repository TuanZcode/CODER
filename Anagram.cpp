#include<stdio.h>

int areAnagrams(const char *str1,const char *str2){
	//kiem tra do dai hai chuoi
	int len1 = 0,len2 =0;
	while (str1[len1] != '\0'){
		len1++;
		
	}
	while(str2[len2] != '\0'){
		len2++;
		
	}
//Neu do dai khong bang nhau khong the la anagram
if(len1 != len2){
	return 0;
}
//Tinh tan suat xuat hien cua cac ky tu trong 1 chuoi
int count[256];
for(int i = 0;i<len1;i++){
	count[str1[i]]++;
	count[str2[i]]--;
}
//neu tat ca cac tan suat deu la 0 la anagram
for(int i = 0;i<256;i++){
	if(count[i] != 0){
		return 0;
	}
}
return 1;
}
int main(){
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	if(areAnagrams(str1,str2)){
		printf("anagram\n");
	}else {
		printf("not anagram\n");
	}
	return 0;
}

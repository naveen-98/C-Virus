//N4VIYA98

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>

int main(){
	
	int num = 1; 
	while(num<=100){  
		
		system("start https://google.com");
		ShellExecute(NULL, "open", "notepad", NULL, NULL, SW_SHOWNORMAL);
		ShellExecute(NULL, "open", "cmd", NULL, NULL, SW_SHOWNORMAL);
		ShellExecute(NULL, "open", "explorer", NULL, NULL, SW_SHOWNORMAL);
		
		num++;
	}
	
	return 0;
}
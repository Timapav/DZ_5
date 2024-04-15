#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_abonent 100

struct abonent{
      char name[10];
      char second_name[10];
      char tel[10];
};

struct abonent directory[Max_abonent];

void Menu(void);
void Add_sub(void);
void Del_sub(void);
void Find_sub(void);
void All_sub(void);

int last;

int main(){ 
      int number;
      int count = 1;
      while(count){
      printf("------------------------------------------------------------------");
      printf("\nPlease enter function \n\n1)Добавить абонента \n2)Удалить абонента \n3)Поиск абонентов по имени \n4)Вывод всех записей \n5)Выход\n");      
      scanf("%d", &number);
            
      switch(number){
            
      case 1:
            Add_sub();
            break;
      case 2:
            Del_sub();
            break;
      case 3:
            Find_sub();
            break;
      case 4:
            All_sub();
            break;
      case 5:
            exit(0);
      default:
            printf("Please enter number 1-5\n");
            
}
 
}
return 0;
}
      
void Add_sub(void){
printf("----------------------------------------------------------------------\n");
      if(last == Max_abonent)
            printf("The directory is full\n");
      else{
            printf("Enter name:\n");
            scanf("%s", directory[last].name);
            printf("Enter second name:\n");
            scanf("%s", directory[last].second_name);
            printf("Enter number phone:\n");              
            scanf("%s", directory[last].tel);
            last++;    
           }
}
 
void Del_sub(){
      char dname[10];
      char dsecond_name[10];
      printf("---------------------------------------------------------------\n");
      printf("Delete subscruber\n");
      printf("Enter name:\n");
      scanf("%s",dname);
      printf("Enter second name:\n");
      scanf("%s",dsecond_name);
      
      for(int i = 0; i < last; i++){
            if(strcmp(dname, directory[i].name) == 0 && strcmp(dsecond_name, directory[i].second_name) == 0){
            printf("Subscruber found\n");
            printf("Name: %s\t Second name: %s\t Phone number: %s",directory[i].name, directory[i].second_name, directory[i].tel);
            
            for(int j = i; j <= last; j++){
                  directory[j] = directory[j + 1];
            last--;
            break;
            }
            }
      }            
}

void Find_sub(){
      char sname[10];
      printf("---------------------------------------------------------------\n");
      printf("Find subscribers\n");
      printf("Enter the user name:\n");
      scanf("%s",sname);
      for(int i = 0; i <= last; i++){
            if(strcmp(sname, directory[i].name) == 0){
                  printf("Name: %s\t Second name: %s\t Number phone: %s\n", directory[i].name, directory[i].second_name, directory[i].tel);
                  }
            }
}

void All_sub(){
      printf("---------------------------------------------------------------\n");
      printf("All subscrubers:\n");
      for(int i = 0; i < Max_abonent; i++){
            if(strcmp(directory[i].name, "") != 0){
                 printf("%d) Name:%s\tSecond name:%s\tPhone number:%s\n",i + 1, directory[i].name, directory[i].second_name, directory[i].tel);      
            
            }
      }            
}
      

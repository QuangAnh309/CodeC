#include <stdio.h>
#include <string.h> //Thu vien cung cap cac ham xu ly chuoi.
#include <ctype.h> //Thu vien xu ly va kiem tra anh xa cac ky tu.
#include <stdlib.h> // Thu vien cung cap cac ham duoc su dung de cap phat dong.



/* ket thuc 1 string la ki tu null '\0'.*/
void string()
{
	int vari;
	char str[100];// Khai bao mang ki tu
	char testNull[100]="trinh quang anh";  //" " dung cho chuoi.
	testNull[6]='\0';// ' ' dung cho phan tu cua 1 chuoi ky t
	// neu in ra chuoi testNull thi se la "trinh" vi phan tu thu 6 là \0 tuc la ket thuc chuoi tai testNull[6].
	
	
	scanf("%d", &vari);
	getchar();//dung getchar() de doc phim ENTER tu ham scan tren
			  // Co the dung scanf("\n") thay the neu co nhieu phim ENTER o tren fgets.
			  
	fgets(str, 100, stdin );// Ham fgets nhap 1 chuoi ki tu tu ban phim. Ham nay doc ca phim ENTER.
	// Hai ham fgets lien nhau thi ko can ham doc phim ENTER.
	
	str[strlen(str)-1]='\0';/*Vi fgets doc ca phim ENTER nen ta thay ENTER nhap vao la 1 gia tri Null */
	
	printf("%d\n", strlen(str));/* In ra man hinh do lon cua chuoi ki tu str. Neu dung for loops thi condition là i < strlen(str) */
	printf("%s", str);
}

int main()
{
	string();
	return 0;
}


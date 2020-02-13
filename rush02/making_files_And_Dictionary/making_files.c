/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   making_files.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:09:32 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/08 21:49:07 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//#include <stdio.h>
// fopen은 stdio  헤더만 있으면 됨

#include <fcntl.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}





int	main()
{
	int	fd;
	char *str; // 추가 하고 싶은 내용 str에 넣어서 정의

	fd = open("./test_open.txt", O_RDWR|O_APPEND);  
	
//	fd = open(  경로와 파일 이름 변수,  각종 모드);


	// O_CREAT : 파일이 없으면 생성
	// O_RDWR  : 읽기와 쓰기가 모두 가능
	// O_APPEND : 파일을 추가하여 쓰기가 되도록 open 후에 쓰기 포인터가 파일의 끝에 위치하게 됨
	// O_EXCL : O_CREAT를 사용했을 때, 파일이 이미 있어도 열기가 가능하여 쓰기를 하면 이전 내용이 사라짐.


	write(fd, &str, ft_strlen(str));
//	write(fd, "Append try 3", 12);
	write(fd, "\n", 1);
	close(fd);

}





/*
 * fopen 함수


int	main()
{
	FILE *pFILE;

	pFILE = fopen("./test.txt","a+t");
   // fopen (경로 이름, a:수정 모드 (마지막 줄에 덧붙이는 것만 가능), w: 아이에 새로 생성, r: 읽기 전용)
   // 파일  포인터 변수로 선언해서  fopen 함수 녀석을 받아주면 됨. 파일 포인터 변수


	fprintf(pFILE, "I append a new sentence");

	// fprintf( 파일 포인터 변수, 적고 싶은 말);
	fclose(pFILE);


}

*/

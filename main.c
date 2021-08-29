/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   open_file.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpicot <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/28 15:01:05 by rpicot        #+#    #+#                 */
/*   Updated: 2021/08/29 19:44:49 by rpicot        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_putnbr(int num);

 int main(int argc,char *argv[])
 {
 	 int n, fd, i;
 	 char str;
 	 char buf[5000000];
 
 	 if(argc == 2)
 	 {
 	    /*str = ft_putnbr(argv[1][0]);*/
	    if(str)
 	        printf("success");
 	    printf("%s", str);
 	    fd=open("numb.dict", O_RDONLY);
 	    write(1, buf, i);
	  }
}

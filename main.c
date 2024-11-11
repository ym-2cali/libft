/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:29:14 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/08 18:46:28 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>


/*void *ft_toapply(void *terma)
{
	int i = 0;
	char *str = (char *)terma;
	while(str[i])
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (terma);
}
*/
/*int	main()
{
	/*
	t_list *head;
	head = NULL;
	int i = 0;
	while(i < 4)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_strdup("holla")));
		i++;
	}
	t_list *tmp;
	tmp = head;
	while(tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	puts("===== new linked list =======");
	tmp = ft_lstmap(head, ft_toapply, free);
	while(tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&tmp, free);
	*/
	// t_list *head = NULL;
	// ft_lstadd_back(&head, ft_lstnew(ft_strdup("ssff")));
	/*
    t_list  *new;
    t_list  **lst;
    t_list  *x;
    t_list  a;
    t_list  b;
    t_list  c;
    t_list  d;

    a.next = &b;
    b.next = &c;
    c.next = NULL;
    d.next = NULL;
    new = &d;
    x = &a;
    lst = &x;
    ft_lstadd_back(lst, new);
    printf("%p\n", new);
    printf("%p\n", ft_lstlast(x));
	*/
	/*
	t_list	*a;
    t_list  x;
    t_list  y;

    a = &x;
    x.next = &y;
    y.next = NULL;
    printf("%p\n", &y);
    printf("%p\n", ft_lstlast(a));
	*/
	/*
    t_list  *x;
    t_list  y;
    t_list  z;

    x = &y;
    y.next = &z;
    z.next = NULL;
    printf("%d\n", ft_lstsize(x));
	//printf("%p\n", ft_lstlast(x));
	//printf("%p\n", &z);
	*/
	/*
	t_list  *q;
    t_list  *w;
    t_list  **r;
    char    s[] = "yahya";

    new = malloc(sizeof(t_list));
    q = malloc(sizeof(t_list));
    w = malloc(sizeof(t_list));
    r = malloc(sizeof(t_list));
    if (!new && !q && !w && !r)
        return 0;
    new->content = s;
    new->next = NULL;
    q->next = w;
    w->next = NULL;
    r = q;
    ft_lstadd_front(r, new);
    printf("address of new: %p\n", new);
    printf("address of r: %p\n", *r);
    free(new);
    free(q);
    free(w);
    free(r);
	*/
	/*
    t_list  *r;
    int k = 15;
    int *m;
    m = &k;

    r = ft_lstnew(m);
    printf("content of the node is: %d\n, and the next is : %"*(int *)r->content);
	*/
	/*
	int k;
    k = open("/mnt/homes/yael-maa/Desktop/foo.txt", O_RDWR | O_CREAT, 0777);
    int n = -2147483648;
    int m = 2147483647;
    int r = 0;
    ft_putnbr_fd(n, k);
    write(k, "\n", 1);
    ft_putnbr_fd(m, k);
    write(k, "\n", 1);
    ft_putnbr_fd(r, k);
    write(k, "\n", 1);
    ft_putnbr_fd(2147483647, k);
	*/
	/*char const s[] = "YAHYA";

	printf("%s\n", ft_strmapi(s,f));
	*/
	/*
    int n = INT_MIN + 1;

    printf("%s", ft_itoa(n));
	*/
	/*size_t  i = 0;
    char const  s[] = "yahya//////ubfvewinfu//////hebencene/////iceniwuncuncwe   /";
    //char const s[] = "";
    char    **arr;
    arr = ft_split(s, '/');
    //printf("%d\n", count_words(s, '/'));
    //printf("%zu\n", ft_len2all(s, '/'));
    while (i < 4)
    {
        printf("%s\n", arr[i]);
        i++;
    }
	*/
	/*char *s = "          hello      world           ";
	char *ep = "   ";
	printf("%s\n", ft_strtrim(s, ep));
	*/
	/*
	char *s3;
	s3 = ft_strjoin(NULL,"elmaachi");
	printf("%s\n", s3);
	*/
	/*printf("%p\n", ft_calloc(1, 1));
	printf("%p\n", calloc(1, 1));*/
	//const char s1[] = "";
	 /*size_t count = 10;
    size_t size = 4;

    // Allocate memory using ft_calloc and calloc
    void *ft_mem = ft_calloc(count, size);
    void *sys_mem = calloc(count, size);

    if (!ft_mem || !sys_mem) {
        printf("Memory allocation failed.\n");
        free(ft_mem);
        free(sys_mem);
        return 1;
    }

    // Verify each byte in the allocated memory to ensure it's zero
    size_t total_bytes = count * size;
    int ft_zeroed = 1;
    int sys_zeroed = 1;

    for (size_t i = 0; i < total_bytes; i++) {
        if (((unsigned char *)ft_mem)[i] != 0)
            ft_zeroed = 0;
        if (((unsigned char *)sys_mem)[i] != 0)
            sys_zeroed = 0;
    }
    // Compare results
    if (ft_zeroed && sys_zeroed)
        printf("Test passed: Both ft_calloc and calloc zeroed all bytes.\n");
    else
        printf("Test failed: Difference in zeroed bytes between ft_calloc and calloc.\n");

    // Clean up
    free(ft_mem);
    free(sys_mem);

    return 0;
	*/
	/*
	printf("%d\n", ft_atoi("      ----1486kevnnrv"));
	printf("%d\n", atoi("      ----1486kevnnrv"));
	*/
	/*
	size_t	count = 10;
	size_t	size = 4;
	ft_calloc
	size_t i = 0;
	while ()
	printf("%zu\n", strlen((const char *)ft_calloc(count, size)));
	printf("%zu\n", strlen((const char *)calloc(count, size)));
	*/
	/*
	const char haystack[] = "any string";
	const char needle[] = "";
	size_t	i = 5;
	char buffer[] = "overlappingneedle";
	printf("%p\n", strnstr(buffer + 4, buffer, 15));
	printf("%p\n", ft_strnstr(buffer + 4, buffer, 15));
	puts(strnstr(buffer + 4, buffer, 15));
	puts(ft_strnstr(buffer + 4, buffer, 15));
	printf("%p\n", strnstr(haystack, needle, i));
	printf("%p\n", ft_strnstr(haystack, needle, i));
	puts(strnstr(haystack, needle, i));
	puts(ft_strnstr(haystack, needle, i));
	*/
	/*
	const char haystack[] ="Hello World";
	const char needle[] = "World";
	printf("%p\n", ft_strnstr(haystack, needle, 0));
	printf("%p\n", strnstr(haystack, needle, 0));
	printf("%p\n", &haystack[6]);
	*/
	/*const unsigned char s1[] = "Hello World";
	const unsigned char s2[] = "hello World";
	printf("%d\n", ft_memcmp(s1,s2,0));
	printf("%d\n", memcmp(s1,s2,0));
	*/
	/*
	const unsigned char s[] = "Hello World";
	printf("%p\n", ft_memchr(s, '\0', 5));
	printf("%p\n", memchr(s, '\0', 5));
	*/
	/*
	const char s1[] = {0xFF, 'a', '\0'};
	const char s2[] = {0x00, 'a', '\0'};
	printf("%d\n" , ft_strncmp(s1,s2,1));
	printf("%d\n" , strncmp(s1,s2,1));
	*/
	/*
	const char s[] = "Hello yahya";
	printf("%p\n", ft_strrchr(s,'H'));
	printf("%p\n", strrchr(s,'H'));
*/
	/* toupper
	int	c = 'a';
	printf("%c\n",ft_toupper(c));
*/

	/*strlcpy
	char	src[] = "yahya";
	char	dst[6];
	printf("%zu\n", ft_strlcpy(dst,src, 6));*/
	/*unsigned char	src[5]= "yahya";

	char	*s = 0x0;
	printf("%zu", ft_strlen(""-100));*/

	/* memcpy 
	unsigned char	dst[6] = "yahya";
	unsigned char	src[5] = "hello";
	size_t	i;

	ft_memcpy(dst, src, 3);
	i = 0;
	while (i < 6)
	{
		printf("%c\n", dst[i]);
		i++;	
	}*/
	/*unsigned char b[4] = "hell";
memcpy
	ft_bzero(b,2);
	printf("%c\n", b[0]);
	printf("%c\n", b[1]);
	printf("%c\n", b[2]);
	printf("%c\n", b[3]);*/
	/*  memset
	int	number =  0;
	ft_memset(&number, 0b00111001, 1);
	ft_memset((char *)&number + 1, 0b00000101, 1);
	printf("%d\n", number);*/
}

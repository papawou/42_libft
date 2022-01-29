#ifndef FT_LST_H
#define FT_LST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* ft_lstadd_back.c */
void ft_lstadd_back(t_list **alst, t_list *new);
/* ft_lstadd_front.c */
void ft_lstadd_front(t_list **alst, t_list *new);
/* ft_lstclear.c */
void ft_lstclear(t_list **lst, void (*del)(void *));
/* ft_lstdelone.c */
void ft_lstdelone(t_list *lst, void (*del)(void *));
/* ft_lstiter.c */
void ft_lstiter(t_list *lst, void (*f)(void *));
/* ft_lstlast.c */
t_list *ft_lstlast(t_list *lst);
/* ft_lstmap.c */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* ft_lstnew.c */
t_list *ft_lstnew(void *content);
/* ft_lstsize.c */
int ft_lstsize(t_list *lst);

#endif
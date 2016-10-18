#include <stdio.h>
#include <stdlib.h>

struct node{
    char n;
    struct node *next;
};
void crear(struct node *p){
    struct node *vec,*cur;
    char m;
    vec=malloc(sizeof (struct node));
    scanf("%c",&m);
    p->n=m;
    vec=p;
    scanf("%c",&m);
    for(;m!='\n';){
        while(m==' ' || m=='\t'){scanf("%c",&m);}
        cur = malloc (sizeof (struct node));
        cur->n=m;
        vec->next=cur;
        vec=cur;
        scanf("%c",&m);
    }
    vec->next=NULL;
    return ;
}
void concatenar(struct node *p,struct node *q){
	struct node *s;
	s=p->next;
	for(;s!=NULL;){
		s=s->next;
	}
	s=q;
}
void mostrar(struct node *p){
    struct node *q;
    q=p;
    for(;q!=NULL;){
        printf("%c\n",q->n);
        q=q->next;
    }
    return ;
}
void quitar(struct node *p,char posicion){
    struct node *q,*w;
    q=p;
    if(q->n==posicion){
        p=p->next;
        return ;
    }
    w=q->next;
    while(w!=NULL){
        if(w->n==posicion){
            q->next=w->next;
            break;
        }
        q=q->next;
        w=w->next;
    }
    return;
}
void poner(struct node *p,int posicion,char w){
    struct node *q,*s,*r;
    q=p;
    r=q->next;
    int i;
    for(i=0;i<posicion-2;i++){
        q=q->next;
        r=r->next;
    }
    s->n=w;
    s->next=r;
    q->next=s;
}
main(){
    struct node *head;
    head=malloc(sizeof(struct node));
    crear(head);
    poner(head,2,'1');
    quitar(head,'w');
    mostrar(head);
    return 0;
}

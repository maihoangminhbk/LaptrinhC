//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct point
//{
//    char name[10];
//    int diem;
//} point;
//
//typedef struct node
//{
//    point data;
//    node *pLeft;
//    node *pRight;
//} node;
//typedef struct node* Tree;
//
//void Menu()
//{
//    printf("\n\tMENU\n");
//    printf("\t1.Tao cay\n");
//    printf("\t2.Ket qua\n");
//    printf("\t3.Tim kiem\n");
//    printf("\t4.Xuong hang\n");
//    printf("\t5.Xuat file\n");
//    printf("\t6.Thoat\n");
//    printf("\n");
//}
//
//void Khoitaocay(Tree &t)
//{
//    t=NULL;
//}
//
//void Themvaocay(Tree &t, point x)
//{
//    if(t==NULL)
//    {
//        node *p=(node*)malloc(sizeof(node));
//        p->data=x;
//        p->pLeft=NULL;
//        p->pRight=NULL;
//        t=p;
//    }
//    else
//    {
//        if(strcmp(t->data.name,x.name)>0)
//        {
//            Themvaocay(t->pLeft,x);
//        }
//        else if(strcmp(t->data.name,x.name)<0)
//        {
//            Themvaocay(t->pRight,x);
//        }
//    }
//}
//
//Tree Timkiem(Tree &t, point x)
//{
//    if(t==NULL)
//    {
//        return NULL;
//    }
//    else
//    {
//        if(strcmp(t->data.name,x.name)>0)
//        {
//            return Timkiem(t->pLeft,x);
//        }
//        else if(strcmp(t->data.name,x.name)<0)
//        {
//            return Timkiem(t->pRight,x);
//        }
//        else
//        {
//            return t;
//        }
//    }
//}
//
//// Doc file
//void Filevaotree(Tree &t, char *team1, char *team2, int goal1, int goal2)
//{
//    point input;
//    memset(input.name,0,sizeof(char));
//    strcpy(input.name,team1);
//    input.diem=0;
//    Tree search1=Timkiem(t,input);
//    if(search1==NULL)
//    {
//        Themvaocay(t,input);
//        search1=Timkiem(t,input);
//    }
//    memset(input.name,0,sizeof(char));
//    strcpy(input.name,team2);
//    input.diem=0;
//    Tree search2=Timkiem(t,input);
//    if(search2==NULL)
//    {
//        Themvaocay(t,input);
//        search2=Timkiem(t,input);
//    }
//    
//    if(goal1>goal2)
//    {
//        search1->data.diem=search1->data.diem+3;
//    }
//    else if(goal1<goal2)
//    {
//        search2->data.diem=search2->data.diem+3;
//    }
//    else
//    {
//        search1->data.diem++;
//        search2->data.diem++;
//    }
//}
//
//void Docfile(Tree &t)
//{
//    FILE *fptr=fopen("/Users/hoanganh/Downloads/BongDa.txt","r");
//    while(!feof(fptr))
//    {
//        char team1[10];
//        char team2[10];
//        int goal1=0;
//        int goal2=0;
//        fscanf(fptr,"%s\t%s\t%d\t%d\n",team1,team2,&goal1,&goal2);
//        Filevaotree(t,team1,team2,goal1,goal2);
//    }
//    fclose(fptr);
//}
//
//void Xuatdanhsach(Tree &t)
//{
//    if(t!=NULL)
//    {
//        Xuatdanhsach(t->pLeft);
//        printf("%s\t%d\n",t->data.name,t->data.diem);
//        Xuatdanhsach(t->pRight);
//    }
//}
//
//void Timdoibong(Tree t, point x)
//{
//    printf("Nhap ten doi bong : "); fflush(stdin); gets(x.name);
//    Tree search=Timkiem(t,x);
//    if(search==NULL)
//    {
//        printf("Khong co doi bong nay!\n");
//    }
//    else
//    {
//        printf("%s\t%d\n",search->data.name,search->data.diem);
//    }
//}
//
//void Nodethemang(Tree &x, Tree &y)
//{
//    if(y->pLeft!=NULL)
//    {
//        Nodethemang(x,y->pLeft);
//    }
//    else
//    {
//        x->data=y->data;
//        x=y;
//        y=y->pRight;
//    }
//}
//
//void Xoanode(Tree &t, point x)
//{
//    if(t==NULL)
//    {
//        return;
//    }
//    else
//    {
//        if(strcmp(t->data.name,x.name)>0)
//        {
//            Xoanode(t->pLeft,x);
//        }
//        else if(strcmp(t->data.name,x.name)<0)
//        {
//            Xoanode(t->pRight,x);
//        }
//        else
//        {
//            node *p=t;
//            if(t->pLeft==NULL)
//            {
//                t=t->pRight;
//            }
//            else if(t->pRight==NULL)
//            {
//                t=t->pLeft;
//            }
//            else
//            {
//                Nodethemang(p,t->pRight);
//            }
//            free(p);
//        }
//    }
//}
//
//void Duyetcaytheodiem(Tree &t, point out[], int X, int* i)
//{
//    if(t!=NULL)
//    {
//        if(t->data.diem<X)
//        {
//            printf("%s\t%d\n",t->data.name,t->data.diem);
//            strcpy(t->data.name,out[(*i)++].name);
//        }
//        Duyetcaytheodiem(t->pLeft,out,X,i);
//        Duyetcaytheodiem(t->pRight,out,X,i);
//    }
//}
//
//int main()
//{
//    Tree t;
//    Khoitaocay(t);
//    int thaotac;
//    do
//    {
//        Menu();
//        printf("Nhap thao tac muon chon : "); scanf("%d",&thaotac);
//        switch(thaotac)
//        {
//            case 1:
//            {
//                Docfile(t);
//                break;
//            }
//            case 2:
//            {
//                Xuatdanhsach(t);
//                break;
//            }
//            case 3:
//            {
//                point x;
//                Timdoibong(t,x);
//                break;
//            }
//            case 4:
//            {
//                int i = 0,X;
//                printf("Nhap muc diem xuong hang : ") ; scanf("%d",&X);
//                point out[10];
//                printf("Nhung doi bong bi xuong hang la : \n");
//                Duyetcaytheodiem(t,out,X,&i);
//                int j;
//                for(j=0;j<i;j++)
//                {
//                    Xoanode(t,out[j]);
//                }
//                printf("Nhung doi bong con lai la : \n");
//                Xuatdanhsach(t);
//                break;
//            }
//        }
//    } while(thaotac!=6);
//    
//    return 0;
//}
//
//
//
//

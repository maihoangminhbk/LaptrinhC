//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct dic{
//    char word[20];
//    char mean[20];
//};
//typedef struct dic Dic;
//struct node{
//    Dic value;
//    struct node *left;
//    struct node *right;
//};
//typedef struct node Node;
//Node *tree=NULL;
//FILE *fi;
//
//Node *inserNode(Node *tree, char word[],char mean[])
//{
//    if(tree==NULL)
//    {
//        Node *p=(Node *)malloc(sizeof(Node));
//        strcpy(p->value.word,word);
//        strcpy(p->value.mean,mean);
//        p->left=NULL;
//        p->right=NULL;
//        return p;
//    }
//    else
//    {
//        if(strcmp(tree->value.word,word)>0)
//        {
//            tree->left=inserNode(tree->left,word,mean);
//        }
//        if(strcmp(tree->value.word,word)<0)
//        {
//            tree->right=inserNode(tree->right,word,mean);
//        }
//    }
//    return tree;
//    
//}
//Node *search(Node *tree,char word[])
//{
//    if(tree==NULL)
//        return tree;
//    
//    else if(strcmp(tree->value.word,word)==0)
//    {
//        return tree;
//    }
//    else if(strcmp(tree->value.word,word)<0)
//    {
//        return search(tree->right,word);
//    }else if(strcmp(tree->value.word,word)>0)
//    {
//        return search(tree->left,word);
//    }
//    return tree;
//    
//}
//
//// void creatFile(FILE *fi,char word[], char mean[])
//// {
////     fi=fopen("data.txt","w");
////     if(fi!=NULL)
////     {    while(1)
////         {
////             int lc;
////         printf("Nhap tu:\n");
////         __fpurge(stdin);
////         gets(word);
////         printf("Nhap nghia:\n");
////         __fpurge(stdin);
////         gets(mean);
////         fprintf(fi, "%s\t%s\n",word,mean );
////         printf("Tiep 1 . Dung 0.\n");
////         scanf("%d",&lc);
////         while(getchar()!='\n');
////         if(lc==0)break;
////         }
////         fclose(fi);
////     }//     {    while(1)
//
//// }
//Node *creatTree(Node **tree,FILE *f)
//{    char c;
//    char word[20];
//    char mean[20];
//    f=fopen("/Users/hoanganh/Downloads/data.txt","r");
//    if(f!=NULL)
//    {
//        while(!feof(f))
//        {
//            fscanf(f,"%s",word);
//            c=fgetc(f);
//            fgets(mean,25,f);
//            mean[strlen(mean)-1]='\0';
//            *tree=inserNode(*tree,word,mean);
//        }
//        fclose(f);
//    }
//    return *tree;
//}
//void searchWord(Node *tree,char word[])
//{
//    while(1)
//    {
//        int lc;
//        printf("Nhap tu can tra:\n");
//        //__fpurge(stdin);
//        gets(word);
//        Node *p=(Node*)malloc(sizeof(Node));
//        p=search(tree,word);
//        if(p==NULL)
//            printf("Khong tim thay\n");
//        else{
//            printf("%s\t%s\n",p->value.word,p->value.mean);
//        }
//        printf("Tiep tuc 1. Dung 0\n");
//        scanf("%d",&lc);
//        while(getchar()!='\n');
//        if(lc==0)break;
//    }
//}
//void printTree(Node *tree)
//{
//    if(tree!=NULL)
//    {
//        printTree(tree->left);
//        printf("%s\t%s\n",tree->value.word,tree->value.mean );
//        printTree(tree->right);
//    }
//}
//void dichcau(Node *tree, char cau[])
//{
//    
//    int i;int j=0;int k=0;
//    char tachtu[10][20];
//    char tu[10];char nghia[20];
//    printf("Nhap cau can dich\n");
//    //__fpurge(stdin);
//    gets(cau);
//    for(i=0;i<strlen(cau);i++)
//    {
//        if(cau[i]!=' ')
//        {
//            tu[j]=cau[i];
//            j++;
//        }else
//        {
//            tu[j]='\0';
//            j=0;
//            strcpy(tachtu[k],tu);
//            k++;
//        }
//    }
//    tu[j]='\0';
//    strcpy(tachtu[k++],tu);
//    i=0;
//    char chuyentu[10];
//    while(i<k)
//    {
//        int j;
//        strcpy(chuyentu,tachtu[i]);
//        for(j=0;j<strlen(chuyentu);j++)
//        {
//            if(chuyentu[j]>='A'&&chuyentu[j]<='Z')
//            {
//                chuyentu[j]=chuyentu[j]+32;
//            }
//        }
//        strcpy(tachtu[i],chuyentu);
//        i++;
//    }
//    for(i=0;i<k;i++)
//    {
//        printf("%s ",tachtu[i] );
//    }
//    printf("\n");
//    Node *p=(Node*)malloc(sizeof(Node));
//tt:for(i=0;i<k;i++)
//{
//    
//    p=search(tree,tachtu[i]);
//    if(p==NULL)
//    {
//        printf("\nTu %s khong duoc tim thay. Tien hanh them vao tu dien.\n", tachtu[i]);
//        printf("Nhap nghia cho %s:\n",tachtu[i] );
//        //__fpurge(stdin);
//        gets(nghia);
//        tree=inserNode(tree,tachtu[i],nghia);
//        goto tt;
//        
//        
//    }
//    printf("%s ",p->value.mean );
//}
//    printf("\n");
//}
//void luuvaofile(FILE *f,Node *tree)
//{
//    if(f!=NULL)
//    {
//        if(tree!=NULL)
//        {
//            luuvaofile(f,tree->left);
//            fprintf(f, "%s\t%s\n",tree->value.word,tree->value.mean );
//            luuvaofile(f,tree->right);
//        }
//        //fclose(f);
//    }
//}
//void menu()
//{
//    //char word[20];
//    //char mean[20];
//    char cau[100];
//    while(1)
//    {
//        printf("Lua chon chuc nang\n");
//        printf("--------------------\n");
//        printf("1.Tao cay\n");
//        printf("2.In cay \n");
//        printf("3.Dich cau\n");
//        printf("4.Luu vao file\n");
//        printf("__________________\n");
//        int lc;
//        printf("Nhap chuc nang:\n");
//        scanf("%d",&lc);
//        while(getchar()!='\n');
//        switch(lc)
//        {
//            case 1:creatTree(&tree,fi);break;
//            case 2: printTree(tree);break;
//            case 3: dichcau(tree,cau);break;
//            case 4: fi=fopen("/Users/hoanganh/Downloads/data2.txt","w");
//                luuvaofile(fi,tree);
//                fclose(fi);
//                break;
//            default: exit(0);break;
//        }
//    }
//    
//    
//    
//    
//}
//int main()
//{
//    
//    
//    menu();
//    // creatTree(&tree,fi);
//    // printTree(tree);
//    
//    // searchWord(tree,word);
//    // //creatFile(fi,word,mean);
//    
//    // dichcau(tree,cau);
//    // printf("\n");
//    // printTree(tree);
//    return 0;
//}


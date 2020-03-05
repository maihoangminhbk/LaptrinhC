////
////  bai 1.c
////  MinhDev
////
////  Created by Hoang Anh on 5/20/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//#include "time.h"
//struct SEAT
//{
//    char seatId[5];
//    int isVIP;
//    int isCouple;
//};
//struct ROOM
//{
//    char roomID[20];
//    int noSeat;
//    struct SEAT seatList[30];
//};
//struct TICKET
//{
//    char ticketcode[5];
//    char seatId[5];
//    int isVIP;
//    int isCouple;
//};
//void Nhapthongtinrap(struct ROOM *aroom)
//{
//    printf("nhap ID room");
//    fflush(stdin);
//    gets((*aroom).roomID);
//    fflush(stdin);
//    printf("nhap so luong ghe");
//    scanf("%d",&aroom->noSeat);
//    //printf("aroom . seat la%d",aroom.noSeat);
//    srand((unsigned)time(NULL));
//    for(int i = 0; i < aroom->noSeat; i++)
//    {
//        aroom->seatList[i].isVIP = rand()%2;
//        //printf("%d",aroom.seatList[i].isVIP);
//        if(aroom->seatList[i].isVIP == 1) aroom->seatList[i].isCouple = 0;
//        else aroom->seatList[i].isCouple = 1;
//        //printf("%d\n",aroom.seatList[i].isCouple);
//
//    }
//}
//void Nhapthongtinve(struct TICKET** listTicket, int *n)
//{
//    //*listTickets = (struct TICKET*) malloc(*n * sizeof(struct TICKET));
//    (*listTicket) = (struct TICKET*)calloc((*n), sizeof(struct TICKET));
//    if (NULL == *listTicket)
//    {
//        printf("Khong du bo nho!");
//        exit(-1); // dung thuc hien chuong trinh
//    }
//    srand((unsigned)time(NULL));
//    for(int i = 0; i < (*n); i++)
//    {
//        
//        
//        //fflush(stdin);
//        //printf("Nhap ticketcode");
//        //gets((*listTicket)[i].ticketcode);
//        (*listTicket)[i].isCouple = rand() % 2;
//        if((*listTicket)[i].isCouple == 1) (*listTicket)[i].isVIP = 0;
//        else (*listTicket)[i].isVIP = 1;
//        
//        
//        
//        //printf("%d\n",(*listTicket)[i].isCouple);
//    }
//    
//}void printRoomDetail(struct ROOM aroom)
//{
//    int vipSeats = 0, normalSeat = 0, coupleSeat = 0;
//    for(int i = 0; i < aroom.noSeat; i++)
//    {
//        if(aroom.seatList[i].isCouple == 1) coupleSeat++;
//        if(aroom.seatList[i].isVIP == 1) vipSeats++;
//
//    }
//    printf(" aroom . no seat %d", aroom.noSeat);
//    normalSeat = aroom.noSeat - coupleSeat - vipSeats;
//    printf("So luong ghe thuong la %d\n",normalSeat);
//    printf("So luong ghe Vip la %d\n",vipSeats);
//    printf("So luong ghe Couple la %d\n",coupleSeat);
//}
//
//int checkSeat(struct TICKET*listTickets, int *n, char *seatId)
//{
//    for(int i = 0; i < *n; i++)
//    {
//        if(strcmp(listTickets[i].seatId, seatId) != NULL) return 0;
//        
//    }
//    return 1;
//}
//double checkIncome(struct TICKET* listTickets, int *n, double normalPrice, double VipPrice, double couplePrice)
//{
//    double totalIncome = 0.0;
//    int vipSeats = 0, normalSeat = 0, coupleSeat = 0;
//    for(int i = 0; i < *n; i++)
//    {
//        if(listTickets[i].isCouple == 1) coupleSeat++;
//        if(listTickets[i].isVIP == 1) vipSeats++;
//        normalSeat = *n - coupleSeat - vipSeats;
//        totalIncome = vipSeats * VipPrice + coupleSeat * couplePrice + normalSeat * normalPrice;
//    }
//        return totalIncome;
//    
//}
//double vipfillrate(struct ROOM aroom, struct TICKET *listTickets, int *n)
//{
//    int noCoupleSeats = 0, noCoupleSeatSold = 0;
//    for(int i = 0; i < *n; i++)
//    {
//        if(aroom.seatList[i].isCouple == 1) noCoupleSeats++;
//    }
//    for(int i = 0; i < *n; i++)
//    {
//        if(listTickets[i].isCouple == 1) noCoupleSeatSold++;
//    }
//    return 1.0 * noCoupleSeatSold / noCoupleSeats;
//}
//int main()
//{
//
//    
//    int n = 10;
//    struct ROOM aroom;
//    struct TICKET *listTickets=NULL;
//    Nhapthongtinve(&listTickets, &n);
//    
//    Nhapthongtinrap(&aroom);
//    //bai 5.a
//    printf("Bai 5.a");
//    printRoomDetail(aroom);
//    //bai 5.b
//    printf("Bai 5.b");    char IDseat[5];
//    fflush(stdin);
//    printf("Nhap ma ghe can check");
//    scanf("%[^\n]s",IDseat);
//    gets(IDseat);
//    printf("ghe da duoc dat chua %d",checkSeat(listTickets, &n, IDseat));
//    //bai 5.c
//    printf("Bai 5.c");
//    printf("Tong gia tien la %lf \n",checkIncome(listTickets, &n, 40, 50, 70));
//    //bai 5.d
//    printf("Bai 5.d");
//    printf("Ti le ghe Couple %lf", vipfillrate(aroom, listTickets, &n));
//    
//    return 0;
//}
//
//
//

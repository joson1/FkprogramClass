  #include<stdio.h>
  main()
  {
  float h,w,t;
  printf("Please enter h,w: ");
  scanf("%f,%f",&h,&w);
  t=w/(h*h);
  if(t<18)  printf("T=%f\tLow weight!\n",t);
  if (t>=18&&t<25) printf("t=%f\tStandard weight!\n",t);
  if (t>=25&&t<27) printf("t=%f\tHigher weight!\n"，t);
  if(t>=27) printf("t=%f\tToo fat!\n",t);
  }


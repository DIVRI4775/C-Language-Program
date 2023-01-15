#include<stdio.h>
#include<math.h>
int main ()
{
int e,e1,e2,e3,e4,e5,e6,e7;
printf("welcome to the menu driven program\n");
printf("enter the experiment number you want to access\n");
printf("1.Experiment 1\n");
printf("2.Experiment 2\n");
printf("3.Experiment 3\n");
printf("4.Experiment 4\n");
printf("5.Experiment 5\n");
printf("6.Experiment 6\n");
printf("7.Experiment 7\n");
scanf("%d",&e);
switch(e)
{
	case 1:
		{
			printf("EXPERIMENT 1\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			scanf("%d",&e1);
			switch(e1)
			{
			  case 1:
			  	{
				  		printf("HELLO WORLD");
				  break;
			    }	
			    case 2:
							  	{
								  float num1,num2,sum;
								  sum=0;
								  printf("enter two numbers\n");
								  scanf("%f%f",&num1,&num2);
								  sum =num1+num2;
								  printf("the sum =%f",sum);
								  	
								  break;
							    }	
				case 3:
							  	{
								  printf("NAME : DIVY PRAKASH TIWARI\n");
								  printf("E MAIL : kpsg4775@gmail.com\n");
								  printf("JAMSHEDPUR ; JHARKHAND\n");
								  printf("EDUCATION : B.Tech [CSE]\n");
								  printf("C.V RAMAN GLOBAL UNIVERSITY\n");
								  printf("EXPERIENCE : 12 Year's Of Studying\n");
								  printf("SKILLS : Web devlopment ; Graphics\n");
								  	
								  break;
							    }	
				default :
					{
						printf("program choice is wrong");
					}
			}
		break;
		}
	case 2:
		{
			printf("EXPERIMENT 2\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			printf("6. Program 6\n");
			printf("7. Program 7\n");
			printf("8. Program 8\n");
			scanf("%d",&e2);
			switch(e2)
			{
				case 1:
					{
						int num1,num2,sum,sub,mul,mod;
						float div;
						printf("enter two numbers\n");
						scanf("%d%d",&num1,&num2);
						sum =num1+num2;
						sub =num1-num2;
						mul =num1*num2;
						div =num1/num2;
						mod =num1%num2;
						printf("the sum =%d\n",sum);
						printf("the sub =%d\n",sub);
						printf("the mul =%d\n",mul);
						printf("the div =%f\n",div);
						printf("the mod =%d\n",mod);
						
						break;
					}
				case 2:
								{
										int l,b,pr,ar;
										printf ("enter thr lenghth of the rectangle\n");
										scanf ("%d",&l);
										printf ("enter thr breadth of the rectangel\n");
										scanf ("%d",&b);
									    pr = 2*(l+b);
									    ar = l*b;
										printf ("perimeter of rectangle=%d\n",pr);
										printf ("areaof rectangle=%d\n",ar);
									break;
								}	
				case 3:
								{
									
										float gs,bs,hra,da,oa;
										printf("enter the Basic salary");
										scanf("%f",&bs);
										hra=0.16*bs;
										da=0.2*bs;
										oa=3598.00;
										gs=bs+hra+da+oa;
										printf("Gross balance=%f",gs);
									break;
								}
				case 4:
								{
										int s,ps,as;
										printf ("enter thr side of the square");
										scanf ("%d",&s);
									    ps = 4*s;
									    as = s*s;
									    printf ("perimeter of square=%d\n",ps);
										printf ("area of square=%d\n",as);
									break;
								}	
				case 5:
								{
									
										float r,per,ar,pie;
										pie=3.14;
										printf("enter the value of radius");
										scanf("%f",&r);
										per=2*pie*r;
										ar=pie*r*r;
										printf ("perimeter of circle=%f\n",per);
										printf ("area of circle=%f\n",ar);
									break;
								}	
				case 6:
								{
									
										int tb,th,at;
									    printf ("enter thr height of the triangle\n");
										scanf ("%d",&th);
										printf ("enter thr base of the triangle\n");
										scanf ("%d",&tb);
									    at = 0.5*th*tb;
										printf ("area of triangle=%d\n",at);
									break;
								}	
				case 7:
								{
									
										float r,vol,pie;
										pie=3.14;
										printf("enter the value of radius");
										scanf("%f",&r);
										vol=1.3*pie*r*r*r;
										printf ("volume of sphere=%f\n",vol);
									break;
								}	
				case 8:
								{
										int s,l,b,tb,th,ps,pr,as,ar,at;
										printf ("enter thr side of the square");
										scanf ("%d",&s);
										printf ("enter thr lenghth of the rectangle");
										scanf ("%d",&l);
										printf ("enter thr breadth of the rectangele");
										scanf ("%d",&b);
									    printf ("enter thr height of the triangle");
										scanf ("%d",&th);
										printf ("enter thr base of the triangle");
										scanf ("%d",&tb);
									    ps = 4*s;
									    pr = 2*(l+b);
									    as = s*s;
									    ar = l*b;
									    at = 0.5*th*tb;
									    printf ("perimeter of square=%d\n",ps);
										printf ("perimeter of rectangle=%d\n",pr);
										printf ("area of square=%d\n",as);
										printf ("areaof rectangle=%d\n",ar);
										printf ("area of triangle=%d\n",at);
									break;
								}	
				default:
					{
						printf("program choice is wrong");
					}	
				
			}
		break;
		}
	case 3:
		{
			printf("EXPERIMENT 3\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			printf("6. Program 6\n");
			printf("7. Program 7\n");
			scanf("%d",&e3);
			switch(e3)
			{
				case 1:
					{
						
							int n1,n2,n3,n4,n5,sum;
							float avg,per;
							printf("enter the five numbers\n");
							scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
							sum =n1+n2+n3+n4+n5;
							avg=sum/5;
							per=(sum*100)/5;
							printf("the average of numbers =%f\n",avg);
							printf("the percentage of numbers =%f\n",per);
						break;
					}
				case 2:
									{
										float c,p,r,t;
											printf("enter the principal amount, rate of intreset , time duration\n");
											scanf("%f%f%f",&p,&r,&t);
											c=p*(pow((100+r)/100,t));
											printf("the compound intrest =%f\n",c);
										break;
									}	
				case 3:
									{
										
											int a,b,c;
											printf("enter the two numbers\n");
											scanf("%d%d",&a,&b);
											c=a;
											a=b;
											b=c;
											printf("the numbers after the swapping\n");
											printf("%d\n",a);
											printf("%d\n",b);
										break;
									}	
				case 4:
									{
										int a,b;
											printf("enter the two numbers\n");
											scanf("%d%d",&a,&b);
											a=a-b;
											b=a+b;
											a=b-a;
											printf("the numbers after the swapping\n");
											printf("%d\n",a);
											printf("%d\n",b);
										break;
									}	
			    case 5:
									{
										float n;
											printf("enter the distance covered in meter's\n");
											scanf("%f",&n);
											n=n/1000;
											printf("the distance covered in killometer's %f\n",n);
										
										break;
									}	
				case 6:
									{
										float far,cel;
											printf("enter the temperature in farhenhite\n");
											scanf("%f",&far);
											cel=(far-32)*0.519;
											printf("the temprature in celcius  %f\n",cel);
										
										break;
									}	
				case 7:
									{
										float n,sum;
											printf("enter the nth term\n");
											scanf("%f",&n);
											sum=((n*n+1)/2)*((n*n+1)/2)+((n*n+1)/2);
											printf("the sum of series %f ",sum);
										break;
									}	
				default :
					{
						printf("program choice is wrong");
					}		
			}
		break;
		}
	case 4:
		{
			printf("EXPERIMENT 4\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			scanf("%d",&e4);
			switch(e4)
			{
				case 1:
					{
						int mark;
						printf("Enter the value of marks\n");
						scanf("%d",&mark);
						if (mark>=80)
						{
						    printf("The grade is A+");
						}
						else if (mark<80&&mark>=70)
						{
						    printf ("The grade is B");
						}
						else if (mark<70 && mark>=60)
						{
						    printf("The grade is C");
						}
						else if (mark<60&&mark>=40)
						{
						    printf("The grade is D");
						}
						else 
						{
						    printf("The grade is F");
						}
						break;
					}
				case 2:
									{
										 int a,b,c;
										printf("Enter the 3 number\n");
										scanf("%d%d%d",&a,&b,&c);
										if (a>b && a>c)
										{
										    printf("The largest number is %d",a);
										}
										else if (b>a && b>c)
										{
										    printf("The largest number is %d",b);
										}
										else 
										{
										    printf(" The largset number is %d",c);
										}
										break;
									}	
				case 3:
									{
										int y;
										float x;
										printf ("Enter the year\n");
										scanf ("%d",&y);
										x=y%4;
										if(x==0)
										{
										    printf("The givem year is a Leap Year");
										}
										else 
										{
										    printf("The given year is not leap year");
										}
										break;
									}
				case 4:
									{
										  int x;
										    printf ("Enter the number\n");
										    scanf("%d",&x);
										    if (x<0)
										    {
										        printf("The number is negative");
										    }
										    else if (x>0)
										    {
										        printf("The number is positive");
										    }
										    else{
										    printf("The number is zero");
										}
										break;
									}	
				case 5:
									{
									    printf("galat");
										break;
									}
				default :
					{
						printf("program choice is wrong");
					}		
			}
		break;
		}
	case 5:
		{
			printf("EXPERIMENT 5\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			printf("6. Program 6\n");
			printf("7. Program 7\n");
			printf("8. Program 8\n");
			printf("9. Program 9\n");
			printf("10. Program 10\n");
			printf("11. Program 11\n");
			scanf("%d",&e5);
			switch(e5)
			{
				case 1:
					{
							int n,i,j,pro;
							printf("Enter the number who's table to be displayed ");
							scanf("%d",&n);
							for (i=1;i<11;i++)
							   {
								   pro=n*i;
								   printf("%d*%d=%d\n",n,i,pro);	
								   } 
						break;
					}
				case 2:
									{
										int n,i,j,count,w,mul,sum,t,c;
										count =0;
										mul=1;
										sum=0;
											printf("Enter the number to be checked as palindrome \n");
											scanf("%d",&n);
											i=n;
											c=n;
											
											do{
												n=n/10;
												count++;
											  }while(n>0);
											w=0;
											for (w;w<count-1;w++)
											{
												mul=mul*10;
											}		
											while (c>0)
											{
												j=c%10;
												t=j*mul;
												sum=sum+t;
												mul=mul/10;
											    printf("%d",j);
												c=c/10;
											}	
											if (i==sum)
											{
												printf("The number %d is palindrome number",i);
											}
											else 
											{
												printf("The number %d  is not palindrome number",i);
											}
										break;
									}
				case 3:
									{
										int n,i,j,k,sum;
										sum=0;
											printf("Enter the number to be checked as armstrong ");
											scanf("%d",&n);
											i=n;
											while (n>0)
											{
												j=n%10;
												k=j*j*j;
												sum=sum+k;
												n=n/10;
												
											}	
											if (i==sum)
											{
											printf("YES %d is armstrong number ",i);
											}
											else
											{
											printf("NO %d is not armstrong number",i);
											}
										break;
									}
			    case 4:
									{
										int n,i,j,k;
											k=0;
											printf("Enter the number to be checked as prime");
											scanf("%d",&n);
											i=n;
											for (i;i>0;i--)
											{
											   j=n%i;
											   if (j==0)
										    	{
											  	k=k+1;
										    	}
											}
											if (k>2)
											{
												printf ("The entered number %d is not prime",n);
											}
										    else 
										    {
												printf("The entered number %d is prime",n);
											}	
										break;
									}
				case 5:
									{
										int n,i,j,fac;
										fac=1;
										printf("Enter the number who's factorial to be calculated");
										scanf("%d",&n);
										for (i=n;i>0;i--)
										{
											fac=fac*i;
										}
										printf("The factorial of %d is =%d", n,fac);		
										return 0;
										break;
									}
				case 6:
									{
										int n,i,j;
											printf("Enter the number who's reverse to be find");
											scanf("%d",&n);
											i=n;
											while (n>0)
											{
												j=n%10;
												printf("%d",j);
												n=n/10;
											}	
										    printf(" is the reverse of the number %d",i);
										return 0;
										break;
									}
				case 7:
									{
										int n,i,j;
										i=1;
											printf("Enter the number of rows in pattern ");
											scanf("%d",&n);
											for (i;i<=n;i++)
											{
												j=1;
												for (j;j<=i;j++)
												{
												printf("*");
												}
												printf("\n");
											}
										break;
									}
				case 8:
									{
										int n,i,j;
											printf("Enter the number of rows in pattern");
											scanf("%d",&n);
											i=n;
											for (i;i>0;i--)
											{
												j=i;
												for (j;j>0;j--)
												{
												printf("*");
												}
												printf("\n");
											}
										break;
									}
				case 9:
									{
										int n,i,j,k;
											printf("Enter the number of rows in pattern");
											scanf("%d",&n);
											i=n;
											k=0;
											for (i;i>0;i--)
											{
												k=k+1;
												j=i;
												
												for (j;j>0;j--)
												{
												printf("%d",k);
												}
												printf("\n");
											}
										break;
									}
				case 10:
									{
											int i,j,n;
											printf("Enter the number of rows");
											scanf("%d",&n);
											for (i=1;i<=n;i++)
											{
												for (j=1;j<=n-i;j++)
												{
													printf(" ");
												}
											for(j=1;j<=i;j++)
												{
													printf("* ");
												}
											printf("\n");
											}
										break;
									}
				case 11:
									{
											int i,j,n;
											printf("Enter the number of rows");
											scanf("%d",&n);
											i=n;
											for (i;i>=1;i--)
											{
												for (j=1;j<=n-i;j++)
												{
													printf(" ");
												}
												for (j=1;j<=i;j++)
												{
													printf("* ");
												}
											printf("\n");	
											}
											for (i=1;i<=n;i++)
											{
												for(j=1;j<=n-i;j++)
												{
													printf(" ");
												}
												for (j=1;j<=i;j++)
												{
													printf("* ");
												}
											printf("\n");
											}
										break;
									}
				default :
					{
						printf("program choice is wrong");
					}
			}
		break;
		}
	case 6:
		{
			printf("EXPERIMENT 6\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			printf("6. Program 6\n");
			printf("7. Program 7\n");
			printf("8. Program 8\n");
			scanf("%d",&e6);
			switch(e6)
			{
				case 1:
					{
							int n;
							printf("enter the weekady number");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									{
										printf("its sunday");
										break;
									}
								case 2:
									{
										printf("its monday");
										break;
									}
								case 3:
									{
										printf("its tuesday");
										break;
									}
								case 4:
									{
										printf("its wednesday");
										break;
									}
								case 5:
									{
										printf("its thrusday");
										break;
									}
								case 6:
									{
										printf("its friday");
										break;
									}
								case 7:
									{
										printf("its saturday");
										break;
									}
								default :
									{
										printf("its wrong choice");
										break;
									}
							}
						break;
					}
				case 2:
									{
										printf("galat");
										break;
									}
				case 3:
									{
										int n,m,c,sum,diff,pro;
												float div;
												printf("enter the digits\n");
												scanf("%d%d",&n,&m);
												printf("1.for addition \n");
												printf("2.for subtraction\n");
												printf("3.for multiplication\n");
												printf("4.for division\n");
												printf("enter your choice \n");
												scanf("%d",&c);
												switch (c)
											{
												case 1:
													{
													sum=n+m;
													printf("%d+%d=%d",n,m,sum);
													break;	
													}
												case 2:
													{
														diff=n-m;
																printf("%d-%d=%d",n,m,diff);
															break;
														}
												case 3:
															{
																pro=n*m;
																		printf("%d*%d=%d",n,m,pro);
																	break;
																}
												case 4:
															{
																div= n/m;
																		printf("%d/%d=%f",n,m,div);
																	break;
																}
												default :
													{
														printf("enter choice is wrong");
													}
											}
										break;
									}
				case 4:
									{
											int n;
												printf("1. for january\n");
												printf("2. for febrary\n");
												printf("3. for march\n");
												printf("4. for april\n");
												printf("5. for may\n");
												printf("6. for june\n");
												printf("7. for july\n");
												printf("8. for august\n");
												printf("9. for september\n");
												printf("10. for october\n");
												printf("11 for november\n");
												printf("12 for december\n");
											printf("enter the choice for the month");
											scanf("%d",&n);
											
											switch(n)
											{
												case 1:
													{
														printf("number of days are 31");
														break;
													}
												case 2:
															{
																printf("number of days are 28");
																break;
															}
												case 3:
															{
																printf("number of days are 31 ");
																break;
															}
												case 4:
															{
																printf("number of days are 30 ");
																break;
															}
												case 5:
															{
																printf("number of days are 31");
																break;
															}
												case 6:
															{
																printf("number of days are 30 ");
																break;
															}
												case 7:
															{
																printf("number of days are 31 ");
																break;
															}
												case 8:
															{
																printf("number of days are 31");
																break;
															}
												case 9:
															{
																printf("number of days are 30");
																break;
															}
												case 10:
															{
																printf("number of days are 31");
																break;
															}
												case 11:
															{
																printf("number of days are 30");
																break;
															}
												case 12:
															{
																printf("number of days are 31");
																break;
															}
											   
												default :
													{
														printf("wrong choice");
													}
											}
										break;
									}
				case 5:
									{
										
											int n,sum,i;
											sum=0;
											printf("enter the nth number to be sumed\n");
											scanf("%d",&n);
											for (i=1;i<=n;i++)
											{
												sum=sum+i;
											}
										printf("the sum of the nth number is %d\n",sum);
										break;
									}
				case 6:
									{
											int n,sum,i,cube;
											sum=0;
											printf("enter the nth number to be sumed as cube\n");
											scanf("%d",&n);
											for (i=1;i<=n;i++)
											{
												cube = i*i*i;
												sum=sum+cube;
											}
										printf("the sum of cube of the nth number is %d\n",sum);
										break;
									}
				case 7:
									{
										int n,j,sum;
										sum=0;
											printf("Enter the number who's digits to be sumed");
											scanf("%d",&n);
											while (n>0)
											{
												j=n%10;
												sum=sum+j;
												n=n/10;
											}	
										    printf("the sum of the digit's of the number is%d",sum);
										break;
									}
				case 8:
									{
										int n,i,j;
											printf("Enter the number\n");
											scanf("%d",&n);
											printf("The even numbers are :");
											i=n;
											while (i>0)
											{
											   j=i%2;
											   if (j==0)
										    	{
											  	printf(" %d ",i);
										    	}
										    	i--;
											}
										break;
									}
				default:
					{
						printf("program choice is wrong");
					}
			}
			break;
		}
	case 7:
		{
			printf("EXPERIMENT 7\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
			printf("4. Program 4\n");
			printf("5. Program 5\n");
			printf("6. Program 6\n");
			scanf("%d",&e7);
			switch(e7)
			{
					case 1:
						{
							int n,i,max;
								max =0;
								printf("Enter the size of array\n");
								scanf("%d",&n);
								int arr[n];
								printf("enter the numbers in array \n");
								for (i=0;i<n;i++)
								{
									scanf("%d",&arr[i]);
								}
								for (i=0;i<n;i++)
								{
									if (arr[i]>max)
									{
										max=arr[i];
									}
								}
								printf("the max number is%d",max);
								  break;	
						}
					case 2:
						{
							int n,i,min;
								printf("Enter the size of array\n");
								scanf("%d",&n);
								int arr[n];
								printf("enter the numbers in array \n");
								for (i=0;i<n;i++)
								{
									scanf("%d",&arr[i]);
								}
								min =arr[0];
								for (i=0;i<n;i++)
								{
									if (arr[i]<min)
									{
										min =arr[i];
									}
								}
								printf("the min number is%d",min);
								  break;	
						}
					case 3:
						{
								int n,nn,i,p;
								printf("Enter the size of array\n");
								scanf("%d",&n);
								int arr[n];
								printf("Enter the numbers in array \n");
								for (i=0;i<n;i++)
								{
									scanf("%d",&arr[i]);
								}
								printf("Enter the desired position\n");
								scanf("%d",&p);
								printf("Enter the number\n");
								scanf("%d",&nn);
								for (i=p;i<=p;i++)
								{
									arr[i-1]=nn;
								}
								printf("array after the manupilation\n");
								for(i=0;i<n;i++)
								{
									printf("%d\n",arr[i]);
								}
								  break;						
						}
					case 4:
						{
								int n,nn,i,s;
									nn=0;
									printf("Enter the size of array\n");
									scanf("%d",&n);
									int arr[n];
									printf("Enter the numbers in array \n");
									for (i=0;i<n;i++)
									{
										scanf("%d",&arr[i]);
									}
									printf("Enter the number to be searched\n");
									scanf("%d",&s);
									for (i=0;i<=n;i++)
									{
										if(arr[i]==s)
										{
											printf("the searched number is present %d",arr[i]);
											nn=nn+1;
										}
									}
									if (nn!=1)
									{
										printf("the searched number is not present");
									}
									  break;	
													
						}
					case 5:
						{
									int i,j,k,n,nn,low,up,mid,r;
									k=0;
									r=0;
									printf("Enter the size of the array\n");
									scanf("%d",&n);
									int arr[n];
									printf("Enter the element to the array\n");
									for (i=0;i<n;i++)
									{
										scanf("%d",&arr[i]);
									}
									for (i=0;i<n;i++)
									{
										for (j=n;j>=i;j--)
										{
										if(arr[i]>arr[j])
										{
											k=arr[i];
											arr[i]=arr[j];
											arr[j]=k;
										}
										}
									}
									printf("array after sorting\n");
									for (i=0;i<n;i++)
										{
											printf("%d\n",arr[i]);
										}
									printf("enter the number to be searched\n");
									scanf("%d",&nn);
									low=0;
									up=n-1;
									for (i=0;i<n;i++)
									{
										mid=(low+up)/2;
										if(nn>arr[mid])
										{
											low=mid+1;
										}
										else if(nn<arr[mid])
										{
											up=mid-1;
										}
										else if(nn==arr[mid])
										{
											printf("the number is present %d",nn);
											r=r+1;
											break;
										}
									}
									if(r!=1)
									{
										printf(" the entered number is not present");
									}
									  break;						
						}
					case 6:
						{
								int r1,r2,c1,c2,sum,i,j;
								sum=0;
								printf("enter the number of rows and columns in the matrix 1\n");
								scanf("%d%d",&r1,&c1);
								int mat1[r1][c1];
								printf("Enter the elemnts to the matrix 1\n");
								for (i=0;i<r1;i++)
								{
									for (j=0;j<c1;j++)
									{
										scanf("%d",&mat1[i][j]);
									}
								}
								printf("the elemnts of the matrix 1 \n");
									for (i=0;i<r1;i++)
									{
										for (j=0;j<c1;j++)
										{
											printf("%d " ,mat1[i] [j]);
										}
									printf("\n");
									}	
								printf("enter the number of rows and columns in the matrix 2\n");
								scanf("%d%d",&r2,&c2);
								int mat2[r2][c2];
								printf("Enter the elemnts to the matrix 1\n");
								for (i=0;i<r2;i++)
									{
										for (j=0;j<c2;j++)
										{
											scanf("%d",&mat2[i][j]);
										}
									}
								printf("the elemnts of the matrix 2\n");
										for (i=0;i<r2;i++)
										{
											for (j=0;j<c2;j++)
											{
												printf("%d " ,mat2[i] [j]);
											}
										printf("\n");
										}
								printf("\n");
								printf("the sum of the matrix is\n");
								for(i=0;i<r1 & i<r2;i++)
								{
									for(j=0;j<c1 & j<c2;j++)
									{
										sum=mat1[i] [j] + mat2[i] [j];
										printf("%d ",sum);
										
									}
								printf("\n");
								}	
						    break;					
						}
					default :
								{
									printf("Program choice is wrong");
								}
	    	}
		break;
		}
default :
	{
			printf("Experiment choice is wrong ");
	}
}
return 0;		
}

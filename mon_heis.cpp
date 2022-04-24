#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class area
{

   public:
    void printname()

    {

    int n,ar_ea,re_si,bill,rob,exit,choose;
     int countab = 3;

    system("cls");

    printf("-------------------------------------------------");
    printf("\n|               Created By:-                    |");
    printf("\n|              Patel Meet R.                    |");
    printf("\n|            Kanani Aayush M.                   |");
    printf("\n|                                               |");
    printf("\n|          Get in for an Experience             |");
    printf("\n-------------------------------------------------\n");

    getch();



    printf("\n1.   MANHATTAN, NEW YORK  :->\n");
    cout<<endl;
    printf("2.   SANTA ROSA, CALIFORNIA    :->\n");
    cout<<endl;
    printf("3.   SYDNEY, AUSTRALIA    :->\n");
    cout<<endl;

    cout<<"enter the area you want to choose:->\n\n";
    cin>>ar_ea;
    system("CLS");


        if(ar_ea==1)
        {
            printf("the area u entered is :->    MANHATTAN\n");
            printf("\nManhattan, the richest zip code of city, has an average income of US$879,000, and has been known to attract celebrities and young people.\n\n");

            printf("\n Choose from the Residences of Manhattan given below:->\n");

oneprintboth:   printf("1.   Woolworth Tower Residences | $79 Million   :->\n");
    cout<<endl;
    printf("2.   Madison Square Park Tower | $77.7 Million    :->\n");
    cout<<endl;
    printf("3.   The Sherry Netherland | $67 Million   :->\n");
    cout<<endl;
    printf("4.   53W53 | $63.815 Million    :->\n");
    cout<<endl;


     cout<<"enter the residency you want to choose:->";
    cin>>re_si;

    if(re_si==1)
    {

      printboth:  printf("1. JEFF BEZOS\n");
                  printf("2. BERNARD ARNAULT & FAMILY");
        printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. JEFF BEZOS\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Bezos was born Jeffrey Preston Jorgensen on January 12, 1964, in Albuquerque, the son of Jacklyn (Gise) Jorgensen and Ted Jorgensen\n");
             printf("\n=>Bezos attended River Oaks Elementary School in Houston from fourth to sixth grade\t\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto printboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __"); //preston64(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="PRESTON64")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("the password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }

    }



      if(bill==2)
        {
              printf("2. BERNARD ARNAULT & FAMILY \n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Bernard Jean Etienne Arnault (French:born 5 March 1949) is a French billionaire business magnate, and art collector. Arnault is the chairman and chief executive of LVMH Moet Hennessy Louis Vuitton SE, LVMH, the world's largest luxury-goods company.\t\n");
             printf("\n=>Arnault was born on 5 March 1949, in Roubaix, France.After graduating from the Lycee Maxence Van Der Meersch in Roubaix, Arnault was admitted to the Ecole Polytechnique in Palaiseau, from which he graduated with a M.Sc, degree in 1971\t\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto printboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __"); //roubaix1949(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="ROUBAIX1949")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("the password you entered is correct and you have succesfully breached an alarm:->");
                   printf("\t\now lets's breach another one:->\n");
                   goto oneprintboth;
                   break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }



      if(re_si==2)
    {

      sprintboth :  printf("1. BILL GATES\n");

                    printf("2. CARLOS SLIM HELU & FAMILY");

         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. BILL GATES\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Gates was born in Seattle, Washington, on October 28, 1955. He is the son of William H. Gates Sr. and Mary Maxwell Gates . His ancestry includes English and German His father was a prominent lawyer, and his mother served on the board of directors for First Interstate BancSystem and the United Way of America\n");
             printf("\n=>Gates read the January 1975 issue of Popular Electronics which demonstrated the Altair 8800, and he contacted Micro Instrumentation and Telemetry Systems  to inform them that he and others were working on a BASIC interpreter for the platform. In reality, Gates and Allen did not have an Altair and had not written code for it, they merely wanted to gauge MITS interest.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto sprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __"); //gates8800(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="GATES8800")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }

          if(bill==2)
        {
              printf("2. CARLOS SLIM HELU & FAMILY\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Carlos Slim Helu was born on 28 January 1940 in Mexico City is a Mexican business tycoon, investor, philanthropist, and engineer. From 2010 to 2013, Slim was ranked as the richest person in the world by the Forbes business magazine.\n");
             printf("\n=>Carlos Slim was married to Soumaya Domit from 1967 until her death in 1999. Among her interests were various philanthropic projects, including the creation of a legal framework for organ donation\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto sprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __"); //carlos1940(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="CARLOS1940")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }



     if(re_si==3)
    {

       tqprintboth: printf("1. WARREN BUFFET\n");
                    printf("2. AMANCIO ORTEGA");


         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. WARREN BUFFET\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Warren Edward Buffett  born on August 30, 1930 is an American business magnate, investor, and philanthropist, who is the chairman and CEO of Berkshire Hathaway. He is considered one of the most successful investors in the world and has a net worth of US 88.9 billion as of December 2019, making him the fourth-wealthiest person in the world \n");
             printf("\n=>In October 2008, Buffett invested 230 million for 10% of battery maker BYD Company which runs a subsidiary of electric automobile manufacturer BYD Auto. In less than one year, the investment reaped over 500% return.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto tqprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __"); //byd2008(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="BYD2008")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                   printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }

          if(bill==2)
        {
              printf("2. AMANCIO ORTEGA\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Amancio Ortega Gaona was born on 28 March 1936 is a Spanish billionaire businessman. He is the founder and former chairman of Inditex fashion group, best known for its chain of Zara clothing and accessories shops. As of December 2019, Ortega had a net worth of 68.3 billion.\n");
             printf("\n=>Very private about his personal life, as of 2012 he had only given three interviews to journalists. He married Rosalia Mera in 1966, and divorced in 1986. Mera died in August 2013 at the age of 69. He married his second wife Flora in 2001. He has three children.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto tqprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __"); //gaona2831936(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="GAONA2831936")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }


         if(re_si==4)
    {

         faprintboth:     printf("1. LARRY ELISON\n");
                          printf("2. MARK ZUCKERBERG");


         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. LARRY ELISON\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Lawrence Joseph Ellison born on August 17, 1944 is an American businessman, entrepreneur, and philanthropist who is a co-founder and the executive chairman and chief technology officer  of Oracle Corporation. As of October 2019, he was listed by Forbes magazine as the fourth-wealthiest person in the United States\n");
             printf("\n=>Ellison competes in yachting through Oracle Team USA. Following success racing Maxi yachts, Ellison founded BMW Oracle Racing to compete for the 2003 Louis Vuitton Cup.In 2002, Ellison's Oracle's team introduced kite yachting into the America's Cup environment. Kite sail flying lasting about 30 minutes was achieved during testing in New Zealand.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto faprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __"); //ellisonoracle(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="ELLISONORACLE")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                   printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }


          if(bill==2)
        {
              printf("2. MARK ZUCKERBERG\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Mark Elliot Zuckerberg was born on May 14, 1984  is an American internet entrepreneur and philanthropist. Zuckerberg is known for co-founding and leading Facebook, Inc. and its namesake social networking website as its chairman, chief executive officer, and controlling shareholder.\n");
             printf("\n=>Harvard student Divya Narendra accused Zuckerberg of intentionally making them believe he would help them build a social network called HarvardConnection.com later called ConnectU. They filed a lawsuit in 2004, but it was dismissed on a technicality on March 28, 2007.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto faprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __"); //connectu2004(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="CONNECTU2004")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto oneprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }

    }
}

         if(ar_ea==2)
         {

             printf("the area u entered is :->    SANTA ROSA, CALIFORNIA\n");

             printf("Santa Rosa is a metro area of half a million people located about 50 miles north of San Francisco. Most households in the metro area earn over $80,000 a year, and one in every 10 households earns at least $200,000. Like most other high-income cities, Santa Rosa is expensive.\n");

            printf("\n Choose from the Residences of Santa Rosa given below:->\n");

         twoprintboth:    printf("1.   Bennett Valley Rd  | $95 Million   :->\n");
             cout<<endl;
             printf("2.   Mark West Springs  | $92.4 Million    :->\n");
             cout<<endl;
             printf("3.   Oakmont | $83.6 Million   :->\n");
             cout<<endl;
             printf("4.   Montecito Ave | $85 Million    :->\n");
             cout<<endl;

             cout<<"enter the residency you want to choose:->\n";
             cin>>re_si;

        if(re_si==1)
    {

       fiprintboth:     printf("1. CHARLES KOCH\n");
                        printf("2. DAVID KOCH");




         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. CHARLES KOCH\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Charles Koch was born on November 1, 1935 is an American businessman, political donor and philanthropist. As of March 2019, he was ranked as the 11th-richest person in the world, with an estimated net worth of 50.5 billion.Koch has been co-owner, chairman, and chief executive officer of Koch Industries since 1967.\n");
             printf("\n=>In 1961 he moved back to Wichita to join his father's business, Rock Island Oil & Refining Company. In 1967, he became president of the business, which was then a medium-sized oil firm.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto fiprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __"); //koch1935(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="KOCH1935")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }



          if(bill==2)
        {
              printf("2. DAVID KOCH\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>David Hamilton Koch born on May 3, 1940 – August 23, 2019 was an American businessman, philanthropist, political activist, and chemical engineer. In 1970, he joined the family business: Koch Industries, the second-largest privately held company in the United States.\n");
             printf("\n=>In July 2015, David and Charles Koch were commended by both President Obama and activist Anthony Van Jones for their bipartisan efforts to reform the prison system in the United States, for nearly 10 years.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto fiprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __"); //koch10prison(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="KOCH10PRISON")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }


     if(re_si==2)
    {

       siprintboth: printf("1. SERGEY BRIN\n");
                    printf("2. JIM WALTON");





         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. SERGEY BRIN\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Sergey Brin  born on August 21, 1973 is an Russian American computer scientist and Internet entrepreneur. Together with Larry Page, he co-founded Google. Brin was the president of Google's parent company Alphabet Inc, until stepping down from the role on December 3, 2019. Brin and Larry Page will remain controlling shareholders of Alphabet.\n");
             printf("\n=>In May 2007, Brin married biotech analyst and entrepreneur Anne Wojcicki in the Bahamas. They had a son in late 2008 and a daughter in late 2011. Brin is Jewish and not religious\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto siprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __"); //wojciki2007(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="WOJCIKI2007")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}

    }

          if(bill==2)
        {
              printf("2. JIM WALTON\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>James Carr Walton born on June 7, 1948 is an heir to the fortune of Walmart, the world's largest retailer.As of November 2019, Walton was the 15th-richest person in the world, with a net worth of $53.1 billion. He is the youngest son of Sam Walton. \n");
             printf("\n=>Jim Walton was born in Newport, Jackson County, Arkansas, the third child of Walmart co-founder Sam Walton  and Helen Walton , with siblings Rob Walton, Alice Walton, and John Walton .\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto siprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __"); //arkansas7june(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="ARKANSAS7JUNE")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }


     if(re_si==3)
    {

     seprintboth:   printf("1. ALICE WALTON\n");
                    printf("2. ROB WALTON");


         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. ALICE WALTON\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Alice Louise Walton (born October 7, 1949) is an American heir to the fortune of Walmart Inc. She is the daughter of Walmart founder Sam Walton and Helen Walton, and sister of S. Robson Walton, Jim Walton and the late John T. Walton.In September 2016, she owned over US$11 billion in Walmart shares.\n");
             printf("\n=>Walton married a prominent Louisiana investment banker in 1974 at age 24, but they were divorced 2½ years later. According to Forbes Magazine, she married the contractor who built her swimming pool soon after, but they, too, divorced quickly\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto seprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __"); //banker24(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="BANKER24")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}



          if(bill==2)
        {
              printf("2. ROB WALTON\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Rob Walton was drafted in the 1969 NHL Amateur Draft by the Minnesota North Stars of the National Hockey League (NHL). He was taken in the sixth round, 61st overall. Though he was drafted into the NHL, he never played there.\n");
             printf("\n=>He spent most of his career in the minors and World Hockey Association. While in the WHA, he played for the Minnesota Fighting Saints (1973–74), Vancouver Blazers (1973–74 to 1974-75), and Calgary Cowboys (1975–76). \n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto seprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __  __  __  __"); //vancuoverblazers(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="VANCUOVERBLAZERS")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }

    }

         if(re_si==4)
    {

        eigprintboth:    printf("1. STEVE BALLMER\n");
                         printf("2. MA HUATANG");

         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. STEVE BALLMER\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Steven Anthony Ballmer born on March 24, 1956 is an American businessman and investor who was the chief executive officer of Microsoft from January 13, 2000, to February 4, 2014, and is the current owner of the Los Angeles Clippers of the National Basketball Association of NBA.\n");
             printf("\n=>Ballmer was born in Detroit ,he is the son of Beatrice Dworkin and Frederic Henry Ballmer  a manager at the Ford Motor Company. His father was a Swiss immigrant who predicted that his son, at eight years old, would attend Harvard. His mother was Belarusian Jewish.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto eigprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __"); //swissbeatrice(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="SWISSBEATRICE")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}



          if(bill==2)
        {
              printf("2. MA HUATANG\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Ma's first job was with China Motion Telecom Development, a supplier of telecommunications services and products, where he was in charge of developing software for pagers. He reportedly earned $176 per month. He also worked for Shenzhen Runxun Communications Co. Ltd. in the research and development department for Internet calling services.\n");
             printf("\n=>Along with four other classmates, Ma Huateng went on to co-found Tencent in 1998. The company's first product came after Ma participated in a presentation for ICQ, the world's first Internet instant messaging service, founded in 1996 by an Israeli company.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto eigprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __"); //tencent1998(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="TENCENT1998")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto twoprintboth;
                    break;;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }
}
          if(ar_ea==3)
         {

             printf("the area u entered is :->    SYDNEY, AUSTRALIA \n");

             printf("Sydney is among the top 10 most expensive cities in the world to live, with the cost of living now higher than in New York and London, according to a new report.A property price slump is behind the slip down to third place, according to a housing affordability survey by urban consultancy firm Demographia.\n\n");


           threeprintboth:  printf("1.   Point Piper  | $79.6 Million   :->\n");
             cout<<endl;
             printf("2.   Ku-ring-gai  | $82.4 Million    :->\n");
             cout<<endl;
             printf("3.   Woollahra | $74.9 Million   :->\n");
             cout<<endl;
             printf("4.   Waverley | $75.7 Million    :->\n");
             cout<<endl;

             cout<<"enter the residency you want to choose:->\n";
             cin>>re_si;

        if(re_si==1)
    {

        niprintboth:   printf("1. HUI KA YAN\n");
                        printf("2. SHELDON ADELSON");



         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. HUI KA YAN\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Xu Jiayin  born on 9 October 1958, or Hui Ka Yan in Cantonese, is a Chinese billionaire businessman and chairman of Evergrande Group, a Chinese real estate developer.Hui is the largest shareholder of China Evergrande Group. It has more than 700 projects in more than 240 cities in China including Beijing, Shanghai, Guangzhou and Shenzhen\n");
             printf("\n=>After university in 1982, Xu was assigned to the heat-treatment shop of Wuyang Iron and Steel Company, where he was promoted to associate director in 1983 and director in 1985. Xu served as director for seven years there.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto niprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __  __  __  __"); //1985ironandsteel(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="1985IRONANDSTEEL")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                     printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}




          if(bill==2)
        {
              printf("2. SHELDON ADELSON\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Sheldon Gary Adelson  born on August 4, 1933 is an American business magnate, investor, philanthropist, and political donor. He is the founder, chairman and chief executive officer of Las Vegas Sands Corporation, which owns the Marina Bay Sands in Singapore, and the parent company of Venetian Macao Limited, which operates The Venetian Resort Hotel Casino and the Sands Expo and Convention Center.\n");
             printf("\n=>Sheldon Gary Adelson was born in 1933 into a low-income family, His mother immigrated from England, and one of Sheldon Adelson's grandfathers was a Welsh coal miner.[12] His father drove a taxi, and his mother ran a knitting shop. \n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto niprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __"); //taxiknitting(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="TAXIKNITTING")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }

     if(re_si==2)
    {

       teprintboth: printf("1. MICHAEL DELL\n");
                    printf("2. LI KA-SHING");





         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. MICHAEL DELL\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Michael Saul Dell (born February 23, 1965) is an American billionaire businessman and philanthropist. He is the founder and CEO of Dell Technologies, one of the world's largest technology infrastructure companies. He is ranked as the 27th richest person in the world by Forbes, with a net worth of $31.0 billion as of October 2019.\n");
             printf("\n=>In July 2010 Dell Inc. agreed to pay a $100 million penalty to settle SEC charges of disclosure and accounting fraud in relation to undisclosed payments from Intel Corporation. Michael Dell and former CEO Kevin Rollins agreed to pay $4 million each and former CFO James Schneider agreed to pay $3 million to settle the charges.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto teprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __  __  __  __"); //dellrollins$100m(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="DELLROLLINS$100M")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}



          if(bill==2)
        {
              printf("2. LI KA-SHING\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Sir Li Ka-shing(born 13 June 1928) is a Hong Kong business magnate, investor, and philanthropist. As of June 2019, Li is the 30th richest person in the world, with an estimated net wealth of US$29.4 billion.He is the senior advisor for CK Hutchison Holdings,after he retired from the Chairman of the Board in May 2018\n");
             printf("\n=>Li was born in Chao'an, Chaozhou in Guangdong Province in 1928 to Teochew parents. Owing to his father's death, he was forced to leave school before the age of 15 and found a job in a plastics trading company where he worked 16 hours a day. In 1950 he started his own company, Cheung Kong Industries.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto teprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __"); //cheung kong(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="CHEUNGKONG")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                   printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }

     if(re_si==3)
    {

       eleprintboth:  printf("1. LEE SHAU KEE\n");
                      printf("2. JOHN MARS");






         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. LEE SHAU KEE\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Lee Shau-kee GBM born 7 March 1929 in Shunde, Guangdong, China is a Hong Kong-based real estate tycoon and majority owner of Henderson Land Development, a property conglomerate with interests in property, hotels, restaurants and internet services.\n");
             printf("\n=>Since 2006, Lee has accrued substantial profits from his holdings of Mainland-controlled stocks. This return on investment has earned him nicknames including Hong Kong's Buffett and Asias Master of Stock \n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto eleprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __"); //buffet2006(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="BUFFET2006")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}



          if(bill==2)
        {
              printf("2. JOHN MARS\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>John Mars is a Canadian singer, songwriter, and percussionist,Mars began his musical training at Sykes Music in Brantford, Ontario where he studied the drums with Carl Lemke. In the late 1960s, he played the drums in the band John Mars and the Martians with bassist Kevin Cosman and guitarist Stan Baka.\n");
             printf("\n=>In 1988 Mars began performing in the Ontario area with guitarist David Essig. In the mid-90's he met guitarist Mike Ardelli and the two began performing with their mutual pal drummer Glenn Kimberley in an ad hoc group called the Natural Born Lovers.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto eleprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __  __  __  __  __  __"); //naturalbornlovers(in capital letters)



                int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="NATURALBORNLOVERS")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
       }
    }


         if(re_si==4)
    {

      twelprintboth:    printf("1. DIETER SCHWARTZ\n");
                        printf("2. WANG JIANLIN");






         printf("\nenter any no. of your choice from above:->\n");

        cin>>bill;

        if(bill==1)
        {
              printf("1. DIETER SCHWARTZ\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Dieter Schwarz (born 24 September 1939) is a German billionaire businessman, and owner of the Schwarz-Gruppe. He is the chairman and CEO of the supermarket chain Lidl, and the hypermarket chain Kaufland. \n");
             printf("\n=>In 1973, Dieter Schwarz joined the Lidl & Schwarz KG business of his father Josef Schwarz and opened the company's first discount supermarket, inspired by the brothers Albrecht.After his father died in 1977, he took control of the discount chain.\n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto twelprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __  __"); //lidlkaufland(in capital letters)



                 int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="LIDLKAUFLAND")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }


                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }



                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }
            }
		}



          if(bill==2)
        {
              printf("2. WANG JIANLIN\n");

             printf("DOSSIER ABOUT HIM:->\n");
             printf("\n=>Wang Jianlin  pinyin: Wang Jianlin; born 24 October 1954 is a Chinese billionaire businessman, politician, and philanthropist. He is the founder of Dalian Wanda Group, China's largest real estate development company, and the world's largest movie theater operator\n");
             printf("\n=>His company owns 21.57 million square metres of investment property, 168 Wanda Shopping Plazas, 82 luxury hotels, 213 cinemas, 99 department stores, and 54 karaoke centres around China. \n");
             printf("\nNow, If you want to break through the house then, Choose 1.");
             printf("\nIf you want to go back to previous menu then, Choose 2.\n");
             cin>>choose;
             if(choose==2)
              {

                      goto twelprintboth;
              }

              printf("NOW THE GAME STARTS:-> GOOD LuCk !!!!<-:");

                string pass;

              printf("\t__  __  __  __  __  __  __  __  __  __  __"); //dalianwanda(in capital letters)



                int attemptCount=0;

                while(attemptCount < 4)
            {
                    printf("\t\nEnter the password in capital letters only:->");
                    cin>>pass;

                    attemptCount++;

                if (attemptCount == 3)
                {
                    cout<<"\t\nToo many login attemps! U HAVE BEEN ALL CAUGHT UP AND 911 HAS BEEN CALLED:-<";
                    break;

                }

                if(pass!="DALIANWANDA")
                {
                    countab--;
                    cout<< "\n\nyou only have " << countab  <<" attempts left:->";


                    cout<<endl;
                }

                else
                {
                    printf("\t\nthe password you entered is correct and you have succesfully breached an alarm:->");
                    printf("Now lets's breach another one:->\n");
                    goto threeprintboth;
                    break;
                }




            }
       }
    }






}



    cout<<ar_ea;
    }
};

  int main()
    {
        area obj;

     obj.printname();

    return 0;

   }




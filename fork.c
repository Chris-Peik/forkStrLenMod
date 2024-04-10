#include <stdio.h>
#include <unistd.h>
#include <string.h>


int tareas(int pr);

int main (){
    
    int pid,pid1;
    int proc = 0;

    char nom[] = "Christopher Dennis Nunez Ramirez";
    //printf("%s\n",nom);

    int size = strlen(nom);
    //printf("%d\n",size);

    int modu= size % 2;
    //printf("%d",modu);

    switch (modu) {
    case 0:
        int i, j;
        for(i = 0; i < 2; i++){
            printf("*%d*\n",i);
            proc=proc+1;
            pid=fork();
    	    if (pid==0){
                proc=proc+1;
	    	    printf("[Hijo] ID=%d idPadre=%d \n",getpid(),getppid());
                tareas(proc);
                int ctrl=0;
                if(ctrl==1){
                    printf("No ctrl");
                }else{
                    j=0;
                    while(j!=2){
                        printf("Entrando a crear hijos %d",j);
                        proc=proc+1;
                        pid1=fork();
                        if(pid1==0){
                            printf("[HijoSUB] ID=%d idPadre=%d \n",getpid(),getppid());                            
                            tareas(proc);
                            j=j+1;

                        }
                        printf("$$%d$$",j);
                    }
                    ctrl=1;
                }
	        }
    	    else{
		        printf("[Padre] ID=%d idPadre=%d \n",getpid(),getppid());
                tareas(proc);
                break;
	        }
        }
        break;
    
    case 1:

        break;
    }
}

int tareas(int pr){
    switch (pr){
        case 1:
            printf("Proceso [%d]\n",pr);

        break;
        case 2:
            printf("Proceo [%d]\n",pr);
            break;
        case 3:
            printf("Proceso [%d]\n",pr);
            break;
        case 4:
            printf("Proceso [%d]\n",pr);
        break;
        case 5:
            printf("Proceso [%d]\n",pr);
        break;
        case 6:
            printf("Proceso [%d]\n",pr);
        break;
        case 7:
            printf("Proceso [%d]\n",pr);
        break;
    }
    return 0;
}

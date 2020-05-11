#include <stdio.h>
#include <stdlib.h>

//Questão 1

int main(){
	int i,c;
	printf("insira numero:\n");
	scanf("%d",&i);
		while(i!=0){
            c=i;
			if(i<c){
			  c=i;
			  printf("insira numero:\n");
			  scanf("%d",&i);
			}
			else{ 
				if(i==c){
					c==i;
			}
				else printf("insira numero:\n"); scanf("%d",&i);
                	 scanf("%d",&i); 
              }
		}
    printf("o maior numero e:%d\n",c);
return 0;
}

//Questão 2

int main(){
    double soma = 0;
    int n = 0;
    while(1) {
        int num;
        scanf("%d", &num);
        if(num == 0) break;
        soma += num;
        n++;
    }
    double media = soma / n;
    printf("Media: %.5f\n",media);
return 0;
}

//Questao 3

int main(){
	int maior,smaior,num;
	printf("colocar numero:\n");
	scanf("%d",&maior);
	scanf("%d",&num);
	if(num>maior){
		smaior=maior;
		maior=num;
	} else smaior = num;
	while(1){
		scanf("%d",&num);
		if(num == 0) break;
		if(num>maior){
			smaior=maior;
			maior=num;
		} else if (num>smaior)smaior=num;
	}
	printf("o segundo maior é:%d\n",smaior);
return 0;
}

//questao 4

int bitsUm (unsigned int n){
    int r = 0;
    while(n > 0) {
        r += (n % 2);
        n /= 2;
    }
    return r;
}

//Questao 5

int trailingZ (unsigned int n){
  if(n % 2) return 0;
    else return 1 + trailingZ(n / 2);
}

//Questao 6

int qDig (int n) {
    if(n/10<1)return 1;
    else return 1 + qDig(n/10);
}

//Questao 7

char *mystrcat(char s1[], char s2[]){
    int i=0,r=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[r]!='\0'){
        s1[i]=s2[r];
        r++;
        i++;
    }
    s1[i]='\0';
    return s1;
}

//Questao 8

char *mystrcpy(char s1[], const char s2[]) {
    int i;
    for(i=0;s2[i]!='\0';i++){
        s1[i] = s2[i];
    }
        s1[i]='\0';
    return s1;
}

//Questao 9

int mystrcmp(char s1[], char s2[]){
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i])
        i++;
    if(s1[i]<s2[i])return (-1);
    else if(s1[i]>s2[i])return 1;
         else return 0;
}

//Questao 11

void strrev (char s[]) {
    int i=0,j=0,z;
    while(s[i]!='\0')i++;
    i--;
    while(j<i){
        z=s[i];
        s[i]=s[j];
        s[j]=z;
        j++;
        i--;
        
    }
return s;
}

//Questao 12

void removeIndex(char* s) {
    for(; *s; s++)
        *s = *(s+1);
}

void strnoV (char s[]) {
    while(*s) {
        if(*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' || *s == 'a'
        || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u') removeIndex(s);
        else s++;
    }
}

//Questao 13


void removeIndex(char* s) {
    for(; *s; s++)
        *s = *(s+1);
}

void truncW (char t[], int n){
    int wordLen = 0, i = 0;
    char c;
    while(c = t[i]) {
        if(c == ' ' || c == '\n' || c == '\t') {i++; wordLen = 0;}
        else {
            if(wordLen++ >= n) removeIndex(t + i);
            else i++;
        }
    }
return t;
}

//Questao 14

int conta(char s[],char x){
    int i,r=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==x)r++;
    }
return r;
}

char charMaisfreq (char s[]) {
    int i,x,f=0;
    char r;
    for(i=0;s[i]!='\0';i++){
        x=conta(s,s[i]);
        if(x>f){
            r=s[i];
            f=x;
        }
    }
    
    return r;
}

//Questao 15

int iguaisConsecutivos (char s[]){
	int consec = 1, max = 0;
    for(int i = 0; s[i]; i++) {
        if(s[i] == s[i + 1]) consec++;
        else {
            if(consec > max) max = consec;
            consec = 1;
        }
    }
return max;
}

//Quesato 16  **Esudar melhor essa funçao**

int not_in_prev(char str[], int k, int n) {
    int i, ans = 1;
    for(i = k; i < n; i++) {
        if(str[i] == str[n]) {
            ans = 0;
            break;
        }
    }
    return ans;
}

int difConsecutivos(char s[]) {
    int i, j, ans = 0;
    for(i = 0; s[i]; i++) {
        int consec = 0;
        for(j = i; s[j]; j++) {
            if(not_in_prev(s,i,j)) consec++;
            else break;
        }
        if (consec > ans) ans = consec;
}
return ans;
}

//Questao 17

int maiorPrefixo (char s1 [], char s2 []) {
    int i;
    for(i = 0; s1[i] == s2[i] && s1[i]!='\0'; i++);
    return i;
}

//Quesatao 18

int maiorSufixo (char s1 [], char s2 []) {
    int i,j,r=0;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++);
    i--;j--;
    while(s1[i]==s2[j]){
        i--;
        j--;
        r++;
    }
    
return r;
}

//Questão 19

int sufPref (char s1[], char s2[]) {
    int i,j=0,r=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[j]){
            j++;
            r++;
        }
        else r = j = 0; //o r tem que zerar dnv
    }

    return r;
}

//Questao 20


int contaPal (char s[]) {
    int inWord = 0, total = 0, i;
    for(i = 0; s[i]!='\0'; i++) {
        if(s[i] == ' ' || s[i] == '\n'){
            if(inWord) total++;  //inWord é tipo um booleano
            inWord = 0;
        }
        else inWord = 1;
    }
    if(inWord) total++; //se o inWord tiver com o valor 1, ele soma no total, se não ele não faz nada
return total;
}

//Questao 21


int contaVogais (char s[]) {
    int total = 0,i;
    for(i = 0; s[i]!='\0'; i++) {
        switch(s[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                total++;
        }
    }
return total;
}


//Questão 22 

int contida (char a[], char b[]) {
    int cont = 1,i,j,pertence;
    for(i = 0; a[i]; i++) {
        pertence = 0;
        for( j = 0; b[j]; j++) {
            if(a[i] == b[j]) pertence = 1;
        }
        if(!pertence) {
            cont = 0;
            break;
        }
    }
return cont;
}

//Questão 23

int palindroma (char s[]) {
    int len = 0, pal = 1,i;
    for(i = 0; s[i]; i++) len++;
    len--; // tem que diminuir 1 porque está no char '\0'
    for(i = 0; s[i]; i++){
    	if(s[i] != s[len - i]) pal = 0;
    }
return pal;
}

//Questão 24

int remRep (char x[]) {
    if(!x[0]!='\0') return 0; // ! operador de negação
    int i = 1;
    char prox = x[0];
    while(x[i]!='\0') {
        if(x[i] == prox) removeIndex(x + i);
        else prox = x[i++];
    }
return i;
}

int removeIndex(char *s){
    for(;*s;s++){
        *s = *(s+1);
    }
}

//Questao 25

int limpaEspacos (char t[]) {
    int i = 0, j;
    int prevSpace = 0;
    while(t[i]) {
        if(t[i++] == ' ') {
            if(prevSpace) for(j = --i; t[j]; j++) t[j] = t[j + 1];
            else prevSpace = 1;
        }
        else prevSpace = 0;
    }
    return i;
}

//Questão 26

void insere (int v[], int N, int x) {
    int i,j;
    for(i = 0; i < N; i++) {
        if(v[i] > x) {
            for( j = N; j > i; j--) {
                v[j] = v[j - 1];
            }
            v[i] = x;
            break;
        }
        if(i == N - 1) {
            v[N] = x;
        }
    }
}

//Questão 27

   void merge (int r [], int a[], int b[], int na, int nb) {
    int i = 0, j = 0, k = 0;
    while(k < na + nb) {
        if((a[i] < b[j] && i < na) || j >= nb)
            r[k++] = a[i++];
        else
            r[k++] = b[j++];
    }
}

//Questão 28

 int crescente (int a[], int i, int j) {
    int cresc = 1,k;
    for(k = i; k < j; k++) {
        if(a[k + 1] < a[k]) cresc = 0;
    }
return cresc;
}

//Questão 29

int retiraNeg (int v[], int N) {
    int i = 0,j;
    while(i < N) {
        if(v[i] < 0) {
            for(j = i; j < N; j++) v[j] = v[j + 1];
            N--;
        }
        else i++;
    }
return N;
}

//Questão 30

int menosFreq (int v[], int N) {
    int freq = 1, minFreq = N, ans = v[0], i;
    for(i = 1; i < N; i++) {
        if(v[i] == v[i - 1]) freq++;
        if(v[i] != v[i - 1]) {
            if(freq < minFreq) {
                minFreq = freq;
                ans = v[i - 1];
            }
            freq = 1;
        }
    }
    if(freq < minFreq) {
        minFreq = freq;
        ans = v[i - 1];
    }
    return ans;
}

//Questão 31

   int maisFreq (int v[], int N){
       int freq = 1 ,maisFreq = 0 ,ans = v[0],i;
       for(i = 1;i<N;i++){
           if(v[i]==v[i-1])freq++;
           if(v[i]!=v[i-1]){
               if(freq>maisFreq){
                   maisFreq=freq;
                   ans = v[i-1];
               }
               freq=1;
           }
       }
       if(freq>maisFreq){
                   maisFreq=freq;
                   ans = v[i-1];
       }     
return ans;
}

//Questão 32

   int maxCresc (int v[], int N) {
       int freq = 1,i,ans = 0;
       for(i = 1; i<N; i++){
           if(v[i]>=v[i-1])freq++;
           if(v[i]<v[i-1]){
               if(freq>ans){
                   ans = freq;
               }
               freq = 1;
               
           }
       }
          if(freq>ans){
            ans = freq;   
          }
return ans;
 }

//Questão 33

int elimRep (int v[], int N) {
    int i = 1,j;
    while(i < N) {
        int belongs = 0;
        for( j = 0; j < i; j++) {
            if(v[i] == v[j]) belongs = 1;
        }
        if(belongs) {
            for( j = i; j < N; j++) {
                v[j] = v[j + 1];
            }
            N--;
        } else i++;
    }
    return N;
}

//Questão 35

int comunsOrd(int a[],int na,int b[],int nb){
	int ans=0,i=0,j=0;
	while(i<na && j<nb){
		if(a[i]==b[j]){
			ans++;
			i++;
			j++;
		}
		else if(a[i]>b[j])j++;
			 else i++;
	}
return ans;
}

//Qeustao  36

int comuns(int a[],int na,int b[],int nb){
	int ans=0,i,j;
	for(i=0; i<na; i++){
		int belongs = 0;
		for(j=0; j<nb; j++){
			if(a[i]==b[j]) belongs = 1;
		}
		if(belongs) ans++;
	}
return ans;
}

//Questão 37

int minInd(int v[],int n){
	int min = 0,i;
	for(i=0;i<n;i++){
		if(v[i]<v[min]) min = i;
	}
return min;
}


//Questão 38

void somaAc(int v[],int Ac[],int N){
	int i,j;
	for(i=0;i<N;i++){
		Ac[i] = 0;
		for(j=0;j<N;j++){
			Ac[i] += v[j];
		}
	}
}

//Questao 39

int triSup(int N,float m[N][N]){
	int x = 1,i,j;
	for(i=0;i<N;i++){
		for ( i = 0; i < N;i++){
			if (m[i][j])x=0;
		}
	}
return x;
}

//Questao 40

void transposta (int N, float m[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            float temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
}

//Questao 41

void addTo (int N, int M, int a[N][M], int b[N][M]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            *(*(a + i)+j) += b[i][j];
        }
    }
}

//Questao 42

int unionSet (int N, int v1[N], int v2[N], int r[N]) {
    int len = 0;
    for(int i = 0; i < N; i++) {
        r[i] = v1[i] || v2[i];
        len += r[i];
    }
    return len;
}

//Questao 43

int intersectSet (int N, int v1[N], int v2[N],int r[N]) {
    int len = 0;
    for(int i = 0; i < N; i++) {
        r[i] = v1[i] && v2[i];
        len += r[i];
    }
    return len;
}

//Questao 44

int intersectMSet (int N, int v1[N], int v2[N],int r[N]) {
    int len = 0;
    for(int i = 0; i < N; i++) {
        r[i] = v1[i] < v2[i] ? v1[i] : v2[i];
        len += r[i]; 
    }
    return len;
}

//Questao 45

int unionMSet (int N, int v1[N], int v2[N], int r[N]) {
    int len = 0;
    for(int i = 0; i < N; i++) {
        r[i] = v1[i] > v2[i] ? v1[i] : v2[i];
        len += r[i]; 
    }
    return len;
}

//Questao 46

int cardinalMSet (int N, int v[N]) {
    int len = 0;
    for(int i = 0; i < N; i++) len += v[i];
    return len;
}

//Questao 47

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
} Posicao;

Posicao posFinal (Posicao inicial, Movimento mov[], int N) {
    for(int i = 0; i < N; i++) {
        Movimento x = mov[i];
        if(x == Norte) inicial.y++;
        if(x == Este) inicial.x++;
        if(x == Sul) inicial.y--;
        if(x == Oeste) inicial.x--;
    }
    return inicial;
}

//Questao 48

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N) {
    int* xi = &inicial.x;
    int* yi = &inicial.y;
    int xf = final.x, yf = final.y, i;
    for(i = 0; i < N; i++) {
        if((*xi) < xf) {
            (*xi)++;
            mov[i] = Este;
        }
        else if ((*xi) > xf) {
            (*xi)--;
            mov[i] = Oeste;
        } 
        else if ((*yi) < yf) {
            (*yi)++;
            mov[i] = Norte;
        }
        else if ((*yi) > yf) {
            (*yi)--;
            mov[i] = Sul;
        }
        else break;
    }
    if(inicial.x != final.x || inicial.y != final.y) return -1;
    else return i;
}

//teste 








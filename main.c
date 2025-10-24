#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 // list simple /normale :
typedef struct da {
    int data;
    struct st * suivant;
}da;

//FONCTION dcla allocayion intialisation:
da * cda ( int donn){
    da * nda;
    nda = (da*)malloc(sizeof(da));
    nda -> data = donn;
    nda -> suivant = NULL;
    return nda;
}
void affich(da * t){
    da * count =t;
    while(count != NULL){
        printf("%d",count->suivant);
        printf("%\t");
        count = count->suivant;

    }
}
// insertion  the element au bergier
da * ajoutaudebut ( da * t , int valeur ){
    da * naisnertion = (*da )malloc(sizeof(da));
    nainsertion ->valeur = valeur ;
    nainsetion -> suivant = NULL;
    if (t != NULL )
    {
        nainsertion ->suivant = t  ;
        t = nainsertion ;
        return valeur;
    }
}
// la suppression  d'un element a la fin :
da * lasuppressionaufin( da * t ){
    if (t = NULL )
    {
        printf ("LA LIST EST VIDES ");
        return NULL;
    }
    // LE CAS SI LA LIST CONSTITUE UN ELEMENTS 
    da * courant =t ;
    if (courant ->suivant == NULL );
    {
        free(courant);
        return NULL;
    }
    // DB SI LA LIST EST 3AMRA
    while (courant -> suivant != NULL)
    {
        courant ->courant = NULL;
    }
    free( courant ->suivant);
    courant ->suivant = NULL;
    return t ;
}
// la suppression au milieu 
noeud * suppressionaumilieux ( noeud * t , int position ){
    if (t == NULL)
    {
        printf ("LA LIST EST VIDES ");
        return NULL;
    }
    // la verification du la position 
    int taille = taille( t );
    while ( taille < 1 || position > taille )
    {
        printf ("LA POSITION NOT FOUND ");
        return NULL;
    }
    // IF LA POSITION EST EGALE 1 
    noeud * courant = t ;
    if (position == 1)
    {
        t = t -> suivant ;
        free (courant);
        return t ;
    }
    // SI LA POSITION AU MILIEUX
    noeud * temp = t ; 
        for (int i = 0; i < taille - 1; i++)
        {
            courant = courant -> suivant;
        }
        temp = count -> suivant ;
        courant -> suivant = temp -> suivant ;
        free(temp);
        return t;
}
// la modification du la list au debut
 noeud * modifieaudebut ( noeud * t , int donn){
    if (t == NULL)
    {
       printf ("la list est vide");
       return NULL;
    }
    t -> data = donn;
    return t;
 }
//  la supression d'un element au fin 

int main(){

    da * t = NULL;
    da *  p =cda(23);
    da *  d =cda(43);
    da *  q =cda(765);


    t = p;
    p -> suivant=d;
    d -> suivant=q;
    q -> suivant=NULL;
    

    t = suppressionaumilieux(t , 2 );

 return 0;
}
 
//  la supperssion au a la fin 
da * lasuppressionAlafin ( da * t){
    if (t == NULL)
    {
        printf("la list etait vides");
        return NULL;
    }
    // Le cas de d'un element est dans la 1er list safi 
    da  * courant = t ;
    if ( courant ->suivant == NULL)
    {
        free(courant);
        return t;
    }
    // le cas si la list etait plaines
    while ( courant -> suivant = NULL)
    {
        courant = courant -> suivant ;
    }
    free ( courant -> suivant);
    courant ->suivant = NULL;
    return t ;
}
// l'autre cas de la suppression de L'element du la list 
da * lasuppressionaumilieux (da * t ;int position ){
    if (t == NULL)
    {
        printf("la list etait vides ");
        return NULL ;
    }
    // Le cas de la verification du position
    int taille = LaTailleDeList( t );
    while ( position > 0 || position > taille );
    {
        printf( " La aille que tu posse est not found ");
        return NULL;
    }
    // le cas si l'element dans 1er 
    da * courant = t; 
    if( position ==1  ){
        courant = courant -> suivant ;
    }
    t = t -> suivant ;
    free(courant)
    return t ;
    // cas du milieu
    da * temp = t;
    for ( i = 0 , i < taille -1 , i++){
        courant = courant -> suivant ;
    }
    temp = courant -> suivant ;
    courant ->suivant = temp -> suivant ;
    free( temp);
    return t;
}
//  la suppression the list au milieux 
da * modificationaumilieudelalist ( da * t , int position , int nouvauxelement ){
    if (t == NULL)
    {
        printf ( " la list etait vides ");
        return NULL; 
    }
 
    if (position == 1 )
    {
        t = t -> suivant;
    }
    ;
    return NULL;
    // le verification de la position 
    int taille = tailleDeLalist ( t );
    while ( position < 1  || position > taille  )
    {
        printf ("la taille the list not found");
        return NULL;
    }
    da * temp = t ;
    for ( i = 0; i < taille -1 ; i++)
    {
        courant = courant -> suivant ;
    }
    temp = courant -> suivant ;
    courant ->suivant = temp -> suivant ;
    free( temp ); 
}

// la modification the list au milieux de la list
da * laModificationAufin ( da * t , int position , int nouvelement){
    // Le cas de la list est vides  si la list etait vides nouvelement va enter dans la list 
    if (  t == NULL )
    {
        printf ( " la list et vides ");
        return NULL ; 
    }
    t -> data = nouvelement ; 
    return t ;
    // la verification the list 
    int taille = lataille ( t );
    while (  position <1 || position > taille )
    {
        printf ( " la position not found ");
        return NULL;
    }
    // LE cas de position = 1 
    if (position  == 1 )
    {
        t -> data = nouvelement ;
        return t ;
    }
    //  LES cas libghina 
    da * courant = t ;
    for ( i = 0; i < position - 1; i++)
    {
        // MOVES TO THE NEXT NODE 
        courant = courant -> NULL; 
    }
    courant -> data = nouvelement ;
    return t ; 
}
// -------list simplement chainee circulaire 
//  risqu pour les boucle 
// dificiele a gerer a la fin de la list 
    
int main(){

    da * t = NULL;
    da *  p =cda(23);
    da *  d =cda(43);
    da *  q =cda(765);


    t = p;
    p -> suivant=d;
    d -> suivant=q;
    q -> suivant=p;

    afficherListe( t );
    int taille = LaTaille( t );

    int valeur ;
    printf ( " enter la valeur ");
    scanf("%d", &valeur );
    da * resultat = ( da * t , valeur);
    if (resultat != NULL)
    {
        printf ("element %d est trouve",valeur  );
    }
    else
        printf ("elemet edt non trouve ");
}
-------------------------------------------------------------------------------------------------------------------
// le programmes scondaire
typedef struct da {
    int data;
    struct st * suivant;
}da;

//FONCTION dcla allocayion intialisation:
da * cda ( int donn){
    da * nda;
    nda = (da*)malloc(sizeof(da));
    nda -> data = donn;
    nda -> suivant = NULL;
    return nda;
}
// l'affichager de la list chainees circulaire :
// la verification de la list vide 
// initialiser un pointeur courant 
// parcourir la list par do while
// reveines a la tete 

void afficherListe( da * t  ){ 
    if (t == NULL)
    {
        printf ( " la list est vides ");
    }
    else 
    {
        da * courant = t ; 
        do
        {
            printf ("%d", courant -> data);
            courant = courant -> suivant ;
        } while ( courant != t );
        
    }
}
//  calculer la taille de la list 
da * LaTaille ( da * t ){
    if ( t == NULL)
    {
        printf ("la list est vides ");
        return NULL;
    }
    
    int coumpteur = 0 ;
    da  * courant = t ;
    do
    {
        courant = courant -> suivant;
        coumpteur ++ ;
    } while (courant !=  t );
    return coumpteur;
}
// LA recherch de la element de la list 
da * findelement( da  * t , int valeur  ){
    if (t == NULL )
    {
        printf( " la list est vides")
    }
    da * courant = t ; 
    do
    {
        if (courant ->data == valeur )
        {
            return courant ;
        }
        courant = courant ->suivant ;
    } while (courant != t );
    return NULL; 
}
// l'insertion de element au debut
da * ajout( da  *  t ,int nouvelement ){ 
    da * nouvNoeud  = ( da *)malloc( sizeof(da));
    nouvNoeud -> data = nouvelement ;
    if (t == NULL)
    {
        nouvnoud -> suivant = nouvelement ;
        return nouvNoeud  ; 
    }
    da  * courant = t ;
    // parcourir tout element pour touve la dernier noeud 
    // sinon on parcourt la list pour trouver le dernier noeud (celui dont le pointeur suivant point sur la tete )
    while (courant ->suivant != t )
    {
        courant = courant -> suivant ;
    } 
 nouvelement ->suivant = t   ;
    courant ->suivant = nouvNoeud ;
    return nouvNoeud  ;
}
// AJOUT A LA FIN DE LA LIST 
//  4 mise a jour des pointeurs :  le dernier noeud de la list est mis pour poiter sur le nouveux noeud 
// le nouveaux noeud pointe sur la tete pour completer la boucle circulaire 
da * ajoutalafin ( da * t , int nouvNoeud  ){
    da * nouvNoeud  = ( da *)malloc( sizeof(da));
    nouvNoeud -> data = nouvelement ;
    if (t == NULL)
    {
        nouvnoud -> suivant = nouvelement ;
        return nouvNoeud  ; 
    }
    da * courant = t ;
    while (courant ->suivant  != t  )
    {
        courant = courant -> suivant ;
    }
    /* allouer et initiallser le nouveau noeud 
    si la list est vides ghadi nrad nouelement 
    parcours pour trouve le dernier noeud par while     */
}
// LA LIST SIMPLEMENT CHAINEES CIRCULAIRE 
/*  
Allouer et initialiser le nouveau noeud : 
si la list est vides : Si la list est vides le nouvaux noeud pointer sur lui meme 
3 parcours pour trouver la dernier noeud : sinon on parcourt la list pour trouve le dernier noeud ( celui dont le pointe sur la tete )
4 mise a jour des pointeurs : le nouveau noeud sur l'ancienne tete et devient le nouvelle tete de la list 
le dernier noeud de la list est mis a jour pour pointer sur le nouveux noeud
5 retourner la nouvelle tete : LA fonction retour
*/
da * ajoutaudebut ( da * t , int nouvelement ){
    da * nouvNoeud = ( da *)malloc( sizeof (da))
    nouvNoeud -> data = nouelement ;
    if (t == NULL)
    {
        nouvNoeud -> suivant = nouvelement ;
        return nouvNoeud ;
    }
    da  *  courant = t ;
    while (courant -> suivant != t)
    {
        courant = couant -> suivant ;
    }
    courant ->suivant = nouvNoeud ;
    nouvNoeud -> suivant = t ;
    return nouvNoeud ;
}
// ajout a la fin de la list 
da * ajoutAlaFin ( da * t , int element){
da * nouvnoeud = (*da)malloc(sizeof(da))
nouvnoeud -> data = element ;
if (t == NULL)
{
    nouvnoeud  -> suivant = NULL;
    return nouvnoeud ;
}
da * courant = t ;
while (courant ->suivant != NULL)
{
    courant = courant -> suivant ;
}
courant -> suivant = nouvnoeud;
nouvnoeud ->suivant = t ;

return nouvnoeud ;
}
// les cas d'ajout au milieux de la list chainees ciculiaer
da * ajoutaumilieu ( da * t , int position ,int element ){
    da * nouvnoeud = (da *)malloc(sizeof( da ));
    if (t == 0)
    {
        nouvnoeud ->data = element ;
        nouvnoeud ->suivant = NULL;
    }
    // La verification de la position 
    int taille  = tailledelist ( t );
    while ( position < 1 || position > taille  )
    {
        printf ( " la position not found ");
        free (  nouvnoeud );
        return  t ;
    }
    // le cas de si la position = 1
    if (condition)
    {
        da * courant  = t ; 
        while (courant-> suivant != t )
        {
            courant = courant -> suivant ;
        }
        nouvnoeud ->suivant = t ;
        courant -> suivant = nouvnoeud ;
        return nounoeud ;
    }
    // le cas de milieu 
    for ( i = 0; i < taille - 1 ; i++)
    {
        courant = courant ->suivant ;
    }
    nouvnoeud ->suivant = courant -> suivant ;
    courant ->suivant = nouvnoeud ;
    return t;
}
// suppression au debut de la list 
da * suppaudebut ( da * t  ) {
    if (t == 0 )
    {
        printf ( " la list est vides ");
        return NULL;
    }
    // Le cas si la list constitue un seul element 
    if (t -> suivant == t )
    {
        free( t )
        return NULL; 
    }
    // le cas si la list constitue plusieur element mais je veus 1er 
    da * courant = t ;
    da * temp = t ;
    while (courant ->suivant != t )
    {
        courant = courant -> suivant;
    }
    temp = t -> suivant ;
    courant ->suivant = temp -> suivant ;
    free ( temp);
    return temp;
}
// la suppression a la fin 
da * suppaufin ( da * t ){
    if (t == 0 )
    {
        printf ( " la list est vides ");
        return NULL;
    }
    da * courant = t;
    if (courant -> suivant == t)
    {
        free ( t );
        return NULL;
    } 
}

----------------------ex------------------------------------------------
typedef struct st {
    int ag;
    int moy;
    char nom[50];
    struct st*suivant;
}st;
st * cst( int nom, int moy, int ag){
    st * nost=(st*)malloc(sizeof(st));
    strcpy(nost->nom,nom);
    nost->moy=moy;
    nost->ag=ag;
    nost->suivant=NULL;
return nost;
}

//fonction d'affichage :
void affich(st * t){
    st*courant=t;
    int op = 0;
    while(courant != NULL){
        printf("%d",courant -> ag);
        printf("%d",courant -> moy);
        printf("%s",courant -> nom);
        courant = courant -> suivant;
        int x = op;
        op ++;
        printf("%d",x);
    }

}
// le taille  de la list 
int tail (st * t){
    st * count =t;
    int conteur =0;
        while (count !=NULL)
        {
            count =count->suivant;
            conteur ++;
            return conteur;
        }
}
// la recherch the output 
st * find( st * t ,int valeur){
    st * count = t ;
    while (count != NULL)
    {
       if ( count-> ag == valeur ){
           printf("l'element cherch %d",count);
           count = count->suivant;
        return count;
        }
    }
} 
// la fonction qui inser l'element dans list au debuts 
st * ins( st * t, int ele){
    st * nouins;
    nouins = (st*)malloc(sizeof(st));
    nouins ->ele = ele;
    nouins ->suivant = NULL;
        if(t != NULL){
            nouins -> suivant = t; 
        // ghi iht fe jedid la valeur dyall l9dim 
        t = nouins;
        return t;  
        }
}
// la fonction qui inser l'element dans list a la fin
st * insertion( st * t , int valeur )
{
    st * count =t;
    st * nouinsertion;
    nouinsertion = (*st)malloc(sizeof(st));
    nouinsertion -> valeur = valeur;
    nouinsertion -> suivant = NULL;

    while( count -> suivant != NULL ) 
    {   
        // comme i++;
        // bash nedoz next valeur ok !
        count =count -> suivant ;
        // dba  khasni npointe veres nouinsertion ok !
        count -> 

    }
}
// fonction qui inser l'element au milieux


// le programme prinple :

int main(){
    st*t;
    st*p=cst("zaki",15.23 , 15);
    st*de=cst("ali",15.64623 ,16);
    st*qe=cst("alix",747.23 ,13);
//lie
    t = p;
    p-> suivant = de;
    de-> suivant = qe;
    qe->suivant=NULL;

// affich la list de A --- Z 
    affich(t);
// output pour la fonction de taill 
    printf("%d",tail);
// fonction find for element 
    int resultat = st * find( t , valeur);
    printf ("la valeur cherch est %d",resultat);
// pour l'insertion des element dans la list au debut 
// parametre de la fonction 
    t = ins(t , /* la valeur d'element qui tu peux inser*/ 98);

   return 0;
}















 




 // list doubly :
typedef struct node {
	struct node * prev ;
	struct node * next ; 
	int dat ;
} no ;
   // creation and insertion (debut)
no  * creenoeud ( no * t , int data1 ){
	no * nouvnoeud = (no *)malloc( sizeof( no));
	nouvNoeud -> prev =NULL; 
	nouvNoeud -> next =NULL; 
	nouvNoeud-> data =data1;
	head = nouNoeud;
	return head ;
}
// how to insertion a node at the beginning :
no  * addtoempty ( no * t , int data1 ){

	if (head->next == 0 || head->prev == 0 )
	{
		printf( "list it's vides");
		return(NULL);
	}
	no * nouvnoeud = (no *)malloc( sizeof( no));
	nouvNoeud -> prev = NULL;
	nouvNoeud ->data =data1; 
	nouvNoeud -> next = NULL;
	// situation etudy 
	nouvNoeud ->next = head;
	head->prev = nouvnoeud;
	return nouNoeud;
}
// insertion at the end for the list 
no * addtoempty( no * head , int data1){
	no * nouvnoeud = (nouvNoeud*)malloc( sizeof( no));
	nouvNoeud ->prev = NULL;
	nouvNoeud ->next = NULL;
	nouvNoeud ->data = data1;

}


// programme principle : 

int main (){
	no * head = NULL ; 
	na * 1er = creenoeud(54);
	na * 2eme = creenoeud(654);
	na * 3eme = creenoeud(34);

	head = 1er ;
	head -> prev = NULL;
	1er ->next = 2eme;
	2eme -> next = 3eme ; 
	3eme -> next = null;


	1er -> prev = head ;
	2eme -> prev = 1er;
	3eme -> prev 2eme;


// les fonction lii dertii fe programme secondaire 3la hsb les fonction li 3ndk hada ghir exemple :
	no * resultat = addtoempty ( head , 99);
	printf( " the value adding is %d",resultat);



}
// ------------------------------exercices---------------------------------------------------
// insertion au debut de list doubly 

na * ajoutaudebut ( na * tete int data1){
	na * debut = t ;
	na * nouvnoeud ;
	nouvNoeud = (na*)malloc(sizeof(na));
	nouvNoeud-> prev = NULL ;
	nouvNoeud->next = NULL;
	if (tete == 0 )
	{
		printf("La list est vides ");
		return NULL;
	}
	debut -> nouNoeud = data1;
	head -> prev = nouvnoeud;


}
na * ajoutaufin ( na * tete int data1){
	na * courant = tete ; 
	na  * nouvnoeud = tete ;
	nouvNoeud = (na*)malloc(sizeof(na))
	nouvNoeud-> prev = NULL ;
	nouvNoeud->next = NULL;
	if ( tete == 0 )
	{
		printf ( "la list est vids");
		return NULL;
	}
	while( courant ->next != NULL){
		courant = courant -> next;
	}
	courant -> next = nouvnoeud;
	nouvNoeud ->prev = courant;
	return nouNoeud ;
}
// insertion between the nodees
na * insertingbetzeen( na * head ,int postion )
na * nouvnoeud ;
nouvNoeud  = ( na *)malloc( sizeof(na ));
nouvNoeud 
if (head  == 0 )
{
	printf  ("list est vides");
	return NULL;
}
// SI LA POSITION = 0 
courant = next -> nouNoeud;
nouvNoeud -> prev = courant ;
if (position == 0 )
{
	
}

















// stacks = pile


typedef struct pile {
	char * donnees ; 
	struct * pile = prev;
}pile ;
// initiallisation de variable golobale 
int taille ;
pile * sommet ;
// initiallisation de la fonction 
void initiallisation ( ){
	taille = 0 ;
	sommet = NULL;
}
// adding in stacks 

int ajout ( char * donnees){
	pile * nouelement = (pile *)malloc( sizeof ( pile));
	if (nouelement == null)
	{
		return -1 ;
	}
	strcpy( nouelement -> donnees , donnees)
	sommet -> sommet = prev;
	sommet = nouelement
	taille ++;
	return 0;
}

// deleting in stacks :

int deletpile (){
	pile * suppelement;
	if (taille == null )
	{
		printf (" stacks is vides ");
		return -1 ;
	}

	sommet = suppelement  ;
	sommet -> sommet = prev ;
	free( suppelement -> donnees);
	free( suppelement );
taille --;
return 0 ;
}









// queues = file 


typedef struct file {
	char * donnees ; 
	struct * file = suivant;
}file ;

int taille ;
pile * debut , fin ; 

void initiallisation(){
	debut = NULL ; 
	fin = NULL ;
	taille = 0 ;
}

// ajout au file 

int ajoutfile ( char*donnees){
	file * nouele = (file*)malloc(sizeof(file))
	if (taille == 0 )
	{
		return -1;
	}
	strcpy(nouele->donnees,donnees);
	nouele -> suivant = NULL;
	if (taille == 1 )
	 {
	 	fin = nouele;
	 	debut = nouele;
	 } 
	 else
	 {
	 	fin -> suivant = nouele;
	 	fin = nouele;
	 }
	 return 0;
	 taille++;
}
// suppression de files


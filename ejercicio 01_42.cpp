// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 41
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada gallina se obtiene seg�n la f�rmula:
    #include<iostream>
    using namespace std;
    main(){
        int n;
        float A,B=0,prom;
        cout<<"ingrese la cantidad de notas: ";cin>>n;
        for(int i=0;i<n;i++){
                cout<<"ingrese la nota"<<i+1<<": ";cin>>A;//acumulaci�n de las notas ingrsadas
        B=B+A;
 }
 prom=B/n;
 cout<<"el promedio es: "<<prom;
}
}

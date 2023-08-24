// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 41
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada gallina se obtiene según la fórmula:
    #include<iostream>
    using namespace std;
    main(){
        int n;
        float A,B=0,prom;
        cout<<"ingrese la cantidad de notas: ";cin>>n;
        for(int i=0;i<n;i++){
                cout<<"ingrese la nota"<<i+1<<": ";cin>>A;//acumulación de las notas ingrsadas
        B=B+A;
 }
 prom=B/n;
 cout<<"el promedio es: "<<prom;
}
}

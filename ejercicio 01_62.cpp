// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 61
// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc.
int main(){
    double n,m,c,d,u,v1,v2,v3;
	if(n>0){
		m=n/10;
		c=m/10;
		d=c/10;
		u=d%10;
		v1=n%10;
		v2=m%10;
		v3=c%10;
		cout<<m<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
		cout<<u<<endl;
		cout<<v1<<endl;
		cout<<v2<<endl;
		cout<<v3<<endl;
	}else{
		cout<<"No es numero positivo "<<endl;
	}
}
	for(int i=1;i<=n;i++)
	{
		cout<<"Ingrese la edad "<<i<<" : "<<endl;
		cin >>edad;
		if (edad==1)
		{
			aux=aux+6;
			total=aux;
		}
		else if(edad==2)
		{
			aux2=aux2+3;
			total2=aux2;
		}
		else if(edad==3)
		{
			aux3=aux3+2;
			total3=aux3;
		}
		else
		{
			cout<<"Edad no permitida. "<<endl;
		}
		t = total+total2+total3;
	}
	cout<<"El consumo total de pañaeles diarios es: "<<t<<endl;
system("pause");
}

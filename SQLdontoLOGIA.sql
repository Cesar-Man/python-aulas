create database Clinica_Odonto
use Clinica_Odonto 

create table Paciente(
id_Pac int primary key identity not null ,
nome_Pac varchar(100) not null ,
email_Pac varchar(70) unique,
tel_Pac varchar(15) , 
dt_nasc_Pac date not null

);


create table Dentista (
id_Dent int primary key not null ,
Num_CRO int not null ,
Nome_Dent varchar(100) not null , 
Tel_Dent varchar(15) not null,
End_Dent varchar(150)
) ;

create table Consulta (
id_consul int primary key not null , 
Valor_Consul Decimal(8 , 2) check (Valor_Consul > 0 ) not null  ,
Dt_hora_Consul datetime not null ,
FK_Tb_Dentista int ,
FK_Tb_Paciente int ,
Foreign key (FK_Tb_Dentista) references Paciente(id_Pac) ,
foreign key (FK_Tb_Paciente) references Dentista(id_Dent)

);
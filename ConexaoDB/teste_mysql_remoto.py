import serial
import time
import mysql.connector

ser = serial.Serial('COM4', 9600, timeout=1) 
con = mysql.connector.connect(host='paparella.com.br', database='paparell_iot', user='paparell_iot', password='senai2024') 

if con.is_connected():
    db_info = con.get_server_info()
    print("Conectado, versão: ", db_info)
    cursor = con.cursor()
    cursor.execute("select database();")
    linha = cursor.fetchone()
    print("Conectado ao banco de dados ", linha)


time.sleep(2) 

cont = 10
for i in range(cont):
    line = ser.readline()
    string_data = line.decode('utf-8')
    print(string_data)
    
    sql = "INSERT INTO bosch (nome_aluno, nome_sensor, valor_sensor) VALUES (%s, %s, %s)"
    val = ("MariAna", "Touch", string_data)
    cursor.execute(sql, val)
    
cursor.execute("SHOW TABLES")
for i in cursor:
    print("Minhas tabelas: ", i)
    
    

con.commit()

print(cursor.rowcount, "Dados gravados")
    

cursor.execute("SELECT * FROM bosch")

myresult = cursor.fetchall()

for i in myresult:
    print(i)

ser.close()
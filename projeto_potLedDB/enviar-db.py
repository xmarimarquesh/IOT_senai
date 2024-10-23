import serial
import time
import mysql.connector

ser = serial.Serial('COM3', 9600, timeout=1) 
con = mysql.connector.connect(host='paparella.com.br', database='paparell_iot', user='paparell_iot', password='senai2024') 

if con.is_connected():
    db_info = con.get_server_info()
    print("Conectado, versão: ", db_info)
    cursor = con.cursor()
    cursor.execute("select database();")
    linha = cursor.fetchone()
    print("Conectado ao banco de dados ", linha)


time.sleep(2) 

while True:a
    line = ser.readline()
    string_data = line.decode('utf-8')
    print(string_data)
    
    sql = "INSERT INTO bosch (nome_aluno, nome_sensor, valor_sensor) VALUES (%s, %s, %s)"
    val = ("Mariana / Juliana", "Potenciometro", string_data)
    cursor.execute(sql, val)
    con.commit()
    time.sleep(4)
    
cursor.execute("SHOW TABLES")
for i in cursor:
    print("Minhas tabelas: ", i)
    
    


print(cursor.rowcount, "Dados gravados")
    

cursor.execute("SELECT * FROM bosch")

myresult = cursor.fetchall()

for i in myresult:
    print(i)

ser.close()

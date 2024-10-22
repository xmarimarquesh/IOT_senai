import serial
import time
import mysql.connector


while True:
    ser2 = serial.Serial('COM3', 9600, timeout=1)
    
    con = mysql.connector.connect(
        host='paparella.com.br',
        database='paparell_iot',
        user='paparell_iot',
        password='senai2024'
    )

    if con.is_connected():
        db_info = con.get_server_info()
        print("Conectado, versão: ", db_info)
        cursor = con.cursor()
        cursor.execute("SELECT database();")
        linha = cursor.fetchone()
        print("Conectado ao banco de dados ", linha)


    sql = "SELECT valor_sensor FROM bosch WHERE nome_aluno = 'Mariana / Juliana' ORDER BY id DESC LIMIT 1" 
    cursor.execute(sql)
    dados = cursor.fetchall()

    con.close()
    if dados:
        valor_sensor = int(dados[0][0]) 
        print(f"Valor do sensor: {valor_sensor}")

        if valor_sensor < 100:
            comando = '1' 
        elif valor_sensor < 300:
            comando = '2' 
        elif valor_sensor < 500:
            comando = '3' 
        elif valor_sensor < 800:
            comando = '4' 
        else:
            comando = '5' 

        ser2.write(comando.encode())
        print(f"Comando enviado: {comando}")

        ser2.close()
        
        time.sleep(0.1)



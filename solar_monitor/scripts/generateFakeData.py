import datetime
import random

starttime = datetime.datetime.fromtimestamp(1656813600)
with open(f"data/Generated/daily_mood_ratings.csv", 'w') as mood_file:    
    mood_file.write("timestamp,date,time,starting sleep,rating\n")

    for number in range(1,8):

        with open(f"data/Generated/Recording_{number}.csv", 'w') as file:
            file.write("timestamp,date,time,brightness (lux),temp (C),% humidity\n")


            currenttime = starttime + datetime.timedelta(minutes=random.randint(0, 60*3), seconds=random.randint(0, 60))
            lux = 0

            temp = 24
            humidity = 50
        
            hours = random.randint(6, 10) * 60
            minutes = random.randint(0, 60)

            date = currenttime.strftime('%a %d %b')
            timestamp = currenttime.strftime('%I:%M:%S %p')

            mood_file.write(f"{round(currenttime.timestamp())},{date},{timestamp},1,{random.randint(1, 6)}\n")

            for i in range(0,(hours + minutes)):
                date = currenttime.strftime('%a %d %b')
                timestamp = currenttime.strftime('%I:%M:%S %p')
                
                if (currenttime.hour > 5 and currenttime.hour < 20):
                    lux += currenttime.hour * 0.001
                lux += (random.random() - 0.5) * 0.001
                if (lux < 0):
                    lux = 0
                
                temp += (random.random() - 0.5) / 4
                humidity += (random.random() - 0.5) / 2

                file.write(f"{round(currenttime.timestamp())},{date},{timestamp},{round(lux,3)},{round(temp,1)},{round(humidity)}\n")
                
                currenttime += datetime.timedelta(minutes=1)

            
            mood_file.write(f"{round(currenttime.timestamp())},{date},{timestamp},0,{random.randint(1, 6)}\n")

        starttime += datetime.timedelta(days=1)
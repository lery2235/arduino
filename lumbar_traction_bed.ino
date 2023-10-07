

const int motor_A = 2;
const int motor_B = 3;

const int Switch_1 = 4;
const int Switch_2 = 5;
const int Switch_3 = 6;
const int Switch_4 = 7;

//uint8_t LED[] = {6,7,8,11};

void motor_state_1(){
    
    int speed_state_1;
    int count = 0;

    for(int i = 10; i<=50; i++)
    { 
        speed_state_1 = i; 
        analogWrite(motor_A, speed_state_1);
    }
    Serial.println("1) PWM 10-50");
    delay(1000);

    for(int i = 50; i<=1; i--)
    { 
        speed_state_1 = i; 
    }
    analogWrite(motor_B, speed_state_1);
    delay(1000);  

    return; 


}

void motor_state_2(){
    int speed_state_2;
    int count = 0;

    for(int i= 50; i<=100; i++)
    {
        speed_state_2 = i;
        analogWrite(motor_A, speed_state_2);
        count++;
    }
    Serial.println("2) PWM 50-100");
    delay(1000);
    
    if(count == 50){
        for(int i= 100; i<=1; i--)
    {
        speed_state_2 = i;
        analogWrite(motor_B, speed_state_2);
    }
    }
}

void motor_state_3(){

    int speed_state_3;
    
    for(int i= 100; i<=150; i++)
    {
        speed_state_3 = i;
    }
    
    analogWrite(motor_A, speed_state_3);
    Serial.println("PWM 100 - 150");
    delay(1000);
    
    for(int i= 150; i<=0; i--)
    {
        speed_state_3 = i;
    }
    
    analogWrite(motor_B, speed_state_3);
    delay(1000);
    
}

void motor_state_4(){
    
    int speed_state_4;   
    
    for(int i = 150; i<=200; i++)
    {
        speed_state_4 = i;
    }

    analogWrite(motor_A, speed_state_4);
    Serial.println("PWM 100 - 150");
    delay(1000);
    
    for(int i= 50; i<=100; i++)
    {
        speed_state_4 = i;
    }
    analogWrite(motor_B, speed_state_4);
    delay(1000);
}

void setup()
{
    Serial.begin(115200);

    pinMode(motor_A, OUTPUT);
    pinMode(motor_B, OUTPUT);

    pinMode(Switch_1, INPUT_PULLUP);
    pinMode(Switch_2, INPUT_PULLUP);
    pinMode(Switch_3, INPUT);
    pinMode(Switch_4, INPUT);

    

if(digitalRead(Switch_1) == 0)
{
    //motor_state_1();
    Serial.println("sw1");
}
else if(digitalRead(Switch_2) == 0)
{
    //motor_state_2();
    Serial.println("sw2");
}

}

void loop()
{   

//스위치 제어

/*
else if(digitalRead(Switch_3) == HIGH)
{
    motor_state_3();
    Serial.println("third switch on");
}
else if(digitalRead(Switch_4) == HIGH) 
{
    motor_state_4();
    Serial.println("forth switch on");
}
else 
    Serial.println("-");
*/
    }



/*
 *本代码由*凯元*编写
 *作用：声音传感器模块，使LED灯随着声音的高低量、灭。
 *编写日期：2018/2/4
 *声音传感器模块：可以检测周围环境的声音强度,
 *使用注意：此传感器只能识别声音的有无（根据震动原理）
 *不能识别声音的大小或者特定频率的声音
 *输出形式 数字开关量输出（0和1高低电平）
*/
char ledPin = 6; //led要插入的引脚
char voicePin = 2; //声音模块要插入的引脚
char voiceHighLow; //将要读取到voicePin的高低
void setup() {
  pinMode(ledPin,OUTPUT); //设置ledPin针脚为输出模式
  pinMode(voicePin,INPUT);  //设置voicePin的针脚为输入模式
}

void loop() {
  voiceHighLow = digitalRead(voicePin); //读取voicePin的电平高低，将它赋给voiceHighLow
  
  //模块在环境声音强度达不到设定阈值时，OUT输出高电平，当外界环境声音强度超过设定阈值时，模块OUT输出低电平
  if(voiceHighLow == HIGH){ //假设voiceHighLow等于高电平
    digitalWrite(ledPin,LOW); //当voicePin电平高时LED灯熄灭
    }else{
      digitalWrite(ledPin,HIGH);  //当voicePin电平低时LED灯亮起
      } 
}

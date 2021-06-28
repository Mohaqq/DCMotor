void setup()
{
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
}

void loop()
{
digitalWrite(2,1);  //لتحريك الموتر الاول في اتجاه الساعه 
digitalWrite(4,0);  // الموتر الاول في اتجاه الساعه
digitalWrite(7,1); // الموتر الثاني في عكس عقارب الساعه
digitalWrite(8,0); // الموتر الثاني في عكس عقارب الساعه
 delay(5000); }

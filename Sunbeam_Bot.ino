
int buttonstate1 = 0;

void setup() {
  pinMode (2, INPUT); // sensor 1 left
  pinMode (3, INPUT); // sensor 2 centre
  pinMode (4, INPUT);// sensor 3 right
  pinMode (9, INPUT); // switch

  pinMode (5, OUTPUT); // motor 1
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT); //motor 2
  pinMode (8, OUTPUT);
  pinMode (11, OUTPUT); //  IR_lamp


}


void loop()

/* Code for flashing the high intensity infrared lamp */

{
  buttonstate1 = digitalRead (9); // Read the status of switch

  if (buttonstate1 == 1)
  {
    digitalWrite (11, HIGH);
    delay(100);
    digitalWrite (11, LOW);
    delay(100);
  }

  else if (buttonstate1 == 0)
  {
    digitalWrite (11, LOW);
  }

 

  /* Code for avoiding the obstacles */

  if ((digitalRead (2) == 0) && (digitalRead (3) == 0) && (digitalRead (4) == 0))
  {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);

    delay (1000);

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }

  else if ((digitalRead (2) == 0) && (digitalRead (3) == 0) && (digitalRead (4) == 1))
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);

    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

  else if ((digitalRead (2) == 0) && (digitalRead (3) == 1) && (digitalRead (4) == 0))
  {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);

    delay (1000);

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  else if ((digitalRead (2) == 0) && (digitalRead (3) == 1) && (digitalRead (4) == 1))
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

  else if ((digitalRead (2) == 1) && (digitalRead (3) == 0) && (digitalRead (4) == 0))
  {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }

  else if ((digitalRead (2) == 1) && (digitalRead (3) == 0) && (digitalRead (4) == 1))
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }

  else if ((digitalRead (2) == 1) && (digitalRead (3) == 1) && (digitalRead (4) == 0))
  {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }

  else if ((digitalRead (2) == 1) && (digitalRead (3) == 1) && (digitalRead (4) == 1))
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }

}

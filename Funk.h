

boolean postotak(int post){
  int val = random(101);
  if(val <= post){
    return true;
  }else{
    return false;
  }
}


int vise_postotaka(int post,int post2,int post3){
  int val = random(101);
  if(val <= post){
    return 1;
  }else if(val <= post2+post){
    return 2;
  }else{
    return 3;
  }
}


boolean milipostotak(int post){
  int val = random(100001);
  if(val <= post){
    return true;
  }else{
    return false;
  }
}


void kriza(float &tr_krize){
  int br = vise_postotaka(33,33,33);
  if(br == 1){
    tr_krize = 2.5;
    lcd.clear();
    lcd.home();
    lcd.print("Dogodila se mala");
    lcd.setCursor(0,2);
    lcd.print("kriza u svijetu!");
    delay(1000);
  }else if(br == 2){
    tr_krize = 4;
    lcd.clear();
    lcd.home();
    lcd.print("Kriza je dosla!");
    lcd.setCursor(0,2);
    lcd.print("(Srednja)");
    delay(1000);
  }else{
    tr_krize = 6;
    lcd.clear();
    lcd.home();
    lcd.print("UPOZORENJE");
    lcd.setCursor(0,2);
    lcd.print("Velika kriza!");
    delay(1000);
  }
}


void krizometar(int &krizomjerac,float &tr_krize,float &akceleracija,boolean &kriza_bool){
  if(postotak(krizomjerac)){
    kriza(tr_krize);
    krizomjerac = 0;
    akceleracija = 0;
    kriza_bool = true;
  }else{
    krizomjerac = krizomjerac+3+akceleracija;
    akceleracija += 0.5;
  }
}

boolean koalicija(float svjetska_tenzija,int tenzija_drzave,int i){
  if(tenzija_drzave>=25 and tenzija_drzave <=75){
    static int post = map(tenzija_drzave,25,75,0,50);
    post = constrain(post,0,50);
    static int post2 = map(svjetska_tenzija,0,100,0,40);
    post2 = constrain(post2,0,25);
    if(postotak(post+post2)){
      ima_koaliciju[i] = true;
      lcd.clear();
      lcd.home();
      lcd.print("Koalicija protiv");
      lcd.setCursor(0,2);
      lcd.print("nas se stvorila!");
      delay(1000);
      return true;
    }else{
      return false;
    }
  }else if(tenzija_drzave>75){
    ima_koaliciju[i] = true;
    lcd.clear();
    lcd.home();
    lcd.print("Koalicija protiv");
    lcd.setCursor(0,2);
    lcd.print("nas se stvorila!");
    delay(1000);
    return true;
  }else{
    return false;
  }  
}


boolean Justify_wargoal(int gumb1,int gumb2,float &svjetska_tenzija,int &tenzija_drzave,int &ratna_podrska,int &stabilnost){
  lcd.clear();
  lcd.home();
  lcd.print("Klikni gumb");
  lcd.setCursor(0,2);
  lcd.print("L-Min,D-Maj");
  delay(1000);
  while(digitalRead(gumb1)==1 and digitalRead(gumb2)==1);
  if(digitalRead(gumb1)==0){
    svjetska_tenzija += nastanak_tenzije_Minors;
    tenzija_drzave += nastanak_tenzije_Minors;
  }else if(digitalRead(gumb2)==0){
    svjetska_tenzija += nastanak_tenzije_Majors;
    tenzija_drzave += nastanak_tenzije_Majors;
  } 
  ratna_podrska -= WS_zbog_rata;
  stabilnost -= ST_zbog_rata;
  return postotak(30);
}

void kolaps_drustva(int stabilnost){
  if(stabilnost<=20 and stabilnost>10){
    static int stab = map(stabilnost,10,20,30,5);
    stab = constrain(stab,5,30);
    if(postotak(stab)){
      //kolaps društva
      lcd.clear();
      lcd.home();
      lcd.print("Oh,ne,dogodio se");
      lcd.setCursor(0,2);
      lcd.print("KOLAPS DRUSTVA!");
      delay(1000);
    }
  }else if(stabilnost <= 10){
    static int stab = map(stabilnost,0,10,50,30);
    stab = constrain(stab,30,50);
    stab += 50;
    if(postotak(stab)){
      //Kolalps društva
      lcd.clear();
      lcd.home();
      lcd.print("Oh,ne,dogodio se");
      lcd.setCursor(0,2);
      lcd.print("KOLAPS DRUSTVA!");
      delay(1000);
    }
  }
}


void UI(int i,int PM,int TD, int ST,int RP,boolean AEU){
  lcd.clear();
  lcd.home();
  switch(i){
    case 0:
      lcd.print("SAD:");
      lcd.print(TD);
      break;
    case 1:
      lcd.print("RUS:");
      lcd.print(TD);
      break;
    case 2:
      if(AEU){
        lcd.print("AEU:");
        lcd.print(TD);
        break;
      }else{
        lcd.print("EU:");
        lcd.print(TD);
        break;
      }
  }
  lcd.print(" RP:");
  lcd.print(RP);
  lcd.setCursor(0,2);
  lcd.print("ST:");
  lcd.print(ST);
  lcd.print(" PM:");
  lcd.print(PM);
}

void novi_komunisti(int &podrska_komunistima){
  if(postotak(10)){
    //Dolazak komunista u Ruski sabor
    lcd.clear();
    lcd.home();
    lcd.print("Ulazak komunista");
    lcd.setCursor(0,2);
    lcd.print("U ruski sabor!");
    podrska_komunistima += 10;
    delay(1000);
  }
}


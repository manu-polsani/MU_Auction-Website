9450 BIRTHDATE$ = "19900101"
9450.1
     BIRTHMON = VAL(MID$(BIRTHDATE$,5,2))
     BIRTHDAY = VAL(MID$(BIRTHDATE$,7,2))
     BIRTHYEAR = VAL(LEFT$(BIRTHDATE$,4))
     CURRENTDATE$ = DATE$
     CURRMON = VAL(MID$(CURRENTDATE$,3,2))
     CURRDAY = VAL(RIGHT$(CURRENTDATE$,2))
     CURRYEAR = VAL(LEFT$(CURRENTDATE$,2))
     IF CURRMON < BIRTHMON OR (CURRMON = BIRTHMON AND CURRDAY < BIRTHDAY) THEN CURRYEAR = CURRYEAR - 1
     AGE = CURRYEAR - BIRTHYEAR
     PRINT "Age is "; AGE
     RETURN
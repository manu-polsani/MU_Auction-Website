DEF COMPDATE(COMPDAT1, COMPDAT2)
    COMYEAR1 = VAL(LEFT$(COMPDAT1, 4))
    COMMONTH1 = VAL(MID$(COMPDAT1,5, 2))
    COMDAY1 = VAL(RIGHT$(COMPDAT1, 2))
    COMYEAR2 = VAL(LEFT$(COMPDAT2, 4))
    COMMONTH2 = VAL(MID$(COMPDAT2,5, 2))
    COMDAY2 = VAL(RIGHT$(COMPDAT2, 2))
    
    IF COMYEAR2 > COMYEAR1 THEN 
        COMPDATES = 1
    ELSE IF COMYEAR2 < COMYEAR1 THEN 
        COMPDATES = -1
    ELSE IF COMMONTH2 > COMMONTH1 THEN 
        COMPDATES = 1
    ELSE IF COMMONTH2 < COMMONTH1 THEN 
        COMPDATES = -1
    ELSE IF COMDAY2 > COMDAY1 THEN 
        COMPDATES = 1
    ELSE IF COMDAY2 < COMDAY1 THEN 
        COMPDATES = -1
    ELSE 
        COMPDATES = 0
    END IF
    COMPDATE = COMPDATES
FEND
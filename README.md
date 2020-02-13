# Consegna:
> Trasmettitori di Gulliver

<p>Le isole di Lilliput e Blefuscu sono ormai irrimediabilmente divise da una battaglia che dura da tantissimi anni.<br>
Ultimamente, poi, hanno deciso che non ci potranno più essere contatti verbali tra le popolazioni.<br>
Gli abitanti di Lilliput, però, vorrebbero almeno mantenere i rapporti diplomatici, hanno quindi proposto al governo di Blefuscu di poter trasmettere i propri messaggi utilizzando il codice morse.<br>
Inizialmente contrari, i blefuschiani hanno ora accettato solamente di ricevere i messaggi dei lillipuziani.<br>
Hai ricevuto il compito di realizzare la stazione che trasmetterà i messaggi / che riceverà i messaggi e dopo potrai effettuare un test con il tecnico dell'isola avversaria senza parlare! Il Re è stato chiaro, nessun contatto verbale altrimenti sarai imprigionato a vita.<br>
Un tecnico al di sopra delle parti ha scritto il seguente capitolato tecnico al quale perfettamente attenersi pena il non funzionamento dell'apparato.<br>

Capitolato tecnico.<br>
Dispositivo di LILLIPUT.<br>
1 Arduino UNO<br>
1 LED bianco (PIN 13 utilizzando il resistore di Arduino)<br>

Dispositivo di BLEFUSCU.<br>
1 Arduino UNO<br>
1 sensore LUCE (PIN A5);<br>
1 LED rosso (PIN 13 utilizzando il resistore di Arduino)<br>

Elementi in comune.<br>
1 cannuccia di colore nero<br>

Regole di trasmissione/ricezione
La parola "SOS" nel codice morse si scrive ". . . - - - . . ." (Tre punti, tre linee, tre punti), si decide di stabilire:<br>
"start character" non presente;<br>
"." un'accensione luminosa del led di circa mezzo secondo;<br>
"-" un'accensione luminosa del led di circa un secondo;<br>
il tempo di "stacco" tra un segnale luminoso e l'altro è di circa 3/10 di secondo;<br>
"end character" un'accensione luminosa del led di circa due secondi.<br>
Il carattere PUNTO (in codice morse) termina la trasmissione.<br>
Ala fine della trasmissione il dispositivo di BLEFUSCU emette per 3 volte un segnale rosso luminoso intermittente da 1 secondo.<br>
I simboli sono trasmessi premendo sulla tastiera LILLIPUT il carattere/testo desiderato.<br>

Entrambi i dispositivi, una volta inviato o ricevuto il carattere/teso, lo memorizzeranno in una lista semplice linkata carattere per carattere e, alla fine della trasmissione, il testo ricevuto sarà visualizzato da entrambi i dispositivi in console.<br> 
</p>


<p align="center">
  <img style='width:90%;' src="CodiceMorse.png">
</p>
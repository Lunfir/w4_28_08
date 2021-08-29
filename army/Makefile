all: unit state humanState wolfState soldier werewolf spellManager spell starSurgeSpell imain
	g++ *.o -o main.exe

spellManager:
	g++ -c SpellManager.cpp -o SpellManager.o

spell:
	g++ -c ISpell.cpp -o ISpell.o

starSurgeSpell:
	g++ -c StarSurgeSpell.cpp -o StarSurgeSpell.o

state: 
	g++ -c IState.cpp -o IState.o

unit:
	g++ -c IUnit.cpp -o IUnit.o

soldier:
	g++ -c Soldier.cpp -o Soldier.o

werewolf:
	g++ -c Werewolf.cpp -o Werewolf.o

humanState:
	g++ -c HumanState.cpp -o HumanState.o

wolfState:
	g++ -c WolfState.cpp -o WolfState.o

imain:
	g++ -c main.cpp -o main.o

clean:
	rm *.o *.exe
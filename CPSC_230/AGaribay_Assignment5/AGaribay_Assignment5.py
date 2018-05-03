#You choose your adventure

import random

#variable creation and setting loop control variable
next_room = 1
choice = ''
#generating a random number
death_die = random.randint (1,100)

while next_room !=0:
    if next_room == 1:
        print ("You come across an opening on the side of an enormous mountain. \
As you walk closer you notice that there are two paths you can take. \
The first path you notice is a slope that leads you deep into the bowels of the mountain. \
The second path takes you straight into a cave. \
You inspect each path and notice one distinct feature about them. \
You can hear a faint growl and snore coming from the lower path and you can see \
a faint light coming from the cave entrance.")
        print ()
        choice = input ('Which path will you take? "Down" or "Through":')
        if choice == "Down" :
            if death_die > 98:
                print ("A boulder fell on you and you died. That sucks and you just started.")
                next_room = 0
            else:
                next_room = 2
                death_die = random.randint(1,100)
        elif choice == "Through":
            next_room = 3               
        else:
            print(choice + "wasn't one of the choices. Try again")

    #Section for choosing "Through"
    elif next_room == 3:
        print ("As you walk through the cave entrance you begin to \
feel a warm feeling inside of you as if you had just arrived home after a \
long day out. As you ponder on this thought, you feel the ground shift from dirt to wood. \
You look around and you are inside an enormous ballroom. Though you are confused that \
such a thing would exists in a cave you carry on with your adventure. As you look around \
you notice two paths you can take. You can either go upstairs or you can continue through \
the large ballroom doors.")
        print()
        choice = input ('Which path will you take? "Upstairs" or "Ballroom Doors":')
        if choice == "Upstairs":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:    
                next_room = 3.2
                death_die = random.randint(1,100)
        elif choice == "Ballroom Doors":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.3
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Upstairs"
    elif next_room == 3.2:
        print("You explore the upper level and make your way up the very large staircase. \
Once you reach the top you find yourself in what seems to be an attic. There is not much room \
so you crotch around to take inventory of all the belongs around you. As you look around you \
take notice of many different items such as old children's toys and rusted tools that looked \
like they had never been used in years. While looking around something catches your eye. \
It is an old clown doll that seems to be in well condition. As you approach it, \
you hear a hissing sound and before you know it the doll lunges at you. With almost \
cat like reflexes you upper cut the clown doll. You decide not to stay and find out \
if it is ok. You rush through the attic and find an small door but you also notice a hatch underneath you. ")
        print()
        choice = input ('What path will you take? "Hatch" or "Small Door":')
        if choice == "Small Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.4
                death_die = random.randint(1,100)
        elif choice == "Hatch":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.5
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Ballroom Doors"
    elif next_room == 3.3:
        print("You decide to take go through the glamorous ballroom doors and \
discover what lies beyond them. As you push them open a cold draft of air comes \
blasting through. You open your eyes in awe, there is an entire snowy forest. \
You run through and run around the snow like a child, it fills you with joy. \
As you continue to play around in the snow you notice a door in the corner of the room. \
As you approach it you almost sink down into a hole in the ground. You inspect the hole \
and you can see something down there.")
        print()
        choice = input ('What path will you take? "Door" or "Snowy Hole":')
        if choice == "Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.5
                death_die = random.randint(1,100)
        elif choice == "Snowy Hole":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.6
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Small Door"
    elif next_room == 3.4:
        print("You open the small door and hope that some small gnome or \
dwarf is there to greet you with a bowl of nice warm soup, but to your \
surprise it is an old goblin. He invites you to sit at his small table, \
you know it is too small for you but you don’t want to be rude so you take a seat. \
He decides to tell you the story of his life as he makes some tea. As he tells his \
story you begin to get really tired and exhausted, as if you had never slept in years. \
You feel bad for dowsing off during his story but there is not much you can do. \
You feel your eyes getting heavy and you are not sure how much longer you can stay awake.")
        print()
        choice = input ('All you can do is sleep, enter "Sleep"')
        if choice == "Sleep":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.7
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Hatch/Door"
    elif next_room == 3.5:
        print("As you make your way through you entire an unusual room. \
It appears as if you are in a department store. You are extremely confused \
but you don’t want to turn back now, who knows what deals they might have. \
You walk down the a couple aisles and as you continue through you hear an \
unusual noise. You have heard it before and hearing it again sends chills \
down your spine. You hear it again and again and again, only getting louder \
each time. You turn and see him at the end of the aisle. He sprays the \
cologne bottle once again, making that irritating noise. He makes a \
dead sprint for you yelling “WOULD YOU LIKE TO TRY A SAMPLE!” Your \
take off in the opposite direction, oh how you hate the smell of department \
store cologne. You come across three different paths. A portal, a slide in \
the wall, and an elevator.")
        print()
        choice = input ('What path will you take? "Portal" "Slide" or "Elevator":')
        if choice == "Elevator":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.7
                death_die = random.randint(1,100)
        elif choice == "Portal":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.12
                death_die = random.randint(1,100)
        elif choice == "Slide":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.8
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Snowy Hole"
    elif next_room == 3.6:
        print("You decide to jump down the snowy hole and figure out \
what lies beneath you. As you hit the floor you come across a \
peculiar sight. There is a gang of bunnies hopping around, the \
sight of them puts a smile on your face. You notice an exit in \
the back of the room so you head there and decide not to scary them. \
As you make your way there notice you leaving the room. The call out \
to you and invite you to dinner, you politely decline but they insist. \
You say that you have somewhere to be and they decided to let you go on \
your way. They seem saddened by this and the entire happy atmosphere \
of the room fades. Great now you made a bunch of bunnies sad.")
        print()
        choice = input ('To continue through enter "Exit"')
        if choice == "Exit":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.8
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Living Room/ Sleep/ Elevator"
    elif next_room == 3.7:
        print("You appear on a sofa really confused on what \
just happened and how you ended up where you are. You turn \
and notice there is a tv mounted on the wall, it is currently \
a commercial so you decide to stay and find out what is on. \
As you sit there you realize that the commercial has been \
going on for some time now, almost five minutes. You \
decide to wait a little bit longer until you realize what is \
really going on. You are watching the infomercial channel, \
you look around frantically looking for the tv control but you \
can’t find it. You look around and there is no exit, the only \
way out is through a trash chute. You decide that it would be \
better dealing with actually garbage instead of tv trash.")
        print()
        choice = input ('To continue through enter "Trash"')
        if choice == "Trash":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.11
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Slide/Exit"
    elif next_room == 3.8:
        print("You end up in a kitchen where all the cooks are rats. \
It makes you feel a little uncomfortable but you decide to let them be. \
A rat comes up to and asks for your order, confused you respond with cheese. \
All the rats in the kitchen stop working and look at you as if you had \
just spit on their mother's grave. They kick you out and throw you down the garbage shoot.")
        print()
        choice = input ('To continue through enter "Garbage Shoot"')
        if choice == "Garbage Shoot":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 3.13
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Trash"
    elif next_room == 3.11:
        print("You end up in a dump where you can barely see anything \
over you. As you try to get up you are pushed back down by a weird \
looking garbage monster. You try to get back up again but he pushes \
you back down once again. You try once more but again he pushes you. \
You tell him to stop but he says no. You are now stuck in this cycle forever.")
        print()
        choice = input ('YOU LOSE!! To restart type "Restart"')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Portal"
    elif next_room == 3.12:
        print("You make your way through the portal finding yourself in a golden \
room and in the center you see a golden sword worthy of your power. \
As you approach it you slipped on an ice cube and got covered in boo-boos. \
You were then rushed to Weenie-Hut General Hospital. Looks like you're \
not an adventurer but actually a weenie!")
        print()
        choice = input ('YOU LOSE, WEENIE!! To restart type "Restart"')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Garbage Shoot"
    elif next_room == 3.13:
        print("You make your way down the garbage shoot only to find \
yourself in a pizza shop. You see a pizza out on a table and take a slice. \
As you eat it you notice that the slice regrows back to the original pizza pie. \
It fills you with joy and you keep eating pizza to your hearts content.")
        print()
        choice = input ('YOU WIN!! To restart type "Restart"')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #section for choosing "Down"
    elif next_room == 2:
        print ("You go down a slope so far down that you can no longer \
can see the way back. As you begin to doubt yourself you notice \
the ground begin to level out. As you continue you come across a two paths.\
One leads you two a greatly built wooden door. The other leads you down a \
shady looking hallway with dimly lit light.")
        print()
        choice = input ('Which path will you take? "Wooden Door" or "Shady Hallway":')
        if choice == "Wooden Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:    
                next_room = 2.2
                death_die = random.randint(1,100)
        elif choice == "Shady Hallway":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.3
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Wooden Door"
    elif next_room == 2.2:
        print("You open the door and notice a piece of armor upon a pedestal. \
It looks like it has been used before by a great hero. As you inspect the armor more \
closely you notice that it is made out of iron and it has the crest of a dragon on \
the back. You put on the armor and just as you finish putting it on you notice \
something in the back of the room. There is a golden door that radiates an energy \
that is calling to you. You inspect the wall and you notice that there is a hole \
in the wall leading to another room.")
        print()
        choice = input ('What path will you take? "Golden Door" or "Hole":')
        if choice == "Golden Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.4
                death_die = random.randint(1,100)
        elif choice == "Hole":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.5
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )                        

    #sectiong for choosing "Shady Hallway"
    elif next_room == 2.3:
        print("You take the shady hallway, the light in the room begins to fade. \
As it gets darker you begin to see a light further down the hallway. \
As you get closer to it you can see a silhouette of a person. You approach the \
figure and notice that it is a goblin. You approach the goblin and he looks up at you. \
He says to you “People are quick to believe the bad things they hear about good people.” \
The goblin then steps back and vanishes into the darkness. As you continue down the hallway \
you come across a new area. There is a trap door in the ground you open it up and right \
before you jump in you notice something weird about the wall in the room. \
The other path leads to what seems to be a bedroom.")
        print()
        choice = input ('What path will you take? "Trap Door" or "Bedroom":')
        if choice == "Trap Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.6
                death_die = random.randint(1,100)
        elif choice == "Bedroom":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.5
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Golden Door"
    elif next_room == 2.4:
        print("You decide to open the golden door and as you walk through the threshold \
the door slams behind you. The room lights up and you notice a message written on the wall, \
it says “Nothing here! Better luck next time!” There is only one exit through the room. \
All you can do is continue.")
        print()
        choice = input ('To continue enter "Warm Hallway":')
        if choice == "Warm Hallway":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.7
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

     #sectiong for choosing "Bedroom/Hole"
    elif next_room == 2.5:
        print("You enter the bedroom. You notice a nice little bed and it is far too little\
for you. As you look around the room you begin to notice little details such as toys lying \
on the ground, you realize that this is probably a child’s bedroom. You walk around the \
bedroom and a chilling thought crawls down your spine. What is a child’s bedroom doing in\
a place like this. The thought panics you slightly as you begin to look around and notice \
that the bedroom resembles your room. You sit in the bed to take a break and notice that \
you have sat on a lump. You take it out from underneath you and to your surprise it is your \
childhood blanket. A million ideas race through your head. You get up and run towards the\
exit. As you run through the exit you see three possible paths. A staircase leading you \
lower into the dungeon, a room with a strange radiating red light, and a hallway with a \
strange warm draft.")
        print()
        choice = input ('Which path will you take? "Staricase" , "Red Room" or "Warm Hallway":')
        if choice == "Staricase":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.12
                death_die = random.randint(1,100)
        elif choice == "Red Room":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.8
                death_die = random.randint(1,100)
        elif choice == "Warm Hallway":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.7
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

   #sectiong for choosing "Trap Door"
    elif next_room == 2.6:
        print("You jump down the drop door only to realize there is no floor underneath you.\
You begin to fall and you try to grasp at anything you can to stop you from falling. \
Sadly, you can't seem to grab anything not even a wall. It seems as though this will be \
the end and to make it worst the area is so dark that you won’t know when you will hit \
the floor. As you brace yourself for the fall you realize that you are no longer falling. \
You have landed on a rather soft and fluffy blob. As you get off of the blob you realize it\
is a giant sheep. It startles you at first but you begin to laugh about your near death \
experience. You inspect the room and notice the beautiful foliage around the room. You \
are able to see an exit on the other side of the giant sheep. You notice that there is \
a strange red illuminating red light coming from the exit. You decide to follow it since \
it is the only exit.")
        print()
        choice = input ('To continue enter "Red Room":')
        if choice == "Red Room":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.8
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Warm Hallway"
    elif next_room == 2.7:
        print("As you make your way through the exit you notice that hallway has gotten \
really warm. You can feel yourself sweating underneath your clothes. As you continue \
walking you can sense that the hally isn’t just warm but a warm breeze coming from down \
the hall. Weirdly you can feel that the breeze pauses every couple of seconds almost \
like the hallway is breathing. As you continue to walk the hallway becomes narrow you \
think nothing of it until you end up on your hands and a knees. You notice that \
something is wrong you turn your neck back and notice that the path wasn’t becoming \
narrow. As look down at the ground and notice that the ground feels fleshy, that is when \
it hits you. The whole hallway was closing in, you realize now that the hallway is alive\
and is trying to eat you. You crawl your way out of the hallway just in time before it\
crushes you. As you gasp for air you turn and notice a strange noise coming from behind \
you. You turn and see a stone door with a strange crest on it. You can hear enchanting \
music coming from it as if you will finally be rewarded for your great adventure.")
        print()
        choice = input ('To continue enter "Stone Door":')
        if choice == "Stone Door":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.11
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Red Room"
    elif next_room == 2.8:
        print("You walk into the strange red room. You notice that the light is \
illuminating from a strange red stone in the middle of the room. As you approach \
you notice how enormous it is, you wish that you could take it with you but it \
far bigger than you. As you look around the room for other valuables you being \
to get a headache. The headache begins to become unbearable and you begin to \
feel a deep rage fill inside of you. A strange anger fills your body but you \
do not know why. You realize that this rage and anger is coming from the red stone.\
You look for an exit and notice a tightly sealed steel door. You decide your only \
choice is to rush the door and hope you break it down before this evil power \
consumes you. You run at top speed and use all your strength and rage to break \
it down. As you make contact the door bust down and breaks in half. You continue \
running to get as far away from the red stone as possible. Once you feel far enough \
you stop and collapse on the floor. After an hour you get up and realize that the \
atmosphere of the room has changed. You look down the hall and fell a strange power \
ahead. There is no way back so you continue on.")
        print()
        choice = input ('To continue enter "Mysterious Room":')
        if choice == "Mysterious Room":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 2.13
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )
        

    #sectiong for choosing "Stone Door"
    elif next_room == 2.11:
        print("You push open the stone door with whatever power you have left.\
You walk through the threshold and as you enter the room you can feel yourself \
being healed by the power of the room. As you walk further into the room you can\
hear beautiful music being played by a harp. You reach the center of the room \
and the harp magically appears in front of you. As you listen to the music you \
notice that the tone of the music is beginning to change. The music begins to \
sound darker and scary than it did when you first walked in. As you listen you \
can feel your heart begin to sink in your chest. Your whole body begins to feel \
heavy and you feel the power of fear consuming you. The harp disappears but the\
music still lingers in the room. As you look around you notice there are no exits.\
There is no way out but all you can do is live the rest of life in the horror of this room.")
        print()
        choice = input ('To restart enter "Restart":')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Staircase"
    elif next_room == 2.12:
        print("As you walk down the staircase you begin to second guess yourself. \
Was going on this adventure really worth it? As you continue down you can feel \
the metal becoming rusty as if no one had been down there in years. You begin \
to feel like this journey was a waste of time. You make your way to the bottom \
of the staircase with your head hung down. You feel saddened that your whole \
adventure was meaningless, you prepare for whatever horror lies ahead. As you \
lift your head up you jump back in awe. The whole room is filled with gold and \
jewels. There is more gold than you can carry, in fact there is more gold than \
100 men can carry. You have succeed and you begin to grab all the gold you \
can hold onto. You have succeed and obtained the treasure of this dungeon.")
        print()
        choice = input ('YOU WON!! To restart enter "Restart":')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )

    #sectiong for choosing "Mysterious Room"
    elif next_room == 2.13:
        print("You walk into the mysterious room and you notice a strange \
creature in the back. The entire room is filled with skeletons of past adventurers \
that did not quite make it out of the dungeon. You look closer at the monster \
and start to take notice of his features. He is at least six feet tall and his\
entire body is covered with dark red hair. You realize that there is no way to \
take on this monster so you decide to turn back. As you head out you step on a \
bone causing a loud cracking sound. The monster turns towards you and attacks.\
There is nothing you can do as ir lunges at you at full strength you. You brace for \
impact and close your eyes. You open your eyes one last time only to see the monster \
right in front of you. ")
        print()
        choice = input ('YOU DIED!! To restart enter "Restart":')
        if choice == "Restart":
            if death_die > 98:
                print("Looks like something bad happened. Looks like you gotta try again.")
                next_room = 0
            else:
                next_room = 1
                death_die = random.randint(1,100)
        else:
            print(choice + " wasn't one of the options. Try again." )
 

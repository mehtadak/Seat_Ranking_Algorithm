Taylor Swift is conducting a record breaking world tour, and seats are costly, especially near the stage. Being closer to the stage is always better than not, but unfortunately some of her more enthusiastic fans scream or cry her lyrics, despite not having nearly the same level of talent as "Mother". Being close to such fans unfortunately makes the experience less pleasant.

Lets imagine that the location of such fans could be known before you needed to purchase tickets (perhaps the super fans were able to buy tickets in a pre-sale event). I want you to write a program that can output the relative value of a seat grid, which considers the distance from the stage and the distance from the loud super fans.

Let's envision a grid of 20 by 10 seats, where the origin (0,0) is on the bottom left. Position (5, 7) would be 5 seats from the left edge and 7 seats up from the bottom. The stage is located along the bottom edge. Seats adjacent to the stage (x, 0) have a value of 100, those one seat further away have a value of 95, those one seat further away have a value of 90, and so forth. Seats adjacent to a super fan (in the N, S, E, and W directions) have their value reduced by 40, and those one seat further away (and along the diagonals) have their value reduced by 20.
The location of seats purchased by super fans will be provided to standard input in this form:

(5,7)

(13,3)

(14,3)

(14,2)

(13,1)

(8,9)

(0,7)

The program should output the value of each seat in the grid. Please put asterisks (‘*’) in the seats purchased by super fans.

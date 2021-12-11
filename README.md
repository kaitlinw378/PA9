PA9
Spencer Vander Schalie - Lab Section 1
Caleb Peterson - Lab Section 1
Kaitlin White - Lab Section 6
Grant Erickson - Lab Section 23

From 11-29 to 12-3 we tried to use gitlab but had lots of issues.
It took multiple hours just to get our ssh keys to work and connect.
Then everytime we tried to push or pull something multiple errors would show up
- Branch and link errors 
- Merge conflict errors (others work getting overwritten accidentally)

On 12-3 we switched to github and started working on our project.
- Essentially had to restart from scratch because all of our files and code got deleted or completely ruined
- Still had merge conflict errors with github but significantly less than before 

on 12-5 to 12-8 we had our project interface working and were able to start making the menu 

Started implementing individual tetris pieces 
- Initially tried to have a vector of Vector2f positions (store four individual blocks into a vector for a single piece)
- Once we were able to draw the pieces, we werent able to control them and they dissapeared after key press
- Tried to make the piece classes inherit from a pure virtual abstract class but changing the structure of the classes
caused too much to be happening all at once and it became difficult to fix errors so we restored it back temporarily

12-8 to 12-10 attempt to finish up project 
- Went to office hours to check in about our piece/vector error
- Decided to use arrays for the pieces instead, essentially starting over again 
- Arrays worked much better and pieces did not dissapear 
- Were able to get pieces to move and rotate with key controls and fall down the screen incrementally with a timer
- Were not able to implement new object creation so game does not add more pieces. 
- Finalized game interface 
- Wrote test cases 
- Made video

Final Notes: 

-We had 14 files that were removed from our program at the end of classes and inheritance attempts for the piece blocks
but they were accidentally permanently deleted instead of just temporarily removed from the project.

Here is an example of our first attempt at implementing a piece: 
vector<Vector2i> Spiece::createSPiece() {
	pieceVect.push_back(sf::Vector2i{ 2,0 });
	pieceVect.push_back(sf::Vector2i{ 3,0 });
	pieceVect.push_back(sf::Vector2i{ 1,1 });
	pieceVect.push_back(sf::Vector2i{ 2,1 });

	return pieceVect;
}

As a group, we decided to make the game of Tetris because we wanted to make a platform of classic style games to choose.
Tetris was much more difficult to implement than we originally expected and ran into many problems that either postponed
our progress or restarted it altogether. Creating many objects and keeping track of all of their collisions and status 
was a challenge we were not able to complete in the end. After the last week of getting help and trying new things, we 
have made much more progress than we were thinking we would end with. We feel proud that we were able to figure out 
the initial piece issues even though we ran into several new ones in the end because it was such a difficult challenge
for our understandings of the issues at the time.

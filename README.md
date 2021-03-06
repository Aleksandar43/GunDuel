# GunDuel

Futuristic Gun Duel Tournament at [Programming Puzzles & Code Golf at Stack Exchange][1]

## C++ Submissions

Please :

 - Post your submission as an answer to the PPCG.SE post.
 - Fork this project and request your files to be pulled.

## Python Submissions

Edit `PythonPlayer\<architecture>\PythonPlayer.py` to test your submission.

 - You can save state files, which are subject to removal at the beginning of a tournament.
 - Your script is called once per turn.
 - Commandline interface may change before Jan. 7, 2017.

## Other Submissions

Language Allowed: Java.

Executables Allowed.

Command Line and Return Code Requirements

    Expected Command Line Argument Format:
    	<opponent-id> <turn> <status> <ammo> <ammo-opponent> <history> <history-opponent>

    Expected Return Code: The ascii value of a valid action character.
    	'0' = 48, '1' = 49, '2' = 50, '-' = 45, '=' = 61
    
    Player identifier is an integer in [0, N), where N is size of tournament.
    Turn is 0-based.
    If duel is in progress, status is 3.
    If duel is draw / won / lost, status is 0 / 1 / 2.
    If turn is 0, <history> and <history-opponent> are not provided.
    Histories are strings of actions, e.g. 002 0-=
    You can ignore arguments you don't particularly need.

The binaries will be added to the repository if they meet the requirements and does no harm to any computer.

## Current Standing (update upon new submission)

11:12 AM Sunday, January 1, 2016 Coordinated Universal Time (UTC)

| Player                                   | Language   | Points |     1 |     2 |     3 |     4 |     5 |     6 |     7 |     8 |     9 |    10 |    11 |    12 |    13 |    14 |
|:---------------------------------------- |:---------- | ------:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:| -----:|
| [CBetaPlayer][15]                        | C++        |   5294 |   704 |   678 |   635 |   575 |   480 |   419 |   395 |   352 |   300 |   241 |   204 |   153 |   106 |    52 |
| [MontePlayer][16]                        | C++        |   8533 |  1209 |  1132 |  1044 |   921 |   838 |   755 |   641 |   558 |   450 |   368 |   258 |   197 |   114 |    48 |
| [StudiousPlayer][12]                     | C++        |   7794 |  1113 |  1033 |   964 |   882 |   790 |   697 |   602 |   523 |   432 |   308 |   231 |   139 |    80 |
| [FatedPlayer][14]                        | C++        |   4549 |   639 |   595 |   499 |   520 |   436 |   379 |   371 |   310 |   270 |   244 |   175 |   111 |
| [BarricadePlayer][7]                     | C++        |   4228 |   643 |   558 |   496 |   447 |   454 |   409 |   372 |   302 |   239 |   176 |   132 |
| [BotRobotPlayer][8]                      | C++        |   3340 |   513 |   414 |   344 |   391 |   369 |   324 |   306 |   255 |   261 |   163 |
| [SadisticShooter][10]                    | C++        |   4472 |   878 |   756 |   697 |   595 |   506 |   393 |   297 |   202 |   148 |
| [SurvivorPlayer][13]                     | C++        |   3972 |   728 |   714 |   657 |   546 |   459 |   395 |   286 |   187 |
| [TurtlePlayer][6]                        | C++        |   3201 |   661 |   638 |   555 |   441 |   381 |   308 |   217 |
| [CamtoPlayer][17]                        | C++        |   2960 |   713 |   609 |   548 |   434 |   352 |   304 |
| [HanSoloPlayer][18]                      | C++        |   2335 |   628 |   532 |   465 |   395 |   315 |
| [OpportunistPlayer][5]                   | C++        |   1451 |   443 |   415 |   351 |   242 |
| [GunClubPlayer][4]                       | C++        |   1223 |   489 |   408 |   326 |
| [DeceptivePlayer][11]                    | C++        |    875 |   476 |   399 |
| [PlasmaPlayer][9]                        | C++        |    404 |   404 |


Disqualified Players (Honorable Mentions)

 - [BlackHatPlayer][2] (Locates and modifies [vtable][3] of rival entries)

 [1]: http://codegolf.stackexchange.com/q/104896/11933
 [2]: http://codegolf.stackexchange.com/a/105061/11933
 [3]: https://en.wikipedia.org/wiki/Vtable
 [4]: http://codegolf.stackexchange.com/a/104899/11933
 [5]: http://codegolf.stackexchange.com/a/104902/11933
 [6]: http://codegolf.stackexchange.com/a/104905/11933
 [7]: http://codegolf.stackexchange.com/a/104909/11933
 [8]: http://codegolf.stackexchange.com/a/104910/11933
 [9]: http://codegolf.stackexchange.com/a/104933/11933
 [10]: http://codegolf.stackexchange.com/a/104947/11933
 [11]: http://codegolf.stackexchange.com/a/104972/11933
 [12]: http://codegolf.stackexchange.com/a/105066/11933
 [13]: http://codegolf.stackexchange.com/a/105084/11933
 [14]: http://codegolf.stackexchange.com/a/105131/11933
 [15]: http://codegolf.stackexchange.com/a/105154/11933
 [16]: http://codegolf.stackexchange.com/a/105175/11933
 [17]: http://codegolf.stackexchange.com/a/105224/11933
 [18]: http://codegolf.stackexchange.com/a/105263/11933



#define screenWidth 1000
#define screenHeight 561
#define JUMPLIMIT 150

int characterMode = -1; //when value is 1 sonic speed 
//when value is 2 run
//when value is 3 backward run

//-------------------------------------------------------------------------character -----------------------------------------------------

//---------------round character---------------------------------

char roundChar[9][15] = { "round\\1.bmp", "round\\2.bmp", "round\\3.bmp", "round\\4.bmp", "round\\5.bmp", "round\\6.bmp", "round\\7.bmp", "round\\8.bmp", "round\\9.bmp" };

int roundCharacterIndex = 3;
int roundX = 0;
int roundY = 92;

//------------------------round character End -----------------------------

//-------------run charecter ----------------------------

char runChar[14][20] = { "run\\1.bmp", "run\\2.bmp", "run\\3.bmp", "run\\4.bmp", "run\\5.bmp", "run\\6.bmp", "run\\7.bmp", "run\\8.bmp", "run\\9.bmp", "run\\10.bmp", "run\\11.bmp", "run\\12.bmp", "run\\13.bmp", "run\\14.bmp", };
char runBackChar[14][20] = { "runBack\\1.bmp", "runBack\\2.bmp", "runBack\\3.bmp", "runBack\\4.bmp", "runBack\\5.bmp", "runBack\\6.bmp", "runBack\\7.bmp", "runBack\\8.bmp", "runBack\\9.bmp", "runBack\\10.bmp", "runBack\\11.bmp", "runBack\\12.bmp", "runBack\\13.bmp", "runBack\\14.bmp", };
int runIndex = 8;
int runBackIndex = 13;


//-----------------run end charecter -------------------



//-----------------stand character-------------------------

char standChar[3][15] = { "stand\\1.bmp", "stand\\2.bmp", "stand\\3.bmp" };
bool standPosition = true;
int standCounter = 0;
//--------------stand charater end ---------------------------


//---------------------jump--------------------------
char jumpChar[2][20] = { "jump\\up.bmp", "jump\\down.bmp" };
bool jump;
bool jumpUP;
int CoordinateJump = 0;

//--------------------jump end ---------------------





//---------------------------------------------------------------character ---------------------------------------------

//--------------run,jump,sonic---------------------

void sonicAllMode()
{

	if (jump)
	{
		if (jumpUP)
		{
			iShowBMP2(roundX, roundY + CoordinateJump, jumpChar[0], 0);
		}
		else
		{
			iShowBMP2(roundX, roundY + CoordinateJump, jumpChar[1], 0);
		}
	}
	else
	{
		/*
		iCircle(0, 0, 50);
		iText(250, 250, "Play Game", GLUT_BITMAP_HELVETICA_18);

		*/
		if (standPosition)
		{
			iShowBMP2(roundX, roundY, "stand\\2.bmp", 0);
		}
		else if (characterMode == 1)
		{
			iShowBMP2(roundX, roundY, roundChar[roundCharacterIndex], 0);
			standCounter++;
			if (standCounter >= 100)
			{
				standCounter = 0;
				roundCharacterIndex = 0;
				standPosition = true;
				characterMode = -1;

			}
		}

		else if (characterMode == 2)
		{
			iShowBMP2(roundX, roundY, runChar[runIndex], 0);
			standCounter++;
			if (standCounter >= 100)
			{
				standCounter = 0;
				runIndex = 0;
				standPosition = true;
				characterMode = -1;

			}
		}

		else if (characterMode == 3)
		{
			iShowBMP2(roundX, roundY, runBackChar[runBackIndex], 0);
			standCounter++;
			if (standCounter >= 100)
			{
				standCounter = 0;
				runIndex = 0;
				standPosition = true;
				characterMode = -1;

			}
		}
	}

}
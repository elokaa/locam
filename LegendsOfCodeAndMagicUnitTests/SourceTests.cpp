#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LegendsOfCodeAndMagicExecutable/SourceHeader.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LegendsOfCodeAndMagicUnitTests
{
	TEST_CLASS(GameActionTests)
	{
	public:

		TEST_METHOD(TestToStringConvertsGameActionToString)
		{
			//given
			GameAction gameAction = GameAction::SUMMON;
			string output;

			//when
			output = toString(gameAction);

			//then
			Assert::IsTrue("SUMMON" == output);
		}

		TEST_METHOD(TestToGameActionConvertsStringToGameAction) {
			//given
			string input = "ATTACK";
			GameAction output;

			//when
			output = toGameAction(input);

			//then
			Assert::IsTrue(output == GameAction::ATTACK);
		}

	};
}
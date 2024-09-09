#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum QuestDetail_FinishStatus.QuestDetail_FinishStatus
	 */
	enum class EQuestDetail_FinishStatus : uint8_t
	{
		QuestDetail_FinishStatusNewEnumerator2  = 0,
		QuestDetail_FinishStatusNewEnumerator0  = 1,
		QuestDetail_FinishStatusNewEnumerator1  = 2,
		QuestDetail_FinishStatusNewEnumerator3  = 3,
		QuestDetail_FinishStatusNewEnumerator4  = 4,
		QuestDetail_FinishStatusQuestDetail_MAX = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

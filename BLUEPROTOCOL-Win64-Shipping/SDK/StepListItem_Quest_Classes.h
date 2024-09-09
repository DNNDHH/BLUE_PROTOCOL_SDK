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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass StepListItem_Quest.StepListItem_Quest_C
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UStepListItem_Quest_C : public USBStepListQuestItem
	{
	public:
		void OnSetNFTTitle();
		void OnSetInterruptQuestTitle();
		void OnSetQuestTitle(const struct FQuestMasterData& QuestMasterData);
		void GetTitle(class UStepListItem_Title_C** AsStepListItemTitle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass QuestIcon.QuestIcon_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UQuestIcon_C : public UUserWidget
	{
	public:
		class UImage*                                              IconImage;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetIconByQuestIndex_ForInteractableEventPoint(int32_t QuestIndex, bool bQuestionMark);
		void SetQuestIconQuestion();
		void SetQuestIconClosed();
		void SetQuestIcon(int32_t QuestID);
		void SetIconTexture(TMap<EQuestStatus, class UTexture2D*> TextureList, EQuestStatus Status);
		void SetIconZOrder(TMap<EQuestStatus, ESBMiniMapIconType> IconTypeList, EQuestStatus Status);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

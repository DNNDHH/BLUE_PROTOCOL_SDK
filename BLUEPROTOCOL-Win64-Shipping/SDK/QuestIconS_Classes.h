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
	 * WidgetBlueprintGeneratedClass QuestIconS.QuestIconS_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UQuestIconS_C : public UUserWidget
	{
	public:
		class UImage*                                              Icon;                                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ListComplete;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ListProgress;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchIcon;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetWishListIcon(EQuestStatus InQuestStatus);
		void GetNextMainQuestIndex(int32_t CurrentQuestIndex, int32_t* NextMainQuest);
		void GetQuestStatusForSetIcon(int32_t InQuestIndex, EQuestStatus* OutQuestStatus, EQuestCategory2* OutCategory2, bool* OutIsAllowProceed);
		void SetIconForQuestHistory(int32_t InQuestIndex);
		void SetIconForStepList(int32_t InQuestIndex);
		void SetIconbyQuestIndex(int32_t InQuestIndex);
		void SetIcon(EQuestStatus InQuestStatus, EQuestCategory2 InQuestCategory2, bool bInAllowProceed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass WBP_NaEventQuestMenu.WBP_NaEventQuestMenu_C
	 * Size -> 0x000C (FullSize[0x0284] - InheritedSize[0x0278])
	 */
	class UWBP_NaEventQuestMenu_C : public UUserWidget
	{
	public:
		class UUMG_SeasonPassQuestEventListMain_C*                 UMG_SeasonPassQuestEventListMain;                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    EventId;                                                 // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetData(class USBNaEventData* InEventData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

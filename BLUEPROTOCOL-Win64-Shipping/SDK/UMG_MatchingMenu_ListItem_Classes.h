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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C
	 * Size -> 0x0281 (FullSize[0x04F9] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_ListItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEventIcon_C*                                        EventIcon;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImagComplete;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageClock;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageNew;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ItemButton;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RecommendLevelText;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtName;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                DungeonId;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSBMapInfo                                          DungeonMapInfo;                                          // 0x02C0(0x01F8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUMG_RewardBoostTooltip_C*                           RewardBoostTooltip;                                      // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBHelpMatchingModeInfo                             HelpMatchingInfo;                                        // 0x04D0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       IsHelpMode;                                              // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetRewardSearchName(class FName* SearchName);
		void MakeMapInfo();
		void GetHelpMatchingRequiredInfo(int32_t* BattleScore, int32_t* ClassLevel);
		void SetVisibilityNew(bool bShow);
		class UWidget* Get_ItemButton_ToolTipWidget_1();
		void SetSelect(bool Select);
		void UpdateStyle(bool IsFocus);
		void Construct();
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void OnUpdateRewardBoostInfo(class UObject* Sender, class UObject* Param);
		void UpdateBonusIcon();
		void ExecuteUbergraph_UMG_MatchingMenu_ListItem(int32_t EntryPoint);
		void OnSelected__DelegateSignature(const struct FSBMapInfo& DungeonMapInfo, class UUMG_MatchingMenu_ListItem_C* ListItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

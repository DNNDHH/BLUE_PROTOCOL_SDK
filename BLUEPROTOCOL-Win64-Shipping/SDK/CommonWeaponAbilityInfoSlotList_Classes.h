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
	 * WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C
	 * Size -> 0x008D (FullSize[0x0305] - InheritedSize[0x0278])
	 */
	class UCommonWeaponAbilityInfoSlotList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 RuntimeText_EffectHeading;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeText_IsSlotEmptyTxt;                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeText_IsUnknownSlot;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeText_pyphen;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlot_C*                      Slot1;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlot_C*                      Slot2;                                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlot_C*                      Slot3;                                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlot_C*                      Slot4;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherSlot;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_SlotNumMax;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_SlotNumMin;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_Slot;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VLine01;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotNumMax;                                              // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LineColor;                                               // 0x02EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SwitcherSlotDefaultPosition;                             // 0x02FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VlineVisibility;                                         // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetSlotInfoBase(int32_t InUnlockedSlotNum, TArray<struct FSBCharacterWeaponPerkData>* InPerkList, int32_t InUsedSlotNum, bool* bHasValidAbility);
		void GetUnlockSlotMinMax(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward, int32_t* Min, int32_t* Max);
		void SetLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward);
		void SetUnknownSlot();
		void SetRecipeId(int32_t RecipeId);
		void SetTextColor(const struct FSlateColor& InColorAndOpacity);
		void SetVLineVisibility(bool InIsVisible);
		void SetSlotInfoByUniqueId(const class FString& UniqueId, bool* bHasValidAbility);
		void SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData, bool* bHasValidAbility);
		void GetSlot(int32_t InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlot_C** OutSlot);
		void SwitchSlotInfoType(bool InIsSlotUnlocked);
		void InitAllSlot();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CommonWeaponAbilityInfoSlotList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

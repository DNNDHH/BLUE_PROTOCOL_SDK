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
	 * WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C
	 * Size -> 0x0034 (FullSize[0x02AC] - InheritedSize[0x0278])
	 */
	class UCommonWeaponAbilityInfoSlotListDetailed_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonWeaponAbilityInfoSlotDetailed_C*              SlotDetailed1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlotDetailed_C*              SlotDetailed2;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlotDetailed_C*              SlotDetailed3;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlotDetailed_C*              SlotDetailed4;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_SlotDetailed;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotNumMax;                                              // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSlotOccupancy(int32_t InSlotId, int32_t InOccupancyNum);
		void SetSlotEmpty(int32_t InSlotId, bool InIsEmpty);
		void SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData);
		void GetSlot(int32_t InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlotDetailed_C** OutSlot);
		void InitAllSlot();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

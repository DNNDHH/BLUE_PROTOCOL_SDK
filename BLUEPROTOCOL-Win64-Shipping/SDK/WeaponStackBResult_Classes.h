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
	 * WidgetBlueprintGeneratedClass WeaponStackBResult.WeaponStackBResult_C
	 * Size -> 0x02B8 (FullSize[0x0530] - InheritedSize[0x0278])
	 */
	class UWeaponStackBResult_C : public UUserWidget
	{
	public:
		class UCommonEquipmentStatusDescWithImageView_C*           CommonEquipmentStatusDescWithImageView;                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_638;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponCustomMenuPartSlotBoxL_C*                     WeaponSynthePart_PerkSlotBox;                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        beforeData;                                              // 0x0290(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOwnItemInfo                                        afterData;                                               // 0x03E0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetAfterData(const struct FOwnItemInfo& afterData);
		void SetBeforeData(const struct FOwnItemInfo& beforeData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

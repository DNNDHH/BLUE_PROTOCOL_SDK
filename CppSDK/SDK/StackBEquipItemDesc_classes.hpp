#pragma once

 

// Package: StackBEquipItemDesc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBEquipItemDesc.StackBEquipItemDesc_C
// 0x00E0 (0x0358 - 0x0278)
class UStackBEquipItemDesc_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BaseSwitch;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_302;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipStatusView_C*                     ImagineEquipStatus;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ImagineStat;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AtrbVal;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineAbilityName;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineAtk;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineDef;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineName;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LevelImagine;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LevelWeapon;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SpecialValue;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponAtk;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponCRT;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponSpecialName;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipStatusView_C*                     WeaponEquipStatus;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           WeaponStat;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StackBEquipItemDesc(int32 EntryPoint);
	void Set_OwnItemData(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyWeaponStatus(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyImagineStatus(const struct FOwnItemInfo& OwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBEquipItemDesc_C">();
	}
	static class UStackBEquipItemDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBEquipItemDesc_C>();
	}
};
static_assert(alignof(UStackBEquipItemDesc_C) == 0x000008, "Wrong alignment on UStackBEquipItemDesc_C");
static_assert(sizeof(UStackBEquipItemDesc_C) == 0x000358, "Wrong size on UStackBEquipItemDesc_C");
static_assert(offsetof(UStackBEquipItemDesc_C, UberGraphFrame) == 0x000278, "Member 'UStackBEquipItemDesc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, AttributeIcon) == 0x000280, "Member 'UStackBEquipItemDesc_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, BaseSwitch) == 0x000288, "Member 'UStackBEquipItemDesc_C::BaseSwitch' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image) == 0x000290, "Member 'UStackBEquipItemDesc_C::Image' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_1) == 0x000298, "Member 'UStackBEquipItemDesc_C::Image_1' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_2) == 0x0002A0, "Member 'UStackBEquipItemDesc_C::Image_2' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_3) == 0x0002A8, "Member 'UStackBEquipItemDesc_C::Image_3' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_4) == 0x0002B0, "Member 'UStackBEquipItemDesc_C::Image_4' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_5) == 0x0002B8, "Member 'UStackBEquipItemDesc_C::Image_5' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_6) == 0x0002C0, "Member 'UStackBEquipItemDesc_C::Image_6' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_7) == 0x0002C8, "Member 'UStackBEquipItemDesc_C::Image_7' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Image_302) == 0x0002D0, "Member 'UStackBEquipItemDesc_C::Image_302' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, ImagineEquipStatus) == 0x0002D8, "Member 'UStackBEquipItemDesc_C::ImagineEquipStatus' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, ImagineStat) == 0x0002E0, "Member 'UStackBEquipItemDesc_C::ImagineStat' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_AtrbVal) == 0x0002E8, "Member 'UStackBEquipItemDesc_C::Txt_AtrbVal' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_ImagineAbilityName) == 0x0002F0, "Member 'UStackBEquipItemDesc_C::Txt_ImagineAbilityName' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_ImagineAtk) == 0x0002F8, "Member 'UStackBEquipItemDesc_C::Txt_ImagineAtk' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_ImagineDef) == 0x000300, "Member 'UStackBEquipItemDesc_C::Txt_ImagineDef' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_ImagineName) == 0x000308, "Member 'UStackBEquipItemDesc_C::Txt_ImagineName' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_LevelImagine) == 0x000310, "Member 'UStackBEquipItemDesc_C::Txt_LevelImagine' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_LevelWeapon) == 0x000318, "Member 'UStackBEquipItemDesc_C::Txt_LevelWeapon' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_SpecialValue) == 0x000320, "Member 'UStackBEquipItemDesc_C::Txt_SpecialValue' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_WeaponAtk) == 0x000328, "Member 'UStackBEquipItemDesc_C::Txt_WeaponAtk' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_WeaponCRT) == 0x000330, "Member 'UStackBEquipItemDesc_C::Txt_WeaponCRT' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_WeaponName) == 0x000338, "Member 'UStackBEquipItemDesc_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, Txt_WeaponSpecialName) == 0x000340, "Member 'UStackBEquipItemDesc_C::Txt_WeaponSpecialName' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, WeaponEquipStatus) == 0x000348, "Member 'UStackBEquipItemDesc_C::WeaponEquipStatus' has a wrong offset!");
static_assert(offsetof(UStackBEquipItemDesc_C, WeaponStat) == 0x000350, "Member 'UStackBEquipItemDesc_C::WeaponStat' has a wrong offset!");

}


#pragma once

 

// Package: StackBEnhanceImagineTypeIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C
// 0x0030 (0x02A8 - 0x0278)
class UStackBEnhanceImagineTypeIcon_C final : public UUserWidget
{
public:
	class UImage*                                 InnerImagineEquipPositionIcon1;                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon2;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon3;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon4;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon5;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForInnerImagineEquipPositionIcon;          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetMasterData(const struct FSBMasterImagine& SBMasterImagine);
	void SetIconColor(const struct FLinearColor& NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBEnhanceImagineTypeIcon_C">();
	}
	static class UStackBEnhanceImagineTypeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBEnhanceImagineTypeIcon_C>();
	}
};
static_assert(alignof(UStackBEnhanceImagineTypeIcon_C) == 0x000008, "Wrong alignment on UStackBEnhanceImagineTypeIcon_C");
static_assert(sizeof(UStackBEnhanceImagineTypeIcon_C) == 0x0002A8, "Wrong size on UStackBEnhanceImagineTypeIcon_C");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, InnerImagineEquipPositionIcon1) == 0x000278, "Member 'UStackBEnhanceImagineTypeIcon_C::InnerImagineEquipPositionIcon1' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, InnerImagineEquipPositionIcon2) == 0x000280, "Member 'UStackBEnhanceImagineTypeIcon_C::InnerImagineEquipPositionIcon2' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, InnerImagineEquipPositionIcon3) == 0x000288, "Member 'UStackBEnhanceImagineTypeIcon_C::InnerImagineEquipPositionIcon3' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, InnerImagineEquipPositionIcon4) == 0x000290, "Member 'UStackBEnhanceImagineTypeIcon_C::InnerImagineEquipPositionIcon4' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, InnerImagineEquipPositionIcon5) == 0x000298, "Member 'UStackBEnhanceImagineTypeIcon_C::InnerImagineEquipPositionIcon5' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineTypeIcon_C, SwitcherForInnerImagineEquipPositionIcon) == 0x0002A0, "Member 'UStackBEnhanceImagineTypeIcon_C::SwitcherForInnerImagineEquipPositionIcon' has a wrong offset!");

}


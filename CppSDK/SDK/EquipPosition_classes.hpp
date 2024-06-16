#pragma once

 

// Package: EquipPosition

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipPosition.EquipPosition_C
// 0x0040 (0x02B8 - 0x0278)
class UEquipPosition_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         HBoxForInnerImagineEquipPosition;                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon1;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon2;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon3;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon4;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon5;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForInnerImagineEquipPositionIcon;          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImginePosTxt;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetEquipPosition(int32 Imagine_Id);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipPosition_C">();
	}
	static class UEquipPosition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipPosition_C>();
	}
};
static_assert(alignof(UEquipPosition_C) == 0x000008, "Wrong alignment on UEquipPosition_C");
static_assert(sizeof(UEquipPosition_C) == 0x0002B8, "Wrong size on UEquipPosition_C");
static_assert(offsetof(UEquipPosition_C, HBoxForInnerImagineEquipPosition) == 0x000278, "Member 'UEquipPosition_C::HBoxForInnerImagineEquipPosition' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, InnerImagineEquipPositionIcon1) == 0x000280, "Member 'UEquipPosition_C::InnerImagineEquipPositionIcon1' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, InnerImagineEquipPositionIcon2) == 0x000288, "Member 'UEquipPosition_C::InnerImagineEquipPositionIcon2' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, InnerImagineEquipPositionIcon3) == 0x000290, "Member 'UEquipPosition_C::InnerImagineEquipPositionIcon3' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, InnerImagineEquipPositionIcon4) == 0x000298, "Member 'UEquipPosition_C::InnerImagineEquipPositionIcon4' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, InnerImagineEquipPositionIcon5) == 0x0002A0, "Member 'UEquipPosition_C::InnerImagineEquipPositionIcon5' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, SwitcherForInnerImagineEquipPositionIcon) == 0x0002A8, "Member 'UEquipPosition_C::SwitcherForInnerImagineEquipPositionIcon' has a wrong offset!");
static_assert(offsetof(UEquipPosition_C, Txt_ImginePosTxt) == 0x0002B0, "Member 'UEquipPosition_C::Txt_ImginePosTxt' has a wrong offset!");

}


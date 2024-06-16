#pragma once

 

// Package: CommonEquipmentStatusDescBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C
// 0x0080 (0x02F8 - 0x0278)
class UCommonEquipmentStatusDescBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BeltBg;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EquipmentName;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForEquipNameAndStackBIcon;                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForInnerImagineEquipPosition;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon1;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon2;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon3;                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon4;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerImagineEquipPositionIcon5;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForBaseBg;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForInnerImagineEquipPositionIcon;          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ImaginePosition;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BaseWidth;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BaseHeight;                                        // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonEquipmentStatusDescBase(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetBaseSize(float InWidth, float InHeight);
	void SwitchBaseBgType(bool InIsNormalType);
	void SetEquipmentName(const class FString& InName);
	void SetBlank(bool InIsBlank);
	void SetInnerImagineEquipPositionVisibility(bool InIsVisible);
	void SetInnerImagineEquipPositionByMasterData(const struct FSBMasterImagine& InImagineMasterData);
	void SetInnerImagineEquipPositionByCharaEquipType(ESBCharaEquipType InCharaEquipType);
	void SetStackBIcon(const struct FOwnItemInfo& ItemInfo, bool InIsEffectiveDisplay);
	void ResetStackBIcon(bool InIsEffectiveDisplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentStatusDescBase_C">();
	}
	static class UCommonEquipmentStatusDescBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentStatusDescBase_C>();
	}
};
static_assert(alignof(UCommonEquipmentStatusDescBase_C) == 0x000008, "Wrong alignment on UCommonEquipmentStatusDescBase_C");
static_assert(sizeof(UCommonEquipmentStatusDescBase_C) == 0x0002F8, "Wrong size on UCommonEquipmentStatusDescBase_C");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, UberGraphFrame) == 0x000278, "Member 'UCommonEquipmentStatusDescBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, BeltBg) == 0x000280, "Member 'UCommonEquipmentStatusDescBase_C::BeltBg' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, EquipmentName) == 0x000288, "Member 'UCommonEquipmentStatusDescBase_C::EquipmentName' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, HBoxForEquipNameAndStackBIcon) == 0x000290, "Member 'UCommonEquipmentStatusDescBase_C::HBoxForEquipNameAndStackBIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, HBoxForInnerImagineEquipPosition) == 0x000298, "Member 'UCommonEquipmentStatusDescBase_C::HBoxForInnerImagineEquipPosition' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, InnerImagineEquipPositionIcon1) == 0x0002A0, "Member 'UCommonEquipmentStatusDescBase_C::InnerImagineEquipPositionIcon1' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, InnerImagineEquipPositionIcon2) == 0x0002A8, "Member 'UCommonEquipmentStatusDescBase_C::InnerImagineEquipPositionIcon2' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, InnerImagineEquipPositionIcon3) == 0x0002B0, "Member 'UCommonEquipmentStatusDescBase_C::InnerImagineEquipPositionIcon3' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, InnerImagineEquipPositionIcon4) == 0x0002B8, "Member 'UCommonEquipmentStatusDescBase_C::InnerImagineEquipPositionIcon4' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, InnerImagineEquipPositionIcon5) == 0x0002C0, "Member 'UCommonEquipmentStatusDescBase_C::InnerImagineEquipPositionIcon5' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, Line) == 0x0002C8, "Member 'UCommonEquipmentStatusDescBase_C::Line' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, StackBIcon) == 0x0002D0, "Member 'UCommonEquipmentStatusDescBase_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, SwitcherForBaseBg) == 0x0002D8, "Member 'UCommonEquipmentStatusDescBase_C::SwitcherForBaseBg' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, SwitcherForInnerImagineEquipPositionIcon) == 0x0002E0, "Member 'UCommonEquipmentStatusDescBase_C::SwitcherForInnerImagineEquipPositionIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, Txt_ImaginePosition) == 0x0002E8, "Member 'UCommonEquipmentStatusDescBase_C::Txt_ImaginePosition' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, BaseWidth) == 0x0002F0, "Member 'UCommonEquipmentStatusDescBase_C::BaseWidth' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescBase_C, BaseHeight) == 0x0002F4, "Member 'UCommonEquipmentStatusDescBase_C::BaseHeight' has a wrong offset!");

}


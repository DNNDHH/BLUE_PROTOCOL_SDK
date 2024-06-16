#pragma once

 

// Package: WeaponList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponList.WeaponList_C
// 0x00E8 (0x0360 - 0x0278)
class UWeaponList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_01;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_02;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonSndBtn_C*                      SBButtonSndBtn_C_101;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkinSealImage;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSkinSealName;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtWeaponName;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Weapon_CaptureStudio;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsStackB;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C2[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x02E0(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          InToolTipsEnable;                                  // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WeaponList(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Construct();
	void SetData(const struct FOwnItemInfo& InOwnItemIfno, bool Param_InToolTipsEnable);
	void ReloadWeaponAsset(int32 WeaponItemId);
	void WeaponList_AutoGenFunc();
	void Set_Stack_BIconby_Own_Item_Info(const struct FOwnItemInfo& InOwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponList_C">();
	}
	static class UWeaponList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponList_C>();
	}
};
static_assert(alignof(UWeaponList_C) == 0x000008, "Wrong alignment on UWeaponList_C");
static_assert(sizeof(UWeaponList_C) == 0x000360, "Wrong size on UWeaponList_C");
static_assert(offsetof(UWeaponList_C, UberGraphFrame) == 0x000278, "Member 'UWeaponList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, InAnim) == 0x000280, "Member 'UWeaponList_C::InAnim' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, CanvasPanel_0) == 0x000288, "Member 'UWeaponList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, Line_01) == 0x000290, "Member 'UWeaponList_C::Line_01' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, Line_02) == 0x000298, "Member 'UWeaponList_C::Line_02' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, SBButtonSndBtn_C_101) == 0x0002A0, "Member 'UWeaponList_C::SBButtonSndBtn_C_101' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, SkinSealImage) == 0x0002A8, "Member 'UWeaponList_C::SkinSealImage' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, StackBIcon) == 0x0002B0, "Member 'UWeaponList_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, TxtSkinSealName) == 0x0002B8, "Member 'UWeaponList_C::TxtSkinSealName' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, TxtWeaponName) == 0x0002C0, "Member 'UWeaponList_C::TxtWeaponName' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, Weapon_CaptureStudio) == 0x0002C8, "Member 'UWeaponList_C::Weapon_CaptureStudio' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, bIsStackB) == 0x0002D0, "Member 'UWeaponList_C::bIsStackB' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, CachedToolTipWidget) == 0x0002D8, "Member 'UWeaponList_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, ToolTipInfo) == 0x0002E0, "Member 'UWeaponList_C::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(UWeaponList_C, InToolTipsEnable) == 0x000358, "Member 'UWeaponList_C::InToolTipsEnable' has a wrong offset!");

}


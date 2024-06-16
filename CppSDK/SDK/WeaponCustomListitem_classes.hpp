#pragma once

 

// Package: WeaponCustomListitem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponCustomListitem.WeaponCustomListitem_C
// 0x0170 (0x03E8 - 0x0278)
class UWeaponCustomListitem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Click;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_selected;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Appendix;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponLevel;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponType;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSlotBar_C*                       WeaponSlotBar;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           Weapon_Data;                                       // 0x02D0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSelect__DelegateSignature(const struct FOwnItemInfo& OnSelectWeapn, class UWeaponCustomListitem_C* Select);
	void ExecuteUbergraph_WeaponCustomListitem(int32 EntryPoint);
	void BndEvt__WeaponCustomListitem_Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetWeaponData(const struct FOwnItemInfo& WeaponData);
	void SetSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponCustomListitem_C">();
	}
	static class UWeaponCustomListitem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponCustomListitem_C>();
	}
};
static_assert(alignof(UWeaponCustomListitem_C) == 0x000008, "Wrong alignment on UWeaponCustomListitem_C");
static_assert(sizeof(UWeaponCustomListitem_C) == 0x0003E8, "Wrong size on UWeaponCustomListitem_C");
static_assert(offsetof(UWeaponCustomListitem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponCustomListitem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Btn_Click) == 0x000280, "Member 'UWeaponCustomListitem_C::Btn_Click' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, CommonIcon) == 0x000288, "Member 'UWeaponCustomListitem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Img_selected) == 0x000290, "Member 'UWeaponCustomListitem_C::Img_selected' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Txt_Appendix) == 0x000298, "Member 'UWeaponCustomListitem_C::Txt_Appendix' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Txt_WeaponLevel) == 0x0002A0, "Member 'UWeaponCustomListitem_C::Txt_WeaponLevel' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Txt_WeaponName) == 0x0002A8, "Member 'UWeaponCustomListitem_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Txt_WeaponType) == 0x0002B0, "Member 'UWeaponCustomListitem_C::Txt_WeaponType' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, WeaponSlotBar) == 0x0002B8, "Member 'UWeaponCustomListitem_C::WeaponSlotBar' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, OnSelect) == 0x0002C0, "Member 'UWeaponCustomListitem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UWeaponCustomListitem_C, Weapon_Data) == 0x0002D0, "Member 'UWeaponCustomListitem_C::Weapon_Data' has a wrong offset!");

}


#pragma once

 

// Package: WeaponSynthePart_ButtonDecide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_ButtonDecide.WeaponSynthePart_ButtonDecide_C
// 0x0048 (0x02C0 - 0x0278)
class UWeaponSynthePart_ButtonDecide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnAnim_ArrowM_C*                      ArrowM;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           OpenSlot;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmn08_C*                       OpenSlotBtn;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    OpenSlotText;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      In_Text_Table;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         In_Text_Id;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_WeaponSynthePart_ButtonDecide(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn_OpenSlot_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_OpenSlot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_OpenSlot_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetEnableButton(bool bInIsEnabled);
	void SetColorText(bool IsActive);
	void SetVisibleArrow(bool Visible);
	void PlayAnimArrow();
	void StopAnimArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_ButtonDecide_C">();
	}
	static class UWeaponSynthePart_ButtonDecide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_ButtonDecide_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_ButtonDecide_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_ButtonDecide_C");
static_assert(sizeof(UWeaponSynthePart_ButtonDecide_C) == 0x0002C0, "Wrong size on UWeaponSynthePart_ButtonDecide_C");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_ButtonDecide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, ArrowM) == 0x000280, "Member 'UWeaponSynthePart_ButtonDecide_C::ArrowM' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, OpenSlot) == 0x000288, "Member 'UWeaponSynthePart_ButtonDecide_C::OpenSlot' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, OpenSlotBtn) == 0x000290, "Member 'UWeaponSynthePart_ButtonDecide_C::OpenSlotBtn' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, OpenSlotText) == 0x000298, "Member 'UWeaponSynthePart_ButtonDecide_C::OpenSlotText' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, OnClicked) == 0x0002A0, "Member 'UWeaponSynthePart_ButtonDecide_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, In_Text_Table) == 0x0002B0, "Member 'UWeaponSynthePart_ButtonDecide_C::In_Text_Table' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonDecide_C, In_Text_Id) == 0x0002B8, "Member 'UWeaponSynthePart_ButtonDecide_C::In_Text_Id' has a wrong offset!");

}


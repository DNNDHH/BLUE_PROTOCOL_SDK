#pragma once

 

// Package: JankenButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JankenButton.JankenButton_C
// 0x0060 (0x02D8 - 0x0278)
class UJankenButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSelected;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1_1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1_2;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 JankenImage;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SwitchId;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8C3A[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSelected;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(int32 ButtonId);
	void ExecuteUbergraph_JankenButton(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetBtnSelected(bool Param_bSelected);
	void SetBtnType(int32 InIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JankenButton_C">();
	}
	static class UJankenButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJankenButton_C>();
	}
};
static_assert(alignof(UJankenButton_C) == 0x000008, "Wrong alignment on UJankenButton_C");
static_assert(sizeof(UJankenButton_C) == 0x0002D8, "Wrong size on UJankenButton_C");
static_assert(offsetof(UJankenButton_C, UberGraphFrame) == 0x000278, "Member 'UJankenButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, AnimSelected) == 0x000280, "Member 'UJankenButton_C::AnimSelected' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, AnimHovered) == 0x000288, "Member 'UJankenButton_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, Bg1) == 0x000290, "Member 'UJankenButton_C::Bg1' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, Btn1) == 0x000298, "Member 'UJankenButton_C::Btn1' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, Effect1_1) == 0x0002A0, "Member 'UJankenButton_C::Effect1_1' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, Effect1_2) == 0x0002A8, "Member 'UJankenButton_C::Effect1_2' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, JankenImage) == 0x0002B0, "Member 'UJankenButton_C::JankenImage' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, SwitchId) == 0x0002B8, "Member 'UJankenButton_C::SwitchId' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, OnSelect) == 0x0002C0, "Member 'UJankenButton_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UJankenButton_C, bSelected) == 0x0002D0, "Member 'UJankenButton_C::bSelected' has a wrong offset!");

}


#pragma once

 

// Package: GuildMemberManageCBIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberManageCBIcon.GuildMemberManageCBIcon_C
// 0x0030 (0x02A8 - 0x0278)
class UGuildMemberManageCBIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             CB_Check;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Attribute;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TextId;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5471[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateState;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnUpdateState__DelegateSignature();
	void ExecuteUbergraph_GuildMemberManageCBIcon(int32 EntryPoint);
	void BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetTextById(int32 Param_TextId);
	void IsCheck(bool* Param_IsCheck);
	void SetChecked(bool bIsCheck);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberManageCBIcon_C">();
	}
	static class UGuildMemberManageCBIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberManageCBIcon_C>();
	}
};
static_assert(alignof(UGuildMemberManageCBIcon_C) == 0x000008, "Wrong alignment on UGuildMemberManageCBIcon_C");
static_assert(sizeof(UGuildMemberManageCBIcon_C) == 0x0002A8, "Wrong size on UGuildMemberManageCBIcon_C");
static_assert(offsetof(UGuildMemberManageCBIcon_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberManageCBIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberManageCBIcon_C, CB_Check) == 0x000280, "Member 'UGuildMemberManageCBIcon_C::CB_Check' has a wrong offset!");
static_assert(offsetof(UGuildMemberManageCBIcon_C, Txt_Attribute) == 0x000288, "Member 'UGuildMemberManageCBIcon_C::Txt_Attribute' has a wrong offset!");
static_assert(offsetof(UGuildMemberManageCBIcon_C, TextId) == 0x000290, "Member 'UGuildMemberManageCBIcon_C::TextId' has a wrong offset!");
static_assert(offsetof(UGuildMemberManageCBIcon_C, OnUpdateState) == 0x000298, "Member 'UGuildMemberManageCBIcon_C::OnUpdateState' has a wrong offset!");

}


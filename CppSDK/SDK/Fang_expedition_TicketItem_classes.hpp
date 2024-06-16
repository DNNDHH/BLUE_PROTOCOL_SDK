#pragma once

 

// Package: Fang_expedition_TicketItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_TicketItem.Fang_expedition_TicketItem_C
// 0x0060 (0x02D8 - 0x0278)
class UFang_expedition_TicketItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CheckBox_37;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconSimple_C*                    CommonIconSimple;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      InfoIcon;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TicketName;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TokenNum;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Warning;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F16[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCheckStateChange;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TempCheckState;                                    // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F17[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       ToolTip;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCheckStateChange__DelegateSignature(bool CheckState, int32 ID);
	void ExecuteUbergraph_Fang_expedition_TicketItem(int32 EntryPoint);
	void Destruct();
	void BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void SetData(int32 ID, bool Select, bool Disable);
	void SetDisableTextVisibility(bool Disable);
	void GetSelectState(bool* IsSelected, int32* Param_TokenID);
	void Initialize();
	void SetCheckState(bool State);
	void UpdateTicketNum();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_TicketItem_C">();
	}
	static class UFang_expedition_TicketItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_TicketItem_C>();
	}
};
static_assert(alignof(UFang_expedition_TicketItem_C) == 0x000008, "Wrong alignment on UFang_expedition_TicketItem_C");
static_assert(sizeof(UFang_expedition_TicketItem_C) == 0x0002D8, "Wrong size on UFang_expedition_TicketItem_C");
static_assert(offsetof(UFang_expedition_TicketItem_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_TicketItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, CheckBox_37) == 0x000280, "Member 'UFang_expedition_TicketItem_C::CheckBox_37' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, CommonIconSimple) == 0x000288, "Member 'UFang_expedition_TicketItem_C::CommonIconSimple' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, InfoIcon) == 0x000290, "Member 'UFang_expedition_TicketItem_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, Text_TicketName) == 0x000298, "Member 'UFang_expedition_TicketItem_C::Text_TicketName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, Text_TokenNum) == 0x0002A0, "Member 'UFang_expedition_TicketItem_C::Text_TokenNum' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, Text_Warning) == 0x0002A8, "Member 'UFang_expedition_TicketItem_C::Text_Warning' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, TokenID) == 0x0002B0, "Member 'UFang_expedition_TicketItem_C::TokenID' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, OnCheckStateChange) == 0x0002B8, "Member 'UFang_expedition_TicketItem_C::OnCheckStateChange' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, TempCheckState) == 0x0002C8, "Member 'UFang_expedition_TicketItem_C::TempCheckState' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketItem_C, ToolTip) == 0x0002D0, "Member 'UFang_expedition_TicketItem_C::ToolTip' has a wrong offset!");

}


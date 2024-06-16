#pragma once

 

// Package: GuildEntryItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildEntryItem.GuildEntryItem_C
// 0x0638 (0x08B0 - 0x0278)
class UGuildEntryItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Entry;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_GuildName;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeaderName;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildEntryData                        GuildEntryData;                                    // 0x02A0(0x00E0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked_GuildEntry;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           BtnNomal;                                          // 0x0390(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnSelected;                                       // 0x0608(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuildEntryData_CS                     GuildEntryData_CS;                                 // 0x0880(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn);
	void ExecuteUbergraph_GuildEntryItem(int32 EntryPoint);
	void Selected();
	void Unselected();
	void BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildEntryItem_C">();
	}
	static class UGuildEntryItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildEntryItem_C>();
	}
};
static_assert(alignof(UGuildEntryItem_C) == 0x000008, "Wrong alignment on UGuildEntryItem_C");
static_assert(sizeof(UGuildEntryItem_C) == 0x0008B0, "Wrong size on UGuildEntryItem_C");
static_assert(offsetof(UGuildEntryItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildEntryItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, Btn_Entry) == 0x000280, "Member 'UGuildEntryItem_C::Btn_Entry' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, GuildTag) == 0x000288, "Member 'UGuildEntryItem_C::GuildTag' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, Txt_GuildName) == 0x000290, "Member 'UGuildEntryItem_C::Txt_GuildName' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, Txt_LeaderName) == 0x000298, "Member 'UGuildEntryItem_C::Txt_LeaderName' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, GuildEntryData) == 0x0002A0, "Member 'UGuildEntryItem_C::GuildEntryData' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, OnClicked_GuildEntry) == 0x000380, "Member 'UGuildEntryItem_C::OnClicked_GuildEntry' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, BtnNomal) == 0x000390, "Member 'UGuildEntryItem_C::BtnNomal' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, BtnSelected) == 0x000608, "Member 'UGuildEntryItem_C::BtnSelected' has a wrong offset!");
static_assert(offsetof(UGuildEntryItem_C, GuildEntryData_CS) == 0x000880, "Member 'UGuildEntryItem_C::GuildEntryData_CS' has a wrong offset!");

}


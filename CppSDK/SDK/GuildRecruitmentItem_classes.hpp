#pragma once

 

// Package: GuildRecruitmentItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRecruitmentItem.GuildRecruitmentItem_C
// 0x0148 (0x03C0 - 0x0278)
class UGuildRecruitmentItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Entry;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_GuildName;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeaderName;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildEntryData                        GuildEntryData;                                    // 0x02A0(0x00E0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked_GuildEntry;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuildEntryData_CS                     GuildEntryData_CS;                                 // 0x0390(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
	void ExecuteUbergraph_GuildRecruitmentItem(int32 EntryPoint);
	void Unselected();
	void BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRecruitmentItem_C">();
	}
	static class UGuildRecruitmentItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRecruitmentItem_C>();
	}
};
static_assert(alignof(UGuildRecruitmentItem_C) == 0x000008, "Wrong alignment on UGuildRecruitmentItem_C");
static_assert(sizeof(UGuildRecruitmentItem_C) == 0x0003C0, "Wrong size on UGuildRecruitmentItem_C");
static_assert(offsetof(UGuildRecruitmentItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildRecruitmentItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, Btn_Entry) == 0x000280, "Member 'UGuildRecruitmentItem_C::Btn_Entry' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, GuildTag) == 0x000288, "Member 'UGuildRecruitmentItem_C::GuildTag' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, Txt_GuildName) == 0x000290, "Member 'UGuildRecruitmentItem_C::Txt_GuildName' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, Txt_LeaderName) == 0x000298, "Member 'UGuildRecruitmentItem_C::Txt_LeaderName' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, GuildEntryData) == 0x0002A0, "Member 'UGuildRecruitmentItem_C::GuildEntryData' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, OnClicked_GuildEntry) == 0x000380, "Member 'UGuildRecruitmentItem_C::OnClicked_GuildEntry' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentItem_C, GuildEntryData_CS) == 0x000390, "Member 'UGuildRecruitmentItem_C::GuildEntryData_CS' has a wrong offset!");

}


#pragma once

 

// Package: GuildRecruitmentMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRecruitmentMenu.GuildRecruitmentMenu_C
// 0x0120 (0x0398 - 0x0278)
class UGuildRecruitmentMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGuildRecruitmentDetailCard_C*          GuildRecruitmentDetailCard;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildRecruitmentList_C*                GuildRecruitmentList;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MidImgBG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_SelectGuide;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectRecruitmentEntryItem;                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_Invite;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC7[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        Selected_Guild_Entry_Data;                         // 0x02B8(0x00E0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSelectRecruitmentEntryItem__DelegateSignature(const struct FGuildEntryData& GuildEntry);
	void ExecuteUbergraph_GuildRecruitmentMenu(int32 EntryPoint);
	void Event_OnGetedGuildDatail(const int32 RetCode, const struct FGuildData& InGuildData);
	void OnCompletedGetSendedEntries_Event(const int32 RetCode);
	void OnCompletedGetInviteList_Event(const int32 RetCode);
	void BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void UpdateSelectGuideText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRecruitmentMenu_C">();
	}
	static class UGuildRecruitmentMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRecruitmentMenu_C>();
	}
};
static_assert(alignof(UGuildRecruitmentMenu_C) == 0x000008, "Wrong alignment on UGuildRecruitmentMenu_C");
static_assert(sizeof(UGuildRecruitmentMenu_C) == 0x000398, "Wrong size on UGuildRecruitmentMenu_C");
static_assert(offsetof(UGuildRecruitmentMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildRecruitmentMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, GuildRecruitmentDetailCard) == 0x000280, "Member 'UGuildRecruitmentMenu_C::GuildRecruitmentDetailCard' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, GuildRecruitmentList) == 0x000288, "Member 'UGuildRecruitmentMenu_C::GuildRecruitmentList' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, MidImgBG) == 0x000290, "Member 'UGuildRecruitmentMenu_C::MidImgBG' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, SBRuntimeTextBlock_SelectGuide) == 0x000298, "Member 'UGuildRecruitmentMenu_C::SBRuntimeTextBlock_SelectGuide' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, OnSelectRecruitmentEntryItem) == 0x0002A0, "Member 'UGuildRecruitmentMenu_C::OnSelectRecruitmentEntryItem' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, Is_Invite) == 0x0002B0, "Member 'UGuildRecruitmentMenu_C::Is_Invite' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentMenu_C, Selected_Guild_Entry_Data) == 0x0002B8, "Member 'UGuildRecruitmentMenu_C::Selected_Guild_Entry_Data' has a wrong offset!");

}


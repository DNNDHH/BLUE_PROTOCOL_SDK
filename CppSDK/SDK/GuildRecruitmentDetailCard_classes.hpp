#pragma once

 

// Package: GuildRecruitmentDetailCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C
// 0x0110 (0x0388 - 0x0278)
class UGuildRecruitmentDetailCard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  btn_space;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildDetails_C*                        GuildDetails;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         GuildDetailModeIndex;                              // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CA2[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        Guild_Entry_Data;                                  // 0x02A8(0x00E0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GuildRecruitmentDetailCard(int32 EntryPoint);
	void Event_OnEscape();
	void BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void Event_OnCompletedCancelEntry(const int32 RetCode);
	void Construct();
	void BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_OnClose();
	void Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void Event_GuildInviteRefuse();
	void Event_GuildEntryRefuse();
	void Event_GuildInviteAccept();
	class USBPlayerGuildComponent* GetGuildComp();
	void Initialize(const struct FGuildData& GuildData, const struct FGuildEntryData& GuildEntryData, bool bInvite);
	void Guild_Invite_Accept();
	void Guild_Invite_Refuse();
	void Guild_Entry_Refuse();
	void Send_Answer_To_Invited_Guild(bool bIsAccept);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRecruitmentDetailCard_C">();
	}
	static class UGuildRecruitmentDetailCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRecruitmentDetailCard_C>();
	}
};
static_assert(alignof(UGuildRecruitmentDetailCard_C) == 0x000008, "Wrong alignment on UGuildRecruitmentDetailCard_C");
static_assert(sizeof(UGuildRecruitmentDetailCard_C) == 0x000388, "Wrong size on UGuildRecruitmentDetailCard_C");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, UberGraphFrame) == 0x000278, "Member 'UGuildRecruitmentDetailCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, BG) == 0x000280, "Member 'UGuildRecruitmentDetailCard_C::BG' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, btn_space) == 0x000288, "Member 'UGuildRecruitmentDetailCard_C::btn_space' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, CmnClose03) == 0x000290, "Member 'UGuildRecruitmentDetailCard_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, GuildDetails) == 0x000298, "Member 'UGuildRecruitmentDetailCard_C::GuildDetails' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, GuildDetailModeIndex) == 0x0002A0, "Member 'UGuildRecruitmentDetailCard_C::GuildDetailModeIndex' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentDetailCard_C, Guild_Entry_Data) == 0x0002A8, "Member 'UGuildRecruitmentDetailCard_C::Guild_Entry_Data' has a wrong offset!");

}


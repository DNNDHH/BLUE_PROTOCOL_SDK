#pragma once

 

// Package: GuildMemberMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberMenu.GuildMemberMenu_C
// 0x00E0 (0x0358 - 0x0278)
class UGuildMemberMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGuildMemberList_C*                     GuildMemberList;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Max;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Now;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsPlayerProfileOpen;                               // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5515[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             GuildData;                                         // 0x02A0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GuildMemberMenu(int32 EntryPoint);
	void OnCompletedGuildMemberList_Event(const int32 RetCode);
	void PlayerProfileClose_Event();
	void OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void Initialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberMenu_C">();
	}
	static class UGuildMemberMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberMenu_C>();
	}
};
static_assert(alignof(UGuildMemberMenu_C) == 0x000008, "Wrong alignment on UGuildMemberMenu_C");
static_assert(sizeof(UGuildMemberMenu_C) == 0x000358, "Wrong size on UGuildMemberMenu_C");
static_assert(offsetof(UGuildMemberMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberMenu_C, GuildMemberList) == 0x000280, "Member 'UGuildMemberMenu_C::GuildMemberList' has a wrong offset!");
static_assert(offsetof(UGuildMemberMenu_C, Txt_Max) == 0x000288, "Member 'UGuildMemberMenu_C::Txt_Max' has a wrong offset!");
static_assert(offsetof(UGuildMemberMenu_C, Txt_Now) == 0x000290, "Member 'UGuildMemberMenu_C::Txt_Now' has a wrong offset!");
static_assert(offsetof(UGuildMemberMenu_C, IsPlayerProfileOpen) == 0x000298, "Member 'UGuildMemberMenu_C::IsPlayerProfileOpen' has a wrong offset!");
static_assert(offsetof(UGuildMemberMenu_C, GuildData) == 0x0002A0, "Member 'UGuildMemberMenu_C::GuildData' has a wrong offset!");

}


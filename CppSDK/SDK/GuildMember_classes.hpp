#pragma once

 

// Package: GuildMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMember.GuildMember_C
// 0x00D8 (0x0350 - 0x0278)
class UGuildMember_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGuildMemberList_C*                     GuildMemberList;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Max;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Now;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildData                             GuildData;                                         // 0x0298(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GuildMember(int32 EntryPoint);
	void OnCompleteUpdateGuildMember(const int32 RetCode);
	void OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
	void Construct();
	void Initialize();
	class USBPlayerGuildComponent* GetGuildComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMember_C">();
	}
	static class UGuildMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMember_C>();
	}
};
static_assert(alignof(UGuildMember_C) == 0x000008, "Wrong alignment on UGuildMember_C");
static_assert(sizeof(UGuildMember_C) == 0x000350, "Wrong size on UGuildMember_C");
static_assert(offsetof(UGuildMember_C, UberGraphFrame) == 0x000278, "Member 'UGuildMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMember_C, GuildMemberList) == 0x000280, "Member 'UGuildMember_C::GuildMemberList' has a wrong offset!");
static_assert(offsetof(UGuildMember_C, Txt_Max) == 0x000288, "Member 'UGuildMember_C::Txt_Max' has a wrong offset!");
static_assert(offsetof(UGuildMember_C, Txt_Now) == 0x000290, "Member 'UGuildMember_C::Txt_Now' has a wrong offset!");
static_assert(offsetof(UGuildMember_C, GuildData) == 0x000298, "Member 'UGuildMember_C::GuildData' has a wrong offset!");

}


#pragma once

 

// Package: GuildMemberList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberList.GuildMemberList_C
// 0x0020 (0x0298 - 0x0278)
class UGuildMemberList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_Items;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedMemberData;                              // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
	void ExecuteUbergraph_GuildMemberList(int32 EntryPoint);
	void CompletedAcceptMember(const int32 RetCode);
	void OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData);
	void OnMemberListGetted(const int32 RetCode);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GenerateMemberData();
	class USBPlayerGuildComponent* GetGuildComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberList_C">();
	}
	static class UGuildMemberList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberList_C>();
	}
};
static_assert(alignof(UGuildMemberList_C) == 0x000008, "Wrong alignment on UGuildMemberList_C");
static_assert(sizeof(UGuildMemberList_C) == 0x000298, "Wrong size on UGuildMemberList_C");
static_assert(offsetof(UGuildMemberList_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberList_C, VB_Items) == 0x000280, "Member 'UGuildMemberList_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UGuildMemberList_C, OnSelectedMemberData) == 0x000288, "Member 'UGuildMemberList_C::OnSelectedMemberData' has a wrong offset!");

}


#pragma once

 

// Package: UMG_PartyMemberList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PartyMemberList.UMG_PartyMemberList_C
// 0x0068 (0x02E0 - 0x0278)
class UUMG_PartyMemberList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Line1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      MemberList;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     PartyMemberInfo_0;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     PartyMemberInfo_1;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     PartyMemberInfo_2;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     PartyMemberInfo_3;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     PartyMemberInfo_4;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_ListType;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMemberList_Union_C*           UnionMemberList;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatedMemberList;                               // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MemberCountMax;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEntryClosed;                                      // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Backfill_Allowed;                               // 0x02DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnUpdatedMemberList__DelegateSignature();
	void ExecuteUbergraph_UMG_PartyMemberList(int32 EntryPoint);
	void Destruct();
	void OnFollowStateChanged_Event();
	void HandlePartyMemberUpdate();
	void Construct();
	void ResetPartyMemberList();
	void GetPartyListIndex(int32* Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PartyMemberList_C">();
	}
	static class UUMG_PartyMemberList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PartyMemberList_C>();
	}
};
static_assert(alignof(UUMG_PartyMemberList_C) == 0x000008, "Wrong alignment on UUMG_PartyMemberList_C");
static_assert(sizeof(UUMG_PartyMemberList_C) == 0x0002E0, "Wrong size on UUMG_PartyMemberList_C");
static_assert(offsetof(UUMG_PartyMemberList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PartyMemberList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, Line1) == 0x000280, "Member 'UUMG_PartyMemberList_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, MemberList) == 0x000288, "Member 'UUMG_PartyMemberList_C::MemberList' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, PartyMemberInfo_0) == 0x000290, "Member 'UUMG_PartyMemberList_C::PartyMemberInfo_0' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, PartyMemberInfo_1) == 0x000298, "Member 'UUMG_PartyMemberList_C::PartyMemberInfo_1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, PartyMemberInfo_2) == 0x0002A0, "Member 'UUMG_PartyMemberList_C::PartyMemberInfo_2' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, PartyMemberInfo_3) == 0x0002A8, "Member 'UUMG_PartyMemberList_C::PartyMemberInfo_3' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, PartyMemberInfo_4) == 0x0002B0, "Member 'UUMG_PartyMemberList_C::PartyMemberInfo_4' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, Switch_ListType) == 0x0002B8, "Member 'UUMG_PartyMemberList_C::Switch_ListType' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, UnionMemberList) == 0x0002C0, "Member 'UUMG_PartyMemberList_C::UnionMemberList' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, OnUpdatedMemberList) == 0x0002C8, "Member 'UUMG_PartyMemberList_C::OnUpdatedMemberList' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, MemberCountMax) == 0x0002D8, "Member 'UUMG_PartyMemberList_C::MemberCountMax' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, bEntryClosed) == 0x0002DC, "Member 'UUMG_PartyMemberList_C::bEntryClosed' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_C, Is_Backfill_Allowed) == 0x0002DD, "Member 'UUMG_PartyMemberList_C::Is_Backfill_Allowed' has a wrong offset!");

}


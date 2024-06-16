#pragma once

 

// Package: MiniMapIconPartyMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconPartyMember.MiniMapIconPartyMember_C
// 0x0018 (0x02A8 - 0x0290)
class UMiniMapIconPartyMember_C final : public USBMiniMapIconPartyMember
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnDead;                                            // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDead__DelegateSignature(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead);
	void ExecuteUbergraph_MiniMapIconPartyMember(int32 EntryPoint);
	void CustomEvent_1(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead);
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconPartyMember_C">();
	}
	static class UMiniMapIconPartyMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconPartyMember_C>();
	}
};
static_assert(alignof(UMiniMapIconPartyMember_C) == 0x000008, "Wrong alignment on UMiniMapIconPartyMember_C");
static_assert(sizeof(UMiniMapIconPartyMember_C) == 0x0002A8, "Wrong size on UMiniMapIconPartyMember_C");
static_assert(offsetof(UMiniMapIconPartyMember_C, UberGraphFrame) == 0x000290, "Member 'UMiniMapIconPartyMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniMapIconPartyMember_C, OnDead) == 0x000298, "Member 'UMiniMapIconPartyMember_C::OnDead' has a wrong offset!");

}


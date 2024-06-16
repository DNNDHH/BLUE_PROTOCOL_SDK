#pragma once

 

// Package: MiniMapIconPartyMember

#include "Basic.hpp"


namespace SDK::Params
{

// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.OnDead__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MiniMapIconPartyMember_C_OnDead__DelegateSignature final
{
public:
	class UMiniMapIconPartyMember_C*              PartyMember;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIconPartyMember_C_OnDead__DelegateSignature) == 0x000008, "Wrong alignment on MiniMapIconPartyMember_C_OnDead__DelegateSignature");
static_assert(sizeof(MiniMapIconPartyMember_C_OnDead__DelegateSignature) == 0x000010, "Wrong size on MiniMapIconPartyMember_C_OnDead__DelegateSignature");
static_assert(offsetof(MiniMapIconPartyMember_C_OnDead__DelegateSignature, PartyMember) == 0x000000, "Member 'MiniMapIconPartyMember_C_OnDead__DelegateSignature::PartyMember' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_OnDead__DelegateSignature, IsDead) == 0x000008, "Member 'MiniMapIconPartyMember_C_OnDead__DelegateSignature::IsDead' has a wrong offset!");

// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.ExecuteUbergraph_MiniMapIconPartyMember
// 0x0048 (0x0048 - 0x0000)
struct MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_714B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPartyMember_C*                     K2Node_DynamicCast_AsIcon_Party_Member;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_714C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_714D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapPartyMemberIcon*                  K2Node_CustomEvent_InPartyMemberIcon;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDead;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_714E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPartyMember_C*                     K2Node_DynamicCast_AsIcon_Party_Member_1;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember) == 0x000008, "Wrong alignment on MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember");
static_assert(sizeof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember) == 0x000048, "Wrong size on MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, EntryPoint) == 0x000000, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_DynamicCast_AsIcon_Party_Member) == 0x000008, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_DynamicCast_AsIcon_Party_Member' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_CustomEvent_InPartyMemberIcon) == 0x000028, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_CustomEvent_InPartyMemberIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_CustomEvent_IsDead) == 0x000030, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_CustomEvent_IsDead' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_DynamicCast_AsIcon_Party_Member_1) == 0x000038, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_DynamicCast_AsIcon_Party_Member_1' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct MiniMapIconPartyMember_C_CustomEvent_1 final
{
public:
	class USBMapPartyMemberIcon*                  InPartyMemberIcon;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIconPartyMember_C_CustomEvent_1) == 0x000008, "Wrong alignment on MiniMapIconPartyMember_C_CustomEvent_1");
static_assert(sizeof(MiniMapIconPartyMember_C_CustomEvent_1) == 0x000010, "Wrong size on MiniMapIconPartyMember_C_CustomEvent_1");
static_assert(offsetof(MiniMapIconPartyMember_C_CustomEvent_1, InPartyMemberIcon) == 0x000000, "Member 'MiniMapIconPartyMember_C_CustomEvent_1::InPartyMemberIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIconPartyMember_C_CustomEvent_1, IsDead) == 0x000008, "Member 'MiniMapIconPartyMember_C_CustomEvent_1::IsDead' has a wrong offset!");

}


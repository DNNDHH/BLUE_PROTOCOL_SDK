#pragma once

 

// Package: RelationshipIconSets

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RelationshipIconSets.RelationshipIconSets_C.ExecuteUbergraph_RelationshipIconSets
// 0x0004 (0x0004 - 0x0000)
struct RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets) == 0x000004, "Wrong alignment on RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets");
static_assert(sizeof(RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets) == 0x000004, "Wrong size on RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets");
static_assert(offsetof(RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets, EntryPoint) == 0x000000, "Member 'RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets::EntryPoint' has a wrong offset!");

// Function RelationshipIconSets.RelationshipIconSets_C.InitFromParty
// 0x0020 (0x0020 - 0x0000)
struct RelationshipIconSets_C_InitFromParty final
{
public:
	class USBPartyMemberState*                    InPartyMemberState;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61DC[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetParty_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPartyType                                  CallFunc_GetPartyType_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RelationshipIconSets_C_InitFromParty) == 0x000008, "Wrong alignment on RelationshipIconSets_C_InitFromParty");
static_assert(sizeof(RelationshipIconSets_C_InitFromParty) == 0x000020, "Wrong size on RelationshipIconSets_C_InitFromParty");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, InPartyMemberState) == 0x000000, "Member 'RelationshipIconSets_C_InitFromParty::InPartyMemberState' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, CallFunc_IsLocalPlayer_ReturnValue) == 0x000008, "Member 'RelationshipIconSets_C_InitFromParty::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, CallFunc_IsPartyLeader_ReturnValue) == 0x000009, "Member 'RelationshipIconSets_C_InitFromParty::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, CallFunc_GetParty_ReturnValue) == 0x000010, "Member 'RelationshipIconSets_C_InitFromParty::CallFunc_GetParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, CallFunc_GetPartyType_ReturnValue) == 0x000018, "Member 'RelationshipIconSets_C_InitFromParty::CallFunc_GetPartyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFromParty, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'RelationshipIconSets_C_InitFromParty::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function RelationshipIconSets.RelationshipIconSets_C.InitPartyIcons
// 0x000A (0x000A - 0x0000)
struct RelationshipIconSets_C_InitPartyIcons final
{
public:
	bool                                          IsMember;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLeader;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RelationshipIconSets_C_InitPartyIcons) == 0x000001, "Wrong alignment on RelationshipIconSets_C_InitPartyIcons");
static_assert(sizeof(RelationshipIconSets_C_InitPartyIcons) == 0x00000A, "Wrong size on RelationshipIconSets_C_InitPartyIcons");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, IsMember) == 0x000000, "Member 'RelationshipIconSets_C_InitPartyIcons::IsMember' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, IsLeader) == 0x000001, "Member 'RelationshipIconSets_C_InitPartyIcons::IsLeader' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_bool_Variable) == 0x000002, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_byte_Variable) == 0x000003, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_byte_Variable_1) == 0x000004, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_bool_Variable_1) == 0x000005, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, K2Node_Select_Default) == 0x000006, "Member 'RelationshipIconSets_C_InitPartyIcons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_byte_Variable_2) == 0x000007, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, Temp_byte_Variable_3) == 0x000008, "Member 'RelationshipIconSets_C_InitPartyIcons::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitPartyIcons, K2Node_Select_Default_1) == 0x000009, "Member 'RelationshipIconSets_C_InitPartyIcons::K2Node_Select_Default_1' has a wrong offset!");

// Function RelationshipIconSets.RelationshipIconSets_C.InitFollowState
// 0x0005 (0x0005 - 0x0000)
struct RelationshipIconSets_C_InitFollowState final
{
public:
	bool                                          InIsFriend;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RelationshipIconSets_C_InitFollowState) == 0x000001, "Wrong alignment on RelationshipIconSets_C_InitFollowState");
static_assert(sizeof(RelationshipIconSets_C_InitFollowState) == 0x000005, "Wrong size on RelationshipIconSets_C_InitFollowState");
static_assert(offsetof(RelationshipIconSets_C_InitFollowState, InIsFriend) == 0x000000, "Member 'RelationshipIconSets_C_InitFollowState::InIsFriend' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFollowState, Temp_bool_Variable) == 0x000001, "Member 'RelationshipIconSets_C_InitFollowState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFollowState, Temp_byte_Variable) == 0x000002, "Member 'RelationshipIconSets_C_InitFollowState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFollowState, Temp_byte_Variable_1) == 0x000003, "Member 'RelationshipIconSets_C_InitFollowState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RelationshipIconSets_C_InitFollowState, K2Node_Select_Default) == 0x000004, "Member 'RelationshipIconSets_C_InitFollowState::K2Node_Select_Default' has a wrong offset!");

// Function RelationshipIconSets.RelationshipIconSets_C.InitFriendState
// 0x0001 (0x0001 - 0x0000)
struct RelationshipIconSets_C_InitFriendState final
{
public:
	bool                                          bFriend;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RelationshipIconSets_C_InitFriendState) == 0x000001, "Wrong alignment on RelationshipIconSets_C_InitFriendState");
static_assert(sizeof(RelationshipIconSets_C_InitFriendState) == 0x000001, "Wrong size on RelationshipIconSets_C_InitFriendState");
static_assert(offsetof(RelationshipIconSets_C_InitFriendState, bFriend) == 0x000000, "Member 'RelationshipIconSets_C_InitFriendState::bFriend' has a wrong offset!");

}


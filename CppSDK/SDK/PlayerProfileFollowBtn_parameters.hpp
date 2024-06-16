#pragma once

 

// Package: PlayerProfileFollowBtn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.ExecuteUbergraph_PlayerProfileFollowBtn
// 0x0058 (0x0058 - 0x0000)
struct PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FB8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn) == 0x000008, "Wrong alignment on PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn");
static_assert(sizeof(PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn) == 0x000058, "Wrong size on PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn");
static_assert(offsetof(PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn, EntryPoint) == 0x000000, "Member 'PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFollow
// 0x0828 (0x0828 - 0x0000)
struct PlayerProfileFollowBtn_C_SetFollow final
{
public:
	bool                                          Param_bFollow;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0118(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01A0(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0228(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x04A0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x0528(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x05B0(0x0278)()
};
static_assert(alignof(PlayerProfileFollowBtn_C_SetFollow) == 0x000008, "Wrong alignment on PlayerProfileFollowBtn_C_SetFollow");
static_assert(sizeof(PlayerProfileFollowBtn_C_SetFollow) == 0x000828, "Wrong size on PlayerProfileFollowBtn_C_SetFollow");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, Param_bFollow) == 0x000000, "Member 'PlayerProfileFollowBtn_C_SetFollow::Param_bFollow' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush_2) == 0x000118, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush_3) == 0x0001A0, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_ButtonStyle) == 0x000228, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush_4) == 0x0004A0, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_SlateBrush_5) == 0x000528, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFollow, K2Node_MakeStruct_ButtonStyle_1) == 0x0005B0, "Member 'PlayerProfileFollowBtn_C_SetFollow::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFriend
// 0x0003 (0x0003 - 0x0000)
struct PlayerProfileFollowBtn_C_SetFriend final
{
public:
	bool                                          Param_bFriend;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bDoneSend;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bCanSend;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileFollowBtn_C_SetFriend) == 0x000001, "Wrong alignment on PlayerProfileFollowBtn_C_SetFriend");
static_assert(sizeof(PlayerProfileFollowBtn_C_SetFriend) == 0x000003, "Wrong size on PlayerProfileFollowBtn_C_SetFriend");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFriend, Param_bFriend) == 0x000000, "Member 'PlayerProfileFollowBtn_C_SetFriend::Param_bFriend' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFriend, Param_bDoneSend) == 0x000001, "Member 'PlayerProfileFollowBtn_C_SetFriend::Param_bDoneSend' has a wrong offset!");
static_assert(offsetof(PlayerProfileFollowBtn_C_SetFriend, Param_bCanSend) == 0x000002, "Member 'PlayerProfileFollowBtn_C_SetFriend::Param_bCanSend' has a wrong offset!");

}


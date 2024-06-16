#pragma once

 

// Package: MapWidget_PlayerIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ExecuteUbergraph_MapWidget_PlayerIcon
// 0x0088 (0x0088 - 0x0000)
struct MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_704D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704E[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704F[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon) == 0x000008, "Wrong alignment on MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon");
static_assert(sizeof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon) == 0x000088, "Wrong size on MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, EntryPoint) == 0x000000, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, Temp_string_Variable) == 0x000008, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000030, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_Create_ReturnValue) == 0x000038, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000040, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_GetValidPlayerState_ReturnValue) == 0x000050, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x000058, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_GetCharacterName_ReturnValue) == 0x000070, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.SetCursorAngle
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_PlayerIcon_C_SetCursorAngle final
{
public:
	float                                         InAngle;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PlayerIcon_C_SetCursorAngle) == 0x000004, "Wrong alignment on MapWidget_PlayerIcon_C_SetCursorAngle");
static_assert(sizeof(MapWidget_PlayerIcon_C_SetCursorAngle) == 0x000004, "Wrong size on MapWidget_PlayerIcon_C_SetCursorAngle");
static_assert(offsetof(MapWidget_PlayerIcon_C_SetCursorAngle, InAngle) == 0x000000, "Member 'MapWidget_PlayerIcon_C_SetCursorAngle::InAngle' has a wrong offset!");

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.GetCursorAngle
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_PlayerIcon_C_GetCursorAngle final
{
public:
	float                                         OutCursorAngle;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PlayerIcon_C_GetCursorAngle) == 0x000004, "Wrong alignment on MapWidget_PlayerIcon_C_GetCursorAngle");
static_assert(sizeof(MapWidget_PlayerIcon_C_GetCursorAngle) == 0x000004, "Wrong size on MapWidget_PlayerIcon_C_GetCursorAngle");
static_assert(offsetof(MapWidget_PlayerIcon_C_GetCursorAngle, OutCursorAngle) == 0x000000, "Member 'MapWidget_PlayerIcon_C_GetCursorAngle::OutCursorAngle' has a wrong offset!");

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.PlayPublicDungeonAnimation
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation) == 0x000008, "Wrong alignment on MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation");
static_assert(sizeof(MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation) == 0x000008, "Wrong size on MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation");
static_assert(offsetof(MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MapWidget_PlayerIcon_C_PlayPublicDungeonAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ShowTooltip
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_PlayerIcon_C_ShowTooltip final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PlayerIcon_C_ShowTooltip) == 0x000001, "Wrong alignment on MapWidget_PlayerIcon_C_ShowTooltip");
static_assert(sizeof(MapWidget_PlayerIcon_C_ShowTooltip) == 0x000001, "Wrong size on MapWidget_PlayerIcon_C_ShowTooltip");
static_assert(offsetof(MapWidget_PlayerIcon_C_ShowTooltip, IsShow) == 0x000000, "Member 'MapWidget_PlayerIcon_C_ShowTooltip::IsShow' has a wrong offset!");

}


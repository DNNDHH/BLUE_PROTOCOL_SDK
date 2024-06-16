#pragma once

 

// Package: DeadMarker

#include "Basic.hpp"


namespace SDK::Params
{

// Function DeadMarker.DeadMarker_C.ExecuteUbergraph_DeadMarker
// 0x0018 (0x0018 - 0x0000)
struct DeadMarker_C_ExecuteUbergraph_DeadMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RemainTime;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisibility;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeadMarker_C_ExecuteUbergraph_DeadMarker) == 0x000008, "Wrong alignment on DeadMarker_C_ExecuteUbergraph_DeadMarker");
static_assert(sizeof(DeadMarker_C_ExecuteUbergraph_DeadMarker) == 0x000018, "Wrong size on DeadMarker_C_ExecuteUbergraph_DeadMarker");
static_assert(offsetof(DeadMarker_C_ExecuteUbergraph_DeadMarker, EntryPoint) == 0x000000, "Member 'DeadMarker_C_ExecuteUbergraph_DeadMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_ExecuteUbergraph_DeadMarker, K2Node_Event_RemainTime) == 0x000004, "Member 'DeadMarker_C_ExecuteUbergraph_DeadMarker::K2Node_Event_RemainTime' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_ExecuteUbergraph_DeadMarker, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'DeadMarker_C_ExecuteUbergraph_DeadMarker::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_ExecuteUbergraph_DeadMarker, K2Node_Event_bVisibility) == 0x000010, "Member 'DeadMarker_C_ExecuteUbergraph_DeadMarker::K2Node_Event_bVisibility' has a wrong offset!");

// Function DeadMarker.DeadMarker_C.SetAutoRespawnRemainTime
// 0x0004 (0x0004 - 0x0000)
struct DeadMarker_C_SetAutoRespawnRemainTime final
{
public:
	float                                         RemainTime;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeadMarker_C_SetAutoRespawnRemainTime) == 0x000004, "Wrong alignment on DeadMarker_C_SetAutoRespawnRemainTime");
static_assert(sizeof(DeadMarker_C_SetAutoRespawnRemainTime) == 0x000004, "Wrong size on DeadMarker_C_SetAutoRespawnRemainTime");
static_assert(offsetof(DeadMarker_C_SetAutoRespawnRemainTime, RemainTime) == 0x000000, "Member 'DeadMarker_C_SetAutoRespawnRemainTime::RemainTime' has a wrong offset!");

// Function DeadMarker.DeadMarker_C.DeadMarkerVisibility
// 0x0001 (0x0001 - 0x0000)
struct DeadMarker_C_DeadMarkerVisibility final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeadMarker_C_DeadMarkerVisibility) == 0x000001, "Wrong alignment on DeadMarker_C_DeadMarkerVisibility");
static_assert(sizeof(DeadMarker_C_DeadMarkerVisibility) == 0x000001, "Wrong size on DeadMarker_C_DeadMarkerVisibility");
static_assert(offsetof(DeadMarker_C_DeadMarkerVisibility, bVisibility) == 0x000000, "Member 'DeadMarker_C_DeadMarkerVisibility::bVisibility' has a wrong offset!");

// Function DeadMarker.DeadMarker_C.Set Auto Respawn Remain Time Internal
// 0x000C (0x000C - 0x0000)
struct DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal final
{
public:
	float                                         RemainTime;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal) == 0x000004, "Wrong alignment on DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal");
static_assert(sizeof(DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal) == 0x00000C, "Wrong size on DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal");
static_assert(offsetof(DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal, RemainTime) == 0x000000, "Member 'DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal::RemainTime' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal, Count) == 0x000004, "Member 'DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal::Count' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal, CallFunc_FTrunc_ReturnValue) == 0x000008, "Member 'DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function DeadMarker.DeadMarker_C.Dead Marker Visibility Internal
// 0x0010 (0x0010 - 0x0000)
struct DeadMarker_C_Dead_Marker_Visibility_Internal final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44FD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeadMarker_C_Dead_Marker_Visibility_Internal) == 0x000008, "Wrong alignment on DeadMarker_C_Dead_Marker_Visibility_Internal");
static_assert(sizeof(DeadMarker_C_Dead_Marker_Visibility_Internal) == 0x000010, "Wrong size on DeadMarker_C_Dead_Marker_Visibility_Internal");
static_assert(offsetof(DeadMarker_C_Dead_Marker_Visibility_Internal, bVisibility) == 0x000000, "Member 'DeadMarker_C_Dead_Marker_Visibility_Internal::bVisibility' has a wrong offset!");
static_assert(offsetof(DeadMarker_C_Dead_Marker_Visibility_Internal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'DeadMarker_C_Dead_Marker_Visibility_Internal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}


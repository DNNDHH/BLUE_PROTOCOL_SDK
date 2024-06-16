#pragma once

 

// Package: ShortcutCoolTime

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShortcutCoolTime.ShortcutCoolTime_C.ExecuteUbergraph_ShortcutCoolTime
// 0x0090 (0x0090 - 0x0000)
struct ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecastTime_ReturnValue;                 // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7670[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRemainingRecastTime_ReturnValue;       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeMax_ReturnValue;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRemainingRecastTime_ReturnValue_1;     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7671[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime) == 0x000008, "Wrong alignment on ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime");
static_assert(sizeof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime) == 0x000090, "Wrong size on ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, EntryPoint) == 0x000000, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, K2Node_Event_MyGeometry) == 0x000004, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000040, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_GetSBPlayerState_ReturnValue) == 0x000048, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_IsRecastTime_ReturnValue) == 0x000052, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_IsRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_GetRemainingRecastTime_ReturnValue) == 0x000054, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_GetRemainingRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_GetRecastTimeMax_ReturnValue) == 0x000058, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_GetRecastTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_GetRemainingRecastTime_ReturnValue_1) == 0x000060, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_GetRemainingRecastTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_FTrunc_ReturnValue) == 0x000064, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime, CallFunc_Not_PreBool_ReturnValue) == 0x000088, "Member 'ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ShortcutCoolTime.ShortcutCoolTime_C.Tick
// 0x003C (0x003C - 0x0000)
struct ShortcutCoolTime_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutCoolTime_C_Tick) == 0x000004, "Wrong alignment on ShortcutCoolTime_C_Tick");
static_assert(sizeof(ShortcutCoolTime_C_Tick) == 0x00003C, "Wrong size on ShortcutCoolTime_C_Tick");
static_assert(offsetof(ShortcutCoolTime_C_Tick, MyGeometry) == 0x000000, "Member 'ShortcutCoolTime_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutCoolTime_C_Tick, InDeltaTime) == 0x000038, "Member 'ShortcutCoolTime_C_Tick::InDeltaTime' has a wrong offset!");

}


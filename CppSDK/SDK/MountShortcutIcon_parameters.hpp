#pragma once

 

// Package: MountShortcutIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MountShortcutIcon.MountShortcutIcon_C.ExecuteUbergraph_MountShortcutIcon
// 0x0068 (0x0068 - 0x0000)
struct MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73E5[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E6[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon) == 0x000008, "Wrong alignment on MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon");
static_assert(sizeof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon) == 0x000068, "Wrong size on MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, EntryPoint) == 0x000000, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, K2Node_Event_MyGeometry) == 0x000008, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, K2Node_Event_InDeltaTime) == 0x000040, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000050, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000058, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_IsMounting_ReturnValue) == 0x000061, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000062, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000064, "Member 'MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.Tick
// 0x003C (0x003C - 0x0000)
struct MountShortcutIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountShortcutIcon_C_Tick) == 0x000004, "Wrong alignment on MountShortcutIcon_C_Tick");
static_assert(sizeof(MountShortcutIcon_C_Tick) == 0x00003C, "Wrong size on MountShortcutIcon_C_Tick");
static_assert(offsetof(MountShortcutIcon_C_Tick, MyGeometry) == 0x000000, "Member 'MountShortcutIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_Tick, InDeltaTime) == 0x000038, "Member 'MountShortcutIcon_C_Tick::InDeltaTime' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.UpdateInterval
// 0x0038 (0x0038 - 0x0000)
struct MountShortcutIcon_C_UpdateInterval final
{
public:
	float                                         MaxInterval;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Interval;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E8[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMountIntervalMax_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMountInterval_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountShortcutIcon_C_UpdateInterval) == 0x000008, "Wrong alignment on MountShortcutIcon_C_UpdateInterval");
static_assert(sizeof(MountShortcutIcon_C_UpdateInterval) == 0x000038, "Wrong size on MountShortcutIcon_C_UpdateInterval");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, MaxInterval) == 0x000000, "Member 'MountShortcutIcon_C_UpdateInterval::MaxInterval' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, Interval) == 0x000004, "Member 'MountShortcutIcon_C_UpdateInterval::Interval' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_FClamp_ReturnValue) == 0x000014, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'MountShortcutIcon_C_UpdateInterval::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MountShortcutIcon_C_UpdateInterval::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_GetMountIntervalMax_ReturnValue) == 0x00002C, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_GetMountIntervalMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateInterval, CallFunc_GetMountInterval_ReturnValue) == 0x000030, "Member 'MountShortcutIcon_C_UpdateInterval::CallFunc_GetMountInterval_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimChargeEnd
// 0x0010 (0x0010 - 0x0000)
struct MountShortcutIcon_C_PlayAnimChargeEnd final
{
public:
	bool                                          CallFunc_CheckSwitchIndex_Result;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountShortcutIcon_C_PlayAnimChargeEnd) == 0x000008, "Wrong alignment on MountShortcutIcon_C_PlayAnimChargeEnd");
static_assert(sizeof(MountShortcutIcon_C_PlayAnimChargeEnd) == 0x000010, "Wrong size on MountShortcutIcon_C_PlayAnimChargeEnd");
static_assert(offsetof(MountShortcutIcon_C_PlayAnimChargeEnd, CallFunc_CheckSwitchIndex_Result) == 0x000000, "Member 'MountShortcutIcon_C_PlayAnimChargeEnd::CallFunc_CheckSwitchIndex_Result' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_PlayAnimChargeEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_PlayAnimChargeEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.UpdateIconTexture
// 0x0020 (0x0020 - 0x0000)
struct MountShortcutIcon_C_UpdateIconTexture final
{
public:
	bool                                          CallFunc_IsEquipTypeAreEquipped_ReturnValue;       // 0x0000(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73EA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableSummonMount_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountShortcutIcon_C_UpdateIconTexture) == 0x000008, "Wrong alignment on MountShortcutIcon_C_UpdateIconTexture");
static_assert(sizeof(MountShortcutIcon_C_UpdateIconTexture) == 0x000020, "Wrong size on MountShortcutIcon_C_UpdateIconTexture");
static_assert(offsetof(MountShortcutIcon_C_UpdateIconTexture, CallFunc_IsEquipTypeAreEquipped_ReturnValue) == 0x000000, "Member 'MountShortcutIcon_C_UpdateIconTexture::CallFunc_IsEquipTypeAreEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateIconTexture, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_UpdateIconTexture::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateIconTexture, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'MountShortcutIcon_C_UpdateIconTexture::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateIconTexture, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MountShortcutIcon_C_UpdateIconTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_UpdateIconTexture, CallFunc_IsEnableSummonMount_ReturnValue) == 0x000019, "Member 'MountShortcutIcon_C_UpdateIconTexture::CallFunc_IsEnableSummonMount_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimInOut
// 0x0018 (0x0018 - 0x0000)
struct MountShortcutIcon_C_PlayAnimInOut final
{
public:
	bool                                          bin;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountShortcutIcon_C_PlayAnimInOut) == 0x000008, "Wrong alignment on MountShortcutIcon_C_PlayAnimInOut");
static_assert(sizeof(MountShortcutIcon_C_PlayAnimInOut) == 0x000018, "Wrong size on MountShortcutIcon_C_PlayAnimInOut");
static_assert(offsetof(MountShortcutIcon_C_PlayAnimInOut, bin) == 0x000000, "Member 'MountShortcutIcon_C_PlayAnimInOut::bin' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_PlayAnimInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_PlayAnimInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_PlayAnimInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'MountShortcutIcon_C_PlayAnimInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.SetSwitch
// 0x000C (0x000C - 0x0000)
struct MountShortcutIcon_C_SetSwitch final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountShortcutIcon_C_SetSwitch) == 0x000004, "Wrong alignment on MountShortcutIcon_C_SetSwitch");
static_assert(sizeof(MountShortcutIcon_C_SetSwitch) == 0x00000C, "Wrong size on MountShortcutIcon_C_SetSwitch");
static_assert(offsetof(MountShortcutIcon_C_SetSwitch, Param_Index) == 0x000000, "Member 'MountShortcutIcon_C_SetSwitch::Param_Index' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_SetSwitch, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'MountShortcutIcon_C_SetSwitch::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_SetSwitch, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_SetSwitch::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MountShortcutIcon.MountShortcutIcon_C.CheckSwitchIndex
// 0x0010 (0x0010 - 0x0000)
struct MountShortcutIcon_C_CheckSwitchIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73EC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountShortcutIcon_C_CheckSwitchIndex) == 0x000004, "Wrong alignment on MountShortcutIcon_C_CheckSwitchIndex");
static_assert(sizeof(MountShortcutIcon_C_CheckSwitchIndex) == 0x000010, "Wrong size on MountShortcutIcon_C_CheckSwitchIndex");
static_assert(offsetof(MountShortcutIcon_C_CheckSwitchIndex, Param_Index) == 0x000000, "Member 'MountShortcutIcon_C_CheckSwitchIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_CheckSwitchIndex, Result) == 0x000004, "Member 'MountShortcutIcon_C_CheckSwitchIndex::Result' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_CheckSwitchIndex, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000008, "Member 'MountShortcutIcon_C_CheckSwitchIndex::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountShortcutIcon_C_CheckSwitchIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'MountShortcutIcon_C_CheckSwitchIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}


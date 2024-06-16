#pragma once

 

// Package: P012HUDShield

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P012HUDShield.P012HUDShield_C.ExecuteUbergraph_P012HUDShield
// 0x0110 (0x0110 - 0x0000)
struct P012HUDShield_C_ExecuteUbergraph_P012HUDShield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72E0[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue;           // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue_1;         // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue_2;         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue_3;         // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E1[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E2[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E3[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component_1;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_3;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E5[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component_2;    // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E6[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component_3;    // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E7[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_4;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue; // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72E8[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72E9[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component_4;    // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72EA[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_72EB[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_5;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component_5;    // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72EC[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1; // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield) == 0x000008, "Wrong alignment on P012HUDShield_C_ExecuteUbergraph_P012HUDShield");
static_assert(sizeof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield) == 0x000110, "Wrong size on P012HUDShield_C_ExecuteUbergraph_P012HUDShield");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, EntryPoint) == 0x000000, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::EntryPoint' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, Temp_bool_Variable) == 0x000004, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CustomEvent_InUIType) == 0x000018, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CustomEvent_bInVisibility) == 0x000019, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CustomEvent_bInInstantly) == 0x00001A, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_MakeLiteralByte_ReturnValue) == 0x00001B, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000028, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_ValidClassAbility7_ReturnValue) == 0x000032, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_ValidClassAbility7_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_ValidClassAbility7_ReturnValue_1) == 0x000033, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_ValidClassAbility7_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_ValidClassAbility7_ReturnValue_2) == 0x000034, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_ValidClassAbility7_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_ValidClassAbility7_ReturnValue_3) == 0x000035, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_ValidClassAbility7_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000040, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_3) == 0x000049, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component) == 0x000050, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component_1) == 0x000060, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x000070, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue_3) == 0x000078, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_4) == 0x000080, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_5) == 0x000081, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component_2) == 0x000088, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component_3) == 0x000098, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue_4) == 0x0000A8, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetDependentIntervalRemainingTime_ReturnValue) == 0x0000B0, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetDependentIntervalRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_IsValid_ReturnValue_6) == 0x0000B4, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_FTrunc_ReturnValue) == 0x0000B8, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component_4) == 0x0000C0, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component_4' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess_4) == 0x0000C8, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetSBPlayerCharacter_ReturnValue_5) == 0x0000E0, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetSBPlayerCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_AsSBPCRebellion_Component_5) == 0x0000E8, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_AsSBPCRebellion_Component_5' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_DynamicCast_bSuccess_5) == 0x0000F0, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1) == 0x0000F4, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000108, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_ExecuteUbergraph_P012HUDShield, K2Node_Select_Default) == 0x000109, "Member 'P012HUDShield_C_ExecuteUbergraph_P012HUDShield::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P012HUDShield_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P012HUDShield_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P012HUDShield_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P012HUDShield_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P012HUDShield_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P012HUDShield_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P012HUDShield_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P012HUDShield_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.PlayAnimBroken
// 0x0008 (0x0008 - 0x0000)
struct P012HUDShield_C_PlayAnimBroken final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_PlayAnimBroken) == 0x000008, "Wrong alignment on P012HUDShield_C_PlayAnimBroken");
static_assert(sizeof(P012HUDShield_C_PlayAnimBroken) == 0x000008, "Wrong size on P012HUDShield_C_PlayAnimBroken");
static_assert(offsetof(P012HUDShield_C_PlayAnimBroken, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_PlayAnimBroken::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.UpdateShieldBreak
// 0x0018 (0x0018 - 0x0000)
struct P012HUDShield_C_UpdateShieldBreak final
{
public:
	bool                                          bGuardBreak;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGuardComponent*                      CallFunc_GetGuardComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuardBreak_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_UpdateShieldBreak) == 0x000008, "Wrong alignment on P012HUDShield_C_UpdateShieldBreak");
static_assert(sizeof(P012HUDShield_C_UpdateShieldBreak) == 0x000018, "Wrong size on P012HUDShield_C_UpdateShieldBreak");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, bGuardBreak) == 0x000000, "Member 'P012HUDShield_C_UpdateShieldBreak::bGuardBreak' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_BooleanNOR_ReturnValue) == 0x000001, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_BooleanAND_ReturnValue_1) == 0x000004, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_GetGuardComponent_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_GetGuardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_IsGuardBreak_ReturnValue) == 0x000010, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_IsGuardBreak_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldBreak, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'P012HUDShield_C_UpdateShieldBreak::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.UpdateShieldDurability
// 0x0060 (0x0060 - 0x0000)
struct P012HUDShield_C_UpdateShieldDurability final
{
public:
	int32                                         TmpShieldMaxDurability;                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72EE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TmpShieldDurabilityStr;                            // 0x0008(0x0018)(Edit, BlueprintVisible)
	int32                                         TmpShieldDurability;                               // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72EF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGuardComponent*                      CallFunc_GetGuardComponent_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F0[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxShieldDurability_ReturnValue;       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShieldDurability_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F1[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F2[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_UpdateShieldDurability) == 0x000008, "Wrong alignment on P012HUDShield_C_UpdateShieldDurability");
static_assert(sizeof(P012HUDShield_C_UpdateShieldDurability) == 0x000060, "Wrong size on P012HUDShield_C_UpdateShieldDurability");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, TmpShieldMaxDurability) == 0x000000, "Member 'P012HUDShield_C_UpdateShieldDurability::TmpShieldMaxDurability' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, TmpShieldDurabilityStr) == 0x000008, "Member 'P012HUDShield_C_UpdateShieldDurability::TmpShieldDurabilityStr' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, TmpShieldDurability) == 0x000020, "Member 'P012HUDShield_C_UpdateShieldDurability::TmpShieldDurability' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_GetGuardComponent_ReturnValue) == 0x000028, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_GetGuardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000031, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_GetMaxShieldDurability_ReturnValue) == 0x000034, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_GetMaxShieldDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_GetShieldDurability_ReturnValue) == 0x000038, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_GetShieldDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_FTrunc_ReturnValue) == 0x00003C, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_FTrunc_ReturnValue_1) == 0x000040, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_Max_ReturnValue) == 0x000044, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000049, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00004C, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_BooleanAND_ReturnValue_1) == 0x000050, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000054, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000058, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x00005C, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x00005D, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateShieldDurability, CallFunc_BooleanOR_ReturnValue) == 0x00005E, "Member 'P012HUDShield_C_UpdateShieldDurability::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetFrame
// 0x0010 (0x0010 - 0x0000)
struct P012HUDShield_C_SetFrame final
{
public:
	bool                                          IsBroken;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F3[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_SetFrame) == 0x000004, "Wrong alignment on P012HUDShield_C_SetFrame");
static_assert(sizeof(P012HUDShield_C_SetFrame) == 0x000010, "Wrong size on P012HUDShield_C_SetFrame");
static_assert(offsetof(P012HUDShield_C_SetFrame, IsBroken) == 0x000000, "Member 'P012HUDShield_C_SetFrame::IsBroken' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetFrame, Temp_bool_Variable) == 0x000001, "Member 'P012HUDShield_C_SetFrame::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetFrame, Temp_int_Variable) == 0x000004, "Member 'P012HUDShield_C_SetFrame::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetFrame, Temp_int_Variable_1) == 0x000008, "Member 'P012HUDShield_C_SetFrame::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetFrame, K2Node_Select_Default) == 0x00000C, "Member 'P012HUDShield_C_SetFrame::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetIcon
// 0x000C (0x000C - 0x0000)
struct P012HUDShield_C_SetIcon final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_SetIcon) == 0x000004, "Wrong alignment on P012HUDShield_C_SetIcon");
static_assert(sizeof(P012HUDShield_C_SetIcon) == 0x00000C, "Wrong size on P012HUDShield_C_SetIcon");
static_assert(offsetof(P012HUDShield_C_SetIcon, Param_Index) == 0x000000, "Member 'P012HUDShield_C_SetIcon::Param_Index' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetIcon, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'P012HUDShield_C_SetIcon::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_SetIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetGauge
// 0x0008 (0x0008 - 0x0000)
struct P012HUDShield_C_SetGauge final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_SetGauge) == 0x000004, "Wrong alignment on P012HUDShield_C_SetGauge");
static_assert(sizeof(P012HUDShield_C_SetGauge) == 0x000008, "Wrong size on P012HUDShield_C_SetGauge");
static_assert(offsetof(P012HUDShield_C_SetGauge, InValue) == 0x000000, "Member 'P012HUDShield_C_SetGauge::InValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'P012HUDShield_C_SetGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P012HUDShield_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P012HUDShield_C_PlayAnimForwardInOut");
static_assert(sizeof(P012HUDShield_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P012HUDShield_C_PlayAnimForwardInOut");
static_assert(offsetof(P012HUDShield_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P012HUDShield_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P012HUDShield_C_PlayAnimReverseInOut");
static_assert(sizeof(P012HUDShield_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P012HUDShield_C_PlayAnimReverseInOut");
static_assert(offsetof(P012HUDShield_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnBind
// 0x0002 (0x0002 - 0x0000)
struct P012HUDShield_C_OnBind final
{
public:
	bool                                          CallFunc_ValidClassAbility7_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_OnBind) == 0x000001, "Wrong alignment on P012HUDShield_C_OnBind");
static_assert(sizeof(P012HUDShield_C_OnBind) == 0x000002, "Wrong size on P012HUDShield_C_OnBind");
static_assert(offsetof(P012HUDShield_C_OnBind, CallFunc_ValidClassAbility7_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_OnBind::CallFunc_ValidClassAbility7_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnBind, CallFunc_ValidClassAbility7_ReturnValue_1) == 0x000001, "Member 'P012HUDShield_C_OnBind::CallFunc_ValidClassAbility7_ReturnValue_1' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnUnbind
// 0x0002 (0x0002 - 0x0000)
struct P012HUDShield_C_OnUnbind final
{
public:
	bool                                          CallFunc_ValidClassAbility7_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_OnUnbind) == 0x000001, "Wrong alignment on P012HUDShield_C_OnUnbind");
static_assert(sizeof(P012HUDShield_C_OnUnbind) == 0x000002, "Wrong size on P012HUDShield_C_OnUnbind");
static_assert(offsetof(P012HUDShield_C_OnUnbind, CallFunc_ValidClassAbility7_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_OnUnbind::CallFunc_ValidClassAbility7_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnUnbind, CallFunc_ValidClassAbility7_ReturnValue_1) == 0x000001, "Member 'P012HUDShield_C_OnUnbind::CallFunc_ValidClassAbility7_ReturnValue_1' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnInitialize
// 0x0008 (0x0008 - 0x0000)
struct P012HUDShield_C_OnInitialize final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_OnInitialize) == 0x000008, "Wrong alignment on P012HUDShield_C_OnInitialize");
static_assert(sizeof(P012HUDShield_C_OnInitialize) == 0x000008, "Wrong size on P012HUDShield_C_OnInitialize");
static_assert(offsetof(P012HUDShield_C_OnInitialize, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_OnInitialize::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnTick
// 0x0020 (0x0020 - 0x0000)
struct P012HUDShield_C_OnTick final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F4[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_OnTick) == 0x000008, "Wrong alignment on P012HUDShield_C_OnTick");
static_assert(sizeof(P012HUDShield_C_OnTick) == 0x000020, "Wrong size on P012HUDShield_C_OnTick");
static_assert(offsetof(P012HUDShield_C_OnTick, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'P012HUDShield_C_OnTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnTick, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'P012HUDShield_C_OnTick::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnTick, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_OnTick::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnTick, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'P012HUDShield_C_OnTick::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnTick, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'P012HUDShield_C_OnTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P012HUDShield_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F5[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_OnSetEditMode) == 0x000004, "Wrong alignment on P012HUDShield_C_OnSetEditMode");
static_assert(sizeof(P012HUDShield_C_OnSetEditMode) == 0x000010, "Wrong size on P012HUDShield_C_OnSetEditMode");
static_assert(offsetof(P012HUDShield_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P012HUDShield_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P012HUDShield_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P012HUDShield_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P012HUDShield_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P012HUDShield_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.UpdateDependent
// 0x0060 (0x0060 - 0x0000)
struct P012HUDShield_C_UpdateDependent final
{
public:
	bool                                          CallFunc_IsEquipDependent_TrueIsEquip;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F6[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72F7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F8[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue_2; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanDependent_ReturnValue;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72F9[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72FA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_UpdateDependent) == 0x000008, "Wrong alignment on P012HUDShield_C_UpdateDependent");
static_assert(sizeof(P012HUDShield_C_UpdateDependent) == 0x000060, "Wrong size on P012HUDShield_C_UpdateDependent");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_IsEquipDependent_TrueIsEquip) == 0x000000, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_IsEquipDependent_TrueIsEquip' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_GetDependentIntervalRemainingTime_ReturnValue) == 0x000004, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_GetDependentIntervalRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000009, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1) == 0x000020, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_GetDependentIntervalRemainingTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_FTrunc_ReturnValue) == 0x000024, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_GetDependentIntervalRemainingTime_ReturnValue_2) == 0x00002C, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_GetDependentIntervalRemainingTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_CanDependent_ReturnValue) == 0x000031, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_CanDependent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000040, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000048, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, K2Node_DynamicCast_AsSBPCRebellion_Component) == 0x000050, "Member 'P012HUDShield_C_UpdateDependent::K2Node_DynamicCast_AsSBPCRebellion_Component' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'P012HUDShield_C_UpdateDependent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_UpdateDependent, CallFunc_ValidClassAbility7_ReturnValue) == 0x000059, "Member 'P012HUDShield_C_UpdateDependent::CallFunc_ValidClassAbility7_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetCountVisibility
// 0x000C (0x000C - 0x0000)
struct P012HUDShield_C_SetCountVisibility final
{
public:
	bool                                          NoHitSelforCollapse;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72FB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewLocalVar_0;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_SetCountVisibility) == 0x000004, "Wrong alignment on P012HUDShield_C_SetCountVisibility");
static_assert(sizeof(P012HUDShield_C_SetCountVisibility) == 0x00000C, "Wrong size on P012HUDShield_C_SetCountVisibility");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, NoHitSelforCollapse) == 0x000000, "Member 'P012HUDShield_C_SetCountVisibility::NoHitSelforCollapse' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, NewLocalVar_0) == 0x000004, "Member 'P012HUDShield_C_SetCountVisibility::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_SetCountVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000009, "Member 'P012HUDShield_C_SetCountVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, Temp_bool_Variable) == 0x00000A, "Member 'P012HUDShield_C_SetCountVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCountVisibility, K2Node_Select_Default) == 0x00000B, "Member 'P012HUDShield_C_SetCountVisibility::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetCount
// 0x0020 (0x0020 - 0x0000)
struct P012HUDShield_C_SetCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72FC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(P012HUDShield_C_SetCount) == 0x000008, "Wrong alignment on P012HUDShield_C_SetCount");
static_assert(sizeof(P012HUDShield_C_SetCount) == 0x000020, "Wrong size on P012HUDShield_C_SetCount");
static_assert(offsetof(P012HUDShield_C_SetCount, Count) == 0x000000, "Member 'P012HUDShield_C_SetCount::Count' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_SetCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.SetGaugeVisible
// 0x0005 (0x0005 - 0x0000)
struct P012HUDShield_C_SetGaugeVisible final
{
public:
	bool                                          TrueIsVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDShield_C_SetGaugeVisible) == 0x000001, "Wrong alignment on P012HUDShield_C_SetGaugeVisible");
static_assert(sizeof(P012HUDShield_C_SetGaugeVisible) == 0x000005, "Wrong size on P012HUDShield_C_SetGaugeVisible");
static_assert(offsetof(P012HUDShield_C_SetGaugeVisible, TrueIsVisible) == 0x000000, "Member 'P012HUDShield_C_SetGaugeVisible::TrueIsVisible' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetGaugeVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'P012HUDShield_C_SetGaugeVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetGaugeVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'P012HUDShield_C_SetGaugeVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetGaugeVisible, Temp_bool_Variable) == 0x000003, "Member 'P012HUDShield_C_SetGaugeVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_SetGaugeVisible, K2Node_Select_Default) == 0x000004, "Member 'P012HUDShield_C_SetGaugeVisible::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDShield.P012HUDShield_C.IsEquipDependent
// 0x0030 (0x0030 - 0x0000)
struct P012HUDShield_C_IsEquipDependent final
{
public:
	bool                                          TrueIsEquip;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72FD[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDependentIntervalRemainingTime_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanDependent_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72FE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72FF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                K2Node_DynamicCast_AsSBPCRebellion_Component;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDShield_C_IsEquipDependent) == 0x000008, "Wrong alignment on P012HUDShield_C_IsEquipDependent");
static_assert(sizeof(P012HUDShield_C_IsEquipDependent) == 0x000030, "Wrong size on P012HUDShield_C_IsEquipDependent");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, TrueIsEquip) == 0x000000, "Member 'P012HUDShield_C_IsEquipDependent::TrueIsEquip' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_GetDependentIntervalRemainingTime_ReturnValue) == 0x000004, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_GetDependentIntervalRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_CanDependent_ReturnValue) == 0x000009, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_CanDependent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00000A, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x00000B, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'P012HUDShield_C_IsEquipDependent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, K2Node_DynamicCast_AsSBPCRebellion_Component) == 0x000020, "Member 'P012HUDShield_C_IsEquipDependent::K2Node_DynamicCast_AsSBPCRebellion_Component' has a wrong offset!");
static_assert(offsetof(P012HUDShield_C_IsEquipDependent, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'P012HUDShield_C_IsEquipDependent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}


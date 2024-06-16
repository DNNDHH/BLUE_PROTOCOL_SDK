#pragma once

 

// Package: InteractNotice

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function InteractNotice.InteractNotice_C.ExecuteUbergraph_InteractNotice
// 0x0168 (0x0168 - 0x0000)
struct InteractNotice_C_ExecuteUbergraph_InteractNotice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1991[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1992[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_4;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1993[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1994[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1995[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWarpPointComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1996[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJointGestureState                          CallFunc_GetJointGestureState_ReturnValue;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBInteractionState                           CallFunc_GetCurrentInteractionState_ReturnValue;   // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x0094(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1997[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBFieldActorWarpPoint*                 K2Node_DynamicCast_AsSBField_Actor_Warp_Point;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedWarpPoint_ReturnValue;         // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1998[0x1];                                     // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1999[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWarpPointComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199A[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199B[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199C[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199D[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpPointComponent*            CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199E[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_11;                              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionTargetType                        Temp_byte_Variable;                                // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x014D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199F[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(InteractNotice_C_ExecuteUbergraph_InteractNotice) == 0x000008, "Wrong alignment on InteractNotice_C_ExecuteUbergraph_InteractNotice");
static_assert(sizeof(InteractNotice_C_ExecuteUbergraph_InteractNotice) == 0x000168, "Wrong size on InteractNotice_C_ExecuteUbergraph_InteractNotice");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, EntryPoint) == 0x000000, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable) == 0x000004, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_1) == 0x000018, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_2) == 0x00001C, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_bool_Variable) == 0x000030, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_3) == 0x000034, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_4) == 0x000048, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000050, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000058, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_5) == 0x000064, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetValidPlayerState_ReturnValue) == 0x000068, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000088, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetJointGestureState_ReturnValue) == 0x000090, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetJointGestureState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_2) == 0x000091, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000092, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetCurrentInteractionState_ReturnValue) == 0x000093, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetCurrentInteractionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x000094, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000AC, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetOwner_ReturnValue) == 0x0000B0, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_DynamicCast_AsSBField_Actor_Warp_Point) == 0x0000B8, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_DynamicCast_AsSBField_Actor_Warp_Point' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000C1, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsActivatedWarpPoint_ReturnValue) == 0x0000C2, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsActivatedWarpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_3) == 0x0000C3, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000C4, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_SwitchEnum_CmpSuccess) == 0x0000C5, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000C6, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_6) == 0x0000D0, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_4) == 0x0000D4, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000D8, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_5) == 0x0000E0, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetConfigSaveManager_IsValid) == 0x0000E1, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000E8, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_7) == 0x0000F0, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_8) == 0x0000F4, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_9) == 0x0000F8, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_10) == 0x0000FC, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CustomEvent_InUIType) == 0x000100, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CustomEvent_bInVisibility) == 0x000101, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CustomEvent_bInInstantly) == 0x000102, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000103, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000108, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000110, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000118, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000120, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetPlayerController_ReturnValue_1) == 0x000128, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_bool_Variable_1) == 0x000130, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_6) == 0x000131, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_Select_Default) == 0x000134, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000138, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, CallFunc_IsValid_ReturnValue_7) == 0x000140, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_11) == 0x000144, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_int_Variable_12) == 0x000148, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, Temp_byte_Variable) == 0x00014C, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CustomEvent_SkinType) == 0x00014D, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_Select_Default_1) == 0x000150, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_Select_Default_2) == 0x000154, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_ExecuteUbergraph_InteractNotice, K2Node_CreateDelegate_OutputDelegate_2) == 0x000158, "Member 'InteractNotice_C_ExecuteUbergraph_InteractNotice::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.OnPadSkinChange
// 0x0001 (0x0001 - 0x0000)
struct InteractNotice_C_OnPadSkinChange final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractNotice_C_OnPadSkinChange) == 0x000001, "Wrong alignment on InteractNotice_C_OnPadSkinChange");
static_assert(sizeof(InteractNotice_C_OnPadSkinChange) == 0x000001, "Wrong size on InteractNotice_C_OnPadSkinChange");
static_assert(offsetof(InteractNotice_C_OnPadSkinChange, SkinType) == 0x000000, "Member 'InteractNotice_C_OnPadSkinChange::SkinType' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.SetTextId
// 0x0048 (0x0048 - 0x0000)
struct InteractNotice_C_SetTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19A0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(InteractNotice_C_SetTextId) == 0x000008, "Wrong alignment on InteractNotice_C_SetTextId");
static_assert(sizeof(InteractNotice_C_SetTextId) == 0x000048, "Wrong size on InteractNotice_C_SetTextId");
static_assert(offsetof(InteractNotice_C_SetTextId, InTextID) == 0x000000, "Member 'InteractNotice_C_SetTextId::InTextID' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetTextId, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'InteractNotice_C_SetTextId::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'InteractNotice_C_SetTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'InteractNotice_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.SetJointGestureText
// 0x00F8 (0x00F8 - 0x0000)
struct InteractNotice_C_SetJointGestureText final
{
public:
	ESBJointGestureState                          InState;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJointGestureState                          Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19A1[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19A2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
	class FName                                   K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotionName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
};
static_assert(alignof(InteractNotice_C_SetJointGestureText) == 0x000008, "Wrong alignment on InteractNotice_C_SetJointGestureText");
static_assert(sizeof(InteractNotice_C_SetJointGestureText) == 0x0000F8, "Wrong size on InteractNotice_C_SetJointGestureText");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, InState) == 0x000000, "Member 'InteractNotice_C_SetJointGestureText::InState' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, Temp_byte_Variable) == 0x000001, "Member 'InteractNotice_C_SetJointGestureText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, Temp_name_Variable) == 0x000004, "Member 'InteractNotice_C_SetJointGestureText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, Temp_name_Variable_1) == 0x00000C, "Member 'InteractNotice_C_SetJointGestureText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, Temp_name_Variable_2) == 0x000014, "Member 'InteractNotice_C_SetJointGestureText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, K2Node_Select_Default) == 0x000038, "Member 'InteractNotice_C_SetJointGestureText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_GetEmotionName_ReturnValue) == 0x000040, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_GetEmotionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'InteractNotice_C_SetJointGestureText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A8, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'InteractNotice_C_SetJointGestureText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_SetJointGestureText, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'InteractNotice_C_SetJointGestureText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.PlayAnim
// 0x0028 (0x0028 - 0x0000)
struct InteractNotice_C_PlayAnim final
{
public:
	bool                                          IsAnimIn;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A4[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractNotice_C_PlayAnim) == 0x000008, "Wrong alignment on InteractNotice_C_PlayAnim");
static_assert(sizeof(InteractNotice_C_PlayAnim) == 0x000028, "Wrong size on InteractNotice_C_PlayAnim");
static_assert(offsetof(InteractNotice_C_PlayAnim, IsAnimIn) == 0x000000, "Member 'InteractNotice_C_PlayAnim::IsAnimIn' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'InteractNotice_C_PlayAnim::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'InteractNotice_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'InteractNotice_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000018, "Member 'InteractNotice_C_PlayAnim::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'InteractNotice_C_PlayAnim::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00001D, "Member 'InteractNotice_C_PlayAnim::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'InteractNotice_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function InteractNotice.InteractNotice_C.GetEmoteText
// 0x0002 (0x0002 - 0x0000)
struct InteractNotice_C_GetEmoteText final
{
public:
	ESBJointGestureState                          State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewParam;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InteractNotice_C_GetEmoteText) == 0x000001, "Wrong alignment on InteractNotice_C_GetEmoteText");
static_assert(sizeof(InteractNotice_C_GetEmoteText) == 0x000002, "Wrong size on InteractNotice_C_GetEmoteText");
static_assert(offsetof(InteractNotice_C_GetEmoteText, State) == 0x000000, "Member 'InteractNotice_C_GetEmoteText::State' has a wrong offset!");
static_assert(offsetof(InteractNotice_C_GetEmoteText, NewParam) == 0x000001, "Member 'InteractNotice_C_GetEmoteText::NewParam' has a wrong offset!");

}


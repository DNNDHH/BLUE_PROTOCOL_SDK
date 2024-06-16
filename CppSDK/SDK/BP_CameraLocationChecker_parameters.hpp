#pragma once

 

// Package: BP_CameraLocationChecker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ExecuteUbergraph_BP_CameraLocationChecker
// 0x01C8 (0x01C8 - 0x0000)
struct BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E3[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E4[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x003C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E5[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E6[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaSecnd;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86E7[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_SphereOverlapComponent_HitLocation;    // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_SphereOverlapComponent_HitNormal;      // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_K2_SphereOverlapComponent_BoneName;       // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SphereOverlapComponent_OutHit;         // 0x0124(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SphereOverlapComponent_ReturnValue;    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E8[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E9[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker) == 0x000008, "Wrong alignment on BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker");
static_assert(sizeof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker) == 0x0001C8, "Wrong size on BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, EntryPoint) == 0x000000, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_GetViewTarget_ReturnValue) == 0x000018, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, Temp_bool_Variable) == 0x000038, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x00003C, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000C4, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, Temp_int_Loop_Counter_Variable_1) == 0x0000C8, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, K2Node_Event_DeltaSeconds) == 0x0000D0, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000D4, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, K2Node_CustomEvent_DeltaSecnd) == 0x0000D8, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::K2Node_CustomEvent_DeltaSecnd' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, Temp_int_Array_Index_Variable_1) == 0x0000DC, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E0, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000E4, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000E8, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, K2Node_Select_Default) == 0x000100, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SphereOverlapComponent_HitLocation) == 0x000104, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SphereOverlapComponent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SphereOverlapComponent_HitNormal) == 0x000110, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SphereOverlapComponent_HitNormal' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SphereOverlapComponent_BoneName) == 0x00011C, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SphereOverlapComponent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SphereOverlapComponent_OutHit) == 0x000124, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SphereOverlapComponent_OutHit' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_K2_SphereOverlapComponent_ReturnValue) == 0x0001AC, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_K2_SphereOverlapComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Array_Length_ReturnValue) == 0x0001B0, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Less_IntInt_ReturnValue) == 0x0001B4, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001B8, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Array_Length_ReturnValue_1) == 0x0001BC, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_FClamp_ReturnValue) == 0x0001C0, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001C4, "Member 'BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.CheckPostPorcessVolumeLUT
// 0x0004 (0x0004 - 0x0000)
struct BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT final
{
public:
	float                                         DeltaSecnd;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT) == 0x000004, "Wrong alignment on BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT");
static_assert(sizeof(BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT) == 0x000004, "Wrong size on BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT");
static_assert(offsetof(BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT, DeltaSecnd) == 0x000000, "Member 'BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT::DeltaSecnd' has a wrong offset!");

// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CameraLocationChecker_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraLocationChecker_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CameraLocationChecker_C_ReceiveTick");
static_assert(sizeof(BP_CameraLocationChecker_C_ReceiveTick) == 0x000004, "Wrong size on BP_CameraLocationChecker_C_ReceiveTick");
static_assert(offsetof(BP_CameraLocationChecker_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CameraLocationChecker_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}


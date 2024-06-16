#pragma once

 

// Package: BP_IndoorLightScheduleComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_IndoorMaterialParam_structs.hpp"
#include "BP_IndoorLightParam_structs.hpp"


namespace SDK::Params
{

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ExecuteUbergraph_BP_IndoorLightScheduleComponent
// 0x01D8 (0x01D8 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9937[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9938[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowMinOfDay_MinOfday;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9939[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993A[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMinutesPerDay_ReturnValue;             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993B[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_TimeRate;                             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Sw;                                   // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993C[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_2;                        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MinOfDay;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcFadeColorAndTime_CurrentId;           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcFadeColorAndTime_CurrentFadeId;       // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_rate;                // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_CalcFadeColorAndTime_CurrentColor;        // 0x00E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_CurrentIntensity;    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale; // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowMinOfDay_MinOfday_1;                // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993D[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993E[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcFadeColorAndTime_CurrentId_1;         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcFadeColorAndTime_CurrentFadeId_1;     // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_rate_1;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_CalcFadeColorAndTime_CurrentColor_1;      // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_CurrentIntensity_1;  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale_1; // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_993F[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NowRate;                        // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 K2Node_CustomEvent_MeshComponents;                 // 0x0148(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_CustomEvent_Sw;                             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9940[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9941[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UMaterialInstanceDynamic*         Temp_object_Variable;                              // 0x0170(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_3;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9942[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBP_IndoorMaterialParam                CallFunc_Array_Get_Item_1;                         // 0x0180(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_3;            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_IndoorMaterialParam                CallFunc_Array_Get_Item_2;                         // 0x01A0(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue_1;                        // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent) == 0x000008, "Wrong alignment on BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent) == 0x0001D8, "Wrong size on BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, EntryPoint) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_LinearColorLerp_ReturnValue) == 0x00000C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x00001C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GetNowMinOfDay_MinOfday) == 0x00002C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GetNowMinOfDay_MinOfday' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Lerp_ReturnValue_1) == 0x000030, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, Temp_int_Array_Index_Variable) == 0x000034, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000058, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GetGameState_ReturnValue) == 0x000060, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_DynamicCast_AsSBGame_State) == 0x000068, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GetMinutesPerDay_ReturnValue) == 0x000074, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GetMinutesPerDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Max_ReturnValue) == 0x000078, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Max_ReturnValue_1) == 0x00007C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000080, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000084, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00008C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_Event_TimeRate) == 0x000090, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_Event_TimeRate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_Event_Sw) == 0x000094, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_Event_Sw' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue) == 0x000098, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00009C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, Temp_int_Loop_Counter_Variable_1) == 0x0000A0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_FTrunc_ReturnValue) == 0x0000A4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Max_ReturnValue_2) == 0x0000A8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Max_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000AC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0000B0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000B4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0000BC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_FTrunc_ReturnValue_1) == 0x0000C0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Clamp_ReturnValue_1) == 0x0000C4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x0000C8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000CC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_CustomEvent_MinOfDay) == 0x0000D0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_CustomEvent_MinOfDay' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Min_ReturnValue) == 0x0000D4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentId) == 0x0000D8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentFadeId) == 0x0000DC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentFadeId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_rate) == 0x0000E0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_rate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentColor) == 0x0000E4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentColor' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentIntensity) == 0x0000F4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentIntensity' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale) == 0x0000F8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_GetNowMinOfDay_MinOfday_1) == 0x0000FC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_GetNowMinOfDay_MinOfday_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000100, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000104, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Abs_Int_ReturnValue) == 0x000108, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentId_1) == 0x000110, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentId_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentFadeId_1) == 0x000114, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentFadeId_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_rate_1) == 0x000118, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_rate_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentColor_1) == 0x00011C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentColor_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentIntensity_1) == 0x00012C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentIntensity_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale_1) == 0x000130, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CalcFadeColorAndTime_CurrentEmmisiveScale_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000134, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_CustomEvent_Index) == 0x000138, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_CustomEvent_NowRate) == 0x00013C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_CustomEvent_NowRate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000140, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000144, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_CustomEvent_MeshComponents) == 0x000148, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_CustomEvent_MeshComponents' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_CustomEvent_Sw) == 0x000158, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_CustomEvent_Sw' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x00015C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, K2Node_Event_DeltaSeconds) == 0x000160, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Add_FloatFloat_ReturnValue) == 0x000164, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000168, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, Temp_object_Variable) == 0x000170, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Max_ReturnValue_3) == 0x000178, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Max_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue_3) == 0x000198, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Add_IntInt_ReturnValue_3) == 0x00019C, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Get_Item_2) == 0x0001A0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Min_ReturnValue_1) == 0x0001B8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Min_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0001BC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001C0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0001C8, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Length_ReturnValue_1) == 0x0001CC, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Array_Length_ReturnValue_2) == 0x0001D0, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D4, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001D5, "Member 'BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetLightValueByMinOfDay
// 0x0004 (0x0004 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay final
{
public:
	int32                                         MinOfday;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay) == 0x000004, "Wrong size on BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay, MinOfday) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay::MinOfday' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateEditorPreview
// 0x0008 (0x0008 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_UpdateEditorPreview final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sw;                                                // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_UpdateEditorPreview) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_UpdateEditorPreview");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_UpdateEditorPreview) == 0x000008, "Wrong size on BP_IndoorLightScheduleComponent_C_UpdateEditorPreview");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_UpdateEditorPreview, TimeRate) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_UpdateEditorPreview::TimeRate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_UpdateEditorPreview, Sw) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_UpdateEditorPreview::Sw' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.FadeStart
// 0x0008 (0x0008 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_FadeStart final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowRate;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_FadeStart) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_FadeStart");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_FadeStart) == 0x000008, "Wrong size on BP_IndoorLightScheduleComponent_C_FadeStart");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_FadeStart, Param_Index) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_FadeStart::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_FadeStart, NowRate) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_FadeStart::NowRate' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.InitMaterialSchedule
// 0x0018 (0x0018 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_InitMaterialSchedule final
{
public:
	TArray<class UMeshComponent*>                 MeshComponents;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          Sw;                                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_InitMaterialSchedule) == 0x000008, "Wrong alignment on BP_IndoorLightScheduleComponent_C_InitMaterialSchedule");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_InitMaterialSchedule) == 0x000018, "Wrong size on BP_IndoorLightScheduleComponent_C_InitMaterialSchedule");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_InitMaterialSchedule, MeshComponents) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_InitMaterialSchedule::MeshComponents' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_InitMaterialSchedule, Sw) == 0x000010, "Member 'BP_IndoorLightScheduleComponent_C_InitMaterialSchedule::Sw' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_ReceiveTick");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_IndoorLightScheduleComponent_C_ReceiveTick");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNewFadeParam
// 0x006C (0x006C - 0x0000)
struct BP_IndoorLightScheduleComponent_C_GetNewFadeParam final
{
public:
	int32                                         Start;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         End;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpIndex;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTime;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_IndoorLightParam                   CallFunc_Array_Get_Item;                           // 0x0028(0x0024)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9943[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_GetNewFadeParam");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam) == 0x00006C, "Wrong size on BP_IndoorLightScheduleComponent_C_GetNewFadeParam");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, Start) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::Start' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, End) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::End' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, Param_Index) == 0x000008, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, TmpIndex) == 0x00000C, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::TmpIndex' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, TmpTime) == 0x000010, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::TmpTime' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Clamp_ReturnValue) == 0x000050, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Max_ReturnValue) == 0x000054, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Min_ReturnValue) == 0x000060, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Less_IntInt_ReturnValue_1) == 0x000064, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_Less_IntInt_ReturnValue_2) == 0x000065, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000066, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_BooleanAND_ReturnValue) == 0x000067, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNewFadeParam, CallFunc_BooleanAND_ReturnValue_1) == 0x000068, "Member 'BP_IndoorLightScheduleComponent_C_GetNewFadeParam::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNowMinOfDay
// 0x00A0 (0x00A0 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_GetNowMinOfDay final
{
public:
	int32                                         MinOfday;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinOfDayValue;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9944[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9945[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetGameTime_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetPreviewTime_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year_1;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month_1;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day_1;                      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour_1;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute_1;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second_1;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond_1;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_3;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue_1;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay) == 0x000008, "Wrong alignment on BP_IndoorLightScheduleComponent_C_GetNowMinOfDay");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay) == 0x0000A0, "Wrong size on BP_IndoorLightScheduleComponent_C_GetNowMinOfDay");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, MinOfday) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::MinOfday' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, MinOfDayValue) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::MinOfDayValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, K2Node_DynamicCast_AsSBGame_State) == 0x000020, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_GetGameTime_ReturnValue) == 0x000030, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_GetGameTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_GetPreviewTime_ReturnValue) == 0x000038, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_GetPreviewTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Year) == 0x000040, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Month) == 0x000044, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Day) == 0x000048, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Hour) == 0x00004C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Minute) == 0x000050, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Second) == 0x000054, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Millisecond) == 0x000058, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Year_1) == 0x00005C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Year_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Month_1) == 0x000060, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Month_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Day_1) == 0x000064, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Day_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Hour_1) == 0x000068, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Hour_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Minute_1) == 0x00006C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Minute_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Second_1) == 0x000070, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Second_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_BreakDateTime_Millisecond_1) == 0x000074, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_BreakDateTime_Millisecond_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Clamp_ReturnValue) == 0x000078, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Clamp_ReturnValue_1) == 0x00007C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Max_ReturnValue) == 0x000080, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Max_ReturnValue_1) == 0x000084, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x000088, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Multiply_IntInt_ReturnValue_3) == 0x00008C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Multiply_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Min_ReturnValue) == 0x000098, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_GetNowMinOfDay, CallFunc_Min_ReturnValue_1) == 0x00009C, "Member 'BP_IndoorLightScheduleComponent_C_GetNowMinOfDay::CallFunc_Min_ReturnValue_1' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.CalcFadeColorAndTime
// 0x00D8 (0x00D8 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime final
{
public:
	int32                                         CurrentTimeOfDay;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentId;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CurrentFadeId;                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Param_CurrentColor;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_CurrentIntensity;                            // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentEmmisiveScale;                              // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowId;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeId;                                            // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeRate;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeEndMin;                                        // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeStartMin;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentMin;                                        // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9946[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9947[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9948[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBP_IndoorLightParam                   CallFunc_Array_Get_Item;                           // 0x0084(0x0024)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9949[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_994A[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_994B[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime) == 0x000004, "Wrong alignment on BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime) == 0x0000D8, "Wrong size on BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CurrentTimeOfDay) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CurrentTimeOfDay' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CurrentId) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CurrentId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Param_CurrentFadeId) == 0x000008, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Param_CurrentFadeId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Rate) == 0x00000C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Rate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Param_CurrentColor) == 0x000010, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Param_CurrentColor' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Param_CurrentIntensity) == 0x000020, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Param_CurrentIntensity' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CurrentEmmisiveScale) == 0x000024, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CurrentEmmisiveScale' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, NowId) == 0x000028, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::NowId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, FadeId) == 0x00002C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::FadeId' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, FadeRate) == 0x000030, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::FadeRate' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, FadeEndMin) == 0x000034, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::FadeEndMin' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, FadeStartMin) == 0x000038, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::FadeStartMin' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CurrentMin) == 0x00003C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CurrentMin' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Multiply_IntInt_ReturnValue) == 0x000044, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Lerp_ReturnValue) == 0x000048, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Lerp_ReturnValue_1) == 0x00004C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_LinearColorLerp_ReturnValue) == 0x000050, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Temp_bool_True_if_break_was_hit_Variable) == 0x000060, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Subtract_IntInt_ReturnValue) == 0x000064, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000068, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Not_PreBool_ReturnValue) == 0x00006C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Less_IntInt_ReturnValue) == 0x00006D, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000078, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Less_IntInt_ReturnValue_1) == 0x000080, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000081, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Array_Get_Item) == 0x000084, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_BooleanAND_ReturnValue) == 0x0000A8, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000AC, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Clamp_ReturnValue) == 0x0000B0, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B4, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Max_ReturnValue) == 0x0000B8, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0000BC, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000C8, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Min_ReturnValue) == 0x0000CC, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D0, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000D4, "Member 'BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetIndoorLightWithCurrentValue
// 0x0078 (0x0078 - 0x0000)
struct BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_994C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Map_Values_Values;                        // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_994D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_994E[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_994F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9950[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBP_IndoorMaterialParam                CallFunc_Map_Find_Value;                           // 0x0058(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue) == 0x000008, "Wrong alignment on BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue");
static_assert(sizeof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue) == 0x000078, "Wrong size on BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, Temp_int_Loop_Counter_Variable_1) == 0x000004, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Map_Values_Values) == 0x000018, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Less_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, Temp_int_Array_Index_Variable_1) == 0x000044, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Map_Find_Value) == 0x000058, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'BP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}


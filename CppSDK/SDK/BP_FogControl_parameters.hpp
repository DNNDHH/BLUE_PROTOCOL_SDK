#pragma once

 

// Package: BP_FogControl

#include "Basic.hpp"

#include "FogControlCurveParam_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "VolumetricFogControlParam_structs.hpp"
#include "Engine_structs.hpp"
#include "FogControlParam_structs.hpp"


namespace SDK::Params
{

// Function BP_FogControl.BP_FogControl_C.ExecuteUbergraph_BP_FogControl
// 0x03A8 (0x03A8 - 0x0000)
struct BP_FogControl_C_ExecuteUbergraph_BP_FogControl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A0[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AExponentialHeightFog*>          CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0030(0x0010)(ReferenceParm)
	class AExponentialHeightFog*                  CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A2[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 K2Node_CustomEvent_ControlVolume;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Time;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A3[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A4[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             K2Node_MakeStruct_VolumetricFogControlParam;       // 0x0080(0x0028)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x00A8(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A5[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A6[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             K2Node_MakeStruct_VolumetricFogControlParam_1;     // 0x0134(0x0028)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam_1;               // 0x015C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A7[0x2];                                     // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             K2Node_Select_Default;                             // 0x01B0(0x0028)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x01F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0204(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x021D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x021E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A8[0x1];                                     // 0x021F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98A9[0x1];                                     // 0x022B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlParam                       K2Node_Select_Default_3;                           // 0x022C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x0270(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0284(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0294(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AA[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_8;                       // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_9;                       // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_10;                      // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_3;            // 0x0338(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_11;                      // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x034D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AB[0x2];                                     // 0x034E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component;  // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AC[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component_1; // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AD[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      CallFunc_GetActorOfClass_ReturnValue;              // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_12;                      // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AE[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component_2; // 0x0380(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98AF[0x2];                                     // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B0[0x2];                                     // 0x0392(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_4;                           // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_5;                           // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_13;                      // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl) == 0x000008, "Wrong alignment on BP_FogControl_C_ExecuteUbergraph_BP_FogControl");
static_assert(sizeof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl) == 0x0003A8, "Wrong size on BP_FogControl_C_ExecuteUbergraph_BP_FogControl");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, EntryPoint) == 0x000000, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_float_Variable) == 0x000004, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable) == 0x000008, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable_1) == 0x000009, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_float_Variable_1) == 0x00000C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable_2) == 0x000010, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000030, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_CustomEvent_ControlVolume) == 0x000050, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_CustomEvent_ControlVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_CustomEvent_Time) == 0x000058, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00005C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_2) == 0x000064, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_X) == 0x000074, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Y) == 0x000078, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Z) == 0x00007C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_MakeStruct_VolumetricFogControlParam) == 0x000080, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_MakeStruct_VolumetricFogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_MakeStruct_FogControlParam) == 0x0000A8, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_MakeStruct_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E8, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_FClamp_ReturnValue) == 0x0000EC, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000F0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0000F4, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000F8, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000FC, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_FClamp_ReturnValue_1) == 0x000108, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_X_1) == 0x00010C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Y_1) == 0x000110, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Z_1) == 0x000114, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_3) == 0x000118, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_4) == 0x000119, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00011C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_X_2) == 0x000128, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Y_2) == 0x00012C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BreakVector_Z_2) == 0x000130, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_MakeStruct_VolumetricFogControlParam_1) == 0x000134, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_MakeStruct_VolumetricFogControlParam_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_MakeStruct_FogControlParam_1) == 0x00015C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_MakeStruct_FogControlParam_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_5) == 0x00019C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable_3) == 0x00019D, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0001A0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default) == 0x0001B0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default_1) == 0x0001D8, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue) == 0x0001DC, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_LinearColorLerp_ReturnValue) == 0x0001E0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x0001F0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_1) == 0x000200, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000204, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000214, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default_2) == 0x000218, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00021C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00021D, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_BooleanAND_ReturnValue) == 0x00021E, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_SelectFloat_ReturnValue) == 0x000220, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_2) == 0x000224, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000228, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000229, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable_4) == 0x00022A, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default_3) == 0x00022C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Add_FloatFloat_ReturnValue) == 0x00026C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_LinearColorLerp_ReturnValue_2) == 0x000270, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_LinearColorLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_3) == 0x000280, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_MakeVector_ReturnValue) == 0x000284, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_4) == 0x000290, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000294, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_K2_SetActorLocation_ReturnValue) == 0x00031C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_5) == 0x000320, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_6) == 0x000324, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_7) == 0x000328, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_8) == 0x00032C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_9) == 0x000330, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_10) == 0x000334, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_LinearColorLerp_ReturnValue_3) == 0x000338, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_LinearColorLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_11) == 0x000348, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_6) == 0x00034C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_7) == 0x00034D, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_AsDirectional_Light_Component) == 0x000350, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_AsDirectional_Light_Component' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_bSuccess) == 0x000358, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_AsDirectional_Light_Component_1) == 0x000360, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_AsDirectional_Light_Component_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_bSuccess_1) == 0x000368, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_GetActorOfClass_ReturnValue) == 0x000370, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_12) == 0x000378, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_8) == 0x00037C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_AsDirectional_Light_Component_2) == 0x000380, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_AsDirectional_Light_Component_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_DynamicCast_bSuccess_2) == 0x000388, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_9) == 0x000389, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_float_Variable_2) == 0x00038C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_IsValid_ReturnValue_10) == 0x000390, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_bool_Variable_5) == 0x000391, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default_4) == 0x000394, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, Temp_float_Variable_3) == 0x000398, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, K2Node_Select_Default_5) == 0x00039C, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_ExecuteUbergraph_BP_FogControl, CallFunc_Lerp_ReturnValue_13) == 0x0003A0, "Member 'BP_FogControl_C_ExecuteUbergraph_BP_FogControl::CallFunc_Lerp_ReturnValue_13' has a wrong offset!");

// Function BP_FogControl.BP_FogControl_C.StartFogControl
// 0x0010 (0x0010 - 0x0000)
struct BP_FogControl_C_StartFogControl final
{
public:
	class ABP_FogControlVolume_C*                 ControlVolume;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControl_C_StartFogControl) == 0x000008, "Wrong alignment on BP_FogControl_C_StartFogControl");
static_assert(sizeof(BP_FogControl_C_StartFogControl) == 0x000010, "Wrong size on BP_FogControl_C_StartFogControl");
static_assert(offsetof(BP_FogControl_C_StartFogControl, ControlVolume) == 0x000000, "Member 'BP_FogControl_C_StartFogControl::ControlVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_StartFogControl, Time) == 0x000008, "Member 'BP_FogControl_C_StartFogControl::Time' has a wrong offset!");

// Function BP_FogControl.BP_FogControl_C.UpdateFogForDynamicSky
// 0x0470 (0x0470 - 0x0000)
struct BP_FogControl_C_UpdateFogForDynamicSky final
{
public:
	float                                         InTime;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98B1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlCurveParam                  CurveParam;                                        // 0x0008(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             VolumetricParam;                                   // 0x0058(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HueShift;                                          // 0x0080(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Saturation_Scale;                                  // 0x0084(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Color_Value_Scale;                                 // 0x0088(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurPlayerHeight;                                   // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B2[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B3[0x1];                                     // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98B4[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B5[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B6[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component;  // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B8[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98B9[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BA[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BB[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_3;                             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BC[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_4;                           // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BD[0x2];                                     // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             K2Node_Select_Default_5;                           // 0x015C(0x0028)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_6;                           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BE[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlParam                       K2Node_Select_Default_7;                           // 0x0188(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlCurveParam                  K2Node_Select_Default_8;                           // 0x01C8(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98BF[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x021C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C0[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C1[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C2[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_3;                // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C3[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_4;                // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C4[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_5;                // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C5[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_6;                // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_5;              // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C6[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_7;                // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_6;              // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C7[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_8;                // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x0294(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C8[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_7;              // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_9;                // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98C9[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x0304(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_10;               // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98CA[0x1];                                     // 0x036B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x036C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98CB[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0384(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x039C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_3;            // 0x03AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_8;                       // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_9;                       // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_10;                      // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_11;                      // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_12;                      // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_13;                      // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x03D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x03E4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FogControl_C_UpdateFogForDynamicSky) == 0x000008, "Wrong alignment on BP_FogControl_C_UpdateFogForDynamicSky");
static_assert(sizeof(BP_FogControl_C_UpdateFogForDynamicSky) == 0x000470, "Wrong size on BP_FogControl_C_UpdateFogForDynamicSky");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, InTime) == 0x000000, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::InTime' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CurveParam) == 0x000008, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CurveParam' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, VolumetricParam) == 0x000058, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::VolumetricParam' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, HueShift) == 0x000080, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::HueShift' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Saturation_Scale) == 0x000084, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Saturation_Scale' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Color_Value_Scale) == 0x000088, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Color_Value_Scale' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CurPlayerHeight) == 0x00008C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CurPlayerHeight' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_float_Variable) == 0x000090, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable) == 0x000094, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_float_Variable_1) == 0x000098, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_1) == 0x00009C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_2) == 0x00009D, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_3) == 0x00009E, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_float_Variable_2) == 0x0000A0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000A8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_X) == 0x0000C0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_Y) == 0x0000C4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_Z) == 0x0000C8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000CC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_4) == 0x0000D0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue) == 0x0000D4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_DynamicCast_AsDirectional_Light_Component) == 0x0000E0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_DynamicCast_AsDirectional_Light_Component' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_2) == 0x0000E9, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_3) == 0x0000EA, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default) == 0x0000EC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue) == 0x0000F0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_1) == 0x0000F4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000F8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_5) == 0x0000FC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000100, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000110, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_1) == 0x000120, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_2) == 0x000124, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000128, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_3) == 0x00012C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_6) == 0x000130, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_7) == 0x000131, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_float_Variable_3) == 0x000134, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, Temp_bool_Variable_8) == 0x000138, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_4) == 0x00013C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000140, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_4) == 0x000141, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000144, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_X_1) == 0x000150, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_Y_1) == 0x000154, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BreakVector_Z_1) == 0x000158, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_5) == 0x00015C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_6) == 0x000184, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_7) == 0x000188, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_Select_Default_8) == 0x0001C8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_5) == 0x000218, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_6) == 0x000219, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetLinearColorValue_ReturnValue) == 0x00021C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_7) == 0x00022C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectColor_ReturnValue) == 0x000230, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue) == 0x000240, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_8) == 0x000244, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_2) == 0x000248, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_1) == 0x00024C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_9) == 0x000250, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_3) == 0x000254, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_2) == 0x000258, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_10) == 0x00025C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_4) == 0x000260, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_3) == 0x000264, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_11) == 0x000268, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_5) == 0x00026C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_4) == 0x000270, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_12) == 0x000274, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_6) == 0x000278, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_5) == 0x00027C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_13) == 0x000280, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_7) == 0x000284, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_6) == 0x000288, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_14) == 0x00028C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_8) == 0x000290, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x000294, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_15) == 0x0002A4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectColor_ReturnValue_1) == 0x0002A8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GetFloatValue_ReturnValue_7) == 0x0002B8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GetFloatValue_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_RGBToHSV_H) == 0x0002BC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_RGBToHSV_S) == 0x0002C0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_RGBToHSV_V) == 0x0002C4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_RGBToHSV_A) == 0x0002C8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_9) == 0x0002CC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0002D0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0002D4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0002D8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_FClamp_ReturnValue) == 0x0002DC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0002E0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_IsValid_ReturnValue_16) == 0x0002E4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Fraction_ReturnValue) == 0x0002E8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0002EC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_HSVToRGB_ReturnValue) == 0x0002F0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000300, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, K2Node_MakeStruct_FogControlParam) == 0x000304, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::K2Node_MakeStruct_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_FClamp_ReturnValue_1) == 0x000344, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000348, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_1) == 0x00034C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000350, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_FClamp_ReturnValue_2) == 0x000354, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_2) == 0x000358, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_SelectFloat_ReturnValue_10) == 0x00035C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_SelectFloat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_3) == 0x000360, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_4) == 0x000364, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000368, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000369, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00036A, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_LinearColorLerp_ReturnValue) == 0x00036C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_BooleanAND_ReturnValue) == 0x00037C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_5) == 0x000380, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000384, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000394, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_6) == 0x000398, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_LinearColorLerp_ReturnValue_2) == 0x00039C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_LinearColorLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_LinearColorLerp_ReturnValue_3) == 0x0003AC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_LinearColorLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_7) == 0x0003BC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_8) == 0x0003C0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_9) == 0x0003C4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_10) == 0x0003C8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_11) == 0x0003CC, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_12) == 0x0003D0, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_Lerp_ReturnValue_13) == 0x0003D4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_Lerp_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_MakeVector_ReturnValue) == 0x0003D8, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0003E4, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_UpdateFogForDynamicSky, CallFunc_K2_SetActorLocation_ReturnValue) == 0x00046C, "Member 'BP_FogControl_C_UpdateFogForDynamicSky::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_FogControl.BP_FogControl_C.AddActivatedVolume
// 0x0010 (0x0010 - 0x0000)
struct BP_FogControl_C_AddActivatedVolume final
{
public:
	class ABP_FogControlVolume_C*                 FogControlVolume;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControl_C_AddActivatedVolume) == 0x000008, "Wrong alignment on BP_FogControl_C_AddActivatedVolume");
static_assert(sizeof(BP_FogControl_C_AddActivatedVolume) == 0x000010, "Wrong size on BP_FogControl_C_AddActivatedVolume");
static_assert(offsetof(BP_FogControl_C_AddActivatedVolume, FogControlVolume) == 0x000000, "Member 'BP_FogControl_C_AddActivatedVolume::FogControlVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_AddActivatedVolume, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'BP_FogControl_C_AddActivatedVolume::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_AddActivatedVolume, CallFunc_Array_AddUnique_ReturnValue) == 0x00000C, "Member 'BP_FogControl_C_AddActivatedVolume::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_FogControl.BP_FogControl_C.RemoveVolume
// 0x0038 (0x0038 - 0x0000)
struct BP_FogControl_C_RemoveVolume final
{
public:
	class ABP_FogControlVolume_C*                 FogControlVolume;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControlVolume_C*                 PrimeVolume;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControlVolume_C*                 TmpVolume;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivatedTime;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControlVolume_C*                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FogControl_C_RemoveVolume) == 0x000008, "Wrong alignment on BP_FogControl_C_RemoveVolume");
static_assert(sizeof(BP_FogControl_C_RemoveVolume) == 0x000038, "Wrong size on BP_FogControl_C_RemoveVolume");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, FogControlVolume) == 0x000000, "Member 'BP_FogControl_C_RemoveVolume::FogControlVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, PrimeVolume) == 0x000008, "Member 'BP_FogControl_C_RemoveVolume::PrimeVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, TmpVolume) == 0x000010, "Member 'BP_FogControl_C_RemoveVolume::TmpVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, ActivatedTime) == 0x000018, "Member 'BP_FogControl_C_RemoveVolume::ActivatedTime' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_FogControl_C_RemoveVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_FogControl_C_RemoveVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000035, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControl_C_RemoveVolume, CallFunc_Array_RemoveItem_ReturnValue) == 0x000036, "Member 'BP_FogControl_C_RemoveVolume::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}


#pragma once

 

// Package: BP_FogControlVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FogControlParam_structs.hpp"
#include "Engine_structs.hpp"
#include "FogControlCurveParam_structs.hpp"


namespace SDK::Params
{

// Function BP_FogControlVolume.BP_FogControlVolume_C.ExecuteUbergraph_BP_FogControlVolume
// 0x0790 (0x0790 - 0x0000)
struct BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9860[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9861[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9862[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9863[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_3;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_4;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9864[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_5;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9865[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_6;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9866[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CameraLocationChecker_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0068(0x0010)(ReferenceParm)
	float                                         Temp_float_Variable_7;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9867[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9868[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9869[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FogControl_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x00D8(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_8;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_986A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControl_C*                       CallFunc_Array_Get_Item_1;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_986B[0x8];                                     // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_986C[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControl_C*                       CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_986D[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker;   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_986E[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker_1; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_986F[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 K2Node_CustomEvent_ControlActor;                   // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9870[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x018C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x01C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9871[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9872[0x1];                                     // 0x01FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_2;    // 0x01FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x0210(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_3;    // 0x0220(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_3;            // 0x0234(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue_1;    // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_4;                           // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_5;                           // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_6;                           // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9873[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_7;                           // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_3;         // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9874[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_4;            // 0x0270(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_8;                       // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_9;                       // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_10;                      // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_11;                      // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_12;                      // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_13;                      // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_14;                      // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_5;            // 0x029C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_15;                      // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x02B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x02B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9875[0x2];                                     // 0x02D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x02DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x0300(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0320(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_3;                // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_4;                // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_5;                // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_6;                // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_5;              // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_6;              // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_7;                // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_8;                // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_7;              // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_9;                // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_4;                     // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x0384(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x0394(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9876[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlCurveParam                  K2Node_MakeStruct_FogControlCurveParam;            // 0x03D8(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9877[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x042C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_3;        // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0445(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9878[0x2];                                     // 0x0446(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_2;        // 0x0448(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;                // 0x0458(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9879[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_8;              // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987A[0x3];                                     // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_10;               // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_9;              // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987B[0x3];                                     // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_11;               // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_10;             // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987C[0x3];                                     // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_12;               // 0x048C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_11;             // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987D[0x3];                                     // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_13;               // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_12;             // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987E[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_14;               // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_13;             // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x04AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_987F[0x3];                                     // 0x04AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_15;               // 0x04B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_14;             // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9880[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_16;               // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_3;        // 0x04C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9881[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_3;                // 0x04D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_15;             // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H_1;                             // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S_1;                             // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V_1;                             // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A_1;                             // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_17;               // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_8;        // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_5;                     // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9882[0x3];                                     // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Fraction_ReturnValue_1;                   // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_9;        // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue_1;                   // 0x051C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam_1;               // 0x052C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_Select_Default_8;                           // 0x056C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x05AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_Select_Default_9;                           // 0x05B0(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_16;                      // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x05F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0600(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9883[0x3];                                     // 0x0689(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_6;            // 0x068C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_17;                      // 0x069C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_18;                      // 0x06A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_19;                      // 0x06A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_20;                      // 0x06A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_21;                      // 0x06AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_22;                      // 0x06B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_23;                      // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_7;            // 0x06B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_24;                      // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_25;                      // 0x06CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x06D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9884[0x4];                                     // 0x06DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 K2Node_CustomEvent_FogControlVolume;               // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x06E8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9885[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 CallFunc_RemoveVolume_PrimeVolume;                 // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0781(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9886[0x6];                                     // 0x0782(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControl_C*                       K2Node_Select_Default_10;                          // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume) == 0x000010, "Wrong alignment on BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume");
static_assert(sizeof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume) == 0x000790, "Wrong size on BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, EntryPoint) == 0x000000, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable) == 0x000004, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable) == 0x000008, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_1) == 0x00000C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_1) == 0x000010, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_2) == 0x000014, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000020, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue) == 0x000024, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_2) == 0x00002C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue_1) == 0x000030, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_3) == 0x000034, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000035, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000038, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00003C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue_2) == 0x000040, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000044, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_3) == 0x000048, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue_3) == 0x00004C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_4) == 0x000050, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_4) == 0x000054, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_5) == 0x000055, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_5) == 0x000058, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsDedicatedServer_ReturnValue) == 0x00005D, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_6) == 0x000060, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_1) == 0x000064, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000065, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_6) == 0x000066, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetAllActorsOfClass_OutActors) == 0x000068, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_float_Variable_7) == 0x000078, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_float_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_7) == 0x0000C8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000D0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x0000D8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_8) == 0x0000E8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Array_Get_Item_1) == 0x0000F0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_MakeTransform_ReturnValue_1) == 0x000100, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_3) == 0x000130, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000138, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000140, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Event_DeltaSeconds) == 0x000148, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Event_OtherActor_1) == 0x000150, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Event_OtherActor) == 0x000158, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker) == 0x000160, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker_1) == 0x000170, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_9) == 0x000179, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_CustomEvent_ControlActor) == 0x000180, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_CustomEvent_ControlActor' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_4) == 0x000188, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x00018C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue) == 0x00019C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue) == 0x0001A0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x0001B0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_1) == 0x0001C0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_1) == 0x0001C4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x0001D4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default) == 0x0001D8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_1) == 0x0001DC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_2) == 0x0001E0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001E4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_3) == 0x0001E8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue) == 0x0001EC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_2) == 0x0001F0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_3) == 0x0001F4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0001F8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0001F9, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BooleanAND_ReturnValue) == 0x0001FA, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_ColorToLinearColor_ReturnValue_2) == 0x0001FC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_ColorToLinearColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_4) == 0x00020C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_2) == 0x000210, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_ColorToLinearColor_ReturnValue_3) == 0x000220, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_ColorToLinearColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_5) == 0x000230, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_3) == 0x000234, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Conv_LinearColorToColor_ReturnValue_1) == 0x000244, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Conv_LinearColorToColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_4) == 0x000248, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_5) == 0x00024C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_6) == 0x000250, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x000254, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_7) == 0x000258, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_1) == 0x00025C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_6) == 0x000260, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_7) == 0x000264, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000268, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Greater_FloatFloat_ReturnValue_3) == 0x000269, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Greater_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BooleanAND_ReturnValue_1) == 0x00026A, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_5) == 0x00026B, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_6) == 0x00026C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_4) == 0x000270, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_8) == 0x000280, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_9) == 0x000284, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_10) == 0x000288, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_11) == 0x00028C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_12) == 0x000290, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_13) == 0x000294, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_14) == 0x000298, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_5) == 0x00029C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_15) == 0x0002AC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_7) == 0x0002B0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_8) == 0x0002B1, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_9) == 0x0002B2, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_10) == 0x0002B3, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_11) == 0x0002B4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_12) == 0x0002B5, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_13) == 0x0002B6, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_14) == 0x0002B7, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0002B8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_X) == 0x0002C4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_Y) == 0x0002C8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_Z) == 0x0002CC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_EqualEqual_BoolBool_ReturnValue_2) == 0x0002D0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_EqualEqual_BoolBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_15) == 0x0002D1, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Percent_FloatFloat_ReturnValue) == 0x0002D4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue) == 0x0002D8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetLinearColorValue_ReturnValue) == 0x0002DC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_2) == 0x0002EC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectColor_ReturnValue) == 0x0002F0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x000300, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_H) == 0x000310, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_S) == 0x000314, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_V) == 0x000318, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_A) == 0x00031C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectColor_ReturnValue_1) == 0x000320, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000330, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000334, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_1) == 0x000338, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_2) == 0x00033C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_3) == 0x000340, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_4) == 0x000344, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_3) == 0x000348, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_4) == 0x00034C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_5) == 0x000350, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_6) == 0x000354, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_5) == 0x000358, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_6) == 0x00035C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_7) == 0x000360, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_8) == 0x000364, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_7) == 0x000368, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_9) == 0x00036C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x000370, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue_4) == 0x000374, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Add_FloatFloat_ReturnValue) == 0x000378, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Fraction_ReturnValue) == 0x00037C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_6) == 0x000380, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_HSVToRGB_ReturnValue) == 0x000384, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_MakeStruct_FogControlParam) == 0x000394, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_MakeStruct_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_16) == 0x0003D4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_MakeStruct_FogControlCurveParam) == 0x0003D8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_MakeStruct_FogControlCurveParam' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_17) == 0x000428, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00042C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_X_1) == 0x000438, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_Y_1) == 0x00043C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_BreakVector_Z_1) == 0x000440, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_EqualEqual_BoolBool_ReturnValue_3) == 0x000444, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_EqualEqual_BoolBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_18) == 0x000445, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetLinearColorValue_ReturnValue_2) == 0x000448, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetLinearColorValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectColor_ReturnValue_2) == 0x000458, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_19) == 0x000468, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_8) == 0x00046C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_20) == 0x000470, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_10) == 0x000474, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_9) == 0x000478, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_21) == 0x00047C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_11) == 0x000480, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_10) == 0x000484, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_22) == 0x000488, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_12) == 0x00048C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_11) == 0x000490, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_23) == 0x000494, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_13) == 0x000498, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_12) == 0x00049C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_24) == 0x0004A0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_14) == 0x0004A4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_13) == 0x0004A8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_25) == 0x0004AC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_15) == 0x0004B0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_14) == 0x0004B4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_26) == 0x0004B8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_16) == 0x0004BC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetLinearColorValue_ReturnValue_3) == 0x0004C0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetLinearColorValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_27) == 0x0004D0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectColor_ReturnValue_3) == 0x0004D4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_GetFloatValue_ReturnValue_15) == 0x0004E4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_GetFloatValue_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_H_1) == 0x0004E8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_H_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_S_1) == 0x0004EC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_S_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_V_1) == 0x0004F0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_V_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RGBToHSV_A_1) == 0x0004F4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RGBToHSV_A_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_SelectFloat_ReturnValue_17) == 0x0004F8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_SelectFloat_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_7) == 0x0004FC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_8) == 0x000500, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000504, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_FClamp_ReturnValue_5) == 0x000508, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_FClamp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00050C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000510, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Fraction_ReturnValue_1) == 0x000514, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Fraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_9) == 0x000518, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_HSVToRGB_ReturnValue_1) == 0x00051C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_HSVToRGB_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_MakeStruct_FogControlParam_1) == 0x00052C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_MakeStruct_FogControlParam_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_8) == 0x00056C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0005AC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_9) == 0x0005B0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_16) == 0x0005F0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_MakeVector_ReturnValue) == 0x0005F4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000600, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000688, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_6) == 0x00068C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_17) == 0x00069C, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_18) == 0x0006A0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_19) == 0x0006A4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_20) == 0x0006A8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_21) == 0x0006AC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_22) == 0x0006B0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_23) == 0x0006B4, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_LinearColorLerp_ReturnValue_7) == 0x0006B8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_LinearColorLerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_24) == 0x0006C8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_Lerp_ReturnValue_25) == 0x0006CC, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_Lerp_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_MakeVector_ReturnValue_1) == 0x0006D0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_CustomEvent_FogControlVolume) == 0x0006E0, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_CustomEvent_FogControlVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x0006E8, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000770, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_RemoveVolume_PrimeVolume) == 0x000778, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_RemoveVolume_PrimeVolume' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, CallFunc_IsValid_ReturnValue_28) == 0x000780, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, Temp_bool_Variable_10) == 0x000781, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume, K2Node_Select_Default_10) == 0x000788, "Member 'BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume::K2Node_Select_Default_10' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.SetFog
// 0x0008 (0x0008 - 0x0000)
struct BP_FogControlVolume_C_SetFog final
{
public:
	class ABP_FogControlVolume_C*                 FogControlVolume;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_SetFog) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_SetFog");
static_assert(sizeof(BP_FogControlVolume_C_SetFog) == 0x000008, "Wrong size on BP_FogControlVolume_C_SetFog");
static_assert(offsetof(BP_FogControlVolume_C_SetFog, FogControlVolume) == 0x000000, "Member 'BP_FogControlVolume_C_SetFog::FogControlVolume' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.Fog Update In Editor
// 0x0008 (0x0008 - 0x0000)
struct BP_FogControlVolume_C_Fog_Update_In_Editor final
{
public:
	class ABP_FogControlVolume_C*                 ControlActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_Fog_Update_In_Editor) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_Fog_Update_In_Editor");
static_assert(sizeof(BP_FogControlVolume_C_Fog_Update_In_Editor) == 0x000008, "Wrong size on BP_FogControlVolume_C_Fog_Update_In_Editor");
static_assert(offsetof(BP_FogControlVolume_C_Fog_Update_In_Editor, ControlActor) == 0x000000, "Member 'BP_FogControlVolume_C_Fog_Update_In_Editor::ControlActor' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_FogControlVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_FogControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_FogControlVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_FogControlVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_FogControlVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_FogControlVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_FogControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_FogControlVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_FogControlVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_FogControlVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FogControlVolume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FogControlVolume_C_ReceiveTick");
static_assert(sizeof(BP_FogControlVolume_C_ReceiveTick) == 0x000004, "Wrong size on BP_FogControlVolume_C_ReceiveTick");
static_assert(offsetof(BP_FogControlVolume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FogControlVolume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.UserConstructionScript
// 0x0230 (0x0230 - 0x0000)
struct BP_FogControlVolume_C_UserConstructionScript final
{
public:
	bool                                          PreviewF;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9887[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9888[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       CallFunc_GetDynamicSkyFogControlParam_FogControlParam; // 0x002C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9889[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988A[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988B[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_8;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_9;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_3;            // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_10;                      // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateEditorPreviewFlag_NowStatus;        // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateEditorPreviewFlag_StatusChange;     // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988C[0x1];                                     // 0x0107(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988D[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988E[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_988F[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0144(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9890[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_3;                             // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_11;                      // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9891[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AExponentialHeightFog*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x01E0(0x0010)(ReferenceParm)
	class AExponentialHeightFog*                  CallFunc_Array_Get_Item;                           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9892[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0200(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_1;                         // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x021D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9893[0x2];                                     // 0x021E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_12;                      // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FogControlVolume_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_UserConstructionScript");
static_assert(sizeof(BP_FogControlVolume_C_UserConstructionScript) == 0x000230, "Wrong size on BP_FogControlVolume_C_UserConstructionScript");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, PreviewF) == 0x000000, "Member 'BP_FogControlVolume_C_UserConstructionScript::PreviewF' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000001, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_float_Variable) == 0x000004, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000010, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_FClamp_ReturnValue) == 0x000014, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_FClamp_ReturnValue_1) == 0x000018, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_float_Variable_1) == 0x00001C, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue) == 0x000024, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_GetDynamicSkyFogControlParam_FogControlParam) == 0x00002C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_GetDynamicSkyFogControlParam_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x00006C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_1) == 0x00007C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_LinearColorLerp_ReturnValue) == 0x000080, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000090, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_2) == 0x0000A0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_LinearColorLerp_ReturnValue_1) == 0x0000A4, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000B4, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x0000B8, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x0000BC, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_LinearColorLerp_ReturnValue_2) == 0x0000C0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_LinearColorLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_3) == 0x0000D4, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_4) == 0x0000D8, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_5) == 0x0000DC, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_6) == 0x0000E0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_7) == 0x0000E4, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_8) == 0x0000E8, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_9) == 0x0000EC, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_LinearColorLerp_ReturnValue_3) == 0x0000F0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_LinearColorLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_10) == 0x000100, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_UpdateEditorPreviewFlag_NowStatus) == 0x000104, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_UpdateEditorPreviewFlag_NowStatus' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_UpdateEditorPreviewFlag_StatusChange) == 0x000105, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_UpdateEditorPreviewFlag_StatusChange' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_bool_Variable) == 0x000106, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, K2Node_Select_Default) == 0x000108, "Member 'BP_FogControlVolume_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_float_Variable_2) == 0x00010C, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_bool_Variable_1) == 0x000110, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, K2Node_Select_Default_1) == 0x000114, "Member 'BP_FogControlVolume_C_UserConstructionScript::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000118, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_2) == 0x000124, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000128, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x00012C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000130, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000134, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_bool_Variable_2) == 0x000140, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000144, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001CC, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_float_Variable_3) == 0x0001D0, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, K2Node_Select_Default_2) == 0x0001D4, "Member 'BP_FogControlVolume_C_UserConstructionScript::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_11) == 0x0001D8, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_GetAllActorsOfClass_OutActors) == 0x0001E0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x0001F0, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0001F8, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, Temp_bool_Variable_3) == 0x0001F9, "Member 'BP_FogControlVolume_C_UserConstructionScript::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000200, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Array_Get_Item_1) == 0x000210, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, K2Node_Select_Default_3) == 0x000218, "Member 'BP_FogControlVolume_C_UserConstructionScript::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00021C, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00021D, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue) == 0x000220, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Lerp_ReturnValue_12) == 0x000224, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Lerp_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000228, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UserConstructionScript, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000229, "Member 'BP_FogControlVolume_C_UserConstructionScript::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.SetAllPrimCollisions
// 0x0048 (0x0048 - 0x0000)
struct BP_FogControlVolume_C_SetAllPrimCollisions final
{
public:
	class FName                                   CollisionProfileName;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9894[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogControlVolume_C_SetAllPrimCollisions) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_SetAllPrimCollisions");
static_assert(sizeof(BP_FogControlVolume_C_SetAllPrimCollisions) == 0x000048, "Wrong size on BP_FogControlVolume_C_SetAllPrimCollisions");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CollisionProfileName) == 0x000000, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000020, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetAllPrimCollisions, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_FogControlVolume_C_SetAllPrimCollisions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.UpdateEditorPreviewFlag
// 0x0070 (0x0070 - 0x0000)
struct BP_FogControlVolume_C_UpdateEditorPreviewFlag final
{
public:
	bool                                          NowStatus;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          StatusChange;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PreviewStatusChecker;                              // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PreviewStatus;                                     // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9895[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_FogControlVolume_C*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9896[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9897[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_FogControlVolume_C*>         CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9898[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FogControlVolume_C_UpdateEditorPreviewFlag) == 0x000008, "Wrong alignment on BP_FogControlVolume_C_UpdateEditorPreviewFlag");
static_assert(sizeof(BP_FogControlVolume_C_UpdateEditorPreviewFlag) == 0x000070, "Wrong size on BP_FogControlVolume_C_UpdateEditorPreviewFlag");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, NowStatus) == 0x000000, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::NowStatus' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, StatusChange) == 0x000001, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::StatusChange' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, PreviewStatusChecker) == 0x000002, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::PreviewStatusChecker' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, PreviewStatus) == 0x000003, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::PreviewStatus' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_BooleanXOR_ReturnValue) == 0x000030, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_BooleanOR_ReturnValue) == 0x000044, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Less_IntInt_ReturnValue) == 0x000045, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000048, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_UpdateEditorPreviewFlag, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000069, "Member 'BP_FogControlVolume_C_UpdateEditorPreviewFlag::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_FogControlVolume.BP_FogControlVolume_C.SetDefaultFogParam
// 0x0060 (0x0060 - 0x0000)
struct BP_FogControlVolume_C_SetDefaultFogParam final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9899[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x001C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FogControlVolume_C_SetDefaultFogParam) == 0x000004, "Wrong alignment on BP_FogControlVolume_C_SetDefaultFogParam");
static_assert(sizeof(BP_FogControlVolume_C_SetDefaultFogParam) == 0x000060, "Wrong size on BP_FogControlVolume_C_SetDefaultFogParam");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_BreakVector_X) == 0x000010, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_BreakVector_Y) == 0x000014, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, K2Node_MakeStruct_FogControlParam) == 0x00001C, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::K2Node_MakeStruct_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_FogControlVolume_C_SetDefaultFogParam, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'BP_FogControlVolume_C_SetDefaultFogParam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}


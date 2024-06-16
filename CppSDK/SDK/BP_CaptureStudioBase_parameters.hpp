#pragma once

 

// Package: BP_CaptureStudioBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ExecuteUbergraph_BP_CaptureStudioBase
// 0x0590 (0x0590 - 0x0000)
struct BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B32[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B33[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B34[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_1;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B35[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Remove_ReturnValue;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B36[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_2;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B37[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_3;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B38[0x2];                                     // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x00FC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B39[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B3A[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0148(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B3B[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B3C[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B3D[0x2];                                     // 0x018E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue_1;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Remove_ReturnValue_1;                 // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_5;             // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0196(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0197(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_2;          // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B3E[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B3F[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B40[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B41[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetInputAxisKeyValue_ReturnValue;         // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCursorOverScrollBox_ReturnValue;        // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B42[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B43[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0204(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9B44[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B45[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B46[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_2;             // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B47[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_3;             // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B48[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_InAddMoveValue;                 // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B49[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B4A[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x02FC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9B4B[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationX;    // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationY;    // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePositionScaledByDPI_ReturnValue;  // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B4C[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_8;        // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationX_1;  // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationY_1;  // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePositionScaledByDPI_ReturnValue_1; // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B4D[0x2];                                     // 0x03B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B4E[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_9;        // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_10;       // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_4;             // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_5;             // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B4F[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_11;       // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B50[0x5];                                     // 0x03E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x03E8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0400(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x0490(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x04A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_GetAnalogStickRotate_bValid;              // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B51[0x3];                                     // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnalogStickRotate_RotateValue;         // 0x052C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMouseRotate_bValid;                    // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B52[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMouseRotate_RotateValue;               // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_12;       // 0x0538(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B53[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0544(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B54[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x055A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x055B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B55[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_13;       // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0569(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B56[0x6];                                     // 0x056A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0579(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x057A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x057B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x057C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B57[0x3];                                     // 0x057D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_3;      // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0589(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase");
static_assert(sizeof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase) == 0x000590, "Wrong size on BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, EntryPoint) == 0x000000, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_MakeArray_Array_1) == 0x000018, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000040, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetDisplayName_ReturnValue_1) == 0x000058, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsEmpty_ReturnValue_1) == 0x000068, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetEventExecutor_ReturnValue) == 0x000070, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Sender_3) == 0x000078, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Param_3) == 0x000080, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_AsSBInt_Param) == 0x000088, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_AsSBInt_Param' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000091, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Sender_2) == 0x000098, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Param_2) == 0x0000A0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_AsSBInt_Param_1) == 0x0000A8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_AsSBInt_Param_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Set_Length_ReturnValue) == 0x0000B4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Set_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Set_Remove_ReturnValue) == 0x0000B8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Set_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B9, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000BA, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsEmpty_ReturnValue_2) == 0x0000BB, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Sender_1) == 0x0000C0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Param_1) == 0x0000C8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_AsSBInt_Param_2) == 0x0000D0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_AsSBInt_Param_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_bSuccess_2) == 0x0000D8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Sender) == 0x0000E0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_Param) == 0x0000E8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_AsSBInt_Param_3) == 0x0000F0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_AsSBInt_Param_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x0000F9, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CreateDelegate_OutputDelegate) == 0x0000FC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x00010C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x00011C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x00012C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_ObjectObject_ReturnValue_2) == 0x00013C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_IntInt_ReturnValue) == 0x000140, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000144, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_MakeArray_Array_2) == 0x000148, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000160, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_IntInt_ReturnValue_1) == 0x000168, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetDisplayName_ReturnValue_2) == 0x000170, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000180, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_IntInt_ReturnValue_2) == 0x000184, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_IntInt_ReturnValue_3) == 0x000188, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue_3) == 0x00018C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue_4) == 0x00018D, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Set_Length_ReturnValue_1) == 0x000190, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Set_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Set_Remove_ReturnValue_1) == 0x000194, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Set_Remove_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Greater_IntInt_ReturnValue_5) == 0x000195, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Greater_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BooleanOR_ReturnValue) == 0x000196, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000197, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_BoolBool_ReturnValue_2) == 0x000198, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_BoolBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetEventExecutor_ReturnValue_1) == 0x0001A0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue) == 0x0001A8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_1) == 0x0001B8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_2) == 0x0001C1, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_2) == 0x0001C8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue) == 0x0001D0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetInputAxisKeyValue_ReturnValue) == 0x0001D4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetInputAxisKeyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001D8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_X) == 0x0001DC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_Y) == 0x0001E0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_Z) == 0x0001E4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001E8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsCursorOverScrollBox_ReturnValue) == 0x0001EC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsCursorOverScrollBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_FClamp_ReturnValue) == 0x0001F0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Not_PreBool_ReturnValue) == 0x0001F4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_MakeVector_ReturnValue) == 0x0001F8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000204, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_3) == 0x000290, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_3) == 0x000298, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_4) == 0x000299, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_4) == 0x0002A0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x0002A8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_5) == 0x0002B0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue_2) == 0x0002B8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_6) == 0x0002C0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue_3) == 0x0002C8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_InAddMoveValue) == 0x0002CC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_InAddMoveValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0002D0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_X_1) == 0x0002D4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_Y_1) == 0x0002D8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BreakVector_Z_1) == 0x0002DC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0002E0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_5) == 0x0002E4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_FClamp_ReturnValue_1) == 0x0002E8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_MakeVector_ReturnValue_1) == 0x0002EC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsEmpty_ReturnValue_3) == 0x0002F8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0002FC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_7) == 0x000388, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_LocationX) == 0x000390, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_LocationX' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_LocationY) == 0x000394, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_LocationY' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_ReturnValue) == 0x000398, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_8) == 0x0003A0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_LocationX_1) == 0x0003A8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_LocationX_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_LocationY_1) == 0x0003AC, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_LocationY_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMousePositionScaledByDPI_ReturnValue_1) == 0x0003B0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMousePositionScaledByDPI_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0003B1, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0003B4, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0003B8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_9) == 0x0003C0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_10) == 0x0003C8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue_4) == 0x0003D0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsInputKeyDown_ReturnValue_5) == 0x0003D1, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsInputKeyDown_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BooleanOR_ReturnValue_1) == 0x0003D2, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003D3, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_11) == 0x0003D8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_6) == 0x0003E0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_7) == 0x0003E1, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_8) == 0x0003E2, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_MakeArray_Array_3) == 0x0003E8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Array_Get_Item_3) == 0x0003F8, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000400, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x000488, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetDisplayName_ReturnValue_3) == 0x000490, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x0004A0, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetAnalogStickRotate_bValid) == 0x000528, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetAnalogStickRotate_bValid' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetAnalogStickRotate_RotateValue) == 0x00052C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetAnalogStickRotate_RotateValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMouseRotate_bValid) == 0x000530, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMouseRotate_bValid' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetMouseRotate_RotateValue) == 0x000534, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetMouseRotate_RotateValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_12) == 0x000538, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_9) == 0x000540, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_Event_DeltaSeconds) == 0x000544, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000548, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000550, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Not_PreBool_ReturnValue_2) == 0x000558, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_10) == 0x000559, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsLocallyControlled_ReturnValue) == 0x00055A, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BooleanAND_ReturnValue) == 0x00055B, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerController_ReturnValue_13) == 0x000560, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerController_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_11) == 0x000568, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000569, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000570, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Not_PreBool_ReturnValue_3) == 0x000578, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsValid_ReturnValue_12) == 0x000579, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00057A, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BooleanAND_ReturnValue_1) == 0x00057B, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_Event_EndPlayReason) == 0x00057C, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, K2Node_CustomEvent_DeltaTime) == 0x000580, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000584, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_NotEqual_ObjectObject_ReturnValue_3) == 0x000588, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_NotEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase, CallFunc_BooleanAND_ReturnValue_2) == 0x000589, "Member 'BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.CaptureWhenMovingUpdate
// 0x0004 (0x0004 - 0x0000)
struct BP_CaptureStudioBase_C_CaptureWhenMovingUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_CaptureWhenMovingUpdate) == 0x000004, "Wrong alignment on BP_CaptureStudioBase_C_CaptureWhenMovingUpdate");
static_assert(sizeof(BP_CaptureStudioBase_C_CaptureWhenMovingUpdate) == 0x000004, "Wrong size on BP_CaptureStudioBase_C_CaptureWhenMovingUpdate");
static_assert(offsetof(BP_CaptureStudioBase_C_CaptureWhenMovingUpdate, DeltaTime) == 0x000000, "Member 'BP_CaptureStudioBase_C_CaptureWhenMovingUpdate::DeltaTime' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_CaptureStudioBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_CaptureStudioBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_CaptureStudioBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CaptureStudioBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CaptureStudioBase_C_ReceiveTick");
static_assert(sizeof(BP_CaptureStudioBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_CaptureStudioBase_C_ReceiveTick");
static_assert(offsetof(BP_CaptureStudioBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CaptureStudioBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UpdateCaptureCameraMove
// 0x0004 (0x0004 - 0x0000)
struct BP_CaptureStudioBase_C_UpdateCaptureCameraMove final
{
public:
	float                                         InAddMoveValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_UpdateCaptureCameraMove) == 0x000004, "Wrong alignment on BP_CaptureStudioBase_C_UpdateCaptureCameraMove");
static_assert(sizeof(BP_CaptureStudioBase_C_UpdateCaptureCameraMove) == 0x000004, "Wrong size on BP_CaptureStudioBase_C_UpdateCaptureCameraMove");
static_assert(offsetof(BP_CaptureStudioBase_C_UpdateCaptureCameraMove, InAddMoveValue) == 0x000000, "Member 'BP_CaptureStudioBase_C_UpdateCaptureCameraMove::InAddMoveValue' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDisableCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_CaptureStudioBase_C_OnDisableCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_OnDisableCapture) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_OnDisableCapture");
static_assert(sizeof(BP_CaptureStudioBase_C_OnDisableCapture) == 0x000010, "Wrong size on BP_CaptureStudioBase_C_OnDisableCapture");
static_assert(offsetof(BP_CaptureStudioBase_C_OnDisableCapture, Sender) == 0x000000, "Member 'BP_CaptureStudioBase_C_OnDisableCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_OnDisableCapture, Param) == 0x000008, "Member 'BP_CaptureStudioBase_C_OnDisableCapture::Param' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnEnableCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_CaptureStudioBase_C_OnEnableCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_OnEnableCapture) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_OnEnableCapture");
static_assert(sizeof(BP_CaptureStudioBase_C_OnEnableCapture) == 0x000010, "Wrong size on BP_CaptureStudioBase_C_OnEnableCapture");
static_assert(offsetof(BP_CaptureStudioBase_C_OnEnableCapture, Sender) == 0x000000, "Member 'BP_CaptureStudioBase_C_OnEnableCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_OnEnableCapture, Param) == 0x000008, "Member 'BP_CaptureStudioBase_C_OnEnableCapture::Param' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDestroyCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_CaptureStudioBase_C_OnDestroyCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_OnDestroyCapture) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_OnDestroyCapture");
static_assert(sizeof(BP_CaptureStudioBase_C_OnDestroyCapture) == 0x000010, "Wrong size on BP_CaptureStudioBase_C_OnDestroyCapture");
static_assert(offsetof(BP_CaptureStudioBase_C_OnDestroyCapture, Sender) == 0x000000, "Member 'BP_CaptureStudioBase_C_OnDestroyCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_OnDestroyCapture, Param) == 0x000008, "Member 'BP_CaptureStudioBase_C_OnDestroyCapture::Param' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnCreateCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_CaptureStudioBase_C_OnCreateCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_OnCreateCapture) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_OnCreateCapture");
static_assert(sizeof(BP_CaptureStudioBase_C_OnCreateCapture) == 0x000010, "Wrong size on BP_CaptureStudioBase_C_OnCreateCapture");
static_assert(offsetof(BP_CaptureStudioBase_C_OnCreateCapture, Sender) == 0x000000, "Member 'BP_CaptureStudioBase_C_OnCreateCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_OnCreateCapture, Param) == 0x000008, "Member 'BP_CaptureStudioBase_C_OnCreateCapture::Param' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UserConstructionScript
// 0x0060 (0x0060 - 0x0000)
struct BP_CaptureStudioBase_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue_1;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_CaptureStudioBase_C_UserConstructionScript");
static_assert(sizeof(BP_CaptureStudioBase_C_UserConstructionScript) == 0x000060, "Wrong size on BP_CaptureStudioBase_C_UserConstructionScript");
static_assert(offsetof(BP_CaptureStudioBase_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue) == 0x000000, "Member 'BP_CaptureStudioBase_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue_1) == 0x000030, "Member 'BP_CaptureStudioBase_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue_1' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshRotateActive
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_SetMeshRotateActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetMeshRotateActive) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetMeshRotateActive");
static_assert(sizeof(BP_CaptureStudioBase_C_SetMeshRotateActive) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_SetMeshRotateActive");
static_assert(offsetof(BP_CaptureStudioBase_C_SetMeshRotateActive, IsActive) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetMeshRotateActive::IsActive' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraMoveActive
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureCameraMoveActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureCameraMoveActive) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureCameraMoveActive");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureCameraMoveActive) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_SetCaptureCameraMoveActive");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureCameraMoveActive, IsActive) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureCameraMoveActive::IsActive' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraZoomActive
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureCameraZoomActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureCameraZoomActive) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureCameraZoomActive");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureCameraZoomActive) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_SetCaptureCameraZoomActive");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureCameraZoomActive, IsActive) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureCameraZoomActive::IsActive' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateMesh
// 0x0110 (0x0110 - 0x0000)
struct BP_CaptureStudioBase_C_RotateMesh final
{
public:
	float                                         InAddRotateValue;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpAddRotateVal;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B58[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0080(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CaptureStudioBase_C_RotateMesh) == 0x000010, "Wrong alignment on BP_CaptureStudioBase_C_RotateMesh");
static_assert(sizeof(BP_CaptureStudioBase_C_RotateMesh) == 0x000110, "Wrong size on BP_CaptureStudioBase_C_RotateMesh");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, InAddRotateValue) == 0x000000, "Member 'BP_CaptureStudioBase_C_RotateMesh::InAddRotateValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, TmpAddRotateVal) == 0x000004, "Member 'BP_CaptureStudioBase_C_RotateMesh::TmpAddRotateVal' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_GetRelativeTransform_ReturnValue) == 0x000010, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakTransform_Location) == 0x000040, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakTransform_Rotation) == 0x00004C, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakRotator_Roll) == 0x000064, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakRotator_Pitch) == 0x000068, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_BreakRotator_Yaw) == 0x00006C, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_Add_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_MakeRotator_ReturnValue) == 0x000074, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateMesh, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000080, "Member 'BP_CaptureStudioBase_C_RotateMesh::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshAndCameraResetActive
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_SetMeshAndCameraResetActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetMeshAndCameraResetActive) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetMeshAndCameraResetActive");
static_assert(sizeof(BP_CaptureStudioBase_C_SetMeshAndCameraResetActive) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_SetMeshAndCameraResetActive");
static_assert(offsetof(BP_CaptureStudioBase_C_SetMeshAndCameraResetActive, IsActive) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetMeshAndCameraResetActive::IsActive' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable
// 0x0002 (0x0002 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCaptureEnable_Internal_bWantVisible;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureEnable) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureEnable");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureEnable) == 0x000002, "Wrong size on BP_CaptureStudioBase_C_SetCaptureEnable");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable, Enable) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable::Enable' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable, CallFunc_SetCaptureEnable_Internal_bWantVisible) == 0x000001, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable::CallFunc_SetCaptureEnable_Internal_bWantVisible' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetStudioVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_CaptureStudioBase_C_SetStudioVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetStudioVisibility) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetStudioVisibility");
static_assert(sizeof(BP_CaptureStudioBase_C_SetStudioVisibility) == 0x000001, "Wrong size on BP_CaptureStudioBase_C_SetStudioVisibility");
static_assert(offsetof(BP_CaptureStudioBase_C_SetStudioVisibility, InIsVisible) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetStudioVisibility::InIsVisible' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureWhenMovingMode
// 0x0008 (0x0008 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureWhenMovingMode final
{
public:
	bool                                          Param_bCaptureWhenMovingMode;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B59[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_CaptureGraceTime;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureWhenMovingMode) == 0x000004, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureWhenMovingMode");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureWhenMovingMode) == 0x000008, "Wrong size on BP_CaptureStudioBase_C_SetCaptureWhenMovingMode");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureWhenMovingMode, Param_bCaptureWhenMovingMode) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureWhenMovingMode::Param_bCaptureWhenMovingMode' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureWhenMovingMode, Param_CaptureGraceTime) == 0x000004, "Member 'BP_CaptureStudioBase_C_SetCaptureWhenMovingMode::Param_CaptureGraceTime' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateByExternalDirectionalLightRotation
// 0x004C (0x004C - 0x0000)
struct BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               WorkRotation;                                      // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation) == 0x000004, "Wrong alignment on BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation");
static_assert(sizeof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation) == 0x00004C, "Wrong size on BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, Rotation) == 0x000000, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::Rotation' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, WorkRotation) == 0x00000C, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::WorkRotation' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Roll) == 0x000018, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Pitch) == 0x00001C, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Yaw) == 0x000020, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Roll_1) == 0x000024, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Pitch_1) == 0x000028, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_BreakRotator_Yaw_1) == 0x00002C, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000034, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000038, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_MakeRotator_ReturnValue) == 0x00003C, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000048, "Member 'BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable_Internal
// 0x0020 (0x0020 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureEnable_Internal final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWantVisible;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5A[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal) == 0x000008, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureEnable_Internal");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal) == 0x000020, "Wrong size on BP_CaptureStudioBase_C_SetCaptureEnable_Internal");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, Enable) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::Enable' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, bWantVisible) == 0x000001, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::bWantVisible' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000002, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_GetEventExecutor_ReturnValue) == 0x000008, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_1) == 0x000012, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue_1) == 0x000013, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_2) == 0x000015, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_3) == 0x000016, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue_2) == 0x000017, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanOR_ReturnValue_1) == 0x000018, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_4) == 0x000019, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnable_Internal, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x00001A, "Member 'BP_CaptureStudioBase_C_SetCaptureEnable_Internal::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetLightEnable
// 0x0007 (0x0007 - 0x0000)
struct BP_CaptureStudioBase_C_SetLightEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_2;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetLightEnable) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetLightEnable");
static_assert(sizeof(BP_CaptureStudioBase_C_SetLightEnable) == 0x000007, "Wrong size on BP_CaptureStudioBase_C_SetLightEnable");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, bEnable) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetLightEnable::bEnable' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_BooleanAND_ReturnValue_1) == 0x000004, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000005, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue_2) == 0x000006, "Member 'BP_CaptureStudioBase_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue_2' has a wrong offset!");

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnableByMoveing
// 0x0002 (0x0002 - 0x0000)
struct BP_CaptureStudioBase_C_SetCaptureEnableByMoveing final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCaptureEnable_Internal_bWantVisible;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CaptureStudioBase_C_SetCaptureEnableByMoveing) == 0x000001, "Wrong alignment on BP_CaptureStudioBase_C_SetCaptureEnableByMoveing");
static_assert(sizeof(BP_CaptureStudioBase_C_SetCaptureEnableByMoveing) == 0x000002, "Wrong size on BP_CaptureStudioBase_C_SetCaptureEnableByMoveing");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnableByMoveing, Enable) == 0x000000, "Member 'BP_CaptureStudioBase_C_SetCaptureEnableByMoveing::Enable' has a wrong offset!");
static_assert(offsetof(BP_CaptureStudioBase_C_SetCaptureEnableByMoveing, CallFunc_SetCaptureEnable_Internal_bWantVisible) == 0x000001, "Member 'BP_CaptureStudioBase_C_SetCaptureEnableByMoveing::CallFunc_SetCaptureEnable_Internal_bWantVisible' has a wrong offset!");

}


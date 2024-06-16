#pragma once

 

// Package: BP_DynamicSky

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FogControlParam_structs.hpp"
#include "FogControlCurveParam_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DynamicSky.BP_DynamicSky_C.ExecuteUbergraph_BP_DynamicSky
// 0x08D0 (0x08D0 - 0x0000)
struct BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRenderingShadowQuality_ReturnValue;    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99AB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99AC[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99AD[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99AE[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue_1;                // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99AF[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99B0[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B1[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_2;           // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0224(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0230(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x023C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99B2[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_1;    // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x0280(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B3[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CameraLocationChecker_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0298(0x0010)(ReferenceParm)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1; // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class ABP_CameraLocationChecker_C*            CallFunc_Array_Get_Item;                           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSunLastPixelsPercentage_ReturnValue;   // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99B4[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02D0(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B5[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B6[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B7[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2; // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	int32                                         CallFunc_FCeil_ReturnValue_2;                      // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3; // 0x0340(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_4; // 0x0350(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIntervalExec_IsExec;                    // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99B8[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_8;        // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99B9[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99BA[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x038C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTimeProgression_ReturnValue;           // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99BB[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R;                             // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GameTimeIsOverridden_ReturnValue;         // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99BC[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetGameTime_ReturnValue;                  // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetServerTime_ReturnValue;                // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSkyTime_ReturnValue;                   // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99BD[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State_1;               // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTimeProgression_ReturnValue_1;         // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x03E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99BE[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetGameTime_ReturnValue_1;                // 0x03E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinutesPerDay_ReturnValue;             // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99BF[0x4];                                     // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetServerTime_ReturnValue_1;              // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetMinutesPerDay_ReturnValue;             // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSkyTime_ReturnValue_1;                 // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C0[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMinutesPerDaytime_ReturnValue;         // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C1[0x3];                                     // 0x040D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetMinutesPerDaytime_ReturnValue;         // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0415(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue_1;               // 0x0416(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C2[0x1];                                     // 0x0417(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringPreviewTime_ReturnValue;         // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringPreviewTime_ReturnValue_1;       // 0x0428(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C3[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C4[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringGameTime_ReturnValue;            // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0480(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_SkyLightColorTgt;               // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_SkyLightIntensityTgt;           // 0x0494(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_SkyLightToonIntensityScale;     // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_SkyLightToonSaturationScale;    // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_LerpTime;                       // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x04AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99C5[0x4];                                     // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x04CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x04D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C6[0x3];                                     // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_9;        // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_3;                      // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_5; // 0x04F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_6; // 0x0500(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FLinearColor                           CallFunc_GetLightColor_ReturnValue;                // 0x0510(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_10;       // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSunLocation_ReturnValue;               // 0x0524(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C7[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x0534(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0545(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C8[0x2];                                     // 0x0546(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetPreviewTime_ReturnValue;               // 0x0548(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0554(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetMinutesPerDaytime_ReturnValue_1;       // 0x056C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x0570(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x0574(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetMinutesPerDay_ReturnValue_1;           // 0x0578(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x057C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0580(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSkyTime_ReturnValue_2;                 // 0x058C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99C9[0x3];                                     // 0x058D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0590(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x05B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99CA[0x4];                                     // 0x05B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x05B8(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x05C8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0651(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0652(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99CB[0x1];                                     // 0x0653(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0654(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x065C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0668(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0674(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0680(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99CC[0x4];                                     // 0x068C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x06A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x06B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x06B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x06BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x06C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x06D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x06DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkyLightControlVolume_C*            K2Node_CustomEvent_Instigator_1;                   // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkyLightControlVolume_C*            K2Node_CustomEvent_Instigator;                     // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x06F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99CD[0x3];                                     // 0x06F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99CE[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkyLightControlVolume_C*            CallFunc_Array_Get_Item_1;                         // 0x0708(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSunScreenPosition_ReturnValue;         // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0724(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x0728(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x072C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_4;        // 0x0730(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x0734(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0735(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99CF[0x2];                                     // 0x0736(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_5;        // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D0[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0740(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit_1;       // 0x0750(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue_1;  // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D1[0x7];                                     // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_7; // 0x07E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x07F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x07F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D2[0x2];                                     // 0x07F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x07F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x07F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x07FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0808(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0814(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0820(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99D3[0x4];                                     // 0x082C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0830(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0838(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0840(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0848(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0850(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0854(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0858(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x085C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0868(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0874(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0878(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x087C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0880(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_6;        // 0x0884(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_Array_Get_Item_2;                         // 0x0888(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0890(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x0894(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0895(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0896(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D4[0x1];                                     // 0x0897(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0898(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D5[0x4];                                     // 0x08A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x08A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x08B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x08B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x08B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x08B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D6[0x2];                                     // 0x08B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLightColor_ReturnValue_1;              // 0x08B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky) == 0x000010, "Wrong alignment on BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky");
static_assert(sizeof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky) == 0x0008D0, "Wrong size on BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, EntryPoint) == 0x000000, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000004, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetRenderingShadowQuality_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetRenderingShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FFloor_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetPlayerPawn_ReturnValue) == 0x000020, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000038, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_3) == 0x000049, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_4) == 0x00004A, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_5) == 0x00004B, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_6) == 0x00004C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_7) == 0x00004D, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000050, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000058, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000060, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_RandomFloat_ReturnValue) == 0x000068, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetTransform_ReturnValue) == 0x000070, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_MakeArray_Array) == 0x0000A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakTransform_Location) == 0x0000B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakTransform_Rotation) == 0x0000BC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakTransform_Scale) == 0x0000C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Roll) == 0x0000D4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Pitch) == 0x0000D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Yaw) == 0x0000DC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeRotator_ReturnValue) == 0x0000E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetRightVector_ReturnValue) == 0x0000EC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetForwardVector_ReturnValue) == 0x0000F8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000104, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_RandomFloat_ReturnValue_1) == 0x000108, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_RandomFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00010C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000110, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000114, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000118, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x00011C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000120, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000124, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000130, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_VectorVector_ReturnValue) == 0x00013C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000148, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_8) == 0x000154, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000158, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetForwardVector_ReturnValue_1) == 0x000164, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000170, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_9) == 0x00017C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000180, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00018C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_VSize_ReturnValue) == 0x000198, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00019C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x0001A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeVector_ReturnValue) == 0x0001A4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0001B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001B4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0001B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeVector_ReturnValue_1) == 0x0001C4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Roll_1) == 0x0001D0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Pitch_1) == 0x0001D4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakRotator_Yaw_1) == 0x0001D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x0001E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeRotator_ReturnValue_1) == 0x0001E8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetForwardVector_ReturnValue_2) == 0x0001F4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetForwardVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000200, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x00020C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000218, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000224, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000230, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x00023C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000248, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetSoundManager_IsValid) == 0x000254, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetSoundManager_ReturnValue) == 0x000258, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetScalarParameterValue_ReturnValue_1) == 0x000260, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000264, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FClamp_ReturnValue) == 0x000268, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x00026C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FCeil_ReturnValue) == 0x000270, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_6) == 0x000274, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000278, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FCeil_ReturnValue_1) == 0x00027C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput) == 0x000280, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000290, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetAllActorsOfClass_OutActors) == 0x000298, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1) == 0x0002A8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_Get_Item) == 0x0002B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetSunLastPixelsPercentage_ReturnValue) == 0x0002C0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetSunLastPixelsPercentage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_10) == 0x0002C4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0002C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0002CC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeTransform_ReturnValue) == 0x0002D0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FClamp_ReturnValue_1) == 0x000300, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000308, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetFloatValue_ReturnValue) == 0x000310, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FinishSpawningActor_ReturnValue) == 0x000318, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_7) == 0x000320, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2) == 0x000328, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FCeil_ReturnValue_2) == 0x000338, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FCeil_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x00033C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3) == 0x000340, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_4) == 0x000350, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_Event_DeltaSeconds) == 0x000360, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsIntervalExec_IsExec) == 0x000364, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsIntervalExec_IsExec' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x000368, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Fraction_ReturnValue) == 0x00036C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_8) == 0x000370, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetGameState_ReturnValue) == 0x000378, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_DynamicCast_AsSBGame_State) == 0x000380, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_DynamicCast_bSuccess) == 0x000388, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetLinearColorValue_ReturnValue) == 0x00038C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetTimeProgression_ReturnValue) == 0x00039C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetTimeProgression_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakColor_R) == 0x0003A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakColor_G) == 0x0003A4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakColor_B) == 0x0003A8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakColor_A) == 0x0003AC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GameTimeIsOverridden_ReturnValue) == 0x0003B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GameTimeIsOverridden_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetGameTime_ReturnValue) == 0x0003B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetGameTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetServerTime_ReturnValue) == 0x0003C0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetServerTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetGameState_ReturnValue_1) == 0x0003C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetSkyTime_ReturnValue) == 0x0003D0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetSkyTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_DynamicCast_AsSBGame_State_1) == 0x0003D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_DynamicCast_AsSBGame_State_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_DynamicCast_bSuccess_1) == 0x0003E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetTimeProgression_ReturnValue_1) == 0x0003E1, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetTimeProgression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_11) == 0x0003E2, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_12) == 0x0003E3, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetGameTime_ReturnValue_1) == 0x0003E8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetGameTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetMinutesPerDay_ReturnValue) == 0x0003F0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetMinutesPerDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetServerTime_ReturnValue_1) == 0x0003F8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetServerTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetMinutesPerDay_ReturnValue) == 0x000400, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetMinutesPerDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetSkyTime_ReturnValue_1) == 0x000404, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetSkyTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetMinutesPerDaytime_ReturnValue) == 0x000408, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetMinutesPerDaytime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsServer_ReturnValue) == 0x00040C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetMinutesPerDaytime_ReturnValue) == 0x000410, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetMinutesPerDaytime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsServer_ReturnValue_1) == 0x000414, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsStandalone_ReturnValue) == 0x000415, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsStandalone_ReturnValue_1) == 0x000416, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsStandalone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetStringPreviewTime_ReturnValue) == 0x000418, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetStringPreviewTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetStringPreviewTime_ReturnValue_1) == 0x000428, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetStringPreviewTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetDebugFunction_IsValid) == 0x000438, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetDebugFunction_ReturnValue) == 0x000440, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetBool_ReturnValue) == 0x000448, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetStringGameTime_ReturnValue) == 0x000450, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetStringGameTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Concat_StrStr_ReturnValue) == 0x000460, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000470, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000480, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_SkyLightColorTgt) == 0x000490, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_SkyLightColorTgt' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_SkyLightIntensityTgt) == 0x000494, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_SkyLightIntensityTgt' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_SkyLightToonIntensityScale) == 0x000498, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_SkyLightToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_SkyLightToonSaturationScale) == 0x00049C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_SkyLightToonSaturationScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_LerpTime) == 0x0004A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_LerpTime' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FMax_ReturnValue) == 0x0004A4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x0004A8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeVector2D_ReturnValue) == 0x0004AC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x0004B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeVector2D_ReturnValue_1) == 0x0004C0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_X) == 0x0004C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_Y) == 0x0004CC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_X_1) == 0x0004D0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_Y_1) == 0x0004D4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Lerp_ReturnValue) == 0x0004D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Lerp_ReturnValue_1) == 0x0004DC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_13) == 0x0004E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_9) == 0x0004E4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FCeil_ReturnValue_3) == 0x0004E8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FCeil_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0004EC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_5) == 0x0004F0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_6) == 0x000500, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetLightColor_ReturnValue) == 0x000510, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetLightColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_FloatFloat_ReturnValue_10) == 0x000520, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_FloatFloat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetSunLocation_ReturnValue) == 0x000524, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetSunLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x000530, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000534, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_14) == 0x000544, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_15) == 0x000545, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetPreviewTime_ReturnValue) == 0x000548, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetPreviewTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Year) == 0x000550, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Month) == 0x000554, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Day) == 0x000558, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Hour) == 0x00055C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Minute) == 0x000560, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Second) == 0x000564, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakDateTime_Millisecond) == 0x000568, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetMinutesPerDaytime_ReturnValue_1) == 0x00056C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetMinutesPerDaytime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_IntToFloat_ReturnValue_5) == 0x000570, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_IntToFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x000574, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetMinutesPerDay_ReturnValue_1) == 0x000578, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetMinutesPerDay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00057C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_MakeDateTime_ReturnValue) == 0x000580, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Divide_FloatFloat_ReturnValue_4) == 0x000588, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Divide_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SetSkyTime_ReturnValue_2) == 0x00058C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SetSkyTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_FloatToString_ReturnValue) == 0x000590, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0005A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0005B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, Temp_object_Variable) == 0x0005B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0005C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000650, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_bBlockingHit) == 0x000651, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_bInitialOverlap) == 0x000652, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Time) == 0x000654, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Distance) == 0x000658, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Location) == 0x00065C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ImpactPoint) == 0x000668, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Normal) == 0x000674, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ImpactNormal) == 0x000680, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_PhysMat) == 0x000690, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitActor) == 0x000698, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitComponent) == 0x0006A0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitBoneName) == 0x0006A8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitItem) == 0x0006B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ElementIndex) == 0x0006B4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_FaceIndex) == 0x0006B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_TraceStart) == 0x0006BC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_TraceEnd) == 0x0006C8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_X) == 0x0006D4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_Y) == 0x0006D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_Z) == 0x0006DC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_Instigator_1) == 0x0006E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_Instigator_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, K2Node_CustomEvent_Instigator) == 0x0006E8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::K2Node_CustomEvent_Instigator' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_AddUnique_ReturnValue) == 0x0006F0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_Length_ReturnValue) == 0x0006F4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_RemoveItem_ReturnValue) == 0x0006F8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_IntInt_ReturnValue) == 0x0006FC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Greater_IntInt_ReturnValue) == 0x000700, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_Get_Item_1) == 0x000708, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetSunScreenPosition_ReturnValue) == 0x000710, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetSunScreenPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetViewportSize_ReturnValue) == 0x000718, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_X_2) == 0x000720, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_Y_2) == 0x000724, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_X_3) == 0x000728, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector2D_Y_3) == 0x00072C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_4) == 0x000730, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_16) == 0x000734, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000735, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_5) == 0x000738, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_InRange_FloatFloat_ReturnValue_1) == 0x00073C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_InRange_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, Temp_object_Variable_1) == 0x000740, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_LineTraceSingleForObjects_OutHit_1) == 0x000750, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_LineTraceSingleForObjects_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_LineTraceSingleForObjects_ReturnValue_1) == 0x0007D8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_LineTraceSingleForObjects_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_7) == 0x0007E0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0007F0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0007F1, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Time_1) == 0x0007F4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Distance_1) == 0x0007F8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Location_1) == 0x0007FC, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000808, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_Normal_1) == 0x000814, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000820, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_PhysMat_1) == 0x000830, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitActor_1) == 0x000838, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitComponent_1) == 0x000840, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitBoneName_1) == 0x000848, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_HitItem_1) == 0x000850, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_ElementIndex_1) == 0x000854, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_FaceIndex_1) == 0x000858, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_TraceStart_1) == 0x00085C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakHitResult_TraceEnd_1) == 0x000868, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_X_1) == 0x000874, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_Y_1) == 0x000878, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BreakVector_Z_1) == 0x00087C, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000880, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Subtract_FloatFloat_ReturnValue_6) == 0x000884, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Subtract_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_Get_Item_2) == 0x000888, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Abs_ReturnValue) == 0x000890, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_17) == 0x000894, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000895, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000896, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_FindLookAtRotation_ReturnValue) == 0x000898, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0008A8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_18) == 0x0008B0, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsDemoPlaying_ReturnValue) == 0x0008B1, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x0008B2, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_BooleanAND_ReturnValue) == 0x0008B3, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_19) == 0x0008B4, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_IsValid_ReturnValue_20) == 0x0008B5, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky, CallFunc_GetLightColor_ReturnValue_1) == 0x0008B8, "Member 'BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky::CallFunc_GetLightColor_ReturnValue_1' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.AddSkyLightControlVolume
// 0x0008 (0x0008 - 0x0000)
struct BP_DynamicSky_C_AddSkyLightControlVolume final
{
public:
	class ABP_SkyLightControlVolume_C*            Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_AddSkyLightControlVolume) == 0x000008, "Wrong alignment on BP_DynamicSky_C_AddSkyLightControlVolume");
static_assert(sizeof(BP_DynamicSky_C_AddSkyLightControlVolume) == 0x000008, "Wrong size on BP_DynamicSky_C_AddSkyLightControlVolume");
static_assert(offsetof(BP_DynamicSky_C_AddSkyLightControlVolume, Param_Instigator) == 0x000000, "Member 'BP_DynamicSky_C_AddSkyLightControlVolume::Param_Instigator' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.RemoveSkyLightControlVolume
// 0x0008 (0x0008 - 0x0000)
struct BP_DynamicSky_C_RemoveSkyLightControlVolume final
{
public:
	class ABP_SkyLightControlVolume_C*            Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_RemoveSkyLightControlVolume) == 0x000008, "Wrong alignment on BP_DynamicSky_C_RemoveSkyLightControlVolume");
static_assert(sizeof(BP_DynamicSky_C_RemoveSkyLightControlVolume) == 0x000008, "Wrong size on BP_DynamicSky_C_RemoveSkyLightControlVolume");
static_assert(offsetof(BP_DynamicSky_C_RemoveSkyLightControlVolume, Param_Instigator) == 0x000000, "Member 'BP_DynamicSky_C_RemoveSkyLightControlVolume::Param_Instigator' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.StartSkyLightControl
// 0x0014 (0x0014 - 0x0000)
struct BP_DynamicSky_C_StartSkyLightControl final
{
public:
	float                                         SkyLightColorTgt;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightIntensityTgt;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_SkyLightToonIntensityScale;                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_SkyLightToonSaturationScale;                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LerpTime;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_StartSkyLightControl) == 0x000004, "Wrong alignment on BP_DynamicSky_C_StartSkyLightControl");
static_assert(sizeof(BP_DynamicSky_C_StartSkyLightControl) == 0x000014, "Wrong size on BP_DynamicSky_C_StartSkyLightControl");
static_assert(offsetof(BP_DynamicSky_C_StartSkyLightControl, SkyLightColorTgt) == 0x000000, "Member 'BP_DynamicSky_C_StartSkyLightControl::SkyLightColorTgt' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_StartSkyLightControl, SkyLightIntensityTgt) == 0x000004, "Member 'BP_DynamicSky_C_StartSkyLightControl::SkyLightIntensityTgt' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_StartSkyLightControl, Param_SkyLightToonIntensityScale) == 0x000008, "Member 'BP_DynamicSky_C_StartSkyLightControl::Param_SkyLightToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_StartSkyLightControl, Param_SkyLightToonSaturationScale) == 0x00000C, "Member 'BP_DynamicSky_C_StartSkyLightControl::Param_SkyLightToonSaturationScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_StartSkyLightControl, LerpTime) == 0x000010, "Member 'BP_DynamicSky_C_StartSkyLightControl::LerpTime' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DynamicSky_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DynamicSky_C_ReceiveTick");
static_assert(sizeof(BP_DynamicSky_C_ReceiveTick) == 0x000004, "Wrong size on BP_DynamicSky_C_ReceiveTick");
static_assert(offsetof(BP_DynamicSky_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DynamicSky_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateMPC
// 0x00AC (0x00AC - 0x0000)
struct BP_DynamicSky_C_UpdateMPC final
{
public:
	float                                         In_time;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueRange_MinValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueRange_MaxValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D7[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLightIntensity_LightIntensity;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLightIntensity_LightIntensity_1;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLightColor_LightColor;                 // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLightColor_LightColor_1;               // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLightVector_LightVector;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLightVector_LightVector_1;             // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Should_Update_Height_Gradation_Color_bUpdate; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D8[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_UpdateMPC) == 0x000004, "Wrong alignment on BP_DynamicSky_C_UpdateMPC");
static_assert(sizeof(BP_DynamicSky_C_UpdateMPC) == 0x0000AC, "Wrong size on BP_DynamicSky_C_UpdateMPC");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, In_time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateMPC::In_time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetValueRange_MinValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetValueRange_MinValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetValueRange_MaxValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetValueRange_MaxValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000020, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetFloatValue_ReturnValue) == 0x000034, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightIntensity_LightIntensity) == 0x000038, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightIntensity_LightIntensity' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLinearColorValue_ReturnValue) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightIntensity_LightIntensity_1) == 0x00004C, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightIntensity_LightIntensity_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightColor_LightColor) == 0x000050, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightColor_LightColor' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightColor_LightColor_1) == 0x000060, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightColor_LightColor_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightVector_LightVector) == 0x000070, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightVector_LightVector' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLightVector_LightVector_1) == 0x000080, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLightVector_LightVector_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_Should_Update_Height_Gradation_Color_bUpdate) == 0x000090, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_Should_Update_Height_Gradation_Color_bUpdate' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetFloatValue_ReturnValue_1) == 0x000094, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000098, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateMPC, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x00009C, "Member 'BP_DynamicSky_C_UpdateMPC::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.GetLightVector
// 0x0044 (0x0044 - 0x0000)
struct BP_DynamicSky_C_GetLightVector final
{
public:
	int32                                         LightIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightVector;                                       // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Result;                                            // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99D9[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_GetLightVector) == 0x000004, "Wrong alignment on BP_DynamicSky_C_GetLightVector");
static_assert(sizeof(BP_DynamicSky_C_GetLightVector) == 0x000044, "Wrong size on BP_DynamicSky_C_GetLightVector");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, LightIndex) == 0x000000, "Member 'BP_DynamicSky_C_GetLightVector::LightIndex' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, LightVector) == 0x000004, "Member 'BP_DynamicSky_C_GetLightVector::LightVector' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, Result) == 0x000014, "Member 'BP_DynamicSky_C_GetLightVector::Result' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, CallFunc_GetForwardVector_ReturnValue) == 0x000024, "Member 'BP_DynamicSky_C_GetLightVector::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_GetLightVector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightVector, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000034, "Member 'BP_DynamicSky_C_GetLightVector::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.GetLightColor
// 0x0038 (0x0038 - 0x0000)
struct BP_DynamicSky_C_GetLightColor final
{
public:
	int32                                         LightIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Param_LightColor;                                  // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Result;                                            // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99DA[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_GetLightColor) == 0x000004, "Wrong alignment on BP_DynamicSky_C_GetLightColor");
static_assert(sizeof(BP_DynamicSky_C_GetLightColor) == 0x000038, "Wrong size on BP_DynamicSky_C_GetLightColor");
static_assert(offsetof(BP_DynamicSky_C_GetLightColor, LightIndex) == 0x000000, "Member 'BP_DynamicSky_C_GetLightColor::LightIndex' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightColor, Param_LightColor) == 0x000004, "Member 'BP_DynamicSky_C_GetLightColor::Param_LightColor' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightColor, Result) == 0x000014, "Member 'BP_DynamicSky_C_GetLightColor::Result' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightColor, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'BP_DynamicSky_C_GetLightColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightColor, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000028, "Member 'BP_DynamicSky_C_GetLightColor::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.GetLightIntensity
// 0x0010 (0x0010 - 0x0000)
struct BP_DynamicSky_C_GetLightIntensity final
{
public:
	int32                                         LightIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_LightIntensity;                              // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_GetLightIntensity) == 0x000004, "Wrong alignment on BP_DynamicSky_C_GetLightIntensity");
static_assert(sizeof(BP_DynamicSky_C_GetLightIntensity) == 0x000010, "Wrong size on BP_DynamicSky_C_GetLightIntensity");
static_assert(offsetof(BP_DynamicSky_C_GetLightIntensity, LightIndex) == 0x000000, "Member 'BP_DynamicSky_C_GetLightIntensity::LightIndex' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightIntensity, Param_LightIntensity) == 0x000004, "Member 'BP_DynamicSky_C_GetLightIntensity::Param_LightIntensity' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightIntensity, Result) == 0x000008, "Member 'BP_DynamicSky_C_GetLightIntensity::Result' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightIntensity, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_GetLightIntensity::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.GetLightNumInv
// 0x0058 (0x0058 - 0x0000)
struct BP_DynamicSky_C_GetLightNumInv final
{
public:
	float                                         LightNumInv;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MainLightCount;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ADirectionalLight*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99DB[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99DC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component;  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_GetLightNumInv) == 0x000008, "Wrong alignment on BP_DynamicSky_C_GetLightNumInv");
static_assert(sizeof(BP_DynamicSky_C_GetLightNumInv) == 0x000058, "Wrong size on BP_DynamicSky_C_GetLightNumInv");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, LightNumInv) == 0x000000, "Member 'BP_DynamicSky_C_GetLightNumInv::LightNumInv' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, MainLightCount) == 0x000004, "Member 'BP_DynamicSky_C_GetLightNumInv::MainLightCount' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_DynamicSky_C_GetLightNumInv::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_DynamicSky_C_GetLightNumInv::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, K2Node_DynamicCast_AsDirectional_Light_Component) == 0x000048, "Member 'BP_DynamicSky_C_GetLightNumInv::K2Node_DynamicCast_AsDirectional_Light_Component' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_DynamicSky_C_GetLightNumInv::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetLightNumInv, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'BP_DynamicSky_C_GetLightNumInv::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.SetMainLightContribution
// 0x0020 (0x0020 - 0x0000)
struct BP_DynamicSky_C_SetMainLightContribution final
{
public:
	int32                                         Light_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightContribution;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99DD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_SetMainLightContribution) == 0x000008, "Wrong alignment on BP_DynamicSky_C_SetMainLightContribution");
static_assert(sizeof(BP_DynamicSky_C_SetMainLightContribution) == 0x000020, "Wrong size on BP_DynamicSky_C_SetMainLightContribution");
static_assert(offsetof(BP_DynamicSky_C_SetMainLightContribution, Light_Index) == 0x000000, "Member 'BP_DynamicSky_C_SetMainLightContribution::Light_Index' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetMainLightContribution, MainLightContribution) == 0x000004, "Member 'BP_DynamicSky_C_SetMainLightContribution::MainLightContribution' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetMainLightContribution, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_SetMainLightContribution::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetMainLightContribution, K2Node_DynamicCast_AsDirectional_Light_Component) == 0x000010, "Member 'BP_DynamicSky_C_SetMainLightContribution::K2Node_DynamicCast_AsDirectional_Light_Component' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetMainLightContribution, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_DynamicSky_C_SetMainLightContribution::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkyLight
// 0x0098 (0x0098 - 0x0000)
struct BP_DynamicSky_C_UpdateSkyLight final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentToonSaturationScale;                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentToonIntensityScale;                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99DE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99DF[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_UpdateSkyLight) == 0x000004, "Wrong alignment on BP_DynamicSky_C_UpdateSkyLight");
static_assert(sizeof(BP_DynamicSky_C_UpdateSkyLight) == 0x000098, "Wrong size on BP_DynamicSky_C_UpdateSkyLight");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateSkyLight::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CurrentToonSaturationScale) == 0x000004, "Member 'BP_DynamicSky_C_UpdateSkyLight::CurrentToonSaturationScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CurrentToonIntensityScale) == 0x000008, "Member 'BP_DynamicSky_C_UpdateSkyLight::CurrentToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Percent_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_BreakVector2D_X) == 0x000010, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_GetLinearColorValue_ReturnValue) == 0x00001C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_RGBToHSV_H) == 0x00002C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_RGBToHSV_S) == 0x000030, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_RGBToHSV_V) == 0x000034, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_RGBToHSV_A) == 0x000038, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_GetFloatValue_ReturnValue) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000040, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_HSVToRGB_ReturnValue) == 0x000044, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_GetFloatValue_ReturnValue_1) == 0x000054, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000058, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00005C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_SelectFloat_ReturnValue) == 0x000060, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000064, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Lerp_ReturnValue_1) == 0x00006C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Lerp_ReturnValue_2) == 0x000070, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_LinearColorLerp_ReturnValue) == 0x000074, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_FMax_ReturnValue) == 0x000084, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_IsValid_ReturnValue_1) == 0x00008C, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_GetFloatValue_ReturnValue_2) == 0x000090, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateSkyLight, CallFunc_IsValid_ReturnValue_2) == 0x000094, "Member 'BP_DynamicSky_C_UpdateSkyLight::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateFog
// 0x0390 (0x0390 - 0x0000)
struct BP_DynamicSky_C_UpdateFog final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpFogHeight;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       CallFunc_GetDynamicSkyFogControlParam_FogControlParam; // 0x0014(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E0[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E1[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99E2[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E3[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E4[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E5[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99E6[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlCurveParam                  K2Node_MakeStruct_FogControlCurveParam;            // 0x00D0(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0144(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E7[0x2];                                     // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x01D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E8[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99E9[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x01F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x0204(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0218(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x0230(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x0270(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99EA[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_8;                       // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_9;                       // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_3;            // 0x02A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_10;                      // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99EB[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_11;                      // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x02C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99EC[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_3;                          // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x02E8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99ED[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_3;                             // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99EE[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_12;                      // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_UpdateFog) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateFog");
static_assert(sizeof(BP_DynamicSky_C_UpdateFog) == 0x000390, "Wrong size on BP_DynamicSky_C_UpdateFog");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateFog::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, TmpFogHeight) == 0x000004, "Member 'BP_DynamicSky_C_UpdateFog::TmpFogHeight' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Percent_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_GetDynamicSkyFogControlParam_FogControlParam) == 0x000014, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_GetDynamicSkyFogControlParam_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000054, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000058, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_bool_Variable) == 0x00005C, "Member 'BP_DynamicSky_C_UpdateFog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000060, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_float_Variable) == 0x000064, "Member 'BP_DynamicSky_C_UpdateFog::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_FClamp_ReturnValue_1) == 0x000068, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000070, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_X) == 0x000084, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Y) == 0x000088, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Z) == 0x00008C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Add_FloatFloat_ReturnValue) == 0x000090, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000094, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_X_1) == 0x0000A8, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Y_1) == 0x0000AC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Z_1) == 0x0000B0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_IsValid_ReturnValue) == 0x0000B4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_SelectFloat_ReturnValue) == 0x0000B8, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_bool_Variable_1) == 0x0000BC, "Member 'BP_DynamicSky_C_UpdateFog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_float_Variable_1) == 0x0000C0, "Member 'BP_DynamicSky_C_UpdateFog::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_IsValid_ReturnValue_1) == 0x0000C4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue) == 0x0000C8, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_MakeStruct_FogControlCurveParam) == 0x0000D0, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_MakeStruct_FogControlCurveParam' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000120, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_X_2) == 0x00012C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Y_2) == 0x000130, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Z_2) == 0x000134, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_MakeVector_ReturnValue) == 0x000138, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000144, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001CC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_bool_Variable_2) == 0x0001CD, "Member 'BP_DynamicSky_C_UpdateFog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_float_Variable_2) == 0x0001D0, "Member 'BP_DynamicSky_C_UpdateFog::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0001D4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0001E4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_Select_Default) == 0x0001E8, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BooleanAND_ReturnValue) == 0x0001EC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_1) == 0x0001F0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_LinearColorLerp_ReturnValue) == 0x0001F4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000204, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_2) == 0x000214, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000218, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000228, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_Select_Default_1) == 0x00022C, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_MakeStruct_FogControlParam) == 0x000230, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_MakeStruct_FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_LinearColorLerp_ReturnValue_2) == 0x000270, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_LinearColorLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_IsValid_ReturnValue_2) == 0x000280, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_3) == 0x000284, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_4) == 0x000288, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_5) == 0x00028C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_6) == 0x000290, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_7) == 0x000294, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_8) == 0x000298, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_9) == 0x00029C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_LinearColorLerp_ReturnValue_3) == 0x0002A0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_LinearColorLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_10) == 0x0002B0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_bool_Variable_3) == 0x0002B4, "Member 'BP_DynamicSky_C_UpdateFog::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_Select_Default_2) == 0x0002B8, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_11) == 0x0002BC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0002C0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_IsValid_ReturnValue_3) == 0x0002CC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_X_3) == 0x0002D0, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Y_3) == 0x0002D4, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_BreakVector_Z_3) == 0x0002D8, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_MakeVector_ReturnValue_1) == 0x0002DC, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x0002E8, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000370, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, Temp_float_Variable_3) == 0x000374, "Member 'BP_DynamicSky_C_UpdateFog::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, K2Node_Select_Default_3) == 0x000378, "Member 'BP_DynamicSky_C_UpdateFog::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00037C, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_SelectFloat_ReturnValue_1) == 0x000380, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Lerp_ReturnValue_12) == 0x000384, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Lerp_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000388, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateFog, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000389, "Member 'BP_DynamicSky_C_UpdateFog::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateLight
// 0x0090 (0x0090 - 0x0000)
struct BP_DynamicSky_C_UpdateLight final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpToonIntensityScale;                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpIntensity;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TmpColor;                                          // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalTime;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Indices;                                           // 0x0020(0x0010)(Edit, BlueprintVisible)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99EF[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F0[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_DynamicSky_C_UpdateLight) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateLight");
static_assert(sizeof(BP_DynamicSky_C_UpdateLight) == 0x000090, "Wrong size on BP_DynamicSky_C_UpdateLight");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateLight::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, TmpToonIntensityScale) == 0x000004, "Member 'BP_DynamicSky_C_UpdateLight::TmpToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, TmpIntensity) == 0x000008, "Member 'BP_DynamicSky_C_UpdateLight::TmpIntensity' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, TmpColor) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateLight::TmpColor' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, LocalTime) == 0x00001C, "Member 'BP_DynamicSky_C_UpdateLight::LocalTime' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, Indices) == 0x000020, "Member 'BP_DynamicSky_C_UpdateLight::Indices' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_Lerp_ReturnValue) == 0x000034, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_Lerp_ReturnValue_1) == 0x000038, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_GetFloatValue_ReturnValue) == 0x000044, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_GetLinearColorValue_ReturnValue) == 0x00004C, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_GetFloatValue_ReturnValue_1) == 0x00005C, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_LinearColorLerp_ReturnValue) == 0x000060, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000070, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, CallFunc_IsValid_ReturnValue_3) == 0x000078, "Member 'BP_DynamicSky_C_UpdateLight::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLight, K2Node_MakeArray_Array) == 0x000080, "Member 'BP_DynamicSky_C_UpdateLight::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateStageShadow
// 0x1180 (0x1180 - 0x0000)
struct BP_DynamicSky_C_UpdateStageShadow final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue_1;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H_1;                             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S_1;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V_1;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A_1;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_2;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H_2;                             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S_2;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V_2;                             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A_2;                             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_5;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue_1;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue_2;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_6;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_3;        // 0x00F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_7;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H_3;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S_3;                             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V_3;                             // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A_3;                             // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_8;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_3;                     // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue_3;                   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue_4;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_3;                 // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStageShadowSettings                   K2Node_MakeStruct_StageShadowSettings;             // 0x0150(0x006C)(NoDestructor)
	uint8                                         Pad_99F3[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x01C0(0x0780)()
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0940(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0944(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0948(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0954(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0958(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue_1;                      // 0x095C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x0968(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue_2;                      // 0x096C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x0978(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue_3;                      // 0x097C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x0988(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_7;                       // 0x098C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStageShadowSettings                   K2Node_MakeStruct_StageShadowSettings_1;           // 0x0990(0x006C)(NoDestructor)
	uint8                                         Pad_99F4[0x4];                                     // 0x09FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings_1;           // 0x0A00(0x0780)()
};
static_assert(alignof(BP_DynamicSky_C_UpdateStageShadow) == 0x000010, "Wrong alignment on BP_DynamicSky_C_UpdateStageShadow");
static_assert(sizeof(BP_DynamicSky_C_UpdateStageShadow) == 0x001180, "Wrong size on BP_DynamicSky_C_UpdateStageShadow");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateStageShadow::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, Ratio) == 0x000004, "Member 'BP_DynamicSky_C_UpdateStageShadow::Ratio' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Fraction_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Less_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Percent_FloatFloat_ReturnValue_1) == 0x00001C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Percent_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue) == 0x000020, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_1) == 0x000024, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_2) == 0x000028, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetLinearColorValue_ReturnValue) == 0x00002C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_3) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_H) == 0x000040, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_S) == 0x000044, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_V) == 0x000048, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_A) == 0x00004C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_4) == 0x000050, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000054, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000058, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_FClamp_ReturnValue) == 0x000060, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x000064, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_H_1) == 0x000074, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_H_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_S_1) == 0x000078, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_S_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_V_1) == 0x00007C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_V_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_A_1) == 0x000080, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_A_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000084, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetLinearColorValue_ReturnValue_2) == 0x000088, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetLinearColorValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000098, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_H_2) == 0x00009C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_H_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_S_2) == 0x0000A0, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_S_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_V_2) == 0x0000A4, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_V_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_A_2) == 0x0000A8, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_A_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x0000AC, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x0000B0, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_6) == 0x0000B4, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_FClamp_ReturnValue_1) == 0x0000B8, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_FClamp_ReturnValue_2) == 0x0000BC, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000C0, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C4, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_5) == 0x0000C8, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Fraction_ReturnValue_1) == 0x0000CC, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Fraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000DC, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Fraction_ReturnValue_2) == 0x0000E0, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Fraction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_6) == 0x0000E4, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_MakeVector_ReturnValue_1) == 0x0000E8, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetLinearColorValue_ReturnValue_3) == 0x0000F4, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetLinearColorValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_GetFloatValue_ReturnValue_7) == 0x000104, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_GetFloatValue_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_H_3) == 0x000108, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_H_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_S_3) == 0x00010C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_S_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_V_3) == 0x000110, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_V_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_RGBToHSV_A_3) == 0x000114, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_RGBToHSV_A_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_7) == 0x000118, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Multiply_FloatFloat_ReturnValue_8) == 0x00011C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Multiply_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x000120, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_FClamp_ReturnValue_3) == 0x000124, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000128, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Fraction_ReturnValue_3) == 0x00012C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Fraction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x000130, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_MakeVector_ReturnValue_2) == 0x000134, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Fraction_ReturnValue_4) == 0x000140, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Fraction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_MakeVector_ReturnValue_3) == 0x000144, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_MakeVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, K2Node_MakeStruct_StageShadowSettings) == 0x000150, "Member 'BP_DynamicSky_C_UpdateStageShadow::K2Node_MakeStruct_StageShadowSettings' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, K2Node_MakeStruct_PostProcessSettings) == 0x0001C0, "Member 'BP_DynamicSky_C_UpdateStageShadow::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue) == 0x000940, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_1) == 0x000944, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_VLerp_ReturnValue) == 0x000948, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_2) == 0x000954, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_3) == 0x000958, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_VLerp_ReturnValue_1) == 0x00095C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_4) == 0x000968, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_VLerp_ReturnValue_2) == 0x00096C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_VLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_5) == 0x000978, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_VLerp_ReturnValue_3) == 0x00097C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_VLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_6) == 0x000988, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, CallFunc_Lerp_ReturnValue_7) == 0x00098C, "Member 'BP_DynamicSky_C_UpdateStageShadow::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, K2Node_MakeStruct_StageShadowSettings_1) == 0x000990, "Member 'BP_DynamicSky_C_UpdateStageShadow::K2Node_MakeStruct_StageShadowSettings_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateStageShadow, K2Node_MakeStruct_PostProcessSettings_1) == 0x000A00, "Member 'BP_DynamicSky_C_UpdateStageShadow::K2Node_MakeStruct_PostProcessSettings_1' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDistantFog
// 0x07F0 (0x07F0 - 0x0000)
struct BP_DynamicSky_C_UpdateDistantFog final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_2;        // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_3;        // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99F5[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0060(0x0780)()
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_4;        // 0x07E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_UpdateDistantFog) == 0x000010, "Wrong alignment on BP_DynamicSky_C_UpdateDistantFog");
static_assert(sizeof(BP_DynamicSky_C_UpdateDistantFog) == 0x0007F0, "Wrong size on BP_DynamicSky_C_UpdateDistantFog");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateDistantFog::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetFloatValue_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetLinearColorValue_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x00001C, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetLinearColorValue_ReturnValue_2) == 0x00002C, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetLinearColorValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetFloatValue_ReturnValue_1) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetFloatValue_ReturnValue_2) == 0x000040, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetFloatValue_ReturnValue_3) == 0x000044, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetFloatValue_ReturnValue_4) == 0x000048, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetLinearColorValue_ReturnValue_3) == 0x00004C, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetLinearColorValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, K2Node_MakeStruct_PostProcessSettings) == 0x000060, "Member 'BP_DynamicSky_C_UpdateDistantFog::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDistantFog, CallFunc_GetLinearColorValue_ReturnValue_4) == 0x0007E0, "Member 'BP_DynamicSky_C_UpdateDistantFog::CallFunc_GetLinearColorValue_ReturnValue_4' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateRimLight
// 0x001C (0x001C - 0x0000)
struct BP_DynamicSky_C_UpdateRimLight final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_UpdateRimLight) == 0x000004, "Wrong alignment on BP_DynamicSky_C_UpdateRimLight");
static_assert(sizeof(BP_DynamicSky_C_UpdateRimLight) == 0x00001C, "Wrong size on BP_DynamicSky_C_UpdateRimLight");
static_assert(offsetof(BP_DynamicSky_C_UpdateRimLight, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateRimLight::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateRimLight, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000004, "Member 'BP_DynamicSky_C_UpdateRimLight::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateRimLight, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateRimLight::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateRimLight, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_DynamicSky_C_UpdateRimLight::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDynamicSkyForEditor
// 0x0038 (0x0038 - 0x0000)
struct BP_DynamicSky_C_UpdateDynamicSkyForEditor final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F6[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_FogControlVolume_C*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControlVolume_C*                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F7[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_UpdateDynamicSkyForEditor) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateDynamicSkyForEditor");
static_assert(sizeof(BP_DynamicSky_C_UpdateDynamicSkyForEditor) == 0x000038, "Wrong size on BP_DynamicSky_C_UpdateDynamicSkyForEditor");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDynamicSkyForEditor, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'BP_DynamicSky_C_UpdateDynamicSkyForEditor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightSchedule
// 0x00A0 (0x00A0 - 0x0000)
struct BP_DynamicSky_C_UpdateLightSchedule final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99F8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99F9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_IndoorLightSchedule_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	class ABP_IndoorLightSchedule_C*              CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightScheduleComponent_C*>      CallFunc_GetAllComponentsOfClass_OutComponents;    // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ULightScheduleComponent_C*              CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FA[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FB[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URandomLightMaterialScheduleComponent_C*> CallFunc_GetAllComponentsOfClass_OutComponents_1;  // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class URandomLightMaterialScheduleComponent_C* CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FC[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_EditorPreview_ReturnValue;                // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EditorPreview_ReturnValue_1;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FD[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_UpdateLightSchedule) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateLightSchedule");
static_assert(sizeof(BP_DynamicSky_C_UpdateLightSchedule) == 0x0000A0, "Wrong size on BP_DynamicSky_C_UpdateLightSchedule");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Override) == 0x000004, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Override' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Array_Index_Variable_2) == 0x000018, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Loop_Counter_Variable_1) == 0x00003C, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_GetAllComponentsOfClass_OutComponents) == 0x000040, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_GetAllComponentsOfClass_OutComponents' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, Temp_int_Loop_Counter_Variable_2) == 0x000064, "Member 'BP_DynamicSky_C_UpdateLightSchedule::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_BooleanOR_ReturnValue) == 0x000068, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Less_IntInt_ReturnValue_1) == 0x000069, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Add_IntInt_ReturnValue_2) == 0x00006C, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_GetAllComponentsOfClass_OutComponents_1) == 0x000070, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_GetAllComponentsOfClass_OutComponents_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_BooleanOR_ReturnValue_1) == 0x000088, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_EditorPreview_ReturnValue) == 0x00008C, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_EditorPreview_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_EditorPreview_ReturnValue_1) == 0x000090, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_EditorPreview_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Array_Length_ReturnValue_2) == 0x000094, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateLightSchedule, CallFunc_Less_IntInt_ReturnValue_2) == 0x000098, "Member 'BP_DynamicSky_C_UpdateLightSchedule::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.Update LUT
// 0x00C0 (0x00C0 - 0x0000)
struct BP_DynamicSky_C_Update_LUT final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hour;                                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99FF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A00[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2; // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3; // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_4;    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_5;    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A01[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_4;        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_5;        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_6;        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_7;        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_8;        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_3;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_9;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_10;       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_4;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_Update_LUT) == 0x000008, "Wrong alignment on BP_DynamicSky_C_Update_LUT");
static_assert(sizeof(BP_DynamicSky_C_Update_LUT) == 0x0000C0, "Wrong size on BP_DynamicSky_C_Update_LUT");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_Update_LUT::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, Hour) == 0x000004, "Member 'BP_DynamicSky_C_Update_LUT::Hour' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GetScalarParameterValue_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000018, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00001C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x000020, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput) == 0x000028, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1) == 0x000038, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2) == 0x000048, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3) == 0x000058, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue_3) == 0x000068, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue_4) == 0x000069, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_GreaterEqual_FloatFloat_ReturnValue_5) == 0x00006A, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_GreaterEqual_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x00006C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x000074, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_FClamp_ReturnValue) == 0x000078, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00007C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_4) == 0x000080, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_FClamp_ReturnValue_1) == 0x000084, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Abs_ReturnValue) == 0x000088, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_5) == 0x00008C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_6) == 0x000090, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x000094, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_7) == 0x000098, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_FClamp_ReturnValue_2) == 0x00009C, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_8) == 0x0000A0, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x0000A4, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_FClamp_ReturnValue_3) == 0x0000A8, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_9) == 0x0000AC, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Subtract_FloatFloat_ReturnValue_10) == 0x0000B0, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Subtract_FloatFloat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_Divide_FloatFloat_ReturnValue_4) == 0x0000B4, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_Divide_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Update_LUT, CallFunc_FClamp_ReturnValue_4) == 0x0000B8, "Member 'BP_DynamicSky_C_Update_LUT::CallFunc_FClamp_ReturnValue_4' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.GetDynamicSkyFogControlParam
// 0x01C0 (0x01C0 - 0x0000)
struct BP_DynamicSky_C_GetDynamicSkyFogControlParam final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       FogControlParam;                                   // 0x0004(0x0040)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A02[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlCurveParam                  K2Node_MakeStruct_FogControlCurveParam;            // 0x0048(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A03[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A04[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A05[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A06[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A07[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A08[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_3;                // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A09[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_4;                // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_5;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0A[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_5;                // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_6;              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0B[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_6;                // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x0114(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0C[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_7;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_7;                // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x016C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       K2Node_MakeStruct_FogControlParam;                 // 0x017C(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_GetDynamicSkyFogControlParam) == 0x000008, "Wrong alignment on BP_DynamicSky_C_GetDynamicSkyFogControlParam");
static_assert(sizeof(BP_DynamicSky_C_GetDynamicSkyFogControlParam) == 0x0001C0, "Wrong size on BP_DynamicSky_C_GetDynamicSkyFogControlParam");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, Param_Time) == 0x000000, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::Param_Time' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, FogControlParam) == 0x000004, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::FogControlParam' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, K2Node_MakeStruct_FogControlCurveParam) == 0x000048, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::K2Node_MakeStruct_FogControlCurveParam' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetLinearColorValue_ReturnValue) == 0x00009C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_1) == 0x0000AC, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectColor_ReturnValue) == 0x0000B0, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue) == 0x0000C0, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_2) == 0x0000C4, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue) == 0x0000C8, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_1) == 0x0000CC, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_3) == 0x0000D0, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_1) == 0x0000D4, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_2) == 0x0000D8, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_4) == 0x0000DC, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_2) == 0x0000E0, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_3) == 0x0000E4, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_5) == 0x0000E8, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_3) == 0x0000EC, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_4) == 0x0000F0, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_6) == 0x0000F4, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_4) == 0x0000F8, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_5) == 0x0000FC, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_7) == 0x000100, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_5) == 0x000104, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_6) == 0x000108, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_8) == 0x00010C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_6) == 0x000110, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetLinearColorValue_ReturnValue_1) == 0x000114, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_IsValid_ReturnValue_9) == 0x000124, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectColor_ReturnValue_1) == 0x000128, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_GetFloatValue_ReturnValue_7) == 0x000138, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_GetFloatValue_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_RGBToHSV_H) == 0x00013C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_RGBToHSV_S) == 0x000140, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_RGBToHSV_V) == 0x000144, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_RGBToHSV_A) == 0x000148, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_SelectFloat_ReturnValue_7) == 0x00014C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_SelectFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000150, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000154, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000158, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_FClamp_ReturnValue) == 0x00015C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Add_FloatFloat_ReturnValue) == 0x000160, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Fraction_ReturnValue) == 0x000164, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000168, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, CallFunc_HSVToRGB_ReturnValue) == 0x00016C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_GetDynamicSkyFogControlParam, K2Node_MakeStruct_FogControlParam) == 0x00017C, "Member 'BP_DynamicSky_C_GetDynamicSkyFogControlParam::K2Node_MakeStruct_FogControlParam' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateOcean
// 0x0090 (0x0090 - 0x0000)
struct BP_DynamicSky_C_UpdateOcean final
{
public:
	class FName                                   LightName;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveLightIndex_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0D[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLightColor_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0E[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue_1; // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_UpdateOcean) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateOcean");
static_assert(sizeof(BP_DynamicSky_C_UpdateOcean) == 0x000090, "Wrong size on BP_DynamicSky_C_UpdateOcean");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, LightName) == 0x000000, "Member 'BP_DynamicSky_C_UpdateOcean::LightName' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_GetActiveLightIndex_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_GetActiveLightIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_Conv_IntToBool_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_GetLightColor_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_GetLightColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_Multiply_LinearColorFloat_ReturnValue) == 0x000020, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_Multiply_LinearColorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_GetMaterial_ReturnValue) == 0x000030, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000038, "Member 'BP_DynamicSky_C_UpdateOcean::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_DynamicSky_C_UpdateOcean::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000044, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_K2_GetVectorParameterValue_ReturnValue_1) == 0x000054, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_K2_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000064, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000070, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateOcean, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00007C, "Member 'BP_DynamicSky_C_UpdateOcean::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.InitDinamicMaterialInstance
// 0x0010 (0x0010 - 0x0000)
struct BP_DynamicSky_C_InitDinamicMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_InitDinamicMaterialInstance) == 0x000008, "Wrong alignment on BP_DynamicSky_C_InitDinamicMaterialInstance");
static_assert(sizeof(BP_DynamicSky_C_InitDinamicMaterialInstance) == 0x000010, "Wrong size on BP_DynamicSky_C_InitDinamicMaterialInstance");
static_assert(offsetof(BP_DynamicSky_C_InitDinamicMaterialInstance, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_DynamicSky_C_InitDinamicMaterialInstance::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_InitDinamicMaterialInstance, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000008, "Member 'BP_DynamicSky_C_InitDinamicMaterialInstance::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.Should Update Height Gradation Color
// 0x0002 (0x0002 - 0x0000)
struct BP_DynamicSky_C_Should_Update_Height_Gradation_Color final
{
public:
	bool                                          bUpdate;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_Should_Update_Height_Gradation_Color) == 0x000001, "Wrong alignment on BP_DynamicSky_C_Should_Update_Height_Gradation_Color");
static_assert(sizeof(BP_DynamicSky_C_Should_Update_Height_Gradation_Color) == 0x000002, "Wrong size on BP_DynamicSky_C_Should_Update_Height_Gradation_Color");
static_assert(offsetof(BP_DynamicSky_C_Should_Update_Height_Gradation_Color, bUpdate) == 0x000000, "Member 'BP_DynamicSky_C_Should_Update_Height_Gradation_Color::bUpdate' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_Should_Update_Height_Gradation_Color, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'BP_DynamicSky_C_Should_Update_Height_Gradation_Color::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.SetDisableUpdateHeightGradationColor
// 0x0018 (0x0018 - 0x0000)
struct BP_DynamicSky_C_SetDisableUpdateHeightGradationColor final
{
public:
	bool                                          bInDisable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A0F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A10[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor) == 0x000004, "Wrong alignment on BP_DynamicSky_C_SetDisableUpdateHeightGradationColor");
static_assert(sizeof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor) == 0x000018, "Wrong size on BP_DynamicSky_C_SetDisableUpdateHeightGradationColor");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, bInDisable) == 0x000000, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::bInDisable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, Temp_int_Variable) == 0x000004, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, Temp_int_Variable_1) == 0x000008, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_SetDisableUpdateHeightGradationColor, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_DynamicSky_C_SetDisableUpdateHeightGradationColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDirectionalLightControlForEditor
// 0x0030 (0x0030 - 0x0000)
struct BP_DynamicSky_C_UpdateDirectionalLightControlForEditor final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A11[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DirectionalLightControlVolume_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	class ABP_DirectionalLightControlVolume_C*    CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor) == 0x000008, "Wrong alignment on BP_DynamicSky_C_UpdateDirectionalLightControlForEditor");
static_assert(sizeof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor) == 0x000030, "Wrong size on BP_DynamicSky_C_UpdateDirectionalLightControlForEditor");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DynamicSky_C_UpdateDirectionalLightControlForEditor, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DynamicSky_C_UpdateDirectionalLightControlForEditor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}


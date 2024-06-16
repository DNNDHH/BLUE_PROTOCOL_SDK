#pragma once

 

// Package: BP_DirectionalLightControlVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ExecuteUbergraph_BP_DirectionalLightControlVolume
// 0x02C0 (0x02C0 - 0x0000)
struct BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9838[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9839[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CameraLocationChecker_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0030(0x0010)(ReferenceParm)
	class ABP_CameraLocationChecker_C*            CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_983A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0050(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_983B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_983C[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker;   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_983D[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CameraLocationChecker_C*            K2Node_DynamicCast_AsBP_Camera_Location_Checker_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_983E[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Blend;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Time;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNowTimeParam_NowLightIntensity;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNowTimeParam_NowToonIntensityScale;    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetNowTimeParam_NowLightColor;            // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_983F[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNowTimeParam_NowLightIntensity_1;      // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNowTimeParam_NowToonIntensityScale_1;  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetNowTimeParam_NowLightColor_1;          // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9840[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x00E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9841[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9842[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ColorToString_ReturnValue;           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9843[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9844[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_9845[0x8];                                     // 0x0198(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CameraLocationChecker_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9846[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            K2Node_Select_Default;                             // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBoxComponent*>                  CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x01F0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USphereComponent*>               CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0200(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UBoxComponent*                          CallFunc_Array_Get_Item_2;                         // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_Array_Get_Item_3;                         // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue;        // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0230(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaledBoxExtent_ReturnValue;           // 0x023C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9847[0x2];                                     // 0x025E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCapsuleComponent*>              CallFunc_K2_GetComponentsByClass_ReturnValue_2;    // 0x0260(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCapsuleComponent*                      CallFunc_Array_Get_Item_4;                         // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x027C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9848[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0294(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColor_Green_ReturnValue;            // 0x02A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume) == 0x000010, "Wrong alignment on BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume) == 0x0002C0, "Wrong size on BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, EntryPoint) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetAllActorsOfClass_OutActors) == 0x000030, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000050, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000069, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00006A, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_BooleanOR_ReturnValue) == 0x00006B, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_Event_OtherActor_1) == 0x000070, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_Event_DeltaSeconds) == 0x000078, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker) == 0x000080, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsDedicatedServer_ReturnValue) == 0x000089, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_Event_OtherActor) == 0x000090, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_DynamicCast_AsBP_Camera_Location_Checker_1) == 0x000098, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_DynamicCast_AsBP_Camera_Location_Checker_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_CustomEvent_Blend) == 0x0000A4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_CustomEvent_Blend' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_CustomEvent_Time) == 0x0000A8, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowLightIntensity) == 0x0000AC, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowLightIntensity' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowToonIntensityScale) == 0x0000B0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowLightColor) == 0x0000B4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowLightColor' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsValid_ReturnValue_3) == 0x0000C4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsValid_ReturnValue_4) == 0x0000C5, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowLightIntensity_1) == 0x0000C8, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowLightIntensity_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowToonIntensityScale_1) == 0x0000CC, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowToonIntensityScale_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetNowTimeParam_NowLightColor_1) == 0x0000D0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetNowTimeParam_NowLightColor_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0000E0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0000E4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x0000F4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_int_Array_Index_Variable_2) == 0x0000F8, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Not_PreBool_ReturnValue) == 0x0000FC, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, Temp_bool_Variable) == 0x0000FD, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000100, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_LinearColorLerp_ReturnValue) == 0x000104, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Lerp_ReturnValue) == 0x000114, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Conv_ColorToString_ReturnValue) == 0x000118, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Conv_ColorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Conv_FloatToString_ReturnValue) == 0x000128, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Lerp_ReturnValue_1) == 0x000138, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000140, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_BooleanOR_ReturnValue_1) == 0x000150, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Concat_StrStr_ReturnValue) == 0x000158, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000168, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000178, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000188, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_MakeTransform_ReturnValue) == 0x0001A0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001D0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001D8, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001E0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, K2Node_Select_Default) == 0x0001E8, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x0001F0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000200, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Get_Item_2) == 0x000210, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Get_Item_3) == 0x000218, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000220, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetScaledSphereRadius_ReturnValue) == 0x00022C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetScaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000230, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetScaledBoxExtent_ReturnValue) == 0x00023C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetScaledBoxExtent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000248, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Length_ReturnValue) == 0x000254, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Length_ReturnValue_1) == 0x000258, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Less_IntInt_ReturnValue) == 0x00025C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Less_IntInt_ReturnValue_1) == 0x00025D, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentsByClass_ReturnValue_2) == 0x000260, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentsByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Get_Item_4) == 0x000270, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Array_Length_ReturnValue_2) == 0x000278, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x00027C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_Less_IntInt_ReturnValue_2) == 0x000288, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x00028C, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000290, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000294, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_LinearColor_Green_ReturnValue) == 0x0002A0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_LinearColor_Green_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_MakeLiteralFloat_ReturnValue) == 0x0002B0, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_IsPlayInEditor_ReturnValue) == 0x0002B4, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume, CallFunc_BooleanAND_ReturnValue) == 0x0002B5, "Member 'BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateLightParams
// 0x0008 (0x0008 - 0x0000)
struct BP_DirectionalLightControlVolume_C_UpdateLightParams final
{
public:
	float                                         Blend;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_UpdateLightParams) == 0x000004, "Wrong alignment on BP_DirectionalLightControlVolume_C_UpdateLightParams");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_UpdateLightParams) == 0x000008, "Wrong size on BP_DirectionalLightControlVolume_C_UpdateLightParams");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateLightParams, Blend) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_UpdateLightParams::Blend' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateLightParams, Time) == 0x000004, "Member 'BP_DirectionalLightControlVolume_C_UpdateLightParams::Time' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DirectionalLightControlVolume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DirectionalLightControlVolume_C_ReceiveTick");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_ReceiveTick) == 0x000004, "Wrong size on BP_DirectionalLightControlVolume_C_ReceiveTick");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UserConstructionScript
// 0x0058 (0x0058 - 0x0000)
struct BP_DirectionalLightControlVolume_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9849[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_984A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_984B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_984C[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UShapeComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UShapeComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_DirectionalLightControlVolume_C_UserConstructionScript");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_UserConstructionScript) == 0x000058, "Wrong size on BP_DirectionalLightControlVolume_C_UserConstructionScript");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000031, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_BooleanOR_ReturnValue) == 0x000032, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000038, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000055, "Member 'BP_DirectionalLightControlVolume_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.GetNowTimeParam
// 0x0058 (0x0058 - 0x0000)
struct BP_DirectionalLightControlVolume_C_GetNowTimeParam final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowLightIntensity;                                 // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowToonIntensityScale;                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NowLightColor;                                     // 0x000C(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TmpColor;                                          // 0x001C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpToonIntensityScale;                             // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpLightIntensity;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_984D[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_984E[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_GetNowTimeParam) == 0x000004, "Wrong alignment on BP_DirectionalLightControlVolume_C_GetNowTimeParam");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_GetNowTimeParam) == 0x000058, "Wrong size on BP_DirectionalLightControlVolume_C_GetNowTimeParam");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, TimeRate) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::TimeRate' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, NowLightIntensity) == 0x000004, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::NowLightIntensity' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, NowToonIntensityScale) == 0x000008, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::NowToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, NowLightColor) == 0x00000C, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::NowLightColor' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, TmpColor) == 0x00001C, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::TmpColor' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, TmpToonIntensityScale) == 0x00002C, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::TmpToonIntensityScale' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, TmpLightIntensity) == 0x000030, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::TmpLightIntensity' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_IsValid_ReturnValue_1) == 0x000035, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_GetFloatValue_ReturnValue) == 0x000038, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_GetLinearColorValue_ReturnValue) == 0x00003C, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_IsValid_ReturnValue_2) == 0x00004C, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_IsValid_ReturnValue_3) == 0x00004D, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_GetFloatValue_ReturnValue_1) == 0x000050, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_BooleanAND_ReturnValue) == 0x000054, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_GetNowTimeParam, CallFunc_Not_PreBool_ReturnValue) == 0x000055, "Member 'BP_DirectionalLightControlVolume_C_GetNowTimeParam::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.CreateOutArea
// 0x0380 (0x0380 - 0x0000)
struct BP_DirectionalLightControlVolume_C_CreateOutArea final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_984F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UBoxComponent*                          CallFunc_AddComponent_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_AddComponent_ReturnValue_1;               // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_2;                            // 0x0080(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UShapeComponent*                        CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CallFunc_AddComponent_ReturnValue_2;               // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9850[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0104(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9851[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USphereComponent*                       K2Node_DynamicCast_AsSphere_Collision;             // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9852[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue;        // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9853[0x8];                                     // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x01B0(0x0030)(IsPlainOldData, NoDestructor)
	class UBoxComponent*                          K2Node_DynamicCast_AsBox_Collision;                // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9854[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult_1;    // 0x01EC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetScaledBoxExtent_ReturnValue;           // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x0280(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult_2;    // 0x02B4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9855[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9856[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9857[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UShapeComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0350(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0360(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x036C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_CreateOutArea) == 0x000010, "Wrong alignment on BP_DirectionalLightControlVolume_C_CreateOutArea");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_CreateOutArea) == 0x000380, "Wrong size on BP_DirectionalLightControlVolume_C_CreateOutArea");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, Temp_struct_Variable) == 0x000010, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, Temp_struct_Variable_1) == 0x000040, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_AddComponent_ReturnValue_1) == 0x000078, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, Temp_struct_Variable_2) == 0x000080, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_AddComponent_ReturnValue_2) == 0x0000B8, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_AsCapsule_Collision) == 0x0000C0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x0000CC, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000D0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Add_FloatFloat_ReturnValue) == 0x000100, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000104, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x00018C, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000190, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_AsSphere_Collision) == 0x000198, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_AsSphere_Collision' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_bSuccess_1) == 0x0001A0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_GetScaledSphereRadius_ReturnValue) == 0x0001A4, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_GetScaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x0001B0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_AsBox_Collision) == 0x0001E0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_AsBox_Collision' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_SetWorldTransform_SweepHitResult_1) == 0x0001EC, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_SetWorldTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_GetScaledBoxExtent_ReturnValue) == 0x000274, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_GetScaledBoxExtent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_GetComponentToWorld_ReturnValue_2) == 0x000280, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_GetComponentToWorld_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_SetWorldTransform_SweepHitResult_2) == 0x0002B4, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_SetWorldTransform_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Less_IntInt_ReturnValue) == 0x00033C, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Array_Length_ReturnValue_1) == 0x000340, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Greater_IntInt_ReturnValue) == 0x000344, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000348, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000350, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000360, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_CreateOutArea, CallFunc_Add_VectorVector_ReturnValue) == 0x00036C, "Member 'BP_DirectionalLightControlVolume_C_CreateOutArea::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateBlendValue
// 0x0060 (0x0060 - 0x0000)
struct BP_DirectionalLightControlVolume_C_UpdateBlendValue final
{
public:
	float                                         MinDist;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9858[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9859[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShapeComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985B[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_UpdateBlendValue) == 0x000008, "Wrong alignment on BP_DirectionalLightControlVolume_C_UpdateBlendValue");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_UpdateBlendValue) == 0x000060, "Wrong size on BP_DirectionalLightControlVolume_C_UpdateBlendValue");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, MinDist) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::MinDist' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_FClamp_ReturnValue) == 0x000034, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00003C, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_GetClosestPointOnCollision_OutPointOnBody) == 0x000048, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_GetClosestPointOnCollision_OutPointOnBody' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_GetClosestPointOnCollision_ReturnValue) == 0x000054, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_GetClosestPointOnCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_Vector_Distance_ReturnValue) == 0x000058, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateBlendValue, CallFunc_FMin_ReturnValue) == 0x00005C, "Member 'BP_DirectionalLightControlVolume_C_UpdateBlendValue::CallFunc_FMin_ReturnValue' has a wrong offset!");

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateEditorPreview
// 0x0020 (0x0020 - 0x0000)
struct BP_DirectionalLightControlVolume_C_UpdateEditorPreview final
{
public:
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview) == 0x000008, "Wrong alignment on BP_DirectionalLightControlVolume_C_UpdateEditorPreview");
static_assert(sizeof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview) == 0x000020, "Wrong size on BP_DirectionalLightControlVolume_C_UpdateEditorPreview");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00001A, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DirectionalLightControlVolume_C_UpdateEditorPreview, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'BP_DirectionalLightControlVolume_C_UpdateEditorPreview::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}


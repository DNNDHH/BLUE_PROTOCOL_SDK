#pragma once

 

// Package: BP_SBPhotoModePawn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ExecuteUbergraph_BP_SBPhotoModePawn
// 0x0230 (0x0230 - 0x0000)
struct BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_971D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_1;         // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_971E[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_971F[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class ACameraActor*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9720[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_NewController;                        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SBPhotoModeController_C*            K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9721[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACameraActor*                           K2Node_DynamicCast_AsCamera_Actor;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9722[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00E4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9723[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPhotoModePawnMovementComponent*      K2Node_DynamicCast_AsSBPhoto_Mode_Pawn_Movement_Component; // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9724[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                K2Node_CustomEvent_NewLocation;                    // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn) == 0x000010, "Wrong alignment on BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn");
static_assert(sizeof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn) == 0x000230, "Wrong size on BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, EntryPoint) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000010, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_GetControlRotation_ReturnValue) == 0x00001C, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_GetControlRotation_ReturnValue_1) == 0x000060, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_GetControlRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_MakeTransform_ReturnValue_1) == 0x000080, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_Event_DeltaSeconds) == 0x0000B8, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_Event_NewController) == 0x0000C0, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_Event_NewController' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller) == 0x0000C8, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_AsCamera_Actor) == 0x0000D8, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_AsCamera_Actor' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000E4, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_SetActorTransform_ReturnValue) == 0x00016C, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_Event_EndPlayReason) == 0x00016D, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_AsSBPhoto_Mode_Pawn_Movement_Component) == 0x000170, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_AsSBPhoto_Mode_Pawn_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_CreateDelegate_OutputDelegate) == 0x00017C, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, K2Node_CustomEvent_NewLocation) == 0x00018C, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::K2Node_CustomEvent_NewLocation' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_GetMovementComponent_ReturnValue) == 0x000198, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001A0, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000228, "Member 'BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ResetPosition
// 0x000C (0x000C - 0x0000)
struct BP_SBPhotoModePawn_C_ResetPosition final
{
public:
	struct FVector                                NewLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ResetPosition) == 0x000004, "Wrong alignment on BP_SBPhotoModePawn_C_ResetPosition");
static_assert(sizeof(BP_SBPhotoModePawn_C_ResetPosition) == 0x00000C, "Wrong size on BP_SBPhotoModePawn_C_ResetPosition");
static_assert(offsetof(BP_SBPhotoModePawn_C_ResetPosition, NewLocation) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ResetPosition::NewLocation' has a wrong offset!");

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SBPhotoModePawn_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SBPhotoModePawn_C_ReceiveEndPlay");
static_assert(sizeof(BP_SBPhotoModePawn_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SBPhotoModePawn_C_ReceiveEndPlay");
static_assert(offsetof(BP_SBPhotoModePawn_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceivePossessed
// 0x0008 (0x0008 - 0x0000)
struct BP_SBPhotoModePawn_C_ReceivePossessed final
{
public:
	class AController*                            NewController;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ReceivePossessed) == 0x000008, "Wrong alignment on BP_SBPhotoModePawn_C_ReceivePossessed");
static_assert(sizeof(BP_SBPhotoModePawn_C_ReceivePossessed) == 0x000008, "Wrong size on BP_SBPhotoModePawn_C_ReceivePossessed");
static_assert(offsetof(BP_SBPhotoModePawn_C_ReceivePossessed, NewController) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ReceivePossessed::NewController' has a wrong offset!");

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SBPhotoModePawn_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SBPhotoModePawn_C_ReceiveTick");
static_assert(sizeof(BP_SBPhotoModePawn_C_ReceiveTick) == 0x000004, "Wrong size on BP_SBPhotoModePawn_C_ReceiveTick");
static_assert(offsetof(BP_SBPhotoModePawn_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ShowDebugLine
// 0x03C0 (0x03C0 - 0x0000)
struct BP_SBPhotoModePawn_C_ShowDebugLine final
{
public:
	TArray<struct FLinearColor>                   ColorArray;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        OffsetArray;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9725[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_2;                            // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9726[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9727[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_3;                            // 0x00B0(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9728[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_3;             // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9729[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array_1;                          // 0x0128(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_972A[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleByProfile_OutHit;          // 0x0190(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleByProfile_ReturnValue;     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_972B[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x021C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_972C[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x02A8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_972D[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit_1;       // 0x0334(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue_1;  // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePawn_C_ShowDebugLine) == 0x000008, "Wrong alignment on BP_SBPhotoModePawn_C_ShowDebugLine");
static_assert(sizeof(BP_SBPhotoModePawn_C_ShowDebugLine) == 0x0003C0, "Wrong size on BP_SBPhotoModePawn_C_ShowDebugLine");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, ColorArray) == 0x000000, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::ColorArray' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, OffsetArray) == 0x000010, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::OffsetArray' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_object_Variable) == 0x000020, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_object_Variable_1) == 0x000030, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_int_Array_Index_Variable) == 0x000048, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, K2Node_SwitchInteger_CmpSuccess) == 0x00004C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_object_Variable_2) == 0x000050, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_int_Variable) == 0x000060, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Percent_IntInt_ReturnValue) == 0x000064, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Divide_IntInt_ReturnValue) == 0x000068, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, K2Node_MathExpression_ReturnValue) == 0x00006C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, K2Node_MathExpression_ReturnValue_1) == 0x000074, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::K2Node_MathExpression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_MakeVector_ReturnValue) == 0x00007C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_MakeColor_ReturnValue) == 0x00008C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Array_Get_Item) == 0x00009C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_object_Variable_3) == 0x0000B0, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Array_Add_ReturnValue) == 0x0000C0, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Array_Get_Item_1) == 0x0000C4, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, Temp_int_Variable_1) == 0x0000D8, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Divide_IntInt_ReturnValue_1) == 0x0000DC, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Divide_IntInt_ReturnValue_2) == 0x0000E0, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000E4, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0000E8, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000EC, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0000F0, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Percent_IntInt_ReturnValue_3) == 0x0000F4, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Percent_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0000F8, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000FC, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_MakeColor_ReturnValue_1) == 0x000100, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Array_Add_ReturnValue_1) == 0x000110, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Add_IntInt_ReturnValue_2) == 0x000114, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, K2Node_MakeArray_Array) == 0x000118, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, K2Node_MakeArray_Array_1) == 0x000128, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_MakeVector_ReturnValue_1) == 0x000138, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000144, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_GetControlRotation_ReturnValue) == 0x000154, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000160, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_GreaterGreater_VectorRotator_ReturnValue_1) == 0x00016C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Add_VectorVector_ReturnValue) == 0x000178, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000184, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleByProfile_OutHit) == 0x000190, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleByProfile_OutHit' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleByProfile_ReturnValue) == 0x000218, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleByProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingle_OutHit) == 0x00021C, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingle_ReturnValue) == 0x0002A4, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0002A8, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000330, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleForObjects_OutHit_1) == 0x000334, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleForObjects_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePawn_C_ShowDebugLine, CallFunc_LineTraceSingleForObjects_ReturnValue_1) == 0x0003BC, "Member 'BP_SBPhotoModePawn_C_ShowDebugLine::CallFunc_LineTraceSingleForObjects_ReturnValue_1' has a wrong offset!");

}


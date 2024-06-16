#pragma once

 

// Package: BP_AIControllerNpc

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ExecuteUbergraph_BP_AIControllerNpc
// 0x00A8 (0x00A8 - 0x0000)
struct BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B58[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_UnpossessedPawn;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* InOtherActor, struct FRotator& ViewRotation)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B59[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_CustomEvent_InMobCharacter_1;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBInteractionTargetComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_InOtherActor;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_ViewRotation;                   // 0x0048(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B5A[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_CustomEvent_InMobCharacter;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBInteractionTargetComponent*          CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B5B[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B5C[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ASBMobCharacter* InMobCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ASBMobCharacter* InMobCharacter)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc");
static_assert(sizeof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc) == 0x0000A8, "Wrong size on BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, EntryPoint) == 0x000000, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_Event_UnpossessedPawn) == 0x000008, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_Event_UnpossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_DynamicCast_AsSBMob_Character) == 0x000020, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CustomEvent_InMobCharacter_1) == 0x000030, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CustomEvent_InMobCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CustomEvent_InOtherActor) == 0x000040, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CustomEvent_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CustomEvent_ViewRotation) == 0x000048, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CustomEvent_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CustomEvent_InMobCharacter) == 0x000058, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CustomEvent_InMobCharacter' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_Event_PossessedPawn) == 0x000070, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_DynamicCast_AsSBMob_Character_1) == 0x000078, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_DynamicCast_AsSBMob_Character_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc, K2Node_CreateDelegate_OutputDelegate_2) == 0x000094, "Member 'BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_AIControllerNpc_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIControllerNpc_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_ReceivePossess");
static_assert(sizeof(BP_AIControllerNpc_C_ReceivePossess) == 0x000008, "Wrong size on BP_AIControllerNpc_C_ReceivePossess");
static_assert(offsetof(BP_AIControllerNpc_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_AIControllerNpc_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerActivate
// 0x0008 (0x0008 - 0x0000)
struct BP_AIControllerNpc_C_OnOwnerActivate final
{
public:
	class ASBMobCharacter*                        InMobCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIControllerNpc_C_OnOwnerActivate) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_OnOwnerActivate");
static_assert(sizeof(BP_AIControllerNpc_C_OnOwnerActivate) == 0x000008, "Wrong size on BP_AIControllerNpc_C_OnOwnerActivate");
static_assert(offsetof(BP_AIControllerNpc_C_OnOwnerActivate, InMobCharacter) == 0x000000, "Member 'BP_AIControllerNpc_C_OnOwnerActivate::InMobCharacter' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerDeactivate
// 0x0008 (0x0008 - 0x0000)
struct BP_AIControllerNpc_C_OnOwnerDeactivate final
{
public:
	class ASBMobCharacter*                        InMobCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIControllerNpc_C_OnOwnerDeactivate) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_OnOwnerDeactivate");
static_assert(sizeof(BP_AIControllerNpc_C_OnOwnerDeactivate) == 0x000008, "Wrong size on BP_AIControllerNpc_C_OnOwnerDeactivate");
static_assert(offsetof(BP_AIControllerNpc_C_OnOwnerDeactivate, InMobCharacter) == 0x000000, "Member 'BP_AIControllerNpc_C_OnOwnerDeactivate::InMobCharacter' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceiveUnPossess
// 0x0008 (0x0008 - 0x0000)
struct BP_AIControllerNpc_C_ReceiveUnPossess final
{
public:
	class APawn*                                  UnpossessedPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIControllerNpc_C_ReceiveUnPossess) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_ReceiveUnPossess");
static_assert(sizeof(BP_AIControllerNpc_C_ReceiveUnPossess) == 0x000008, "Wrong size on BP_AIControllerNpc_C_ReceiveUnPossess");
static_assert(offsetof(BP_AIControllerNpc_C_ReceiveUnPossess, UnpossessedPawn) == 0x000000, "Member 'BP_AIControllerNpc_C_ReceiveUnPossess::UnpossessedPawn' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnInteraction
// 0x0018 (0x0018 - 0x0000)
struct BP_AIControllerNpc_C_OnInteraction final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AIControllerNpc_C_OnInteraction) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_OnInteraction");
static_assert(sizeof(BP_AIControllerNpc_C_OnInteraction) == 0x000018, "Wrong size on BP_AIControllerNpc_C_OnInteraction");
static_assert(offsetof(BP_AIControllerNpc_C_OnInteraction, InOtherActor) == 0x000000, "Member 'BP_AIControllerNpc_C_OnInteraction::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_OnInteraction, ViewRotation) == 0x000008, "Member 'BP_AIControllerNpc_C_OnInteraction::ViewRotation' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.RegisterUtilityOption
// 0x0020 (0x0020 - 0x0000)
struct BP_AIControllerNpc_C_RegisterUtilityOption final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUtilityOption*                       CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AIControllerNpc_C_RegisterUtilityOption) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_RegisterUtilityOption");
static_assert(sizeof(BP_AIControllerNpc_C_RegisterUtilityOption) == 0x000020, "Wrong size on BP_AIControllerNpc_C_RegisterUtilityOption");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_RegisterUtilityOption, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_AIControllerNpc_C_RegisterUtilityOption::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.StartTalk
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AIControllerNpc_C_StartTalk final
{
public:
	class AActor*                                 TalkTarget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedLookAt;                                        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B5D[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinTurnAngle;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B5E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFwBlackboardComponent*               CallFunc_GetAIFwBlackboard_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B5F[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeAxis_ReturnValue;                // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AIControllerNpc_C_StartTalk) == 0x000008, "Wrong alignment on BP_AIControllerNpc_C_StartTalk");
static_assert(sizeof(BP_AIControllerNpc_C_StartTalk) == 0x0000A0, "Wrong size on BP_AIControllerNpc_C_StartTalk");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, TalkTarget) == 0x000000, "Member 'BP_AIControllerNpc_C_StartTalk::TalkTarget' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, NeedLookAt) == 0x000008, "Member 'BP_AIControllerNpc_C_StartTalk::NeedLookAt' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, MinTurnAngle) == 0x00000C, "Member 'BP_AIControllerNpc_C_StartTalk::MinTurnAngle' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_GetAIFwBlackboard_ReturnValue) == 0x000028, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_GetAIFwBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, K2Node_DynamicCast_AsSBMob_Character) == 0x000030, "Member 'BP_AIControllerNpc_C_StartTalk::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_AIControllerNpc_C_StartTalk::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00003C, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_GetActorForwardVector_ReturnValue) == 0x000048, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Roll) == 0x000054, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Pitch) == 0x000058, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Yaw) == 0x00005C, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000060, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_FindLookAtRotation_ReturnValue) == 0x00006C, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Roll_1) == 0x000084, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Pitch_1) == 0x000088, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_BreakRotator_Yaw_1) == 0x00008C, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000090, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_NormalizeAxis_ReturnValue) == 0x000094, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_Abs_ReturnValue) == 0x000098, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIControllerNpc_C_StartTalk, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00009C, "Member 'BP_AIControllerNpc_C_StartTalk::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

}


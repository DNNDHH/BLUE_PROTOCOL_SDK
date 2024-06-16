#pragma once

 

// Package: AB_CharaCreateAnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ChangeState__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature) == 0x000020, "Wrong size on AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature, InPrevStateName) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature::InPrevStateName' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature, InNextStateName) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature::InNextStateName' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ExecuteUbergraph_AB_CharaCreateAnimBlueprint
// 0x0048 (0x0048 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B0A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_PreviousStateName;                    // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_NextStateName;                        // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B0B[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHeelLength_ReturnValue;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint) == 0x000048, "Wrong size on AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, EntryPoint) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, CallFunc_Montage_Play_ReturnValue) == 0x000008, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, K2Node_Event_PreviousStateName) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::K2Node_Event_PreviousStateName' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, K2Node_Event_NextStateName) == 0x000020, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::K2Node_Event_NextStateName' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000030, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint, CallFunc_GetHeelLength_ReturnValue) == 0x000044, "Member 'AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint::CallFunc_GetHeelLength_ReturnValue' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ReceiveStateChange
// 0x0020 (0x0020 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_ReceiveStateChange final
{
public:
	class FString                                 PreviousStateName;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Param_NextStateName;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_ReceiveStateChange) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_ReceiveStateChange");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_ReceiveStateChange) == 0x000020, "Wrong size on AB_CharaCreateAnimBlueprint_C_ReceiveStateChange");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ReceiveStateChange, PreviousStateName) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_ReceiveStateChange::PreviousStateName' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_ReceiveStateChange, Param_NextStateName) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_ReceiveStateChange::Param_NextStateName' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UpdateCharacterVariablesBp
// 0x0090 (0x0090 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingRightDelta;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingUpDelta;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B0C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMovementComponent*             PlayerMovement;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCrouching_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClimbing_ReturnValue;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B0D[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B0E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B0F[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMovementComponent*             K2Node_DynamicCast_AsSBPlayer_Movement_Component;  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp) == 0x000090, "Wrong size on AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, DeltaTime) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::DeltaTime' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, ClimbingRightDelta) == 0x000004, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::ClimbingRightDelta' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, ClimbingUpDelta) == 0x000008, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::ClimbingUpDelta' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, PlayerCharacter) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, PlayerMovement) == 0x000018, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::PlayerMovement' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000024, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BreakVector2D_X) == 0x00002C, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000034, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x00003C, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsCrouching_ReturnValue) == 0x000044, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsClimbing_ReturnValue) == 0x000045, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsClimbing_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue) == 0x000046, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_1) == 0x000047, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000048, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000058, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000068, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_3) == 0x000070, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_GetMovementComponent_ReturnValue) == 0x000078, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_AsSBPlayer_Movement_Component) == 0x000080, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_AsSBPlayer_Movement_Component' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.SetupAnimationSet
// 0x0120 (0x0120 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_SetupAnimationSet final
{
public:
	TArray<class FString>                         SkillStateNames;                                   // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class UASAnimationSet*>                AnimationSets;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           Tags;                                              // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	TArray<class UASAnimationSet*>                K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_MakeArray_Array_2;                          // 0x0078(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_10;                              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UASAnimationSet*>                K2Node_MakeArray_Array_3;                          // 0x0090(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_12;                              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UASAnimationSet*>                K2Node_MakeArray_Array_4;                          // 0x00A8(0x0010)(ReferenceParm)
	TArray<class UASAnimationSet*>                K2Node_MakeArray_Array_5;                          // 0x00B8(0x0010)(ReferenceParm)
	ECharaPartsBody                               Temp_byte_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B10[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B11[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture;     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B12[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B13[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B14[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_SetupAnimationSet");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet) == 0x000120, "Wrong size on AB_CharaCreateAnimBlueprint_C_SetupAnimationSet");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, SkillStateNames) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::SkillStateNames' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, AnimationSets) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::AnimationSets' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Tags) == 0x000020, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Tags' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable) == 0x000030, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_1) == 0x000034, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_2) == 0x000038, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_3) == 0x00003C, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_4) == 0x000040, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_5) == 0x000044, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_6) == 0x000048, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_7) == 0x00004C, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_8) == 0x000050, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_9) == 0x000054, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array) == 0x000058, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_1) == 0x000068, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_2) == 0x000078, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_10) == 0x000088, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_11) == 0x00008C, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_3) == 0x000090, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_int_Variable_12) == 0x0000A0, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_4) == 0x0000A8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_5) == 0x0000B8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, Temp_byte_Variable) == 0x0000C8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, CallFunc_GetOwningActor_ReturnValue) == 0x0000D0, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_AsSBCreation_Character) == 0x0000D8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_AsBP_Mannequin_for_Capture) == 0x0000E8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_AsBP_Mannequin_for_Capture' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_Select_Default) == 0x0000F4, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Get_Item) == 0x000100, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, CallFunc_Greater_IntInt_ReturnValue) == 0x000108, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000110, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'AB_CharaCreateAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.InitCopyPose
// 0x0018 (0x0018 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_InitCopyPose final
{
public:
	class USkeletalMeshComponent*                 SourceCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B15[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_InitCopyPose) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_InitCopyPose");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_InitCopyPose) == 0x000018, "Wrong size on AB_CharaCreateAnimBlueprint_C_InitCopyPose");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_InitCopyPose, SourceCharacter) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_InitCopyPose::SourceCharacter' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_InitCopyPose, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'AB_CharaCreateAnimBlueprint_C_InitCopyPose::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_InitCopyPose, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'AB_CharaCreateAnimBlueprint_C_InitCopyPose::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_CharaCreateAnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_CharaCreateAnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on AB_CharaCreateAnimBlueprint_C_AnimGraph");
static_assert(sizeof(AB_CharaCreateAnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on AB_CharaCreateAnimBlueprint_C_AnimGraph");
static_assert(offsetof(AB_CharaCreateAnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_CharaCreateAnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}


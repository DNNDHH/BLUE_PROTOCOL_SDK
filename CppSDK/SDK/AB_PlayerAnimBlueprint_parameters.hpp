#pragma once

 

// Package: AB_PlayerAnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBAnimNode_structs.hpp"


namespace SDK::Params
{

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ChangeState__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature final
{
public:
	class FName                                   Previous;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Now;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature) == 0x000004, "Wrong alignment on AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature) == 0x000010, "Wrong size on AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature, Previous) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature::Previous' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature, Now) == 0x000008, "Member 'AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature::Now' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ExecuteUbergraph_AB_PlayerAnimBlueprint
// 0x00E8 (0x00E8 - 0x0000)
struct AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_PreviousStateName;                    // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_NextStateName;                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6B[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Yaw;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D6C[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHeelLength_ReturnValue;                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsHandIkActiveForMount_ReturnValue;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTag_ReturnValue;                   // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6E[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMount*                               CallFunc_GetImagineMount_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6F[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBLimbIKUpdateParam                   K2Node_MakeStruct_SBLimbIKUpdateParam;             // 0x0090(0x0010)(NoDestructor)
	bool                                          CallFunc_GetScriptActorFastForwardFlag_ReturnValue; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D70[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLimbIKUpdateParam                   K2Node_Select_Default;                             // 0x00A4(0x0010)(NoDestructor)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D71[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLimbIKUpdateParam                   K2Node_Select_Default_1;                           // 0x00B8(0x0010)(NoDestructor)
	struct FSBLimbIKUpdateParam                   K2Node_Select_Default_2;                           // 0x00C8(0x0010)(NoDestructor)
	struct FSBLimbIKUpdateParam                   K2Node_Select_Default_3;                           // 0x00D8(0x0010)(NoDestructor)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint) == 0x000008, "Wrong alignment on AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint) == 0x0000E8, "Wrong size on AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, EntryPoint) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_int_Array_Index_Variable) == 0x000004, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_bool_Variable) == 0x000008, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_bool_Variable_1) == 0x000009, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_bool_Variable_2) == 0x00000A, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_bool_Variable_3) == 0x00000B, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Event_DeltaTimeX) == 0x00000C, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Event_PreviousStateName) == 0x000018, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Event_PreviousStateName' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Event_NextStateName) == 0x000028, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Event_NextStateName' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_Array_Get_Item) == 0x000038, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_HasTag_ReturnValue) == 0x000044, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_CustomEvent_Yaw) == 0x000048, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_CustomEvent_Yaw' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000050, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000060, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_GetHeelLength_ReturnValue) == 0x00006C, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_GetHeelLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_GetIsHandIkActiveForMount_ReturnValue) == 0x000070, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_GetIsHandIkActiveForMount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_HasAnimTag_ReturnValue) == 0x000072, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_HasAnimTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_GetImagineMount_ReturnValue) == 0x000078, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_GetImagineMount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_IsValid_ReturnValue_2) == 0x00008C, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, Temp_bool_True_if_break_was_hit_Variable) == 0x00008D, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_Not_PreBool_ReturnValue) == 0x00008E, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_BooleanAND_ReturnValue) == 0x00008F, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_MakeStruct_SBLimbIKUpdateParam) == 0x000090, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_MakeStruct_SBLimbIKUpdateParam' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_GetScriptActorFastForwardFlag_ReturnValue) == 0x0000A0, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_GetScriptActorFastForwardFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Select_Default) == 0x0000A4, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, CallFunc_SetTemporaryBool_ReturnValue) == 0x0000B4, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::CallFunc_SetTemporaryBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Select_Default_1) == 0x0000B8, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Select_Default_2) == 0x0000C8, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint, K2Node_Select_Default_3) == 0x0000D8, "Member 'AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint::K2Node_Select_Default_3' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_MeshYaw
// 0x0004 (0x0004 - 0x0000)
struct AB_PlayerAnimBlueprint_C_Set_MeshYaw final
{
public:
	float                                         Yaw;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_Set_MeshYaw) == 0x000004, "Wrong alignment on AB_PlayerAnimBlueprint_C_Set_MeshYaw");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_Set_MeshYaw) == 0x000004, "Wrong size on AB_PlayerAnimBlueprint_C_Set_MeshYaw");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_Set_MeshYaw, Yaw) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_Set_MeshYaw::Yaw' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ReceiveStateChange
// 0x0020 (0x0020 - 0x0000)
struct AB_PlayerAnimBlueprint_C_ReceiveStateChange final
{
public:
	class FString                                 PreviousStateName;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NextStateName;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_ReceiveStateChange) == 0x000008, "Wrong alignment on AB_PlayerAnimBlueprint_C_ReceiveStateChange");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_ReceiveStateChange) == 0x000020, "Wrong size on AB_PlayerAnimBlueprint_C_ReceiveStateChange");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ReceiveStateChange, PreviousStateName) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_ReceiveStateChange::PreviousStateName' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_ReceiveStateChange, NextStateName) == 0x000010, "Member 'AB_PlayerAnimBlueprint_C_ReceiveStateChange::NextStateName' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateCharacterVariablesBp
// 0x00A8 (0x00A8 - 0x0000)
struct AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D72[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMovementComponent*             PlayerMovement;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D73[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMovementComponent*             K2Node_DynamicCast_AsSBPlayer_Movement_Component;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D74[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D75[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D76[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D77[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSwimming_ReturnValue;                   // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D78[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWalking_ReturnValue;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D79[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D7A[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp) == 0x000008, "Wrong alignment on AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp) == 0x0000A8, "Wrong size on AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, DeltaTime) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::DeltaTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, NewLocalVar_0) == 0x000004, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, PlayerCharacter) == 0x000008, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, PlayerMovement) == 0x000010, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::PlayerMovement' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00001C, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_GetMovementComponent_ReturnValue) == 0x000028, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_AsSBPlayer_Movement_Component) == 0x000030, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_AsSBPlayer_Movement_Component' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000044, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BooleanAND_ReturnValue) == 0x000045, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BooleanAND_ReturnValue_1) == 0x000046, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Add_FloatFloat_ReturnValue) == 0x000048, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000050, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00005C, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00005D, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000064, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsSwimming_ReturnValue) == 0x00006C, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000070, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000078, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsFalling_ReturnValue) == 0x000080, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsWalking_ReturnValue) == 0x000081, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsWalking_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000084, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_2) == 0x000091, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_IsValid_ReturnValue_3) == 0x000092, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, CallFunc_BooleanAND_ReturnValue_2) == 0x000093, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000098, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.SetupAnimationSet
// 0x0190 (0x0190 - 0x0000)
struct AB_PlayerAnimBlueprint_C_SetupAnimationSet final
{
public:
	TArray<class FString>                         SkillStateNames;                                   // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D7B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D7C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D7D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D7E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x0048(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D7F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array_2;                          // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D80[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array_3;                          // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D81[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESkillActionPosition>                  K2Node_MakeArray_Array_4;                          // 0x0098(0x0010)(ReferenceParm)
	ESkillActionPosition                          CallFunc_Array_Get_Item;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          CallFunc_Array_Get_Item_1;                         // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          CallFunc_Array_Get_Item_2;                         // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D82[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D83[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D84[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D85[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D86[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D87[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetStateMachine_ReturnValue;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_ReturnValue;                 // 0x00F0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D88[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        CallFunc_GetOverideAnimSetForAimOffsetSM_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D89[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetAimOffsetStateMachine_ReturnValue;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8A[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_ReturnValue_1;               // 0x0120(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_ReturnValue_2;               // 0x0128(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        CallFunc_GetOverideAnimSetForMainSM_ReturnValue;   // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8C[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetSkillStateMachine_ReturnValue;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8D[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetAimBodyStateMachine_ReturnValue;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        CallFunc_GetAdditiveLocalSpaceStateMachine_ReturnValue; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8E[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        CallFunc_GetAdditiveMeshSpaceStateMachine_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        CallFunc_GetAimOffsetStateMachine_ReturnValue_1;   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        CallFunc_GetAimStateMachine_ReturnValue;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        CallFunc_GetAnimationSet_ReturnValue;              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_SetupAnimationSet) == 0x000008, "Wrong alignment on AB_PlayerAnimBlueprint_C_SetupAnimationSet");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_SetupAnimationSet) == 0x000190, "Wrong size on AB_PlayerAnimBlueprint_C_SetupAnimationSet");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, SkillStateNames) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::SkillStateNames' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Array_Index_Variable) == 0x000018, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_2) == 0x00002C, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_3) == 0x00002D, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array) == 0x000030, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Array_Index_Variable_1) == 0x000040, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_1) == 0x000048, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Array_Index_Variable_2) == 0x000058, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_2) == 0x000068, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_3) == 0x000080, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue_2) == 0x000090, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue_2) == 0x000094, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_MakeArray_Array_4) == 0x000098, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Get_Item_1) == 0x0000A9, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Get_Item_2) == 0x0000AA, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue_3) == 0x0000AC, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue_4) == 0x0000B0, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue_3) == 0x0000B4, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Array_Length_ReturnValue_5) == 0x0000B8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue_4) == 0x0000BC, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, Temp_int_Loop_Counter_Variable_2) == 0x0000C0, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Less_IntInt_ReturnValue_5) == 0x0000C4, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetOwningActor_ReturnValue) == 0x0000D0, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000D8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetStateMachine_ReturnValue) == 0x0000E8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetSkillInfo_ReturnValue) == 0x0000F0, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetSkillInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_4) == 0x0000F8, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetOverideAnimSetForAimOffsetSM_ReturnValue) == 0x000100, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetOverideAnimSetForAimOffsetSM_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_5) == 0x000108, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_6) == 0x000109, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAimOffsetStateMachine_ReturnValue) == 0x000110, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAimOffsetStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_7) == 0x000118, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetSkillInfo_ReturnValue_1) == 0x000120, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetSkillInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetSkillInfo_ReturnValue_2) == 0x000128, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetSkillInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_8) == 0x000130, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetOverideAnimSetForMainSM_ReturnValue) == 0x000138, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetOverideAnimSetForMainSM_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_9) == 0x000140, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_10) == 0x000141, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetSkillStateMachine_ReturnValue) == 0x000148, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetSkillStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_11) == 0x000150, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAimBodyStateMachine_ReturnValue) == 0x000158, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAimBodyStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAdditiveLocalSpaceStateMachine_ReturnValue) == 0x000160, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAdditiveLocalSpaceStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_IsValid_ReturnValue_12) == 0x000168, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAdditiveMeshSpaceStateMachine_ReturnValue) == 0x000170, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAdditiveMeshSpaceStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAimOffsetStateMachine_ReturnValue_1) == 0x000178, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAimOffsetStateMachine_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAimStateMachine_ReturnValue) == 0x000180, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAimStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_SetupAnimationSet, CallFunc_GetAnimationSet_ReturnValue) == 0x000188, "Member 'AB_PlayerAnimBlueprint_C_SetupAnimationSet::CallFunc_GetAnimationSet_ReturnValue' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateMountIKParam
// 0x0260 (0x0260 - 0x0000)
struct AB_PlayerAnimBlueprint_C_UpdateMountIKParam final
{
public:
	class ASBMount*                               Mount;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMountIKParam                        CallFunc_GetIKParam_ReturnValue;                   // 0x0010(0x0030)(NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D8F[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;         // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue_1;     // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLimbIKUpdateParam                   K2Node_MakeStruct_SBLimbIKUpdateParam;             // 0x0138(0x0010)(NoDestructor)
	struct FSBLimbIKUpdateParam                   K2Node_MakeStruct_SBLimbIKUpdateParam_1;           // 0x0148(0x0010)(NoDestructor)
	uint8                                         Pad_1D90[0x8];                                     // 0x0158(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_2;         // 0x0160(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_3;         // 0x0190(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_3;                // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_3;                // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_3;                   // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_3;      // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue_2;     // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue_3;     // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLimbIKUpdateParam                   K2Node_MakeStruct_SBLimbIKUpdateParam_2;           // 0x0238(0x0010)(NoDestructor)
	struct FSBLimbIKUpdateParam                   K2Node_MakeStruct_SBLimbIKUpdateParam_3;           // 0x0248(0x0010)(NoDestructor)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam) == 0x000010, "Wrong alignment on AB_PlayerAnimBlueprint_C_UpdateMountIKParam");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam) == 0x000260, "Wrong size on AB_PlayerAnimBlueprint_C_UpdateMountIKParam");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, Mount) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::Mount' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, Player) == 0x000008, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::Player' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_GetIKParam_ReturnValue) == 0x000010, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_GetIKParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000040, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00004C, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_GetSocketTransform_ReturnValue_1) == 0x000090, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Location) == 0x0000C0, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Rotation) == 0x0000CC, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Scale) == 0x0000D8, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Location_1) == 0x0000E4, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Rotation_1) == 0x0000F0, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Scale_1) == 0x0000FC, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000108, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000114, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000120, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_LessLess_VectorRotator_ReturnValue_1) == 0x00012C, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_LessLess_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, K2Node_MakeStruct_SBLimbIKUpdateParam) == 0x000138, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::K2Node_MakeStruct_SBLimbIKUpdateParam' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, K2Node_MakeStruct_SBLimbIKUpdateParam_1) == 0x000148, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::K2Node_MakeStruct_SBLimbIKUpdateParam_1' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_GetSocketTransform_ReturnValue_2) == 0x000160, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_GetSocketTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_GetSocketTransform_ReturnValue_3) == 0x000190, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_GetSocketTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Location_2) == 0x0001C0, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Rotation_2) == 0x0001CC, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Scale_2) == 0x0001D8, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Location_3) == 0x0001E4, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Location_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Rotation_3) == 0x0001F0, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Rotation_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_BreakTransform_Scale_3) == 0x0001FC, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_BreakTransform_Scale_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000208, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_Subtract_VectorVector_ReturnValue_3) == 0x000214, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_Subtract_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_LessLess_VectorRotator_ReturnValue_2) == 0x000220, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_LessLess_VectorRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, CallFunc_LessLess_VectorRotator_ReturnValue_3) == 0x00022C, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::CallFunc_LessLess_VectorRotator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, K2Node_MakeStruct_SBLimbIKUpdateParam_2) == 0x000238, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::K2Node_MakeStruct_SBLimbIKUpdateParam_2' has a wrong offset!");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_UpdateMountIKParam, K2Node_MakeStruct_SBLimbIKUpdateParam_3) == 0x000248, "Member 'AB_PlayerAnimBlueprint_C_UpdateMountIKParam::K2Node_MakeStruct_SBLimbIKUpdateParam_3' has a wrong offset!");

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_PlayerAnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_PlayerAnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on AB_PlayerAnimBlueprint_C_AnimGraph");
static_assert(sizeof(AB_PlayerAnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on AB_PlayerAnimBlueprint_C_AnimGraph");
static_assert(offsetof(AB_PlayerAnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_PlayerAnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}


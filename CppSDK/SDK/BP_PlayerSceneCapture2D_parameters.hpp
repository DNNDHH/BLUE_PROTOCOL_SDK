#pragma once

 

// Package: BP_PlayerSceneCapture2D

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature) == 0x000020, "Wrong size on BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature, InPrevStateName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature::InPrevStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature, InNextStateName) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature::InNextStateName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon__DelegateSignature
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature final
{
public:
	bool                                          bIsShowWeapon;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bIsCheckSheathe;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsCopyAnimation;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature) == 0x000003, "Wrong size on BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature, bIsShowWeapon) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature::bIsShowWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature, Param_bIsCheckSheathe) == 0x000001, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature::Param_bIsCheckSheathe' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature, bIsCopyAnimation) == 0x000002, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature::bIsCopyAnimation' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ExecuteUbergraph_BP_PlayerSceneCapture2D
// 0x00C8 (0x00C8 - 0x0000)
struct BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE8[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShowWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InPrevStateName;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAB_CharaCreateAnimBlueprint_C*         K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE9[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_CharaCreateAnimBlueprint_C*         K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint_1; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9CEA[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorVisibilityComponent*            CallFunc_GetActorVisibilityComponent_ReturnValue;  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShowWeapon;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsCheckSheathe;                // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsCopyAnimation;               // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bShow;                                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CEB[0x1];                                     // 0x00AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D) == 0x0000C8, "Wrong size on BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, EntryPoint) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsLocallyControlled_ReturnValue) == 0x000012, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsValid_ReturnValue_1) == 0x000014, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CustomEvent_InPrevStateName) == 0x000030, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CustomEvent_InPrevStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CustomEvent_InNextStateName) == 0x000040, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CustomEvent_InNextStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint) == 0x000050, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_Event_EndPlayReason) == 0x000059, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x00005A, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsValid_ReturnValue_2) == 0x00005B, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_Not_PreBool_ReturnValue_1) == 0x00005C, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetAnimInstance_ReturnValue_1) == 0x000060, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000068, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint_1) == 0x000070, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsValid_ReturnValue_3) == 0x000079, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00007A, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_BooleanAND_ReturnValue_1) == 0x00007B, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CreateDelegate_OutputDelegate_2) == 0x00008C, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetActorVisibilityComponent_ReturnValue) == 0x0000A0, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetActorVisibilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_IsValid_ReturnValue_4) == 0x0000A8, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CustomEvent_bIsShowWeapon) == 0x0000A9, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CustomEvent_bIsShowWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CustomEvent_bIsCheckSheathe) == 0x0000AA, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CustomEvent_bIsCheckSheathe' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_CustomEvent_bIsCopyAnimation) == 0x0000AB, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_CustomEvent_bIsCopyAnimation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, K2Node_Event_bShow) == 0x0000AC, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000AD, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetDebugFunction_IsValid) == 0x0000AE, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetDebugFunction_ReturnValue) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_MakeLiteralName_ReturnValue) == 0x0000B8, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_GetBool_ReturnValue) == 0x0000C0, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000C1, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C2, "Member 'BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ShowWeapon_Debug
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_C_ShowWeapon_Debug final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_ShowWeapon_Debug) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_ShowWeapon_Debug");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_ShowWeapon_Debug) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_C_ShowWeapon_Debug");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ShowWeapon_Debug, bShow) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_ShowWeapon_Debug::bShow' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon_Event
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event final
{
public:
	bool                                          bIsShowWeapon;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bIsCheckSheathe;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsCopyAnimation;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event) == 0x000003, "Wrong size on BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event, bIsShowWeapon) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event::bIsShowWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event, Param_bIsCheckSheathe) == 0x000001, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event::Param_bIsCheckSheathe' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event, bIsCopyAnimation) == 0x000002, "Member 'BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event::bIsCopyAnimation' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState_����
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSceneCapture2D_C_OnChangeState_____ final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_OnChangeState_____) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_OnChangeState_____");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_OnChangeState_____) == 0x000020, "Wrong size on BP_PlayerSceneCapture2D_C_OnChangeState_____");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_OnChangeState_____, InPrevStateName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_OnChangeState_____::InPrevStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_OnChangeState_____, InNextStateName) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_OnChangeState_____::InNextStateName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatar
// 0x03C8 (0x03C8 - 0x0000)
struct BP_PlayerSceneCapture2D_C_UpdateAvatar final
{
public:
	struct FSBCharaCreateParameter                InNewCharaCreateParameter;                         // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ASBCreationCharacter*                   TmpCreationCharacter;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_UpdateAvatar) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_UpdateAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_UpdateAvatar) == 0x0003C8, "Wrong size on BP_PlayerSceneCapture2D_C_UpdateAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatar, InNewCharaCreateParameter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatar::InNewCharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatar, TmpCreationCharacter) == 0x0003C0, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatar::TmpCreationCharacter' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatarFromPlayerCharacter
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_PlayerSceneCapture2D_C_UpdateAvatarFromPlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.RefreshAvatar
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerSceneCapture2D_C_RefreshAvatar final
{
public:
	class ASBCreationCharacter*                   TmpCreationCharacter;                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_RefreshAvatar) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_RefreshAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_RefreshAvatar) == 0x000008, "Wrong size on BP_PlayerSceneCapture2D_C_RefreshAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_RefreshAvatar, TmpCreationCharacter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_RefreshAvatar::TmpCreationCharacter' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetCurrentAvatarPosingAnimStateName
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName final
{
public:
	class FString                                 OutAnimStateName;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName, OutAnimStateName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName::OutAnimStateName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Machine Name
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_C_Get_State_Machine_Name final
{
public:
	class FString                                 OutName;                                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_Get_State_Machine_Name) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_Get_State_Machine_Name");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_Get_State_Machine_Name) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_C_Get_State_Machine_Name");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Machine_Name, OutName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Machine_Name::OutName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Name
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerSceneCapture2D_C_Get_State_Name final
{
public:
	int32                                         InStateNameNo;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CEC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutStateName;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpNo;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CED[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_Get_State_Name) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_Get_State_Name");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_Get_State_Name) == 0x000028, "Wrong size on BP_PlayerSceneCapture2D_C_Get_State_Name");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, InStateNameNo) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::InStateNameNo' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, IsValid) == 0x000004, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, OutStateName) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::OutStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, TmpNo) == 0x000018, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::TmpNo' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_State_Name, CallFunc_BooleanAND_ReturnValue) == 0x000025, "Member 'BP_PlayerSceneCapture2D_C_Get_State_Name::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetStateNum
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerSceneCapture2D_C_GetStateNum final
{
public:
	int32                                         OutNum;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_GetStateNum) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_C_GetStateNum");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_GetStateNum) == 0x000008, "Wrong size on BP_PlayerSceneCapture2D_C_GetStateNum");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_GetStateNum, OutNum) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_GetStateNum::OutNum' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_GetStateNum, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_PlayerSceneCapture2D_C_GetStateNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.FindStateName
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_C_FindStateName final
{
public:
	class FString                                 InStateName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutNo;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_FindStateName) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_FindStateName");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_FindStateName) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_C_FindStateName");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_FindStateName, InStateName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_FindStateName::InStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_FindStateName, OutNo) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_FindStateName::OutNo' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_FindStateName, CallFunc_Array_Find_ReturnValue) == 0x000014, "Member 'BP_PlayerSceneCapture2D_C_FindStateName::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetIsAvatarNaked
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetIsAvatarNaked final
{
public:
	bool                                          InIsNaked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetIsAvatarNaked) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetIsAvatarNaked");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetIsAvatarNaked) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_C_SetIsAvatarNaked");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetIsAvatarNaked, InIsNaked) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetIsAvatarNaked::InIsNaked' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsData
// 0x0088 (0x0088 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetCostumePartsData final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetCostumePartsData) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetCostumePartsData");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetCostumePartsData) == 0x000088, "Wrong size on BP_PlayerSceneCapture2D_C_SetCostumePartsData");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsData, CostumeData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsData::CostumeData' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataByUniqueId
// 0x0320 (0x0320 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemData;                                       // 0x0098(0x0118)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CEE[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CEF[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItemByAllStorage_bOutExist;        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF0[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItemByAllStorage_ReturnValue;      // 0x0208(0x0118)()
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId) == 0x000320, "Wrong size on BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CostumeData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CostumeData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, InUniqueId) == 0x000088, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, OwnItemData) == 0x000098, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::OwnItemData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, K2Node_MakeArray_Array) == 0x0001B0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_IsEmpty_ReturnValue) == 0x0001C8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001D0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_GetDisplayName_ReturnValue) == 0x0001D8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_GetNetworkDataCache_IsValid) == 0x0001E8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0001F0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_GetOwnItemList_ReturnValue) == 0x0001F8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_BP_FindItemByAllStorage_bOutExist) == 0x000200, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_BP_FindItemByAllStorage_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId, CallFunc_BP_FindItemByAllStorage_ReturnValue) == 0x000208, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId::CallFunc_BP_FindItemByAllStorage_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataMain
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ColorIndex;                                        // 0x0088(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorSaturation;                                   // 0x008C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorValue;                                        // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaterialIndex;                                   // 0x0094(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           TempCharaPartsLocation;                            // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CF1[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProtectorCategoryToCharaPartsLocation_OutIsValid; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_ProtectorCategoryToCharaPartsLocation_OutCharaPartsLocation; // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CF2[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain) == 0x0000E8, "Wrong size on BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CostumeData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CostumeData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, ColorIndex) == 0x000088, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::ColorIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, ColorSaturation) == 0x00008C, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::ColorSaturation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, ColorValue) == 0x000090, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::ColorValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, InMaterialIndex) == 0x000094, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::InMaterialIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, TempCharaPartsLocation) == 0x000098, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::TempCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, K2Node_MakeArray_Array) == 0x0000A0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000C0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_ProtectorCategoryToCharaPartsLocation_OutIsValid) == 0x0000C8, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_ProtectorCategoryToCharaPartsLocation_OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_ProtectorCategoryToCharaPartsLocation_OutCharaPartsLocation) == 0x0000C9, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_ProtectorCategoryToCharaPartsLocation_OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_GetDisplayName_ReturnValue) == 0x0000D0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_IsEmpty_ReturnValue) == 0x0000E0, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E1, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_IsValid_ReturnValue) == 0x0000E2, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_IsValid_ReturnValue_1) == 0x0000E3, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E4, "Member 'BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCharaCreateParameterOnly
// 0x03C0 (0x03C0 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly final
{
public:
	struct FSBCharaCreateParameter                Param_CharaCreateParameter;                        // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly) == 0x0003C0, "Wrong size on BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly, Param_CharaCreateParameter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly::Param_CharaCreateParameter' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get Fidget State Name
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutStateName;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name, IsValid) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name::IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name, OutStateName) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name::OutStateName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateWeapon
// 0x0220 (0x0220 - 0x0000)
struct BP_PlayerSceneCapture2D_C_UpdateWeapon final
{
public:
	struct FSBWeaponAttach                        AttachData;                                        // 0x0000(0x0028)(Edit, BlueprintVisible, NoDestructor)
	class ASBPlayerCharacter*                     WorkPc;                                            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CF4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaPartsComponent*                 Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF5[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSheathe_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSheathe_ReturnValue_1;                  // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF6[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetWeaponAttachPoint_ReturnValue;         // 0x0050(0x0010)(ReferenceParm)
	TArray<struct FSBInventoryWeapon>             CallFunc_GetInventoryWeapons_ReturnValue;          // 0x0060(0x0010)(ReferenceParm)
	TArray<struct FSBEquipWeapon>                 CallFunc_GetEquipWeapons_ReturnValue;              // 0x0070(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF7[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEquipWeapon                         CallFunc_Array_Get_Item;                           // 0x0084(0x002C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF8[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponAttach                        K2Node_Select_Default;                             // 0x00BC(0x0028)(NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CF9[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponAttach                        K2Node_Select_Default_1;                           // 0x00E8(0x0028)(NoDestructor)
	class USBCharaPartsComponent*                 K2Node_Select_Default_2;                           // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CFA[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CFB[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CFC[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCreationCharacter*                   K2Node_Select_Default_3;                           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCustomWeaponScale_ReturnValue;         // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CFD[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0150(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0180(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_Select_Default_4;                           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_UpdateWeapon) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_C_UpdateWeapon");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_UpdateWeapon) == 0x000220, "Wrong size on BP_PlayerSceneCapture2D_C_UpdateWeapon");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, AttachData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::AttachData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, WorkPc) == 0x000028, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::WorkPc' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_object_Variable) == 0x000038, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_int_Variable) == 0x000044, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_IsSheathe_ReturnValue) == 0x000048, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_IsSheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_IsSheathe_ReturnValue_1) == 0x00004B, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_IsSheathe_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_IsValid_ReturnValue_1) == 0x00004C, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_GetWeaponAttachPoint_ReturnValue) == 0x000050, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_GetWeaponAttachPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_GetInventoryWeapons_ReturnValue) == 0x000060, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_GetInventoryWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_GetEquipWeapons_ReturnValue) == 0x000070, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_GetEquipWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_bool_Variable) == 0x000080, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Array_Get_Item) == 0x000084, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000B4, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B5, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B6, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_bool_Variable_1) == 0x0000B7, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_BooleanOR_ReturnValue) == 0x0000B8, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, K2Node_Select_Default) == 0x0000BC, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_bool_Variable_2) == 0x0000E4, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, K2Node_Select_Default_1) == 0x0000E8, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, K2Node_Select_Default_2) == 0x000110, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_IsValid_ReturnValue_2) == 0x000118, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_int_Loop_Counter_Variable) == 0x00011C, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000120, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000124, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, Temp_bool_Variable_3) == 0x000128, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, K2Node_Select_Default_3) == 0x000130, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000138, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_GetCustomWeaponScale_ReturnValue) == 0x00013C, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_GetCustomWeaponScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000140, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00014C, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_MakeTransform_ReturnValue) == 0x000150, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000180, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000208, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UpdateWeapon, K2Node_Select_Default_4) == 0x000210, "Member 'BP_PlayerSceneCapture2D_C_UpdateWeapon::K2Node_Select_Default_4' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Show Weapon
// 0x0006 (0x0006 - 0x0000)
struct BP_PlayerSceneCapture2D_C_Show_Weapon final
{
public:
	bool                                          Param_bIsViewWeapon;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bIsCheckSheathe;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsCopyAnimation;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_Show_Weapon) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_Show_Weapon");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_Show_Weapon) == 0x000006, "Wrong size on BP_PlayerSceneCapture2D_C_Show_Weapon");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, Param_bIsViewWeapon) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::Param_bIsViewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, Param_bIsCheckSheathe) == 0x000001, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::Param_bIsCheckSheathe' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, bIsCopyAnimation) == 0x000002, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::bIsCopyAnimation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000004, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_Show_Weapon, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'BP_PlayerSceneCapture2D_C_Show_Weapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitPhotoMode
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PlayerSceneCapture2D_C_InitPhotoMode final
{
public:
	class ASBPlayerCharacter*                     Param_BasePlayerCharacter;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CFE[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetUnscaledCapsuleSize_OutRadius;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0048(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_InitPhotoMode) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_C_InitPhotoMode");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_InitPhotoMode) == 0x0000D0, "Wrong size on BP_PlayerSceneCapture2D_C_InitPhotoMode");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitPhotoMode, Param_BasePlayerCharacter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_InitPhotoMode::Param_BasePlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitPhotoMode, CallFunc_GetRelativeTransform_ReturnValue) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_InitPhotoMode::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitPhotoMode, CallFunc_GetUnscaledCapsuleSize_OutRadius) == 0x000040, "Member 'BP_PlayerSceneCapture2D_C_InitPhotoMode::CallFunc_GetUnscaledCapsuleSize_OutRadius' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitPhotoMode, CallFunc_GetUnscaledCapsuleSize_OutHalfHeight) == 0x000044, "Member 'BP_PlayerSceneCapture2D_C_InitPhotoMode::CallFunc_GetUnscaledCapsuleSize_OutHalfHeight' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitPhotoMode, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000048, "Member 'BP_PlayerSceneCapture2D_C_InitPhotoMode::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitCopyPose
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSceneCapture2D_C_InitCopyPose final
{
public:
	class USkeletalMeshComponent*                 SourceCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_CharaCreateAnimBlueprint_C*         K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_InitCopyPose) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_InitCopyPose");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_InitCopyPose) == 0x000020, "Wrong size on BP_PlayerSceneCapture2D_C_InitCopyPose");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitCopyPose, SourceCharacter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_InitCopyPose::SourceCharacter' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitCopyPose, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_InitCopyPose::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitCopyPose, K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_InitCopyPose::K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_InitCopyPose, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerSceneCapture2D_C_InitCopyPose::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UnuseCopyPose
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_C_UnuseCopyPose final
{
public:
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_CharaCreateAnimBlueprint_C*         K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_UnuseCopyPose) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_UnuseCopyPose");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_UnuseCopyPose) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_C_UnuseCopyPose");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UnuseCopyPose, CallFunc_GetAnimInstance_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_UnuseCopyPose::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UnuseCopyPose, K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint) == 0x000008, "Member 'BP_PlayerSceneCapture2D_C_UnuseCopyPose::K2Node_DynamicCast_AsAB_Chara_Create_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_UnuseCopyPose, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_UnuseCopyPose::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetExtraCharaPartsComponentList
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList final
{
public:
	TArray<class USBCharaPartsComponent*>         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class USBCharaPartsComponent*>         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList) == 0x000020, "Wrong size on BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList, ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetFacialType
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_C_SetFacialType final
{
public:
	ESBFacialType                                 InFacialType;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_C_SetFacialType) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_C_SetFacialType");
static_assert(sizeof(BP_PlayerSceneCapture2D_C_SetFacialType) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_C_SetFacialType");
static_assert(offsetof(BP_PlayerSceneCapture2D_C_SetFacialType, InFacialType) == 0x000000, "Member 'BP_PlayerSceneCapture2D_C_SetFacialType::InFacialType' has a wrong offset!");

}


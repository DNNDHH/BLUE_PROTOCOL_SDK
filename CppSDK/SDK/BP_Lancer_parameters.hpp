#pragma once

 

// Package: BP_Lancer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_Lancer.BP_Lancer_C.ExecuteUbergraph_BP_Lancer
// 0x000C (0x000C - 0x0000)
struct BP_Lancer_C_ExecuteUbergraph_BP_Lancer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponEquipType                            K2Node_Event_EquipType;                            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer) == 0x000004, "Wrong alignment on BP_Lancer_C_ExecuteUbergraph_BP_Lancer");
static_assert(sizeof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer) == 0x00000C, "Wrong size on BP_Lancer_C_ExecuteUbergraph_BP_Lancer");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, EntryPoint) == 0x000000, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, K2Node_Event_EquipType) == 0x000005, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::K2Node_Event_EquipType' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, K2Node_SwitchEnum_CmpSuccess) == 0x000006, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, CallFunc_IsValid_ReturnValue_2) == 0x000008, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_ExecuteUbergraph_BP_Lancer, CallFunc_IsValid_ReturnValue_3) == 0x000009, "Member 'BP_Lancer_C_ExecuteUbergraph_BP_Lancer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_Lancer.BP_Lancer_C.UnSheathe
// 0x0001 (0x0001 - 0x0000)
struct BP_Lancer_C_UnSheathe final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lancer_C_UnSheathe) == 0x000001, "Wrong alignment on BP_Lancer_C_UnSheathe");
static_assert(sizeof(BP_Lancer_C_UnSheathe) == 0x000001, "Wrong size on BP_Lancer_C_UnSheathe");
static_assert(offsetof(BP_Lancer_C_UnSheathe, EquipType) == 0x000000, "Member 'BP_Lancer_C_UnSheathe::EquipType' has a wrong offset!");

// Function BP_Lancer.BP_Lancer_C.CreateHUD
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Lancer_C_CreateHUD final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F4B[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F4C[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_2;                            // 0x0080(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F4D[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_P020HUDComponent_C*                 CallFunc_AddComponent_ReturnValue;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F4E[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonBattleHudComponent_C*            CallFunc_AddComponent_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F4F[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerAimHUDComponent_C*            CallFunc_AddComponent_ReturnValue_2;               // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lancer_C_CreateHUD) == 0x000010, "Wrong alignment on BP_Lancer_C_CreateHUD");
static_assert(sizeof(BP_Lancer_C_CreateHUD) == 0x0000E0, "Wrong size on BP_Lancer_C_CreateHUD");
static_assert(offsetof(BP_Lancer_C_CreateHUD, Temp_struct_Variable) == 0x000000, "Member 'BP_Lancer_C_CreateHUD::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_Lancer_C_CreateHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_Lancer_C_CreateHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'BP_Lancer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x000033, "Member 'BP_Lancer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, Temp_struct_Variable_1) == 0x000040, "Member 'BP_Lancer_C_CreateHUD::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_GetController_ReturnValue) == 0x000070, "Member 'BP_Lancer_C_CreateHUD::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, Temp_struct_Variable_2) == 0x000080, "Member 'BP_Lancer_C_CreateHUD::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'BP_Lancer_C_CreateHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_IsLocalPlayerController_ReturnValue) == 0x0000B1, "Member 'BP_Lancer_C_CreateHUD::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_IsValid_ReturnValue_3) == 0x0000B2, "Member 'BP_Lancer_C_CreateHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_AddComponent_ReturnValue) == 0x0000B8, "Member 'BP_Lancer_C_CreateHUD::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000C0, "Member 'BP_Lancer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'BP_Lancer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_AddComponent_ReturnValue_1) == 0x0000C8, "Member 'BP_Lancer_C_CreateHUD::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D0, "Member 'BP_Lancer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D1, "Member 'BP_Lancer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lancer_C_CreateHUD, CallFunc_AddComponent_ReturnValue_2) == 0x0000D8, "Member 'BP_Lancer_C_CreateHUD::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");

}


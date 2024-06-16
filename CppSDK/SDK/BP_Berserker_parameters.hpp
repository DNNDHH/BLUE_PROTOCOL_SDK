#pragma once

 

// Package: BP_Berserker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_Berserker.BP_Berserker_C.ExecuteUbergraph_BP_Berserker
// 0x0014 (0x0014 - 0x0000)
struct BP_Berserker_C_ExecuteUbergraph_BP_Berserker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHit;                                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bProperDistance;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponEquipType                            K2Node_Event_EquipType;                            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_Damage;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWeakHit;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker) == 0x000004, "Wrong alignment on BP_Berserker_C_ExecuteUbergraph_BP_Berserker");
static_assert(sizeof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker) == 0x000014, "Wrong size on BP_Berserker_C_ExecuteUbergraph_BP_Berserker");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, EntryPoint) == 0x000000, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_Event_bHit) == 0x000004, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_Event_bHit' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_Event_bProperDistance) == 0x000005, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_Event_bProperDistance' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_Event_EquipType) == 0x000006, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_Event_EquipType' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_Event_Damage) == 0x000008, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, K2Node_Event_bWeakHit) == 0x00000C, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::K2Node_Event_bWeakHit' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue_1) == 0x00000E, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue_2) == 0x00000F, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue_3) == 0x000010, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue_4) == 0x000011, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_ExecuteUbergraph_BP_Berserker, CallFunc_IsValid_ReturnValue_5) == 0x000012, "Member 'BP_Berserker_C_ExecuteUbergraph_BP_Berserker::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function BP_Berserker.BP_Berserker_C.OnHitForPlayerReticle
// 0x0008 (0x0008 - 0x0000)
struct BP_Berserker_C_OnHitForPlayerReticle final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWeakHit;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Berserker_C_OnHitForPlayerReticle) == 0x000004, "Wrong alignment on BP_Berserker_C_OnHitForPlayerReticle");
static_assert(sizeof(BP_Berserker_C_OnHitForPlayerReticle) == 0x000008, "Wrong size on BP_Berserker_C_OnHitForPlayerReticle");
static_assert(offsetof(BP_Berserker_C_OnHitForPlayerReticle, Damage) == 0x000000, "Member 'BP_Berserker_C_OnHitForPlayerReticle::Damage' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_OnHitForPlayerReticle, bWeakHit) == 0x000004, "Member 'BP_Berserker_C_OnHitForPlayerReticle::bWeakHit' has a wrong offset!");

// Function BP_Berserker.BP_Berserker_C.OnRayHitForPlayerReticle
// 0x0002 (0x0002 - 0x0000)
struct BP_Berserker_C_OnRayHitForPlayerReticle final
{
public:
	bool                                          bHit;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bProperDistance;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Berserker_C_OnRayHitForPlayerReticle) == 0x000001, "Wrong alignment on BP_Berserker_C_OnRayHitForPlayerReticle");
static_assert(sizeof(BP_Berserker_C_OnRayHitForPlayerReticle) == 0x000002, "Wrong size on BP_Berserker_C_OnRayHitForPlayerReticle");
static_assert(offsetof(BP_Berserker_C_OnRayHitForPlayerReticle, bHit) == 0x000000, "Member 'BP_Berserker_C_OnRayHitForPlayerReticle::bHit' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_OnRayHitForPlayerReticle, bProperDistance) == 0x000001, "Member 'BP_Berserker_C_OnRayHitForPlayerReticle::bProperDistance' has a wrong offset!");

// Function BP_Berserker.BP_Berserker_C.UnSheathe
// 0x0001 (0x0001 - 0x0000)
struct BP_Berserker_C_UnSheathe final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Berserker_C_UnSheathe) == 0x000001, "Wrong alignment on BP_Berserker_C_UnSheathe");
static_assert(sizeof(BP_Berserker_C_UnSheathe) == 0x000001, "Wrong size on BP_Berserker_C_UnSheathe");
static_assert(offsetof(BP_Berserker_C_UnSheathe, EquipType) == 0x000000, "Member 'BP_Berserker_C_UnSheathe::EquipType' has a wrong offset!");

// Function BP_Berserker.BP_Berserker_C.CreateHUD
// 0x00F0 (0x00F0 - 0x0000)
struct BP_Berserker_C_CreateHUD final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8564[0xD];                                     // 0x0063(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_2;                            // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8565[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8566[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_P007HUDComponent_C*                 CallFunc_AddComponent_ReturnValue;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8567[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonBattleHudComponent_C*            CallFunc_AddComponent_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8568[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerAimHUDComponent_C*            CallFunc_AddComponent_ReturnValue_2;               // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Berserker_C_CreateHUD) == 0x000010, "Wrong alignment on BP_Berserker_C_CreateHUD");
static_assert(sizeof(BP_Berserker_C_CreateHUD) == 0x0000F0, "Wrong size on BP_Berserker_C_CreateHUD");
static_assert(offsetof(BP_Berserker_C_CreateHUD, Temp_struct_Variable) == 0x000000, "Member 'BP_Berserker_C_CreateHUD::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, Temp_struct_Variable_1) == 0x000030, "Member 'BP_Berserker_C_CreateHUD::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000060, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000061, "Member 'BP_Berserker_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsValid_ReturnValue) == 0x000062, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, Temp_struct_Variable_2) == 0x000070, "Member 'BP_Berserker_C_CreateHUD::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A0, "Member 'BP_Berserker_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_GetController_ReturnValue) == 0x0000A8, "Member 'BP_Berserker_C_CreateHUD::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsValid_ReturnValue_2) == 0x0000B1, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000B2, "Member 'BP_Berserker_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsLocalPlayerController_ReturnValue) == 0x0000B3, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_IsValid_ReturnValue_3) == 0x0000B4, "Member 'BP_Berserker_C_CreateHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_AddComponent_ReturnValue) == 0x0000B8, "Member 'BP_Berserker_C_CreateHUD::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000C0, "Member 'BP_Berserker_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'BP_Berserker_C_CreateHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_AddComponent_ReturnValue_1) == 0x0000C8, "Member 'BP_Berserker_C_CreateHUD::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D0, "Member 'BP_Berserker_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D1, "Member 'BP_Berserker_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_AddComponent_ReturnValue_2) == 0x0000D8, "Member 'BP_Berserker_C_CreateHUD::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Berserker_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_3) == 0x0000E0, "Member 'BP_Berserker_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

}


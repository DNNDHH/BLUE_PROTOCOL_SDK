#pragma once

 

// Package: BP_Smasher

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_Smasher.BP_Smasher_C.ExecuteUbergraph_BP_Smasher
// 0x0018 (0x0018 - 0x0000)
struct BP_Smasher_C_ExecuteUbergraph_BP_Smasher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponEquipType                            K2Node_Event_EquipType;                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F50[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWeakHit;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHit;                                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bProperDistance;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher) == 0x000004, "Wrong alignment on BP_Smasher_C_ExecuteUbergraph_BP_Smasher");
static_assert(sizeof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher) == 0x000018, "Wrong size on BP_Smasher_C_ExecuteUbergraph_BP_Smasher");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, EntryPoint) == 0x000000, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_2) == 0x000006, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_3) == 0x000007, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, K2Node_Event_EquipType) == 0x000008, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::K2Node_Event_EquipType' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_4) == 0x000009, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, K2Node_Event_Damage) == 0x00000C, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, K2Node_Event_bWeakHit) == 0x000010, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::K2Node_Event_bWeakHit' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, K2Node_Event_bHit) == 0x000011, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::K2Node_Event_bHit' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, K2Node_Event_bProperDistance) == 0x000012, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::K2Node_Event_bProperDistance' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_5) == 0x000013, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_6) == 0x000014, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_ExecuteUbergraph_BP_Smasher, CallFunc_IsValid_ReturnValue_7) == 0x000015, "Member 'BP_Smasher_C_ExecuteUbergraph_BP_Smasher::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");

// Function BP_Smasher.BP_Smasher_C.OnRayHitForPlayerReticle
// 0x0002 (0x0002 - 0x0000)
struct BP_Smasher_C_OnRayHitForPlayerReticle final
{
public:
	bool                                          bHit;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bProperDistance;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Smasher_C_OnRayHitForPlayerReticle) == 0x000001, "Wrong alignment on BP_Smasher_C_OnRayHitForPlayerReticle");
static_assert(sizeof(BP_Smasher_C_OnRayHitForPlayerReticle) == 0x000002, "Wrong size on BP_Smasher_C_OnRayHitForPlayerReticle");
static_assert(offsetof(BP_Smasher_C_OnRayHitForPlayerReticle, bHit) == 0x000000, "Member 'BP_Smasher_C_OnRayHitForPlayerReticle::bHit' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_OnRayHitForPlayerReticle, bProperDistance) == 0x000001, "Member 'BP_Smasher_C_OnRayHitForPlayerReticle::bProperDistance' has a wrong offset!");

// Function BP_Smasher.BP_Smasher_C.OnHitForPlayerReticle
// 0x0008 (0x0008 - 0x0000)
struct BP_Smasher_C_OnHitForPlayerReticle final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWeakHit;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Smasher_C_OnHitForPlayerReticle) == 0x000004, "Wrong alignment on BP_Smasher_C_OnHitForPlayerReticle");
static_assert(sizeof(BP_Smasher_C_OnHitForPlayerReticle) == 0x000008, "Wrong size on BP_Smasher_C_OnHitForPlayerReticle");
static_assert(offsetof(BP_Smasher_C_OnHitForPlayerReticle, Damage) == 0x000000, "Member 'BP_Smasher_C_OnHitForPlayerReticle::Damage' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_OnHitForPlayerReticle, bWeakHit) == 0x000004, "Member 'BP_Smasher_C_OnHitForPlayerReticle::bWeakHit' has a wrong offset!");

// Function BP_Smasher.BP_Smasher_C.UnSheathe
// 0x0001 (0x0001 - 0x0000)
struct BP_Smasher_C_UnSheathe final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Smasher_C_UnSheathe) == 0x000001, "Wrong alignment on BP_Smasher_C_UnSheathe");
static_assert(sizeof(BP_Smasher_C_UnSheathe) == 0x000001, "Wrong size on BP_Smasher_C_UnSheathe");
static_assert(offsetof(BP_Smasher_C_UnSheathe, EquipType) == 0x000000, "Member 'BP_Smasher_C_UnSheathe::EquipType' has a wrong offset!");

// Function BP_Smasher.BP_Smasher_C.CreateHUD
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Smasher_C_CreateHUD final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F51[0xC];                                     // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_2;                            // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F52[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_P019HUDComponent_C*                 CallFunc_AddComponent_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F53[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonBattleHudComponent_C*            CallFunc_AddComponent_ReturnValue_1;               // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F54[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerAimHUDComponent_C*            CallFunc_AddComponent_ReturnValue_2;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Smasher_C_CreateHUD) == 0x000010, "Wrong alignment on BP_Smasher_C_CreateHUD");
static_assert(sizeof(BP_Smasher_C_CreateHUD) == 0x0000E0, "Wrong size on BP_Smasher_C_CreateHUD");
static_assert(offsetof(BP_Smasher_C_CreateHUD, Temp_struct_Variable) == 0x000000, "Member 'BP_Smasher_C_CreateHUD::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, Temp_struct_Variable_1) == 0x000030, "Member 'BP_Smasher_C_CreateHUD::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000060, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000062, "Member 'BP_Smasher_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x000063, "Member 'BP_Smasher_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, Temp_struct_Variable_2) == 0x000070, "Member 'BP_Smasher_C_CreateHUD::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_GetController_ReturnValue) == 0x0000A0, "Member 'BP_Smasher_C_CreateHUD::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsValid_ReturnValue_2) == 0x0000A9, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000AA, "Member 'BP_Smasher_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsLocalPlayerController_ReturnValue) == 0x0000AB, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_IsValid_ReturnValue_3) == 0x0000AC, "Member 'BP_Smasher_C_CreateHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_AddComponent_ReturnValue) == 0x0000B0, "Member 'BP_Smasher_C_CreateHUD::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000B8, "Member 'BP_Smasher_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'BP_Smasher_C_CreateHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_AddComponent_ReturnValue_1) == 0x0000C0, "Member 'BP_Smasher_C_CreateHUD::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C8, "Member 'BP_Smasher_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C9, "Member 'BP_Smasher_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_AddComponent_ReturnValue_2) == 0x0000D0, "Member 'BP_Smasher_C_CreateHUD::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Smasher_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_3) == 0x0000D8, "Member 'BP_Smasher_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

}

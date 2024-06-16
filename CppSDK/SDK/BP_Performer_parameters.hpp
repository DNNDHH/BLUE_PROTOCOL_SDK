#pragma once

 

// Package: BP_Performer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_Performer.BP_Performer_C.ExecuteUbergraph_BP_Performer
// 0x0018 (0x0018 - 0x0000)
struct BP_Performer_C_ExecuteUbergraph_BP_Performer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHit;                                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bProperDistance;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F49[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWeakHit;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponEquipType                            K2Node_Event_EquipType;                            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Performer_C_ExecuteUbergraph_BP_Performer) == 0x000004, "Wrong alignment on BP_Performer_C_ExecuteUbergraph_BP_Performer");
static_assert(sizeof(BP_Performer_C_ExecuteUbergraph_BP_Performer) == 0x000018, "Wrong size on BP_Performer_C_ExecuteUbergraph_BP_Performer");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, EntryPoint) == 0x000000, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, K2Node_Event_bHit) == 0x000004, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::K2Node_Event_bHit' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, K2Node_Event_bProperDistance) == 0x000005, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::K2Node_Event_bProperDistance' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, K2Node_Event_Damage) == 0x000008, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, K2Node_Event_bWeakHit) == 0x00000C, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::K2Node_Event_bWeakHit' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_1) == 0x00000D, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_2) == 0x00000E, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_3) == 0x00000F, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_4) == 0x000010, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_5) == 0x000011, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_6) == 0x000012, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, K2Node_Event_EquipType) == 0x000013, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::K2Node_Event_EquipType' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_IsValid_ReturnValue_7) == 0x000015, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000016, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_ExecuteUbergraph_BP_Performer, CallFunc_BooleanOR_ReturnValue) == 0x000017, "Member 'BP_Performer_C_ExecuteUbergraph_BP_Performer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_Performer.BP_Performer_C.UnSheathe
// 0x0001 (0x0001 - 0x0000)
struct BP_Performer_C_UnSheathe final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Performer_C_UnSheathe) == 0x000001, "Wrong alignment on BP_Performer_C_UnSheathe");
static_assert(sizeof(BP_Performer_C_UnSheathe) == 0x000001, "Wrong size on BP_Performer_C_UnSheathe");
static_assert(offsetof(BP_Performer_C_UnSheathe, EquipType) == 0x000000, "Member 'BP_Performer_C_UnSheathe::EquipType' has a wrong offset!");

// Function BP_Performer.BP_Performer_C.OnHitForPlayerReticle
// 0x0008 (0x0008 - 0x0000)
struct BP_Performer_C_OnHitForPlayerReticle final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWeakHit;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Performer_C_OnHitForPlayerReticle) == 0x000004, "Wrong alignment on BP_Performer_C_OnHitForPlayerReticle");
static_assert(sizeof(BP_Performer_C_OnHitForPlayerReticle) == 0x000008, "Wrong size on BP_Performer_C_OnHitForPlayerReticle");
static_assert(offsetof(BP_Performer_C_OnHitForPlayerReticle, Damage) == 0x000000, "Member 'BP_Performer_C_OnHitForPlayerReticle::Damage' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_OnHitForPlayerReticle, bWeakHit) == 0x000004, "Member 'BP_Performer_C_OnHitForPlayerReticle::bWeakHit' has a wrong offset!");

// Function BP_Performer.BP_Performer_C.OnRayHitForPlayerReticle
// 0x0002 (0x0002 - 0x0000)
struct BP_Performer_C_OnRayHitForPlayerReticle final
{
public:
	bool                                          bHit;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bProperDistance;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Performer_C_OnRayHitForPlayerReticle) == 0x000001, "Wrong alignment on BP_Performer_C_OnRayHitForPlayerReticle");
static_assert(sizeof(BP_Performer_C_OnRayHitForPlayerReticle) == 0x000002, "Wrong size on BP_Performer_C_OnRayHitForPlayerReticle");
static_assert(offsetof(BP_Performer_C_OnRayHitForPlayerReticle, bHit) == 0x000000, "Member 'BP_Performer_C_OnRayHitForPlayerReticle::bHit' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_OnRayHitForPlayerReticle, bProperDistance) == 0x000001, "Member 'BP_Performer_C_OnRayHitForPlayerReticle::bProperDistance' has a wrong offset!");

// Function BP_Performer.BP_Performer_C.CreateHUD
// 0x00D0 (0x00D0 - 0x0000)
struct BP_Performer_C_CreateHUD final
{
public:
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F4A[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UBP_PlayerAimHUDComponent_C*            CallFunc_AddComponent_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBattleHudComponent_C*            CallFunc_AddComponent_ReturnValue_1;               // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_2;                            // 0x0080(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_P021HUDComponent_C*                 CallFunc_AddComponent_ReturnValue_2;               // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Performer_C_CreateHUD) == 0x000010, "Wrong alignment on BP_Performer_C_CreateHUD");
static_assert(sizeof(BP_Performer_C_CreateHUD) == 0x0000D0, "Wrong size on BP_Performer_C_CreateHUD");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000000, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'BP_Performer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x000003, "Member 'BP_Performer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsValid_ReturnValue_1) == 0x000004, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsValid_ReturnValue_2) == 0x000005, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x000006, "Member 'BP_Performer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_Not_PreBool_ReturnValue_3) == 0x000007, "Member 'BP_Performer_C_CreateHUD::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, Temp_struct_Variable) == 0x000010, "Member 'BP_Performer_C_CreateHUD::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, Temp_struct_Variable_1) == 0x000040, "Member 'BP_Performer_C_CreateHUD::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'BP_Performer_C_CreateHUD::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_AddComponent_ReturnValue_1) == 0x000078, "Member 'BP_Performer_C_CreateHUD::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, Temp_struct_Variable_2) == 0x000080, "Member 'BP_Performer_C_CreateHUD::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_GetController_ReturnValue) == 0x0000B0, "Member 'BP_Performer_C_CreateHUD::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_AddComponent_ReturnValue_2) == 0x0000B8, "Member 'BP_Performer_C_CreateHUD::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsValid_ReturnValue_3) == 0x0000C0, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_IsLocalPlayerController_ReturnValue) == 0x0000C1, "Member 'BP_Performer_C_CreateHUD::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue) == 0x0000C2, "Member 'BP_Performer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C3, "Member 'BP_Performer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C4, "Member 'BP_Performer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Performer_C_CreateHUD, CallFunc_BooleanAND_ReturnValue_3) == 0x0000C5, "Member 'BP_Performer_C_CreateHUD::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

}


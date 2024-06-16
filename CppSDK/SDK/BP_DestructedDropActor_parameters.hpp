#pragma once

 

// Package: BP_DestructedDropActor

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DestructedDropActor.BP_DestructedDropActor_C.ExecuteUbergraph_BP_DestructedDropActor
// 0x0098 (0x0098 - 0x0000)
struct BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84A0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTreasureSpawnerCharacterId_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleStatusManager_IsValid;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleStatusManager*                 CallFunc_GetBattleStatusManager_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A5[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTreasureBoxRewardType                      CallFunc_GetDropTreasureBoxRewardType_ReturnValue; // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A6[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0088(0x0010)(NoDestructor)
};
static_assert(alignof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor) == 0x000008, "Wrong alignment on BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor");
static_assert(sizeof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor) == 0x000098, "Wrong size on BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, EntryPoint) == 0x000000, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetTreasureSpawnerCharacterId_ReturnValue) == 0x000008, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetTreasureSpawnerCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_Event_OtherActor) == 0x000020, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetBattleStatusManager_IsValid) == 0x000028, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetBattleStatusManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetBattleStatusManager_ReturnValue) == 0x000030, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetBattleStatusManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetValidPlayerState_ReturnValue) == 0x000048, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetCharacterId_ReturnValue) == 0x000050, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000060, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_Event_InOtherActor) == 0x000068, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000070, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, Temp_bool_IsClosed_Variable) == 0x000079, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_SwitchEnum_CmpSuccess) == 0x00007A, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue) == 0x00007C, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_PostAkEventBySceneComponent_Simple_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, Temp_bool_Has_Been_Initd_Variable) == 0x000080, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, CallFunc_GetDropTreasureBoxRewardType_ReturnValue) == 0x000081, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::CallFunc_GetDropTreasureBoxRewardType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_SwitchEnum_CmpSuccess_1) == 0x000082, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor, K2Node_MakeStruct_DataTableRowHandle) == 0x000088, "Member 'BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");

// Function BP_DestructedDropActor.BP_DestructedDropActor_C.PostBuffActivate
// 0x0008 (0x0008 - 0x0000)
struct BP_DestructedDropActor_C_PostBuffActivate final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DestructedDropActor_C_PostBuffActivate) == 0x000008, "Wrong alignment on BP_DestructedDropActor_C_PostBuffActivate");
static_assert(sizeof(BP_DestructedDropActor_C_PostBuffActivate) == 0x000008, "Wrong size on BP_DestructedDropActor_C_PostBuffActivate");
static_assert(offsetof(BP_DestructedDropActor_C_PostBuffActivate, InOtherActor) == 0x000000, "Member 'BP_DestructedDropActor_C_PostBuffActivate::InOtherActor' has a wrong offset!");

// Function BP_DestructedDropActor.BP_DestructedDropActor_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_DestructedDropActor_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DestructedDropActor_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_DestructedDropActor_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_DestructedDropActor_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_DestructedDropActor_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_DestructedDropActor_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_DestructedDropActor_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}


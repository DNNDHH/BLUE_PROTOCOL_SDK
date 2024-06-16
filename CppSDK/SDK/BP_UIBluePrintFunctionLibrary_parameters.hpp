#pragma once

 

// Package: BP_UIBluePrintFunctionLibrary

#include "Basic.hpp"

#include "ST_ShopIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ST_LiquidMemoryIconData_structs.hpp"
#include "CharaParts_structs.hpp"
#include "ST_ItemDetail_CaptureStudio_MapLocation_structs.hpp"


namespace SDK::Params
{

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxHp
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_593A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_593B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, K2Node_DynamicCast_AsSBCharacter) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp, CallFunc_FFloor_ReturnValue) == 0x00003C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentHp
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_593C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_593D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput;        // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, K2Node_DynamicCast_AsSBCharacter) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, CallFunc_GetCurrentHitPoint_self_CastInput) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::CallFunc_GetCurrentHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, CallFunc_GetCurrentHitPoint_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::CallFunc_GetCurrentHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp, CallFunc_FFloor_ReturnValue) == 0x00003C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxMp
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_593E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_593F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCMagicianComponent*                 K2Node_DynamicCast_AsSBPCMagician_Component;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5940[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxMagicPoint_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, K2Node_DynamicCast_AsSBPCMagician_Component) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::K2Node_DynamicCast_AsSBPCMagician_Component' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, CallFunc_GetMaxMagicPoint_ReturnValue) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::CallFunc_GetMaxMagicPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp, CallFunc_FFloor_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentMp
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5941[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5942[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCMagicianComponent*                 K2Node_DynamicCast_AsSBPCMagician_Component;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5943[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentMagicPoint_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, K2Node_DynamicCast_AsSBPCMagician_Component) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::K2Node_DynamicCast_AsSBPCMagician_Component' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, CallFunc_GetCurrentMagicPoint_ReturnValue) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::CallFunc_GetCurrentMagicPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp, CallFunc_FFloor_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxStamina
// 0x0030 (0x0030 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5944[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5945[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStamina_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina) == 0x000030, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, CallFunc_GetStamina_ReturnValue) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::CallFunc_GetStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina, CallFunc_FFloor_ReturnValue) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentStamina
// 0x0030 (0x0030 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5946[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5947[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentStamina_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina) == 0x000030, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, CallFunc_GetCurrentStamina_ReturnValue) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::CallFunc_GetCurrentStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina, CallFunc_FFloor_ReturnValue) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Create Quest Reward Icon
// 0x0068 (0x0068 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon final
{
public:
	struct FRewardInfo                            InRewardInfo;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          bInSelectRewardSelectable;                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableHiddenReward;                               // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5948[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            OutWidget;                                         // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpEnableHiddenReward;                             // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpHideReward_;                                    // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             TmpRewardType;                                     // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5949[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpRewardId;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     TmpIcon;                                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpIndex;                                          // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpAmount;                                         // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_FindRewardMasterData_ReturnValue;         // 0x0050(0x0014)(NoDestructor)
	bool                                          CallFunc_FindRewardMasterData_IsExist;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon) == 0x000068, "Wrong size on BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, InRewardInfo) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::InRewardInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, bInSelectRewardSelectable) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::bInSelectRewardSelectable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, bEnableHiddenReward) == 0x000019, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::bEnableHiddenReward' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, OutWidget) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::OutWidget' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpEnableHiddenReward) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpEnableHiddenReward' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpHideReward_) == 0x000031, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpHideReward_' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpRewardType) == 0x000032, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpRewardType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpRewardId) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpRewardId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpIcon) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpIcon' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpIndex) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpIndex' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, TmpAmount) == 0x000044, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::TmpAmount' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, CallFunc_Create_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, CallFunc_FindRewardMasterData_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::CallFunc_FindRewardMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, CallFunc_FindRewardMasterData_IsExist) == 0x000064, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::CallFunc_FindRewardMasterData_IsExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000065, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, K2Node_SwitchEnum_CmpSuccess) == 0x000066, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon, CallFunc_BooleanAND_ReturnValue) == 0x000067, "Member 'BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTeamColor
// 0x0050 (0x0050 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTeamColor final
{
public:
	int32                                         TeamNumber;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   ColorTable;                                        // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTeamColor");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor) == 0x000050, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTeamColor");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, TeamNumber) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::TeamNumber' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, Color) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::Color' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, ColorTable) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::ColorTable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, K2Node_MakeArray_Array) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTeamColor, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTeamColor::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetHostilityColor
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetHostilityColor final
{
public:
	ESBHostility                                  Hostility;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   ColorTable;                                        // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetHostilityColor");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetHostilityColor");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, Hostility) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::Hostility' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, Color) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::Color' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, ColorTable) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::ColorTable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, K2Node_MakeArray_Array) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetHostilityColor, CallFunc_Array_Get_Item) == 0x000044, "Member 'BP_UIBluePrintFunctionLibrary_C_GetHostilityColor::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetItemIconTexture
// 0x0528 (0x0528 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InItemType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InGender;                                          // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LargeIcon;                                         // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUnidentified;                                     // 0x0007(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemCategory                                 ItemCategory;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   UnidentifiedIconName;                              // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              OutIconTexture;                                    // 0x0020(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         NewLocalVar_0;                                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       LocalVal_IconData;                                 // 0x0050(0x00C8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UDataTable*                             LocalVal_DataTable;                                // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalVal_RowName;                                  // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 Temp_byte_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594F[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0130(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5950[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5951[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x025C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5952[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0268(0x0028)(HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0290(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5953[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0360(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0388(0x0028)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5954[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x03B8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x03E0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_2;                           // 0x0408(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_3;                           // 0x0430(0x0028)(HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0458(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture) == 0x000528, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, InItemID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, InItemType) == 0x000004, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::InItemType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, InGender) == 0x000005, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::InGender' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, LargeIcon) == 0x000006, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::LargeIcon' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, bUnidentified) == 0x000007, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::bUnidentified' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, ItemCategory) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::ItemCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, UnidentifiedIconName) == 0x00000C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::UnidentifiedIconName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, OutIconTexture) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::OutIconTexture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, NewLocalVar_0) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, LocalVal_IconData) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::LocalVal_IconData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, LocalVal_DataTable) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::LocalVal_DataTable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, LocalVal_RowName) == 0x000120, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::LocalVal_RowName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_byte_Variable) == 0x000128, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000130, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, K2Node_SwitchEnum_CmpSuccess) == 0x0001F9, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000200, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable) == 0x000210, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000218, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_1) == 0x000220, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_2) == 0x000228, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_3) == 0x000230, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_4) == 0x000238, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_5) == 0x000240, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_6) == 0x000248, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_name_Variable_7) == 0x000250, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_byte_Variable_1) == 0x000258, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, K2Node_Select_Default) == 0x00025C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_softobject_Variable) == 0x000268, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000290, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000358, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_byte_Variable_2) == 0x000359, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_softobject_Variable_1) == 0x000360, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_softobject_Variable_2) == 0x000388, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_bool_Variable) == 0x0003B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, Temp_softobject_Variable_3) == 0x0003B8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, K2Node_Select_Default_1) == 0x0003E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, K2Node_Select_Default_2) == 0x000408, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, K2Node_Select_Default_3) == 0x000430, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000458, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000520, "Member 'BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRewardItemIconTexture
// 0x06E8 (0x06E8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             InItemType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InGender;                                          // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LargeIcon;                                         // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUnidentified;                                     // 0x0007(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemCategory                                 ItemCategory;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5955[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   UnidentifiedIconName;                              // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5956[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              OutIconTexture;                                    // 0x0020(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         NewLocalVar_0;                                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5957[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       LocalVal_IconData;                                 // 0x0050(0x00C8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UDataTable*                             LocalVal_DataTable;                                // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalVal_RowName;                                  // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 Temp_byte_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5958[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0130(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5959[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595A[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0214(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595B[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryData                   CallFunc_FindStampCategoryData_Data;               // 0x0220(0x0038)()
	bool                                          CallFunc_FindStampCategoryData_ReturnValue;        // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595C[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampData                           CallFunc_FindStampData_Data;                       // 0x0260(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue;                // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595D[0x5];                                     // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595E[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x034C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595F[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0358(0x0028)(HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0380(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5960[0x6];                                     // 0x044A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0450(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0478(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x04A0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x04C8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_2;                           // 0x04F0(0x0028)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5961[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_3;                           // 0x0520(0x0028)(HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0548(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5962[0x7];                                     // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x0618(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture) == 0x0006E8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, InItemID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, InItemType) == 0x000004, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::InItemType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, InGender) == 0x000005, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::InGender' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, LargeIcon) == 0x000006, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::LargeIcon' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, bUnidentified) == 0x000007, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::bUnidentified' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, ItemCategory) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::ItemCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, UnidentifiedIconName) == 0x00000C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::UnidentifiedIconName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, OutIconTexture) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::OutIconTexture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, NewLocalVar_0) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, LocalVal_IconData) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::LocalVal_IconData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, LocalVal_DataTable) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::LocalVal_DataTable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, LocalVal_RowName) == 0x000120, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::LocalVal_RowName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_byte_Variable) == 0x000128, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000130, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_Conv_ByteToString_ReturnValue) == 0x000200, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, K2Node_SwitchEnum_CmpSuccess) == 0x000210, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000214, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_FindStampCategoryData_Data) == 0x000220, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_FindStampCategoryData_Data' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_FindStampCategoryData_ReturnValue) == 0x000258, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_FindStampCategoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_FindStampData_Data) == 0x000260, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_FindStampData_Data' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_FindStampData_ReturnValue) == 0x0002E8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_FindStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0002E9, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0002EA, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x0002F0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable) == 0x000300, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000308, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_1) == 0x000310, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_2) == 0x000318, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_3) == 0x000320, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_4) == 0x000328, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_5) == 0x000330, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_6) == 0x000338, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_name_Variable_7) == 0x000340, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_byte_Variable_1) == 0x000348, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, K2Node_Select_Default) == 0x00034C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_softobject_Variable) == 0x000358, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000380, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000448, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_byte_Variable_2) == 0x000449, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_softobject_Variable_1) == 0x000450, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_softobject_Variable_2) == 0x000478, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_softobject_Variable_3) == 0x0004A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, K2Node_Select_Default_1) == 0x0004C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, K2Node_Select_Default_2) == 0x0004F0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, Temp_bool_Variable) == 0x000518, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, K2Node_Select_Default_3) == 0x000520, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000548, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000610, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x000618, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x0006E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEmotionIcon
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon final
{
public:
	class FName                                   IconName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEmotionInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon, IconName) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon::IconName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon, IconTexture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon::IconTexture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetClassTypeIcon
// 0x0098 (0x0098 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5963[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             OutIconImage;                                      // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconImage;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5964[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_8;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_9;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_10;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_11;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5965[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon) == 0x000098, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, InClassType) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::InClassType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, OutIconImage) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::OutIconImage' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, IconImage) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::IconImage' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_byte_Variable) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_1) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_2) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_3) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_4) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_5) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_6) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_7) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_8) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_9) == 0x000070, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_10) == 0x000078, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, Temp_object_Variable_11) == 0x000080, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon, K2Node_Select_Default) == 0x000090, "Member 'BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetActivityCategoryIcon
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon final
{
public:
	ESBActivityCategory                           InActivityCategory;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5966[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBActivityCategory                           Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5967[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, InActivityCategory) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::InActivityCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Texture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Texture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_byte_Variable) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable_1) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable_2) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable_3) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable_4) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, Temp_object_Variable_5) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon, K2Node_Select_Default) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Find Map Spawn Location for Item Detail Capture
// 0x0110 (0x0110 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture final
{
public:
	class FString                                 InMapName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5968[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OutTransform;                                      // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             TmpTransform;                                      // 0x0050(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5969[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0090(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_596A[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemDetail_CaptureStudio_MapLocation CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B0(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_596B[0xE];                                     // 0x00D2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture) == 0x000010, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture) == 0x000110, "Wrong size on BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, InMapName) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::InMapName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, __WorldContext) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, OutTransform) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::OutTransform' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, TmpTransform) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::TmpTransform' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, Temp_int_Array_Index_Variable) == 0x000080, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000090, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B0, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D1, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAttackParamUIColor
// 0x0028 (0x0028 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutColor;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor) == 0x000028, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor, OutColor) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor::OutColor' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor, K2Node_MakeStruct_LinearColor) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuide
// 0x0060 (0x0060 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide final
{
public:
	class FName                                   LocationId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_596C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_596D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_596E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlaceGuidetInterface_C> K2Node_DynamicCast_AsPlace_Guidet_Interface;       // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_596F[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          CallFunc_GetPlaceGuideWidget_PlaceGuideWidget;     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide) == 0x000060, "Wrong size on BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, LocationId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::LocationId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, Priority) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::Priority' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, __WorldContext) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, bResult) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::bResult' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, K2Node_DynamicCast_AsPlace_Guidet_Interface) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::K2Node_DynamicCast_AsPlace_Guidet_Interface' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_GetPlaceGuideWidget_PlaceGuideWidget) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_GetPlaceGuideWidget_PlaceGuideWidget' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuide
// 0x0048 (0x0048 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5970[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlaceGuidetInterface_C> K2Node_DynamicCast_AsPlace_Guidet_Interface;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5971[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          CallFunc_GetPlaceGuideWidget_PlaceGuideWidget;     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide) == 0x000048, "Wrong size on BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, K2Node_DynamicCast_AsPlace_Guidet_Interface) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::K2Node_DynamicCast_AsPlace_Guidet_Interface' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_GetPlaceGuideWidget_PlaceGuideWidget) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_GetPlaceGuideWidget_PlaceGuideWidget' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CloseTextWindowDemo
// 0x0018 (0x0018 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextWindowBase*                      CallFunc_GetTextWindowDemo_TextWindowDemo;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo) == 0x000018, "Wrong size on BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo, CallFunc_GetTextWindowDemo_TextWindowDemo) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo::CallFunc_GetTextWindowDemo_TextWindowDemo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTextWindowDemo
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextWindowBase*                      TextWindowDemo;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5972[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5973[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextWindowBase*                      CallFunc_GetTextWindowDemo_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, TextWindowDemo) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::TextWindowDemo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, CallFunc_GetHUD_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo, CallFunc_GetTextWindowDemo_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo::CallFunc_GetTextWindowDemo_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuideDemo
// 0x0050 (0x0050 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo final
{
public:
	class FName                                   InLocationName;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5974[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlaceGuidetInterface_C> K2Node_DynamicCast_AsPlace_Guidet_Interface;       // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5975[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          CallFunc_GetPlaceGuideWidget_PlaceGuideWidget;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo) == 0x000050, "Wrong size on BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, InLocationName) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::InLocationName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_GetHUD_ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, K2Node_DynamicCast_AsPlace_Guidet_Interface) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::K2Node_DynamicCast_AsPlace_Guidet_Interface' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_GetPlaceGuideWidget_PlaceGuideWidget) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_GetPlaceGuideWidget_PlaceGuideWidget' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo, CallFunc_IsValid_ReturnValue_2) == 0x000049, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuideDemo
// 0x0048 (0x0048 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5976[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlaceGuidetInterface_C> K2Node_DynamicCast_AsPlace_Guidet_Interface;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5977[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          CallFunc_GetPlaceGuideWidget_PlaceGuideWidget;     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo) == 0x000048, "Wrong size on BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, K2Node_DynamicCast_AsPlace_Guidet_Interface) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::K2Node_DynamicCast_AsPlace_Guidet_Interface' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_GetPlaceGuideWidget_PlaceGuideWidget) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_GetPlaceGuideWidget_PlaceGuideWidget' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerPotisionName
// 0x0138 (0x0138 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName final
{
public:
	bool                                          Inactive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5978[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocationName;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ZoneId;                                            // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ContentId;                                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActiveMap;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5979[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PositionName;                                      // 0x0048(0x0018)(Parm, OutParm)
	class FString                                 InContentId;                                       // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InZoneId;                                          // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InLocationName;                                    // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_597A[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_597B[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivatedDungeon_ReturnValue;           // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedMap_ReturnValue;               // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_597C[0x1];                                     // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_597D[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0120(0x0018)()
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName) == 0x000138, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, Inactive) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::Inactive' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, LocationName) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::LocationName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, ZoneId) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::ZoneId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, ContentId) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::ContentId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, __WorldContext) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, IsActiveMap) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::IsActiveMap' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, PositionName) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::PositionName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, InContentId) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::InContentId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, InZoneId) == 0x000070, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::InZoneId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, InLocationName) == 0x000080, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::InLocationName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000090, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000098, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000A8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B4, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000BC, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_IsActivatedDungeon_ReturnValue) == 0x0000C4, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_IsActivatedDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_IsActivatedMap_ReturnValue) == 0x0000C5, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_IsActivatedMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_BooleanOR_ReturnValue) == 0x0000C6, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Len_ReturnValue) == 0x000108, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Greater_IntInt_ReturnValue) == 0x00010C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000110, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000120, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CreateDetailwithSummary
// 0x0630 (0x0630 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary final
{
public:
	struct FPlayerProfileMenuDetailData           InDeteailData;                                     // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProfileSummaryData              RetSummary;                                        // 0x0400(0x0118)(Parm, OutParm)
	struct FPlayerProfileSummaryData              K2Node_MakeStruct_PlayerProfileSummaryData;        // 0x0518(0x0118)()
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary) == 0x000630, "Wrong size on BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary, InDeteailData) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary::InDeteailData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary, __WorldContext) == 0x0003F8, "Member 'BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary, RetSummary) == 0x000400, "Member 'BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary::RetSummary' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary, K2Node_MakeStruct_PlayerProfileSummaryData) == 0x000518, "Member 'BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary::K2Node_MakeStruct_PlayerProfileSummaryData' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsTypeName
// 0x0030 (0x0030 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName final
{
public:
	class FName                                   InImagineArtsTypeNameID;                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutTypeName;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName) == 0x000030, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName, InImagineArtsTypeNameID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName::InImagineArtsTypeNameID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName, OutTypeName) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName::OutTypeName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerGender
// 0x0028 (0x0028 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerGender final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            OutGender;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            TmpGender;                                         // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_597E[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerGender");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender) == 0x000028, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerGender");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, OutGender) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::OutGender' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, TmpGender) == 0x000009, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::TmpGender' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerGender, CallFunc_GetGender_ReturnValue) == 0x000021, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerGender::CallFunc_GetGender_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAdventurerComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventurerComponent*           PlayerAdventurerComponent;                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_597F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent) == 0x000038, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, PlayerAdventurerComponent) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::PlayerAdventurerComponent' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineIconTexture
// 0x0210 (0x0210 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLarge;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5980[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ReturnValue;                                       // 0x0010(0x0028)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5981[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0048(0x00B0)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5982[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0118(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5983[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x01E8(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture) == 0x000210, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, ID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::ID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, IsLarge) == 0x000004, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::IsLarge' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, Temp_bool_Variable) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_GetMasterDataManager_IsValid) == 0x000039, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_FindMasterImagine_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000100, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000110, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture, K2Node_Select_Default) == 0x0001E8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTexture
// 0x0190 (0x0190 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5984[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5985[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5986[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0068(0x0058)()
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C0(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture) == 0x000190, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, TokenID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::TokenID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, Texture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::Texture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_GetMasterDataManager_IsValid) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_BP_FindMasterToken_bIsValid) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000189, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTextureL
// 0x0190 (0x0190 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5987[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5988[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5989[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0068(0x0058)()
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C0(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL) == 0x000190, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, TokenID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::TokenID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, Texture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::Texture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_GetMasterDataManager_IsValid) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_BP_FindMasterToken_bIsValid) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000189, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CalculateDiscountValue
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InDiscountRate;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutDiscountValue;                                  // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DiscountRate_Local;                                // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value_Local;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_598A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, InValue) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::InValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, InDiscountRate) == 0x000004, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::InDiscountRate' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, OutDiscountValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::OutDiscountValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, DiscountRate_Local) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::DiscountRate_Local' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, Value_Local) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::Value_Local' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_FFloor_ReturnValue) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue, CallFunc_Greater_IntInt_ReturnValue) == 0x000039, "Member 'BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetLiquidMemoryFillingColor
// 0x01D0 (0x01D0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_598B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutFillingColor;                                   // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LiquidMemoryIconData               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0128)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_598C[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_598D[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0188(0x0038)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor) == 0x0001D0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, InLiquidMemoryId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, OutFillingColor) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::OutFillingColor' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, K2Node_MakeStruct_LinearColor) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000170, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_GetMasterDataManager_IsValid) == 0x000171, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_GetMasterDataManager_ReturnValue) == 0x000178, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000180, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000188, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor, K2Node_MakeStruct_LinearColor_1) == 0x0001C0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ChangeFontSize
// 0x00A0 (0x00A0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_ChangeFontSize final
{
public:
	class UTextBlock*                             InTextBlock;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_598E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0018(0x0088)(HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_ChangeFontSize");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize) == 0x0000A0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_ChangeFontSize");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize, InTextBlock) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_ChangeFontSize::InTextBlock' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize, Infontsize) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_ChangeFontSize::Infontsize' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize, __WorldContext) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_ChangeFontSize::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ChangeFontSize, K2Node_MakeStruct_SlateFontInfo) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_ChangeFontSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetViewPortCalcOffset
// 0x00A8 (0x00A8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              DesiredViewportSize;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AspectRatio;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_598F[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5990[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_2;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_3;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5991[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5992[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset) == 0x0000A8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, Position) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::Position' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, DesiredViewportSize) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::DesiredViewportSize' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, AspectRatio) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::AspectRatio' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, Temp_bool_Variable) == 0x00001C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GetViewportSize_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GetViewportSize_ReturnValue_1) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GetViewportSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_X) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_Y) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_X_1) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_Y_1) == 0x00003C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GetViewportScale_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Less_FloatFloat_ReturnValue) == 0x000044, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GetViewportSize_ReturnValue_2) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GetViewportSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GetViewportSize_ReturnValue_3) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GetViewportSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_X_2) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BreakVector2D_Y_2) == 0x00005C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x00006C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000078, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_BooleanOR_ReturnValue) == 0x000080, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000084, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000088, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_MakeVector2D_ReturnValue) == 0x00008C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, CallFunc_MakeVector2D_ReturnValue_1) == 0x000094, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset, K2Node_Select_Default) == 0x00009C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetProtectorCategoryTextId
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5993[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTextId;                                         // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5994[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, InProtectorCategory) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, OutTextId) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::OutTextId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_byte_Variable) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_1) == 0x00001C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_2) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_3) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_4) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_5) == 0x00002C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_6) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_7) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_8) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_9) == 0x00003C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_10) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_11) == 0x000044, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_12) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_13) == 0x00004C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, Temp_int_Variable_14) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId, K2Node_Select_Default) == 0x000054, "Member 'BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineFullTexture
// 0x01E8 (0x01E8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5995[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ReturnValue;                                       // 0x0010(0x0028)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5996[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0048(0x00B0)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5997[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0118(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture) == 0x0001E8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, InId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::InId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_FindMasterImagine_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000100, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000110, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponItemDataByUniqueId
// 0x01F0 (0x01F0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InOwnItemListContainer;                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5998[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      OutWeaponItemData;                                 // 0x0028(0x0050)(Parm, OutParm)
	struct FSBWeaponItemData                      K2Node_MakeStruct_SBWeaponItemData;                // 0x0078(0x0050)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5999[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00D0(0x0118)(ConstParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId) == 0x0001F0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, InUniqueId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, InOwnItemListContainer) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::InOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, OutIsValid) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, OutWeaponItemData) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::OutWeaponItemData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, K2Node_MakeStruct_SBWeaponItemData) == 0x000078, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::K2Node_MakeStruct_SBWeaponItemData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000C9, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000D0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001E8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerInfoByItemId
// 0x0120 (0x0120 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_599A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsWeaponSticker;                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               OutWeaponStickerInfo;                              // 0x0014(0x0010)(Parm, OutParm, NoDestructor)
	struct FAppearanceWeaponSticker               TmpWeaponStickerInfo;                              // 0x0024(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599C[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0048(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId) == 0x000120, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, InItemID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, OutIsWeaponSticker) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::OutIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, OutWeaponStickerInfo) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::OutWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, TmpWeaponStickerInfo) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::TmpWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_GetMasterDataManager_IsValid) == 0x000035, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_GetItemMasterData_IsExists) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_GetItemMasterData_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfoByItemId
// 0x0120 (0x0120 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_599E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsWeaponStickerRemoveItem;                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               OutWeaponStickerRemoveItemInfo;                    // 0x0014(0x0010)(Parm, OutParm, NoDestructor)
	struct FAppearanceWeaponSticker               TmpWeaponStickerInfo;                              // 0x0024(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A0[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0048(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId) == 0x000120, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, InItemID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, OutIsWeaponStickerRemoveItem) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::OutIsWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, OutWeaponStickerRemoveItemInfo) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::OutWeaponStickerRemoveItemInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, TmpWeaponStickerInfo) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::TmpWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000034, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_GetMasterDataManager_IsValid) == 0x000035, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_GetItemMasterData_IsExists) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_GetItemMasterData_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemAmount
// 0x0168 (0x0168 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount final
{
public:
	class USBOwnItemListContainer*                InOwnItemListContainer;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutHaveWeaponStickerRemoveItem;                    // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutItemAmount;                                     // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                TmpOwnItemListContainer;                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceWeaponSticker               TmpWeaponStickerInfo;                              // 0x0020(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TArray<int32>                                 TmpItemIdList;                                     // 0x0030(0x0010)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A3[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59A4[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetItemMasterItemIDList_ReturnValue;      // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0078(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A6[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A7[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A8[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount) == 0x000168, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, InOwnItemListContainer) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::InOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, OutHaveWeaponStickerRemoveItem) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::OutHaveWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, OutItemAmount) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::OutItemAmount' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, TmpOwnItemListContainer) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::TmpOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, TmpWeaponStickerInfo) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::TmpWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, TmpItemIdList) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::TmpItemIdList' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, TmpMasterDataManager) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_GetItemMasterItemIDList_ReturnValue) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_GetItemMasterItemIDList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_GetItemMasterData_IsExists) == 0x000070, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_GetItemMasterData_ReturnValue) == 0x000078, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000148, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000149, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x00014C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_BooleanAND_ReturnValue) == 0x000150, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_Greater_IntInt_ReturnValue) == 0x000151, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_GetMasterDataManager_IsValid) == 0x000159, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfo
// 0x04B8 (0x04B8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo final
{
public:
	class USBOwnItemListContainer*                InOwnItemListContainer;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutHaveWeaponStickerRemoveItem;                    // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59A9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OutOwnItemInfo;                                    // 0x0018(0x0118)(Parm, OutParm)
	class USBOwnItemListContainer*                TmpOwnItemListContainer;                           // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceWeaponSticker               TmpWeaponStickerInfo;                              // 0x0138(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TArray<int32>                                 TmpItemIdList;                                     // 0x0148(0x0010)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59AA[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0170(0x0118)()
	int32                                         CallFunc_Array_Get_Item;                           // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59AB[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetItemMasterItemIDList_ReturnValue;      // 0x0290(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59AC[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x02A8(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59AD[0x5];                                     // 0x037B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x0380(0x0118)(ConstParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59AE[0x3];                                     // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59AF[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo) == 0x0004B8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, InOwnItemListContainer) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::InOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, OutHaveWeaponStickerRemoveItem) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::OutHaveWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, OutOwnItemInfo) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::OutOwnItemInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, TmpOwnItemListContainer) == 0x000130, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::TmpOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, TmpWeaponStickerInfo) == 0x000138, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::TmpWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, TmpItemIdList) == 0x000148, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::TmpItemIdList' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, TmpMasterDataManager) == 0x000158, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, Temp_int_Array_Index_Variable) == 0x000164, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, Temp_int_Loop_Counter_Variable) == 0x000168, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, K2Node_MakeStruct_OwnItemInfo) == 0x000170, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_Array_Get_Item) == 0x000288, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_GetItemMasterItemIDList_ReturnValue) == 0x000290, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_GetItemMasterItemIDList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_GetItemMasterData_IsExists) == 0x0002A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_GetItemMasterData_ReturnValue) == 0x0002A8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000378, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000379, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x00037A, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x000380, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_BooleanAND_ReturnValue) == 0x000498, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_Array_Length_ReturnValue) == 0x00049C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x0004A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x0004A8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0004B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsLocationFromProtectorCategory
// 0x0028 (0x0028 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           OutCharaPartsLocation;                             // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            TmpProtectorCategory;                              // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_4;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_5;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_15;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory) == 0x000028, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, InProtectorCategory) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, OutIsValid) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, OutCharaPartsLocation) == 0x000011, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, TmpProtectorCategory) == 0x000012, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::TmpProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable) == 0x000013, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_1) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_2) == 0x000015, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_3) == 0x000016, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_4) == 0x000017, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_5) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_6) == 0x000019, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_7) == 0x00001A, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_8) == 0x00001B, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_9) == 0x00001C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_10) == 0x00001D, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_11) == 0x00001E, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_12) == 0x00001F, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_13) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_14) == 0x000021, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_15) == 0x000022, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, K2Node_Select_Default) == 0x000023, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000024, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsDBFromProtectorCategory
// 0x0028 (0x0028 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             OutCharaPartsDB;                                   // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory) == 0x000028, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory, InProtectorCategory) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory, OutIsValid) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory, OutCharaPartsDB) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory::OutCharaPartsDB' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowExpiredItemNoticeSystemMessage
// 0x0C48 (0x0C48 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage final
{
public:
	bool                                          InIsExpiredWeaponStickerUsedOnEquippedWeapon;      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InExpiredWeaponStickerUsedWeaponId;                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsExpiredEquipmentIncluded;                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B4[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0010(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x0140(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsMessageShowed;                                // 0x0148(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B5[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpExpiredMountName;                               // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpExpiredMountId;                                 // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B6[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpExpiredImagineName;                             // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpExpiredImagineId;                               // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B7[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpExpiredCostumeName;                             // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpExpiredCostumeId;                               // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B8[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpExpiredWeaponName;                              // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpDecayedWeaponName;                              // 0x01A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpExpiredWeaponId;                                // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpDecayedWeaponId;                                // 0x01BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBDeletedMountData>            TmpDeletedMounts;                                  // 0x01C0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBDeletedImagineData>          TmpDeletedImagines;                                // 0x01D0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBDeletedCostumeData>          TmpDeletedCostumes;                                // 0x01E0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBDecayedWeaponData>           TmpDecayedWeapons;                                 // 0x01F0(0x0010)(Edit, BlueprintVisible)
	bool                                          TmpIsMessageShowed;                                // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59B9[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSystemMessageManager*                TmpSysMsgManager;                                  // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BA[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BB[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_1;                            // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BC[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_2;                            // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BD[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_3;                            // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BE[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_4;                            // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_5;                            // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02E8(0x0040)(HasGetValueTypeHash)
	struct FSBDeletedMountData                    CallFunc_Array_Get_Item;                           // 0x0328(0x0038)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0360(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59BF[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0388(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C0[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03A8(0x0018)()
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C1[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x03C8(0x0070)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0438(0x0018)()
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0460(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x04A0(0x0010)(ReferenceParm)
	struct FSBDeletedImagineData                  CallFunc_Array_Get_Item_1;                         // 0x04B0(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C2[0x2];                                     // 0x04EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0500(0x0018)()
	class FString                                 K2Node_Select_Default;                             // 0x0518(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0528(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C3[0x6];                                     // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0548(0x00B0)()
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x05F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0608(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0618(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0630(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0670(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0680(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0690(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x06A8(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x06C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x06C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C4[0x5];                                     // 0x06C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x06C8(0x0088)()
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0750(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0760(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBDeletedCostumeData                  CallFunc_Array_Get_Item_2;                         // 0x0770(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x07BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C5[0x3];                                     // 0x07BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x07C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x07D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x07F0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0830(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0870(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C6[0x7];                                     // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0888(0x00B0)()
	bool                                          CallFunc_GetWeaponMasterData_IsExists_1;           // 0x0938(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C7[0x7];                                     // 0x0939(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue_1;        // 0x0940(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x09F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponText_ReturnValue_1;              // 0x0A00(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_3;                           // 0x0A10(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_4;                           // 0x0A20(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0A30(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0A40(0x0018)()
	struct FSBDecayedWeaponData                   CallFunc_Array_Get_Item_3;                         // 0x0A58(0x0038)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0A90(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0AA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0AAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0AAD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists_2;           // 0x0AAE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C8[0x1];                                     // 0x0AAF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue_2;        // 0x0AB0(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue_2;              // 0x0B60(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0B70(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_5;                           // 0x0B80(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0B90(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0BA8(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0BC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59C9[0x7];                                     // 0x0BC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0BC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0BD0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0C10(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0C20(0x0018)()
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0C38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CA[0x7];                                     // 0x0C39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0C40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage) == 0x000C48, "Wrong size on BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, InIsExpiredWeaponStickerUsedOnEquippedWeapon) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::InIsExpiredWeaponStickerUsedOnEquippedWeapon' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, InExpiredWeaponStickerUsedWeaponId) == 0x000004, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::InExpiredWeaponStickerUsedWeaponId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, InIsExpiredEquipmentIncluded) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::InIsExpiredEquipmentIncluded' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, InExpiredEquipmentData) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::InExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, __WorldContext) == 0x000140, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, OutIsMessageShowed) == 0x000148, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::OutIsMessageShowed' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredMountName) == 0x000150, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredMountName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredMountId) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredMountId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredImagineName) == 0x000168, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredImagineName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredImagineId) == 0x000178, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredImagineId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredCostumeName) == 0x000180, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredCostumeName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredCostumeId) == 0x000190, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredCostumeId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredWeaponName) == 0x000198, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredWeaponName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDecayedWeaponName) == 0x0001A8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDecayedWeaponName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpExpiredWeaponId) == 0x0001B8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpExpiredWeaponId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDecayedWeaponId) == 0x0001BC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDecayedWeaponId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDeletedMounts) == 0x0001C0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDeletedMounts' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDeletedImagines) == 0x0001D0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDeletedImagines' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDeletedCostumes) == 0x0001E0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDeletedCostumes' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpDecayedWeapons) == 0x0001F0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpDecayedWeapons' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpIsMessageShowed) == 0x000200, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpIsMessageShowed' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpMasterDataManager) == 0x000208, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, TmpSysMsgManager) == 0x000210, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::TmpSysMsgManager' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable) == 0x000218, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable) == 0x000220, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable_1) == 0x000230, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable_1) == 0x000238, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable_2) == 0x000248, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable_2) == 0x000250, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable_3) == 0x000260, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable_3) == 0x000268, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable_4) == 0x000278, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable_4) == 0x000280, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Array_Index_Variable) == 0x000290, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Loop_Counter_Variable) == 0x000294, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Loop_Counter_Variable_1) == 0x000298, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Add_IntInt_ReturnValue) == 0x00029C, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002A0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Array_Index_Variable_1) == 0x0002A4, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Loop_Counter_Variable_2) == 0x0002A8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002AC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Array_Index_Variable_2) == 0x0002B0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Loop_Counter_Variable_3) == 0x0002B4, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002B8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_int_Array_Index_Variable_3) == 0x0002BC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_string_Variable_5) == 0x0002C0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0002D0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData) == 0x0002E8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Get_Item) == 0x000328, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeArray_Array) == 0x000360, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Length_ReturnValue) == 0x000370, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Less_IntInt_ReturnValue) == 0x000374, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000378, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000388, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Not_PreBool_ReturnValue) == 0x0003A0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Format_ReturnValue) == 0x0003A8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x0003C0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x0003C8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000438, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000450, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData_1) == 0x000460, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeArray_Array_1) == 0x0004A0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Get_Item_1) == 0x0004B0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Length_ReturnValue_1) == 0x0004E8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Less_IntInt_ReturnValue_1) == 0x0004EC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, Temp_bool_Variable_5) == 0x0004ED, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0004F0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000500, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default) == 0x000518, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Format_ReturnValue_1) == 0x000528, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Not_PreBool_ReturnValue_1) == 0x000540, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_FindMasterImagineData_IsExists) == 0x000541, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_FindMasterImagineData_ReturnValue) == 0x000548, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetMasterImagineText_ReturnValue) == 0x0005F8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default_1) == 0x000608, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000618, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData_2) == 0x000630, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000670, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeArray_Array_2) == 0x000680, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000690, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Format_ReturnValue_2) == 0x0006A8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Not_PreBool_ReturnValue_2) == 0x0006C0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Not_PreBool_ReturnValue_3) == 0x0006C1, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0006C2, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0006C8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetCostumeText_ReturnValue) == 0x000750, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default_2) == 0x000760, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Get_Item_2) == 0x000770, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Length_ReturnValue_2) == 0x0007B8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Less_IntInt_ReturnValue_2) == 0x0007BC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0007C0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0007D8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData_3) == 0x0007F0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData_4) == 0x000830, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeArray_Array_3) == 0x000870, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_IsExists) == 0x000880, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000888, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_IsExists_1) == 0x000938, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_IsExists_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_ReturnValue_1) == 0x000940, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponText_ReturnValue) == 0x0009F0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponText_ReturnValue_1) == 0x000A00, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default_3) == 0x000A10, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default_4) == 0x000A20, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000A30, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000A40, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Get_Item_3) == 0x000A58, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Format_ReturnValue_3) == 0x000A90, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Array_Length_ReturnValue_3) == 0x000AA8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Less_IntInt_ReturnValue_3) == 0x000AAC, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Not_PreBool_ReturnValue_4) == 0x000AAD, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_IsExists_2) == 0x000AAE, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_IsExists_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponMasterData_ReturnValue_2) == 0x000AB0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponMasterData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetWeaponText_ReturnValue_2) == 0x000B60, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetWeaponText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000B70, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_Select_Default_5) == 0x000B80, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000B90, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000BA8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetMasterDataManager_IsValid) == 0x000BC0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetMasterDataManager_ReturnValue) == 0x000BC8, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeStruct_FormatArgumentData_5) == 0x000BD0, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, K2Node_MakeArray_Array_4) == 0x000C10, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_Format_ReturnValue_4) == 0x000C20, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetSystemMessageManager_IsValid) == 0x000C38, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000C40, "Member 'BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetCharaCostumePartsToNakedByDeletedCostumeData
// 0x00F0 (0x00F0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData final
{
public:
	class USBCharaCreateComponent*                InCharaCreateComponent;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBDeletedCostumeData>          InDeletedCostumeDatas;                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsCharaPartsSettedToNaked;                      // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpNakedPartsName;                                 // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ECharaPartsLocation                           TmpCharaPartsLocation;                             // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59CC[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDeletedCostumeData>          TmpDeletedCostumeDatas;                            // 0x0040(0x0010)(Edit, BlueprintVisible)
	class USBCharaCreateComponent*                TmpCharaCreateComp;                                // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsCharaPartsSettedToNaked;                      // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CD[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CE[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDeletedCostumeData                  CallFunc_Array_Get_Item;                           // 0x0068(0x0048)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59CF[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharaEquipNakedPartsName_OutPartsName; // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipNakedPartsName_ReturnValue;  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCostumePartsLocation_OutPartsLocation; // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCostumePartsLocation_ReturnValue;      // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D0[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D1[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData) == 0x0000F0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, InCharaCreateComponent) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::InCharaCreateComponent' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, InDeletedCostumeDatas) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::InDeletedCostumeDatas' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, OutIsCharaPartsSettedToNaked) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::OutIsCharaPartsSettedToNaked' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, TmpNakedPartsName) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::TmpNakedPartsName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, TmpCharaPartsLocation) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::TmpCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, TmpDeletedCostumeDatas) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::TmpDeletedCostumeDatas' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, TmpCharaCreateComp) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::TmpCharaCreateComp' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, TmpIsCharaPartsSettedToNaked) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::TmpIsCharaPartsSettedToNaked' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_IsValid_ReturnValue) == 0x000065, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Not_PreBool_ReturnValue) == 0x000066, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000BC, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_GetCharaEquipNakedPartsName_OutPartsName) == 0x0000C0, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_GetCharaEquipNakedPartsName_OutPartsName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_GetCharaEquipNakedPartsName_ReturnValue) == 0x0000D0, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_GetCharaEquipNakedPartsName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_GetCostumePartsLocation_OutPartsLocation) == 0x0000D1, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_GetCostumePartsLocation_OutPartsLocation' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_GetCostumePartsLocation_ReturnValue) == 0x0000D2, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_GetCostumePartsLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D3, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_BooleanAND_ReturnValue) == 0x0000D4, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000D8, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, Temp_int_Loop_Counter_Variable) == 0x0000E0, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData, CallFunc_Add_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPassiveImagineEmptyIconTexture
// 0x0130 (0x0130 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture final
{
public:
	ESBPlayerPassiveImagineSlotType               InSlotType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              OutIconTexture;                                    // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D3[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0040(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0068(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0090(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x00B8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x00E0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0108(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture) == 0x000130, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, InSlotType) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::InSlotType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, OutIconTexture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::OutIconTexture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_byte_Variable) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_softobject_Variable) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_softobject_Variable_1) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_softobject_Variable_2) == 0x000090, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_softobject_Variable_3) == 0x0000B8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, Temp_softobject_Variable_4) == 0x0000E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture, K2Node_Select_Default) == 0x000108, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture::K2Node_Select_Default' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetElementNameFromAttribute
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute final
{
public:
	ESBAttribute                                  InAttribute;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutElementName;                                    // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalTextId;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalElementName;                                  // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBAttribute                                  LocalAttribute;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, InAttribute) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::InAttribute' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, OutElementName) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::OutElementName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, LocalTextId) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::LocalTextId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, LocalElementName) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::LocalElementName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, LocalAttribute) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::LocalAttribute' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute, K2Node_SwitchEnum_CmpSuccess) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsName
// 0x0030 (0x0030 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName final
{
public:
	class FName                                   InImagineArtsNameId;                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutArtsName;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName) == 0x000030, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName, InImagineArtsNameId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName::InImagineArtsNameId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName, OutArtsName) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName::OutArtsName' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CheckWeaponDecay
// 0x00A8 (0x00A8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBDecayedWeaponData>           InDecayedWeaponDatas;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsWeaponDecayed;                                // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D7[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDecayedWeaponData>           LocalDecayedWeaponDatas;                           // 0x0030(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59D8[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDecayedWeaponData                   CallFunc_Array_Get_Item;                           // 0x0068(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay) == 0x0000A8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, InWeaponUniqueId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, InDecayedWeaponDatas) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::InDecayedWeaponDatas' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, OutIsWeaponDecayed) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::OutIsWeaponDecayed' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, LocalDecayedWeaponDatas) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::LocalDecayedWeaponDatas' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, LocalWeaponUniqueId) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A5, "Member 'BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEquipmentStatusDiffRequestRetCode
// 0x0040 (0x0040 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode final
{
public:
	class FString                                 InCurrEquipmentUniqueId;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNewEquipmentUniqueId;                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutRetCode;                                        // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59D9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59DA[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipStatusDiffRequestResult_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode) == 0x000040, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, InCurrEquipmentUniqueId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::InCurrEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, InNewEquipmentUniqueId) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::InNewEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, OutRetCode) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::OutRetCode' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode, CallFunc_GetEquipStatusDiffRequestResult_ReturnValue) == 0x00003C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode::CallFunc_GetEquipStatusDiffRequestResult_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponClassTypeByUniqueId
// 0x0478 (0x0478 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InEquipmentBag;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                InCharacterStorage;                                // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  OutClassType;                                      // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59DB[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalWeaponOwnItemInfo;                            // 0x0030(0x0118)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalCharacterStorage;                             // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalWeaponUniqueId;                               // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59DC[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0178(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59DD[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0298(0x00B0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59DE[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59DF[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0360(0x0118)(ConstParm)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId) == 0x000478, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, InWeaponUniqueId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, InEquipmentBag) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::InEquipmentBag' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, InCharacterStorage) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::InCharacterStorage' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, OutIsValid) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, OutClassType) == 0x000029, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::OutClassType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, LocalWeaponOwnItemInfo) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::LocalWeaponOwnItemInfo' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, LocalMasterDataManager) == 0x000148, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, LocalCharacterStorage) == 0x000150, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::LocalCharacterStorage' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, LocalEquipmentBag) == 0x000158, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, LocalWeaponUniqueId) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_IsValid_ReturnValue_1) == 0x000171, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000172, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000173, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000178, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000290, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_GetWeaponMasterData_IsExists) == 0x000291, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000298, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_GetMasterDataManager_IsValid) == 0x000348, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000350, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000358, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000360, "Member 'BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetImageColorMulti
// 0x0048 (0x0048 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         Images;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59E1[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti) == 0x000048, "Wrong size on BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, Color) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::Color' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, Images) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::Images' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetTextColorMulti
// 0x00A0 (0x00A0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     TextList;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            ColorData;                                         // 0x0028(0x0028)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E2[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E3[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59E4[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti) == 0x0000A0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, Color) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::Color' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, TextList) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::TextList' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, __WorldContext) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, ColorData) == 0x000028, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::ColorData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, Temp_int_Array_Index_Variable) == 0x000080, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, Temp_int_Loop_Counter_Variable) == 0x000090, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText
// 0x0050 (0x0050 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTokenUseText final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseNum;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTokenUseText_Base_ReturnValue;         // 0x0038(0x0018)()
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText) == 0x000050, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, TextId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::TextId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, TokenID) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::TokenID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, UseNum) == 0x00000C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::UseNum' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, __WorldContext) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, CallFunc_GetTokenAmount_ReturnValue) == 0x000030, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText, CallFunc_GetTokenUseText_Base_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText::CallFunc_GetTokenUseText_Base_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText2
// 0x04C0 (0x04C0 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2 final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Token1ID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Token1Cost;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Token2ID;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Token2Cost;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0020(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 Str2;                                              // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Str1;                                              // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Result2;                                           // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Result1;                                           // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Token2Name;                                        // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Token1Name;                                        // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Amount2;                                           // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount1;                                           // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E6[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59E7[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E0(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59E8[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59E9[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0220(0x0058)()
	class FString                                 CallFunc_GetTokenText_ReturnValue;                 // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0298(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02B0(0x0018)()
	int32                                         CallFunc_GetTokenAmount_ReturnValue_1;             // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EA[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x02D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0310(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0320(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0358(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EB[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x03B0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x03F0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0408(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59EC[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0428(0x0018)()
	bool                                          CallFunc_BP_FindMasterToken_bIsValid_1;            // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59ED[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue_1;         // 0x0448(0x0058)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x04A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTokenText_ReturnValue_1;               // 0x04B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2) == 0x0004C0, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, TextId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::TextId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token1ID) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token1ID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token1Cost) == 0x00000C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token1Cost' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token2ID) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token2ID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token2Cost) == 0x000014, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token2Cost' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Str2) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Str2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Str1) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Str1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Result2) == 0x000058, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Result2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Result1) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Result1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token2Name) == 0x000078, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token2Name' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Token1Name) == 0x000088, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Token1Name' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Amount2) == 0x000098, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Amount2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, Amount1) == 0x00009C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::Amount1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000108, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Subtract_IntInt_ReturnValue) == 0x000118, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData_2) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeArray_Array) == 0x0001A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTokenAmount_ReturnValue) == 0x0001C0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Format_ReturnValue) == 0x0001E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetMasterDataManager_IsValid) == 0x0001F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetMasterDataManager_ReturnValue) == 0x000200, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_TextToString_ReturnValue) == 0x000208, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_BP_FindMasterToken_bIsValid) == 0x000218, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000220, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTokenText_ReturnValue) == 0x000278, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000288, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000298, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTokenAmount_ReturnValue_1) == 0x0002C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTokenAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData_3) == 0x0002D0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeArray_Array_1) == 0x000310, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Format_ReturnValue_1) == 0x000320, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000338, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000348, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData_4) == 0x000358, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000398, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0003A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeStruct_FormatArgumentData_5) == 0x0003B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0003F0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, K2Node_MakeArray_Array_2) == 0x000408, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetMasterDataManager_IsValid_1) == 0x000418, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000420, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Format_ReturnValue_2) == 0x000428, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_BP_FindMasterToken_bIsValid_1) == 0x000440, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_BP_FindMasterToken_bIsValid_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_BP_FindMasterToken_ReturnValue_1) == 0x000448, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_BP_FindMasterToken_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0004A0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2, CallFunc_GetTokenText_ReturnValue_1) == 0x0004B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2::CallFunc_GetTokenText_ReturnValue_1' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText_Base
// 0x0290 (0x0290 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HaveNum;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseNum;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0020(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EF[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F0[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F1[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0160(0x0058)()
	class FString                                 CallFunc_GetTokenText_ReturnValue;                 // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0220(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0230(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0278(0x0018)()
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base) == 0x000290, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, TextId) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::TextId' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, TokenID) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::TokenID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, HaveNum) == 0x00000C, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::HaveNum' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, UseNum) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::UseNum' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, ReturnValue) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000E8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, K2Node_MakeArray_Array) == 0x0000F8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Format_ReturnValue) == 0x000120, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_GetMasterDataManager_IsValid) == 0x000138, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_GetMasterDataManager_ReturnValue) == 0x000140, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_TextToString_ReturnValue) == 0x000148, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_BP_FindMasterToken_bIsValid) == 0x000158, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000160, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_GetTokenText_ReturnValue) == 0x0001B8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_GetTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001C8, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001E0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, K2Node_MakeArray_Array_1) == 0x000220, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Format_ReturnValue_1) == 0x000230, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000248, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Concat_StrStr_ReturnValue) == 0x000258, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000268, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000278, "Member 'BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.BlancToSpace
// 0x0058 (0x0058 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_BlancToSpace final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0020(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0038(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_BlancToSpace");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace) == 0x000058, "Wrong size on BP_UIBluePrintFunctionLibrary_C_BlancToSpace");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace, InText) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_BlancToSpace::InText' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace, __WorldContext) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_BlancToSpace::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace, Text) == 0x000020, "Member 'BP_UIBluePrintFunctionLibrary_C_BlancToSpace::Text' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace, CallFunc_MakeLiteralText_ReturnValue) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_BlancToSpace::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_BlancToSpace, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000050, "Member 'BP_UIBluePrintFunctionLibrary_C_BlancToSpace::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsIcon
// 0x00B8 (0x00B8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon) == 0x0000B8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon, ID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon::ID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon, Texture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon::Texture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsThumbnail
// 0x00B8 (0x00B8 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail) == 0x0000B8, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail, ID) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail::ID' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail, __WorldContext) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail, Texture) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail::Texture' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerClassType
// 0x0020 (0x0020 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F2[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType) == 0x000008, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType) == 0x000020, "Wrong size on BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType, ClassType) == 0x000008, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType::ClassType' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType, CallFunc_GetNetworkDataCache_IsValid) == 0x000009, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType, CallFunc_GetClassType_ReturnValue) == 0x000018, "Member 'BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType::CallFunc_GetClassType_ReturnValue' has a wrong offset!");

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Get Gasha Demo Spawn Transform
// 0x0070 (0x0070 - 0x0000)
struct BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F3[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OutTransform;                                      // 0x0010(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             DefaultSpawnTransform;                             // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform) == 0x000010, "Wrong alignment on BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform");
static_assert(sizeof(BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform) == 0x000070, "Wrong size on BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform, __WorldContext) == 0x000000, "Member 'BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform, OutTransform) == 0x000010, "Member 'BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform::OutTransform' has a wrong offset!");
static_assert(offsetof(BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform, DefaultSpawnTransform) == 0x000040, "Member 'BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform::DefaultSpawnTransform' has a wrong offset!");

}


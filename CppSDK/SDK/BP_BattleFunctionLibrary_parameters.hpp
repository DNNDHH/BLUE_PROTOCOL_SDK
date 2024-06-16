#pragma once

 

// Package: BP_BattleFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_StunReaction_structs.hpp"
#include "E_DamageReaction_structs.hpp"
#include "ST_StunReaction_LevelDiff_structs.hpp"
#include "ST_StunDirectionReaction_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByStunLevel
// 0x0058 (0x0058 - 0x0000)
struct BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel final
{
public:
	struct FDataTableRowHandle                    DataTableRowHandle;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FSBStunInfo                            StunInfo;                                          // 0x0010(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_8A36[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              DamageReaction;                                    // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A37[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_StunReaction                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A38[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_StunDirectionReaction              K2Node_Select_Default;                             // 0x0051(0x0003)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStunDirection                              Temp_byte_Variable;                                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              K2Node_Select_Default_1;                           // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              CallFunc_GetDamageReactionByLevelDiff_DamageReaction; // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel");
static_assert(sizeof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel) == 0x000058, "Wrong size on BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, DataTableRowHandle) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, StunInfo) == 0x000010, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::StunInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, __WorldContext) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, DamageReaction) == 0x000030, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::DamageReaction' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, Temp_int_Variable) == 0x000034, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_Clamp_ReturnValue) == 0x000038, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_GetDataTableRowFromName_OutRow) == 0x00003C, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000048, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, K2Node_Select_Default) == 0x000051, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, Temp_byte_Variable) == 0x000055, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, K2Node_Select_Default_1) == 0x000056, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel, CallFunc_GetDamageReactionByLevelDiff_DamageReaction) == 0x000057, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel::CallFunc_GetDamageReactionByLevelDiff_DamageReaction' has a wrong offset!");

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByLevelDiff
// 0x0120 (0x0120 - 0x0000)
struct BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff final
{
public:
	E_DamageReaction                              DamageRaction;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A39[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStunInfo                            StunInfo;                                          // 0x0004(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              DamageReaction;                                    // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A3A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_StunReaction_LevelDiff             StunReactionLevelDIff;                             // 0x0028(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A3B[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              CallFunc_Array_Get_Item;                           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A3C[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A3D[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_StunReaction_LevelDiff             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A3E[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_StunReaction_LevelDiff             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00B0(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A3F[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_StunReaction_LevelDiff             CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x00E8(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff");
static_assert(sizeof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff) == 0x000120, "Wrong size on BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, DamageRaction) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::DamageRaction' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, StunInfo) == 0x000004, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::StunInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, __WorldContext) == 0x000018, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, DamageReaction) == 0x000020, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::DamageReaction' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, StunReactionLevelDIff) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::StunReactionLevelDIff' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, K2Node_SwitchEnum_CmpSuccess) == 0x000061, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, Temp_int_Array_Index_Variable) == 0x000064, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000070, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000B0, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000E0, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x0000E8, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000118, "Member 'BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv1PhysicsDamage
// 0x0060 (0x0060 - 0x0000)
struct BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseDamage;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A40[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunDirection                              StunDirection;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunValueCalculation                       StunCalcType;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A41[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBElementDamageSetting                K2Node_MakeStruct_SBElementDamageSetting;          // 0x0028(0x0010)(NoDestructor)
	TArray<struct FSBElementDamageSetting>        K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	struct FSBAttackStunSetting                   K2Node_MakeStruct_SBAttackStunSetting;             // 0x0048(0x0018)()
};
static_assert(alignof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage");
static_assert(sizeof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage) == 0x000060, "Wrong size on BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, DamagedActor) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, BaseDamage) == 0x000008, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::BaseDamage' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, DamageCauser) == 0x000010, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, StunDirection) == 0x000018, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::StunDirection' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, StunCalcType) == 0x000019, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::StunCalcType' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, __WorldContext) == 0x000020, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, K2Node_MakeStruct_SBElementDamageSetting) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::K2Node_MakeStruct_SBElementDamageSetting' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage, K2Node_MakeStruct_SBAttackStunSetting) == 0x000048, "Member 'BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage::K2Node_MakeStruct_SBAttackStunSetting' has a wrong offset!");

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv2PhysicsDamage
// 0x0060 (0x0060 - 0x0000)
struct BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseDamage;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A42[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunDirection                              StunDirection;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunValueCalculation                       StunCalcType;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A43[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBElementDamageSetting                K2Node_MakeStruct_SBElementDamageSetting;          // 0x0028(0x0010)(NoDestructor)
	TArray<struct FSBElementDamageSetting>        K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	struct FSBAttackStunSetting                   K2Node_MakeStruct_SBAttackStunSetting;             // 0x0048(0x0018)()
};
static_assert(alignof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage");
static_assert(sizeof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage) == 0x000060, "Wrong size on BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, DamagedActor) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, BaseDamage) == 0x000008, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::BaseDamage' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, DamageCauser) == 0x000010, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, StunDirection) == 0x000018, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::StunDirection' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, StunCalcType) == 0x000019, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::StunCalcType' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, __WorldContext) == 0x000020, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, K2Node_MakeStruct_SBElementDamageSetting) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::K2Node_MakeStruct_SBElementDamageSetting' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage, K2Node_MakeStruct_SBAttackStunSetting) == 0x000048, "Member 'BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage::K2Node_MakeStruct_SBAttackStunSetting' has a wrong offset!");

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv3PhysicsDamage
// 0x0060 (0x0060 - 0x0000)
struct BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseDamage;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A44[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunDirection                              StunDirection;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunValueCalculation                       StunCalcType;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A45[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBElementDamageSetting                K2Node_MakeStruct_SBElementDamageSetting;          // 0x0028(0x0010)(NoDestructor)
	TArray<struct FSBElementDamageSetting>        K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	struct FSBAttackStunSetting                   K2Node_MakeStruct_SBAttackStunSetting;             // 0x0048(0x0018)()
};
static_assert(alignof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage");
static_assert(sizeof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage) == 0x000060, "Wrong size on BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, DamagedActor) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, BaseDamage) == 0x000008, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::BaseDamage' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, DamageCauser) == 0x000010, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, StunDirection) == 0x000018, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::StunDirection' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, StunCalcType) == 0x000019, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::StunCalcType' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, __WorldContext) == 0x000020, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, K2Node_MakeStruct_SBElementDamageSetting) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::K2Node_MakeStruct_SBElementDamageSetting' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage, K2Node_MakeStruct_SBAttackStunSetting) == 0x000048, "Member 'BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage::K2Node_MakeStruct_SBAttackStunSetting' has a wrong offset!");

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv4PhysicsDamage
// 0x0060 (0x0060 - 0x0000)
struct BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseDamage;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A46[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunDirection                              StunDirection;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStunValueCalculation                       StunCalcType;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A47[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBElementDamageSetting                K2Node_MakeStruct_SBElementDamageSetting;          // 0x0028(0x0010)(NoDestructor)
	TArray<struct FSBElementDamageSetting>        K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	struct FSBAttackStunSetting                   K2Node_MakeStruct_SBAttackStunSetting;             // 0x0048(0x0018)()
};
static_assert(alignof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage) == 0x000008, "Wrong alignment on BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage");
static_assert(sizeof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage) == 0x000060, "Wrong size on BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, DamagedActor) == 0x000000, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, BaseDamage) == 0x000008, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::BaseDamage' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, DamageCauser) == 0x000010, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, StunDirection) == 0x000018, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::StunDirection' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, StunCalcType) == 0x000019, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::StunCalcType' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, __WorldContext) == 0x000020, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, K2Node_MakeStruct_SBElementDamageSetting) == 0x000028, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::K2Node_MakeStruct_SBElementDamageSetting' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage, K2Node_MakeStruct_SBAttackStunSetting) == 0x000048, "Member 'BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage::K2Node_MakeStruct_SBAttackStunSetting' has a wrong offset!");

}


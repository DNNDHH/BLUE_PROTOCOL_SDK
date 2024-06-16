#pragma once

 

// Package: BP_NpcFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.InitializeNamePlate
// 0x0078 (0x0078 - 0x0000)
struct BP_NpcFunctionLibrary_C_InitializeNamePlate final
{
public:
	class ASBMobCharacter*                        Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterProfileData                CallFunc_GetProfileData_ReturnValue;               // 0x0010(0x0028)()
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcNamePlate_C*                        K2Node_DynamicCast_AsNpc_Name_Plate;               // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NpcFunctionLibrary_C_InitializeNamePlate) == 0x000008, "Wrong alignment on BP_NpcFunctionLibrary_C_InitializeNamePlate");
static_assert(sizeof(BP_NpcFunctionLibrary_C_InitializeNamePlate) == 0x000078, "Wrong size on BP_NpcFunctionLibrary_C_InitializeNamePlate");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, Character) == 0x000000, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::Character' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, __WorldContext) == 0x000008, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, CallFunc_GetProfileData_ReturnValue) == 0x000010, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::CallFunc_GetProfileData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, CallFunc_GetCharacterName_ReturnValue) == 0x000038, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000060, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, K2Node_DynamicCast_AsNpc_Name_Plate) == 0x000068, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::K2Node_DynamicCast_AsNpc_Name_Plate' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_InitializeNamePlate, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_NpcFunctionLibrary_C_InitializeNamePlate::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.FinalizeNamePlate
// 0x0038 (0x0038 - 0x0000)
struct BP_NpcFunctionLibrary_C_FinalizeNamePlate final
{
public:
	class ASBMobCharacter*                        Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F03[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcNamePlate_C*                        K2Node_DynamicCast_AsNpc_Name_Plate;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NpcFunctionLibrary_C_FinalizeNamePlate) == 0x000008, "Wrong alignment on BP_NpcFunctionLibrary_C_FinalizeNamePlate");
static_assert(sizeof(BP_NpcFunctionLibrary_C_FinalizeNamePlate) == 0x000038, "Wrong size on BP_NpcFunctionLibrary_C_FinalizeNamePlate");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, Character) == 0x000000, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::Character' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, __WorldContext) == 0x000008, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, K2Node_DynamicCast_AsSBNpc_Character) == 0x000010, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::K2Node_DynamicCast_AsSBNpc_Character' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000020, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, K2Node_DynamicCast_AsNpc_Name_Plate) == 0x000028, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::K2Node_DynamicCast_AsNpc_Name_Plate' has a wrong offset!");
static_assert(offsetof(BP_NpcFunctionLibrary_C_FinalizeNamePlate, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_NpcFunctionLibrary_C_FinalizeNamePlate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}


#pragma once

 

// Package: Description_ItemIconL

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Description_ItemIconL.Description_ItemIconL_C.ExecuteUbergraph_Description_ItemIconL
// 0x0170 (0x0170 - 0x0000)
struct Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7672[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUnidentified;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7673[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7674[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0028(0x00D0)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7675[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7676[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0118(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7677[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL) == 0x000008, "Wrong alignment on Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL");
static_assert(sizeof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL) == 0x000170, "Wrong size on Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, EntryPoint) == 0x000000, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::EntryPoint' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_CustomEvent_InItemIndex) == 0x000010, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_CustomEvent_bUnidentified) == 0x000014, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_CustomEvent_bUnidentified' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetMasterDataManager_IsValid) == 0x000015, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetItemMasterData_IsExists) == 0x000020, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetItemMasterData_ReturnValue) == 0x000028, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000F8, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_Greater_IntInt_ReturnValue) == 0x000100, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000108, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetGender_ReturnValue) == 0x000111, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000118, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000150, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, Temp_object_Variable) == 0x000158, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_DynamicCast_AsTexture_2D) == 0x000160, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_IsValid_ReturnValue) == 0x000169, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL, CallFunc_IsValid_ReturnValue_1) == 0x00016A, "Member 'Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function Description_ItemIconL.Description_ItemIconL_C.SetItem
// 0x0008 (0x0008 - 0x0000)
struct Description_ItemIconL_C_SetItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Description_ItemIconL_C_SetItem) == 0x000004, "Wrong alignment on Description_ItemIconL_C_SetItem");
static_assert(sizeof(Description_ItemIconL_C_SetItem) == 0x000008, "Wrong size on Description_ItemIconL_C_SetItem");
static_assert(offsetof(Description_ItemIconL_C_SetItem, InItemIndex) == 0x000000, "Member 'Description_ItemIconL_C_SetItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(Description_ItemIconL_C_SetItem, bUnidentified) == 0x000004, "Member 'Description_ItemIconL_C_SetItem::bUnidentified' has a wrong offset!");

// Function Description_ItemIconL.Description_ItemIconL_C.OnLoaded_CF191FB34BA71AABA5262489195B3141
// 0x0008 (0x0008 - 0x0000)
struct Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141) == 0x000008, "Wrong alignment on Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141");
static_assert(sizeof(Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141) == 0x000008, "Wrong size on Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141");
static_assert(offsetof(Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141, Loaded) == 0x000000, "Member 'Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141::Loaded' has a wrong offset!");

}


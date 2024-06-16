#pragma once

 

// Package: CommonIconToolTipContent_RecipeSet

#include "Basic.hpp"

#include "ST_ToolTipInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_RecipeSet.CommonIconToolTipContent_RecipeSet_C.SetRecipeSet
// 0x0340 (0x0340 - 0x0000)
struct CommonIconToolTipContent_RecipeSet_C_SetRecipeSet final
{
public:
	struct FST_ToolTipInfo                        ST_ToolTipInfo;                                    // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<int32>                                 RecipeList;                                        // 0x0078(0x0010)(Edit, BlueprintVisible)
	bool                                          bNameEnable;                                       // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E6D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Type;                                              // 0x0090(0x0018)(Edit, BlueprintVisible)
	class FText                                   Param_Name;                                        // 0x00A8(0x0018)(Edit, BlueprintVisible)
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x00C0(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E6E[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0148(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0160(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E6F[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E70[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRecipeSetMasterData_isExists;         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E71[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRecipeSetMasterData                   CallFunc_FindRecipeSetMasterData_ReturnValue;      // 0x01A0(0x0018)(ConstParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E72[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E73[0x2];                                     // 0x01C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E74[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E75[0x3];                                     // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x01D8(0x0088)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E76[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0268(0x00B0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E77[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0320(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet) == 0x000008, "Wrong alignment on CommonIconToolTipContent_RecipeSet_C_SetRecipeSet");
static_assert(sizeof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet) == 0x000340, "Wrong size on CommonIconToolTipContent_RecipeSet_C_SetRecipeSet");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, ST_ToolTipInfo) == 0x000000, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, RecipeList) == 0x000078, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::RecipeList' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, bNameEnable) == 0x000088, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::bNameEnable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Type) == 0x000090, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Type' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Param_Name) == 0x0000A8, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Param_Name' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, ToolTipInfo) == 0x0000C0, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_IsValid) == 0x000138, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_ReturnValue) == 0x000140, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000148, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000160, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000178, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_IsValid_1) == 0x000179, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000180, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_IsValid_2) == 0x000188, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000190, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_FindRecipeSetMasterData_isExists) == 0x000198, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_FindRecipeSetMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_FindRecipeSetMasterData_ReturnValue) == 0x0001A0, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_FindRecipeSetMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_byte_Variable) == 0x0001B8, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_bool_True_if_break_was_hit_Variable) == 0x0001B9, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_int_Loop_Counter_Variable) == 0x0001BC, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Add_IntInt_ReturnValue) == 0x0001C0, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Not_PreBool_ReturnValue) == 0x0001C4, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_byte_Variable_1) == 0x0001C5, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_int_Array_Index_Variable) == 0x0001C8, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, Temp_bool_Variable) == 0x0001CC, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_FindCraftMasterData_isExists) == 0x0001D4, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_FindCraftMasterData_ReturnValue) == 0x0001D8, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, K2Node_Select_Default) == 0x000260, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetWeaponMasterData_IsExists) == 0x000261, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000268, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Array_Length_ReturnValue) == 0x000318, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Less_IntInt_ReturnValue) == 0x00031C, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_Conv_IntToText_ReturnValue) == 0x000320, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_RecipeSet_C_SetRecipeSet, CallFunc_BooleanAND_ReturnValue) == 0x000338, "Member 'CommonIconToolTipContent_RecipeSet_C_SetRecipeSet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}


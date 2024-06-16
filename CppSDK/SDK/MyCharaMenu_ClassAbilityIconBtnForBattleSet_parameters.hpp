#pragma once

 

// Package: MyCharaMenu_ClassAbilityIconBtnForBattleSet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.OnIconClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature final
{
public:
	int32                                         InClassAbilityId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature) == 0x000004, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature, InClassAbilityId) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature::InClassAbilityId' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet) == 0x000004, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet) == 0x000008, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet, EntryPoint) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet, K2Node_Event_IsDesignTime) == 0x000005, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetSKill
// 0x00D0 (0x00D0 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillMasterSkillType;                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_818C[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_818D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_818E[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_818F[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetClassPassiveSkillIcon_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8190[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8191[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0070(0x0058)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill) == 0x000008, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill) == 0x0000D0, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, InSkillId) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, InSkillLevel) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::InSkillLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, LocalSkillMasterSkillType) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::LocalSkillMasterSkillType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, LocalClassType) == 0x000009, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::LocalClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, Temp_int_Variable) == 0x00000C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, Temp_bool_Variable) == 0x000010, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, K2Node_MakeStruct_LinearColor_1) == 0x000024, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, Temp_int_Variable_1) == 0x000034, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, K2Node_Select_Default) == 0x000038, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_GetPlayerManager_ReturnValue) == 0x000040, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_GetClassPassiveSkillIcon_ReturnValue) == 0x000050, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_GetClassPassiveSkillIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_Greater_IntInt_ReturnValue) == 0x000059, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_GetMasterDataManager_IsValid) == 0x00005A, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000068, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000070, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C8, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetLevel
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel) == 0x000004, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel) == 0x000010, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, InLevel) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::InLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, LocalLevel) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::LocalLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, Temp_byte_Variable) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, Temp_byte_Variable_1) == 0x000009, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x00000A, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, Temp_bool_Variable) == 0x00000B, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, K2Node_Select_Default) == 0x00000C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIconTexture
// 0x0080 (0x0080 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture final
{
public:
	class UTexture2D*                             InIconTexture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsPassive2;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsIconTextureValid;                           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8192[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         LocalIconArray;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UTexture2D*                             LocalIconTexture;                                  // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8193[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8194[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8195[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UImage*>                         K2Node_MakeArray_Array_1;                          // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture) == 0x000008, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture) == 0x000080, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, InIconTexture) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::InIconTexture' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, InIsPassive2) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::InIsPassive2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, LocalIsIconTextureValid) == 0x000009, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::LocalIsIconTextureValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, LocalIconArray) == 0x000010, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::LocalIconArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, LocalIconTexture) == 0x000020, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::LocalIconTexture' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, Temp_int_Array_Index_Variable) == 0x000028, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, Temp_bool_Variable) == 0x000038, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, Temp_object_Variable) == 0x000040, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_Array_Get_Item) == 0x000048, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_IsValid_ReturnValue_1) == 0x000054, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, K2Node_Select_Default) == 0x000058, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, K2Node_MakeArray_Array) == 0x000060, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture, K2Node_MakeArray_Array_1) == 0x000070, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetButtonOff
// 0x0060 (0x0060 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff final
{
public:
	bool                                          InIsButtonOff;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8196[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetSwitcher*>                LocalSwitcherArray;                                // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          LocalIsButtonOff;                                  // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8197[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8198[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8199[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819A[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetSwitcher*>                K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff) == 0x000008, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff) == 0x000060, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, InIsButtonOff) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::InIsButtonOff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, LocalSwitcherArray) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::LocalSwitcherArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, LocalIsButtonOff) == 0x000018, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::LocalIsButtonOff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_byte_Variable) == 0x000019, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_byte_Variable_1) == 0x00001A, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_bool_Variable) == 0x00001B, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_int_Variable) == 0x00001C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_int_Variable_1) == 0x000020, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_bool_Variable_1) == 0x000024, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, Temp_int_Array_Index_Variable) == 0x000038, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_Array_Get_Item) == 0x000040, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, K2Node_Select_Default) == 0x000049, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, CallFunc_IsValid_ReturnValue_1) == 0x00004A, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, K2Node_Select_Default_1) == 0x00004C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff, K2Node_MakeArray_Array) == 0x000050, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff::K2Node_MakeArray_Array' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIsEmpty
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty) == 0x000004, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty) == 0x000018, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, InIsEmpty) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, Temp_int_Variable_1) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, Temp_bool_Variable) == 0x00000C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, K2Node_Select_Default) == 0x000010, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty, CallFunc_IsValid_ReturnValue_1) == 0x000015, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetUnopened
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened final
{
public:
	ESBSkillType                                  InSkillType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           InSkillAbilityType;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_819D[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InReleaseLevel;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened) == 0x000004, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened) == 0x00000C, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, InSkillType) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::InSkillType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, InSkillAbilityType) == 0x000001, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::InSkillAbilityType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, InClassType) == 0x000002, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, InReleaseLevel) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::InReleaseLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateTooltip
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip final
{
public:
	bool                                          InNoTooltip;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A0[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip) == 0x000008, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip) == 0x000040, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, InNoTooltip) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::InNoTooltip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, InSkillId) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::InSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, InSkillLevel) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::InSkillLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, LocalLevel) == 0x00000C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::LocalLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, LocalSkillId) == 0x000010, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::LocalSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, CallFunc_Clamp_ReturnValue) == 0x000014, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000020, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateUnopenedTooltip
// 0x0028 (0x0028 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip final
{
public:
	ESBSkillType                                  InSkillType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           InSkillAbilityType;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81A1[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InReleaseLevel;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalReleaseLevel;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A2[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip) == 0x000008, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip) == 0x000028, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, InSkillType) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::InSkillType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, InSkillAbilityType) == 0x000001, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::InSkillAbilityType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, InClassType) == 0x000002, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, InReleaseLevel) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::InReleaseLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, LocalReleaseLevel) == 0x000008, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::LocalReleaseLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000010, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip, CallFunc_Create_ReturnValue) == 0x000020, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
// 0x0005 (0x0005 - 0x0000)
struct MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible) == 0x000001, "Wrong alignment on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible");
static_assert(sizeof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible) == 0x000005, "Wrong size on MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, InIsVisible) == 0x000000, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, K2Node_Select_Default) == 0x000004, "Member 'MyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::K2Node_Select_Default' has a wrong offset!");

}


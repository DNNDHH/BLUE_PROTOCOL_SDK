#pragma once

 

// Package: MyCharaMenu_DetailedStatus

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ExecuteUbergraph_MyCharaMenu_DetailedStatus
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70A0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus) == 0x000004, "Wrong alignment on MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus) == 0x000010, "Wrong size on MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus, EntryPoint) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000008, "Member 'MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_DetailedStatus_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_DetailedStatus_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayOutAnim
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_PlayOutAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_PlayOutAnim) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_PlayOutAnim");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_PlayOutAnim) == 0x000008, "Wrong size on MyCharaMenu_DetailedStatus_C_PlayOutAnim");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayOutAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_PlayOutAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatus
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_SetupStatus final
{
public:
	TArray<int32>                                 LocalAttributeDurabilityValues;                    // 0x0000(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     LocalPlayerCharacter;                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70A1[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70A2[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70A3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetElementResistanceBP_ReturnValue;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_SetupStatus) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_SetupStatus");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_SetupStatus) == 0x000050, "Wrong size on MyCharaMenu_DetailedStatus_C_SetupStatus");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, LocalAttributeDurabilityValues) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::LocalAttributeDurabilityValues' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, LocalPlayerCharacter) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::LocalPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_Array_Get_Item) == 0x000024, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_GetElementResistanceBP_ReturnValue) == 0x000040, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_GetElementResistanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_FTrunc_ReturnValue) == 0x000044, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatus, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatus::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CreateAttributeDurabilityList
// 0x0048 (0x0048 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70A4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AttributeDurabilityListItem_C* CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBAttribute                                  CallFunc_Array_Get_Item;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70A5[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70A6[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList) == 0x000048, "Wrong size on MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, Temp_float_Variable) == 0x000018, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, Temp_float_Variable_1) == 0x00001C, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, Temp_bool_Variable) == 0x000020, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_Array_Get_Item) == 0x000021, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, K2Node_Select_Default) == 0x000024, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, K2Node_MakeStruct_Margin) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000040, "Member 'MyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.GetAttributeDurabilityListItemObj
// 0x0048 (0x0048 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj final
{
public:
	ESBAttribute                                  InAttribute;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70A7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AttributeDurabilityListItem_C* OutObj;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  TmpAttribute;                                      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70A8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70A9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AA[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AttributeDurabilityListItem_C* K2Node_DynamicCast_AsMy_Chara_Menu_Attribute_Durability_List_Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBAttribute                                  CallFunc_GetAttribute_OutAttribute;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj) == 0x000048, "Wrong size on MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, InAttribute) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::InAttribute' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, OutObj) == 0x000008, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::OutObj' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, TmpAttribute) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::TmpAttribute' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, Temp_int_Variable) == 0x000014, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_GetChildrenCount_ReturnValue) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, K2Node_DynamicCast_AsMy_Chara_Menu_Attribute_Durability_List_Item) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::K2Node_DynamicCast_AsMy_Chara_Menu_Attribute_Durability_List_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_GetAttribute_OutAttribute) == 0x000041, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_GetAttribute_OutAttribute' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000042, "Member 'MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusPresetEquip
// 0x0080 (0x0080 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip final
{
public:
	TArray<struct FSBPlayerPresetEquipItem>       InPresetEquipItemList;                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LocalArrayIndex;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70AC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 LocalElementResistList;                            // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalTruncatedValueList;                           // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AD[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AE[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70AF[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_GetPresetEquipBattleSetElementResistanceBP_OutElementResistanceList; // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip) == 0x000080, "Wrong size on MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, InPresetEquipItemList) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::InPresetEquipItemList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, LocalArrayIndex) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::LocalArrayIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, LocalElementResistList) == 0x000018, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::LocalElementResistList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, LocalTruncatedValueList) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::LocalTruncatedValueList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, Temp_int_Array_Index_Variable) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000050, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Array_Get_Item) == 0x000058, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_FTrunc_ReturnValue) == 0x000060, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_GetPresetEquipBattleSetElementResistanceBP_OutElementResistanceList) == 0x000068, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_GetPresetEquipBattleSetElementResistanceBP_OutElementResistanceList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Array_Length_ReturnValue_2) == 0x000078, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusParam
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_SetupStatusParam final
{
public:
	TArray<int32>                                 InValueList;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 LocalValueList;                                    // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  CallFunc_Array_Get_Item;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70B0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AttributeDurabilityListItem_C* CallFunc_GetAttributeDurabilityListItemObj_OutObj; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B1[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_SetupStatusParam) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_SetupStatusParam");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_SetupStatusParam) == 0x000040, "Wrong size on MyCharaMenu_DetailedStatus_C_SetupStatusParam");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, InValueList) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::InValueList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, LocalValueList) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::LocalValueList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_Array_Get_Item) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_GetAttributeDurabilityListItemObj_OutObj) == 0x000030, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_GetAttributeDurabilityListItemObj_OutObj' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_SetupStatusParam, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_DetailedStatus_C_SetupStatusParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimBase
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_PlayInAnimBase final
{
public:
	bool                                          InDoStatusUpdate;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B2[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_PlayInAnimBase) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_PlayInAnimBase");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_PlayInAnimBase) == 0x000010, "Wrong size on MyCharaMenu_DetailedStatus_C_PlayInAnimBase");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimBase, InDoStatusUpdate) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimBase::InDoStatusUpdate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimBase, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimBase, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimBase::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimPresetEquip
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip final
{
public:
	TArray<struct FSBPlayerPresetEquipItem>       InPresetEquipItemList;                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip) == 0x000018, "Wrong size on MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip, InPresetEquipItemList) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip::InPresetEquipItemList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimForDhcBattleTopMenu
// 0x0060 (0x0060 - 0x0000)
struct MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu final
{
public:
	TArray<struct FSBDhcBattleAttributeResistanceInfo> InDhcBattleScoreAttrResistInfos;                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LocalIndex;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70B3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalAttributeValues;                              // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBDhcBattleAttributeResistanceInfo> LocalAttrResistInfos;                              // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDhcBattleAttributeResistanceInfo    CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B4[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu) == 0x000008, "Wrong alignment on MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu");
static_assert(sizeof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu) == 0x000060, "Wrong size on MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, InDhcBattleScoreAttrResistInfos) == 0x000000, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::InDhcBattleScoreAttrResistInfos' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, LocalIndex) == 0x000010, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::LocalIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, LocalAttributeValues) == 0x000018, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::LocalAttributeValues' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, LocalAttrResistInfos) == 0x000028, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::LocalAttrResistInfos' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, Temp_int_Array_Index_Variable) == 0x000038, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Array_Get_Item) == 0x000048, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Array_Find_ReturnValue) == 0x000058, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00005C, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00005D, "Member 'MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}


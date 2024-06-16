#pragma once

 

// Package: CommonEquipmentAbilityInfoDesc

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.ExecuteUbergraph_CommonEquipmentAbilityInfoDesc
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc) == 0x000004, "Wrong alignment on CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc");
static_assert(sizeof(CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc) == 0x000008, "Wrong size on CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc, EntryPoint) == 0x000000, "Member 'CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentAbilityInfoDesc_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentAbilityInfoDesc_C_PreConstruct) == 0x000001, "Wrong alignment on CommonEquipmentAbilityInfoDesc_C_PreConstruct");
static_assert(sizeof(CommonEquipmentAbilityInfoDesc_C_PreConstruct) == 0x000001, "Wrong size on CommonEquipmentAbilityInfoDesc_C_PreConstruct");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonEquipmentAbilityInfoDesc_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.CreateEfficacyInfoItemList
// 0x0040 (0x0040 - 0x0000)
struct CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList final
{
public:
	int32                                         LocalLoopId;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91FB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoItem;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91FC[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91FD[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList) == 0x000008, "Wrong alignment on CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList");
static_assert(sizeof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList) == 0x000040, "Wrong size on CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, LocalLoopId) == 0x000000, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, LocalInfoItem) == 0x000008, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, Temp_int_Variable) == 0x000010, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, Temp_int_Variable_1) == 0x000014, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000019, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList, CallFunc_GetChildrenCount_ReturnValue) == 0x000038, "Member 'CommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.SetupAbilityInfo
// 0x0488 (0x0488 - 0x0000)
struct CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo final
{
public:
	int32                                         InAbilityEffectId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       LocalEmptyAbilityConfig;                           // 0x0008(0x0038)(Edit, BlueprintVisible)
	TArray<struct FSBAbilityConfig>               LocalAbilityConfigs;                               // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<bool>                                  LocalIsAttributeResist;                            // 0x0050(0x0010)(Edit, BlueprintVisible)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoItemLast;                                 // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoItem;                                     // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAbilityPartsDescTextArrayElementCnt;          // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalArrayId;                                      // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalPartsDescText;                                // 0x0078(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalLoopCnt;                                      // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsAbilityEffectMasterDataValid;               // 0x0094(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91FF[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalAbilityPartsValueArray;                       // 0x0098(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           LocalAbilityPartsDescTextArray;                    // 0x00A8(0x0010)(Edit, BlueprintVisible)
	class FText                                   LocalAbilityDesc;                                  // 0x00B8(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalAbilityEffectId;                              // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9200[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9201[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9202[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9203[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAbilityConfig                       CallFunc_Array_Get_Item;                           // 0x0108(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9204[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       K2Node_Select_Default;                             // 0x0148(0x0038)()
	bool                                          Temp_bool_Variable_3;                              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9205[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9206[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9207[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x01A0(0x0018)()
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9208[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01C0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9209[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920A[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonEquipmentAbilityEfficacyInfoItem_C* K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item; // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920B[0x2];                                     // 0x01FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920C[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item_2;                         // 0x0208(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920D[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920E[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_920F[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9210[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9211[0x2];                                     // 0x0286(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9212[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9213[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9214[0x2];                                     // 0x02C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x02C4(0x0024)(NoDestructor)
	int32                                         K2Node_Select_Default_3;                           // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0308(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x0320(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9215[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0340(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9216[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x03A0(0x0038)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9217[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x03E8(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9218[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPerkName_ReturnValue_1;                // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9219[0x7];                                     // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x0428(0x0038)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue_1;            // 0x0460(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo) == 0x000008, "Wrong alignment on CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo");
static_assert(sizeof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo) == 0x000488, "Wrong size on CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, InAbilityEffectId) == 0x000000, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::InAbilityEffectId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalEmptyAbilityConfig) == 0x000008, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalEmptyAbilityConfig' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityConfigs) == 0x000040, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityConfigs' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalIsAttributeResist) == 0x000050, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalIsAttributeResist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalInfoItemLast) == 0x000060, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalInfoItemLast' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalInfoItem) == 0x000068, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityPartsDescTextArrayElementCnt) == 0x000070, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityPartsDescTextArrayElementCnt' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalArrayId) == 0x000074, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalArrayId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalPartsDescText) == 0x000078, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalPartsDescText' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalLoopCnt) == 0x000090, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalLoopCnt' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalIsAbilityEffectMasterDataValid) == 0x000094, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalIsAbilityEffectMasterDataValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityPartsValueArray) == 0x000098, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityPartsValueArray' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityPartsDescTextArray) == 0x0000A8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityPartsDescTextArray' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityDesc) == 0x0000B8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityDesc' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, LocalAbilityEffectId) == 0x0000D0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::LocalAbilityEffectId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable) == 0x0000D4, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E4, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable) == 0x0000E8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable_1) == 0x0000EC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable_2) == 0x0000F4, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable_1) == 0x0000F8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetChildrenCount_ReturnValue) == 0x0000FC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable_2) == 0x000100, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000104, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Get_Item) == 0x000108, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default) == 0x000148, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable_3) == 0x000180, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable_3) == 0x000184, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable_4) == 0x000188, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable_4) == 0x00018C, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_bool_Variable_5) == 0x000191, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000192, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000193, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000194, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000198, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_1) == 0x000199, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00019A, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_2) == 0x00019B, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_text_Variable) == 0x0001A0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_MakeLiteralText_ReturnValue) == 0x0001C0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_NotEqual_TextText_ReturnValue) == 0x0001D8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001DC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue) == 0x0001E0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_3) == 0x0001E8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item) == 0x0001F0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_DynamicCast_bSuccess) == 0x0001F8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_4) == 0x0001F9, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_2) == 0x0001FC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000200, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Get_Item_2) == 0x000208, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000220, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000224, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_4) == 0x000228, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x00022C, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default_1) == 0x000230, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, Temp_int_Variable_5) == 0x000234, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000238, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue_1) == 0x000248, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000250, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_5) == 0x000260, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000268, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000278, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_6) == 0x00027C, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000280, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000284, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_3) == 0x000285, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue_2) == 0x000288, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default_2) == 0x000290, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000298, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0002A8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0002B8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002BC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_7) == 0x0002C0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0002C1, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0002C4, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default_3) == 0x0002E8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default_4) == 0x0002EC, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue) == 0x0002F0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_1) == 0x0002F4, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0002F8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000308, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, K2Node_Select_Default_5) == 0x000320, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_bIsValid) == 0x000338, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000340, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetPerkName_ReturnValue) == 0x000388, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x000398, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x0003A0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x0003D8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_2) == 0x0003E0, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_NameToText_ReturnValue) == 0x0003E8, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_3) == 0x000400, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_NotEqual_NameName_ReturnValue) == 0x000404, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetPerkName_ReturnValue_1) == 0x000408, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetPerkName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000418, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x000420, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x000428, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Conv_NameToText_ReturnValue_1) == 0x000460, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Conv_NameToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_4) == 0x000478, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_5) == 0x00047C, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000480, "Member 'CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.GetAbilityPartsValueText
// 0x00E8 (0x00E8 - 0x0000)
struct CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_921A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutText;                                           // 0x0008(0x0018)(Parm, OutParm)
	int32                                         LocalValue;                                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_921B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_921C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_921D[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_921E[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00D0(0x0018)()
};
static_assert(alignof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText) == 0x000008, "Wrong alignment on CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText");
static_assert(sizeof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText) == 0x0000E8, "Wrong size on CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, InValue) == 0x000000, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::InValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, OutText) == 0x000008, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::OutText' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, LocalValue) == 0x000020, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::LocalValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, Temp_bool_Variable) == 0x000024, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, Temp_text_Variable) == 0x000028, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, Temp_bool_Variable_1) == 0x000040, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, Temp_string_Variable) == 0x000048, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, Temp_string_Variable_1) == 0x000058, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, K2Node_Select_Default) == 0x000088, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText, K2Node_Select_Default_1) == 0x0000D0, "Member 'CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText::K2Node_Select_Default_1' has a wrong offset!");

}


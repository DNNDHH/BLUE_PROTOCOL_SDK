#pragma once

 

// Package: DhcBattleTopClassTypeList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnClassTypeListItemSelected__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_633C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0008(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsScoreInfoEmpty;                                // 0x00E0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature");
static_assert(sizeof(DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature) == 0x0000E8, "Wrong size on DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature");
static_assert(offsetof(DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature, InClassType) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature, InScoreInfo) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature, InIsScoreInfoEmpty) == 0x0000E0, "Member 'DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature::InIsScoreInfoEmpty' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.ExecuteUbergraph_DhcBattleTopClassTypeList
// 0x0138 (0x0138 - 0x0000)
struct DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_633D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_CustomEvent_InSelf;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_633E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UDhcBattleTopClassTypeListItem_C* InSelf)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_633F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6340[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty;     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6341[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6342[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              CallFunc_GetScoreInfo_OutScoreInfo;                // 0x0058(0x00D8)()
	ESBClassType                                  CallFunc_GetClassType_OutClassType;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6343[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList");
static_assert(sizeof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList) == 0x000138, "Wrong size on DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, EntryPoint) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, K2Node_CustomEvent_InSelf) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::K2Node_CustomEvent_InSelf' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_GetChildrenCount_ReturnValue) == 0x000028, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, Temp_int_Variable) == 0x000030, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty) == 0x000040, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item) == 0x000048, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_GetScoreInfo_OutScoreInfo) == 0x000058, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_GetScoreInfo_OutScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_GetClassType_OutClassType) == 0x000130, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_GetClassType_OutClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_IsValid_ReturnValue_3) == 0x000131, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000132, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnListItemClicked
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTopClassTypeList_C_OnListItemClicked final
{
public:
	class UDhcBattleTopClassTypeListItem_C*       InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_OnListItemClicked) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_OnListItemClicked");
static_assert(sizeof(DhcBattleTopClassTypeList_C_OnListItemClicked) == 0x000008, "Wrong size on DhcBattleTopClassTypeList_C_OnListItemClicked");
static_assert(offsetof(DhcBattleTopClassTypeList_C_OnListItemClicked, InSelf) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_OnListItemClicked::InSelf' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopClassTypeList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_PreConstruct) == 0x000001, "Wrong alignment on DhcBattleTopClassTypeList_C_PreConstruct");
static_assert(sizeof(DhcBattleTopClassTypeList_C_PreConstruct) == 0x000001, "Wrong size on DhcBattleTopClassTypeList_C_PreConstruct");
static_assert(offsetof(DhcBattleTopClassTypeList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.CreateList
// 0x0060 (0x0060 - 0x0000)
struct DhcBattleTopClassTypeList_C_CreateList final
{
public:
	class UDhcBattleTopClassTypeListItem_C*       LocalWidget;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleTopClassTypeListItem_C*       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDhcBattleTopClassTypeListItem_C* InSelf)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6344[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6345[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6346[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6347[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_CreateList) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_CreateList");
static_assert(sizeof(DhcBattleTopClassTypeList_C_CreateList) == 0x000060, "Wrong size on DhcBattleTopClassTypeList_C_CreateList");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, LocalWidget) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_CreateList::LocalWidget' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_CreateList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'DhcBattleTopClassTypeList_C_CreateList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_Array_Get_Item) == 0x000030, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'DhcBattleTopClassTypeList_C_CreateList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000040, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_CreateList, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'DhcBattleTopClassTypeList_C_CreateList::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetPlayerCurrClassType
// 0x0038 (0x0038 - 0x0000)
struct DhcBattleTopClassTypeList_C_SetPlayerCurrClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6348[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6349[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634B[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_SetPlayerCurrClassType");
static_assert(sizeof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType) == 0x000038, "Wrong size on DhcBattleTopClassTypeList_C_SetPlayerCurrClassType");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, InClassType) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, LocalClassType) == 0x000001, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, Temp_int_Array_Index_Variable) == 0x000004, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item) == 0x000020, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_Array_Get_Item) == 0x00002A, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetPlayerCurrClassType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'DhcBattleTopClassTypeList_C_SetPlayerCurrClassType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetupList
// 0x0260 (0x0260 - 0x0000)
struct DhcBattleTopClassTypeList_C_SetupList final
{
public:
	TArray<struct FSBDhcBattleHighScoreInfo>      InScoreInfos;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBDhcBattleHighScoreInfo              LocalInfo;                                         // 0x0010(0x00D8)(Edit, BlueprintVisible)
	int32                                         LocalIndex;                                        // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634C[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       LocalListItem;                                     // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBDhcBattleHighScoreInfo>      LocalScoreInfos;                                   // 0x00F8(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634D[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634E[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item; // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634F[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6350[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6351[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item_1; // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6352[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6353[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              CallFunc_Array_Get_Item_1;                         // 0x0170(0x00D8)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6354[0x2];                                     // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_SetupList) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_SetupList");
static_assert(sizeof(DhcBattleTopClassTypeList_C_SetupList) == 0x000260, "Wrong size on DhcBattleTopClassTypeList_C_SetupList");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, InScoreInfos) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_SetupList::InScoreInfos' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, LocalInfo) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_SetupList::LocalInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, LocalIndex) == 0x0000E8, "Member 'DhcBattleTopClassTypeList_C_SetupList::LocalIndex' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, LocalClassType) == 0x0000EC, "Member 'DhcBattleTopClassTypeList_C_SetupList::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, LocalListItem) == 0x0000F0, "Member 'DhcBattleTopClassTypeList_C_SetupList::LocalListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, LocalScoreInfos) == 0x0000F8, "Member 'DhcBattleTopClassTypeList_C_SetupList::LocalScoreInfos' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, Temp_int_Loop_Counter_Variable) == 0x000108, "Member 'DhcBattleTopClassTypeList_C_SetupList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Add_IntInt_ReturnValue) == 0x00010C, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, Temp_int_Array_Index_Variable) == 0x000110, "Member 'DhcBattleTopClassTypeList_C_SetupList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, Temp_int_Array_Index_Variable_1) == 0x000114, "Member 'DhcBattleTopClassTypeList_C_SetupList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000118, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_GetChildAt_ReturnValue) == 0x000120, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item) == 0x000130, "Member 'DhcBattleTopClassTypeList_C_SetupList::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'DhcBattleTopClassTypeList_C_SetupList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, Temp_int_Loop_Counter_Variable_1) == 0x00013C, "Member 'DhcBattleTopClassTypeList_C_SetupList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000140, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_GetChildAt_ReturnValue_1) == 0x000148, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Get_Item) == 0x000150, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_IsValid_ReturnValue_1) == 0x000151, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item_1) == 0x000158, "Member 'DhcBattleTopClassTypeList_C_SetupList::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, K2Node_DynamicCast_bSuccess_1) == 0x000160, "Member 'DhcBattleTopClassTypeList_C_SetupList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Length_ReturnValue) == 0x000164, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Less_IntInt_ReturnValue) == 0x000168, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Get_Item_1) == 0x000170, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Find_ReturnValue) == 0x000248, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Length_ReturnValue_1) == 0x00024C, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000250, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_IsValid_ReturnValue_2) == 0x000251, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Array_Length_ReturnValue_2) == 0x000254, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetupList, CallFunc_Greater_IntInt_ReturnValue) == 0x000258, "Member 'DhcBattleTopClassTypeList_C_SetupList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.UpdateListSelectedItem
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleTopClassTypeList_C_UpdateListSelectedItem final
{
public:
	class UDhcBattleTopClassTypeListItem_C*       InListItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleTopClassTypeListItem_C*       LocalNewSelectedListItem;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_UpdateListSelectedItem");
static_assert(sizeof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem) == 0x000018, "Wrong size on DhcBattleTopClassTypeList_C_UpdateListSelectedItem");
static_assert(offsetof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem, InListItem) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_UpdateListSelectedItem::InListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem, LocalNewSelectedListItem) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_UpdateListSelectedItem::LocalNewSelectedListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_UpdateListSelectedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'DhcBattleTopClassTypeList_C_UpdateListSelectedItem::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_UpdateListSelectedItem, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'DhcBattleTopClassTypeList_C_UpdateListSelectedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetSelectedListItemTop
// 0x0028 (0x0028 - 0x0000)
struct DhcBattleTopClassTypeList_C_SetSelectedListItemTop final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6355[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6356[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_SetSelectedListItemTop");
static_assert(sizeof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop) == 0x000028, "Wrong size on DhcBattleTopClassTypeList_C_SetSelectedListItemTop");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_SetSelectedListItemTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_SetSelectedListItemTop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_SetSelectedListItemTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item) == 0x000018, "Member 'DhcBattleTopClassTypeList_C_SetSelectedListItemTop::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_SetSelectedListItemTop, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'DhcBattleTopClassTypeList_C_SetSelectedListItemTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetCurrSelectedListItem
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTopClassTypeList_C_GetCurrSelectedListItem final
{
public:
	class UDhcBattleTopClassTypeListItem_C*       OutListItem;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_GetCurrSelectedListItem) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_GetCurrSelectedListItem");
static_assert(sizeof(DhcBattleTopClassTypeList_C_GetCurrSelectedListItem) == 0x000008, "Wrong size on DhcBattleTopClassTypeList_C_GetCurrSelectedListItem");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetCurrSelectedListItem, OutListItem) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_GetCurrSelectedListItem::OutListItem' has a wrong offset!");

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetListItemByClassType
// 0x0058 (0x0058 - 0x0000)
struct DhcBattleTopClassTypeList_C_GetListItemByClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6357[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       OutListItem;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleTopClassTypeListItem_C*       LocalListItem;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6358[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_OutClassType;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6359[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635B[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635C[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeList_C_GetListItemByClassType) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeList_C_GetListItemByClassType");
static_assert(sizeof(DhcBattleTopClassTypeList_C_GetListItemByClassType) == 0x000058, "Wrong size on DhcBattleTopClassTypeList_C_GetListItemByClassType");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, InClassType) == 0x000000, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, OutListItem) == 0x000008, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::OutListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, LocalListItem) == 0x000010, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::LocalListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, LocalClassType) == 0x000018, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, Temp_int_Variable) == 0x00001C, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_GetClassType_OutClassType) == 0x000020, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_GetClassType_OutClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_GetChildrenCount_ReturnValue) == 0x000038, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item) == 0x000040, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::K2Node_DynamicCast_AsDhc_Battle_Top_Class_Type_List_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeList_C_GetListItemByClassType, CallFunc_IsValid_ReturnValue_1) == 0x000052, "Member 'DhcBattleTopClassTypeList_C_GetListItemByClassType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}


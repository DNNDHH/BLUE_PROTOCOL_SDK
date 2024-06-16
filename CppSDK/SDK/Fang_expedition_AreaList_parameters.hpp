#pragma once

 

// Package: Fang_expedition_AreaList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Town__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Field__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature) == 0x000018, "Wrong size on Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature, Field) == 0x000000, "Member 'Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature, Param_Index) == 0x000010, "Member 'Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonExpeditionSelect__DelegateSignature
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature) == 0x000128, "Wrong size on Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature, PlayData) == 0x000008, "Member 'Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature::PlayData' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonTicketClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonStandbyClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ExecuteUbergraph_Fang_expedition_AreaList
// 0x0158 (0x0158 - 0x0000)
struct Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_4;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Field;                          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_3;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             K2Node_CustomEvent_PlayData;                       // 0x0030(0x0120)()
	int32                                         K2Node_CustomEvent_Index;                          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList");
static_assert(sizeof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList) == 0x000158, "Wrong size on Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, EntryPoint) == 0x000000, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Index_4) == 0x000008, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Index_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Field) == 0x000010, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Index_3) == 0x000020, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Index_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Index_2) == 0x000024, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Index_1) == 0x000028, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_PlayData) == 0x000030, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList, K2Node_CustomEvent_Index) == 0x000150, "Member 'Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList::K2Node_CustomEvent_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonStandbyClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_CB_DungeonStandbyClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_CB_DungeonStandbyClick) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_CB_DungeonStandbyClick");
static_assert(sizeof(Fang_expedition_AreaList_C_CB_DungeonStandbyClick) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_CB_DungeonStandbyClick");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_DungeonStandbyClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_CB_DungeonStandbyClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonExpeditionClick
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_AreaList_C_CB_DungeonExpeditionClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_AreaList_C_CB_DungeonExpeditionClick) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_CB_DungeonExpeditionClick");
static_assert(sizeof(Fang_expedition_AreaList_C_CB_DungeonExpeditionClick) == 0x000128, "Wrong size on Fang_expedition_AreaList_C_CB_DungeonExpeditionClick");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_DungeonExpeditionClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_CB_DungeonExpeditionClick::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_DungeonExpeditionClick, PlayData) == 0x000008, "Member 'Fang_expedition_AreaList_C_CB_DungeonExpeditionClick::PlayData' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonTicketButtonClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick");
static_assert(sizeof(Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Field
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_AreaList_C_CB_ListItemClick_Field final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_CB_ListItemClick_Field) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_CB_ListItemClick_Field");
static_assert(sizeof(Fang_expedition_AreaList_C_CB_ListItemClick_Field) == 0x000018, "Wrong size on Fang_expedition_AreaList_C_CB_ListItemClick_Field");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_ListItemClick_Field, Field) == 0x000000, "Member 'Fang_expedition_AreaList_C_CB_ListItemClick_Field::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_ListItemClick_Field, Param_Index) == 0x000010, "Member 'Fang_expedition_AreaList_C_CB_ListItemClick_Field::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Town
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_CB_ListItemClick_Town final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_CB_ListItemClick_Town) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_CB_ListItemClick_Town");
static_assert(sizeof(Fang_expedition_AreaList_C_CB_ListItemClick_Town) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_CB_ListItemClick_Town");
static_assert(offsetof(Fang_expedition_AreaList_C_CB_ListItemClick_Town, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_CB_ListItemClick_Town::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_AreaList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaList_C_PreConstruct) == 0x000001, "Wrong alignment on Fang_expedition_AreaList_C_PreConstruct");
static_assert(sizeof(Fang_expedition_AreaList_C_PreConstruct) == 0x000001, "Wrong size on Fang_expedition_AreaList_C_PreConstruct");
static_assert(offsetof(Fang_expedition_AreaList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Fang_expedition_AreaList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetExpeditionData
// 0x0150 (0x0150 - 0x0000)
struct Fang_expedition_AreaList_C_SetExpeditionData final
{
public:
	struct FSBFang_expeditionData                 Expedition_Data;                                   // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         DungeonCount;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             WorkAreaData;                                      // 0x0040(0x00A8)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60AA[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetExpeditionMiddleCategoryToField_Field; // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60AB[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60AC[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60AD[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60AE[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60AF[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B0[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaList_C_SetExpeditionData) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_SetExpeditionData");
static_assert(sizeof(Fang_expedition_AreaList_C_SetExpeditionData) == 0x000150, "Wrong size on Fang_expedition_AreaList_C_SetExpeditionData");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, Expedition_Data) == 0x000000, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::Expedition_Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, DungeonCount) == 0x000038, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::DungeonCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, WorkAreaData) == 0x000040, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::WorkAreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, LoopEnd) == 0x0000E8, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_GetExpeditionMiddleCategoryToField_Field) == 0x0000F0, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_GetExpeditionMiddleCategoryToField_Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, K2Node_SwitchInteger_CmpSuccess) == 0x000100, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_IsEmpty_ReturnValue) == 0x000101, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Divide_IntInt_ReturnValue) == 0x000104, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000108, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00010C, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue) == 0x000110, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, Temp_int_Variable) == 0x000114, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000118, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00011C, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Less_IntInt_ReturnValue) == 0x000120, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, Temp_int_Variable_1) == 0x000124, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000128, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00012C, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_LastIndex_ReturnValue) == 0x000130, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000134, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_Add_ReturnValue) == 0x000138, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_Add_ReturnValue_1) == 0x00013C, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_Find_ReturnValue) == 0x000140, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000144, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_Array_Add_ReturnValue_2) == 0x000148, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SetExpeditionData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00014C, "Member 'Fang_expedition_AreaList_C_SetExpeditionData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Initialize
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_AreaList_C_Initialize final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& Field, int32 Index)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaList_C_Initialize) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_Initialize");
static_assert(sizeof(Fang_expedition_AreaList_C_Initialize) == 0x000060, "Wrong size on Fang_expedition_AreaList_C_Initialize");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Initialize, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'Fang_expedition_AreaList_C_Initialize::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetFieldAreaData
// 0x0160 (0x0160 - 0x0000)
struct Fang_expedition_AreaList_C_GetFieldAreaData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60B1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             Data;                                              // 0x0008(0x00A8)(Parm, OutParm)
	bool                                          CallFunc_GetData_Valid;                            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B2[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             CallFunc_GetData_AreaData;                         // 0x00B8(0x00A8)()
};
static_assert(alignof(Fang_expedition_AreaList_C_GetFieldAreaData) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_GetFieldAreaData");
static_assert(sizeof(Fang_expedition_AreaList_C_GetFieldAreaData) == 0x000160, "Wrong size on Fang_expedition_AreaList_C_GetFieldAreaData");
static_assert(offsetof(Fang_expedition_AreaList_C_GetFieldAreaData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_GetFieldAreaData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetFieldAreaData, Data) == 0x000008, "Member 'Fang_expedition_AreaList_C_GetFieldAreaData::Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetFieldAreaData, CallFunc_GetData_Valid) == 0x0000B0, "Member 'Fang_expedition_AreaList_C_GetFieldAreaData::CallFunc_GetData_Valid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetFieldAreaData, CallFunc_GetData_AreaData) == 0x0000B8, "Member 'Fang_expedition_AreaList_C_GetFieldAreaData::CallFunc_GetData_AreaData' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Town
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_SetBtn_Town final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_SetBtn_Town) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_SetBtn_Town");
static_assert(sizeof(Fang_expedition_AreaList_C_SetBtn_Town) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_SetBtn_Town");
static_assert(offsetof(Fang_expedition_AreaList_C_SetBtn_Town, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_SetBtn_Town::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Field
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_SetBtn_Field final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_SetBtn_Field) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_SetBtn_Field");
static_assert(sizeof(Fang_expedition_AreaList_C_SetBtn_Field) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_SetBtn_Field");
static_assert(offsetof(Fang_expedition_AreaList_C_SetBtn_Field, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_SetBtn_Field::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Dungeon
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_SetBtn_Dungeon final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_SetBtn_Dungeon) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_SetBtn_Dungeon");
static_assert(sizeof(Fang_expedition_AreaList_C_SetBtn_Dungeon) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_SetBtn_Dungeon");
static_assert(offsetof(Fang_expedition_AreaList_C_SetBtn_Dungeon, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_SetBtn_Dungeon::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PlayDungeonSlotAnimation
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaList_C_PlayDungeonSlotAnimation final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_PlayDungeonSlotAnimation) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_PlayDungeonSlotAnimation");
static_assert(sizeof(Fang_expedition_AreaList_C_PlayDungeonSlotAnimation) == 0x000004, "Wrong size on Fang_expedition_AreaList_C_PlayDungeonSlotAnimation");
static_assert(offsetof(Fang_expedition_AreaList_C_PlayDungeonSlotAnimation, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaList_C_PlayDungeonSlotAnimation::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Finish
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_AreaList_C_Finish final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& Field, int32 Index)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaList_C_Finish) == 0x000004, "Wrong alignment on Fang_expedition_AreaList_C_Finish");
static_assert(sizeof(Fang_expedition_AreaList_C_Finish) == 0x000060, "Wrong size on Fang_expedition_AreaList_C_Finish");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Finish, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'Fang_expedition_AreaList_C_Finish::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetTownId
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_AreaList_C_GetTownId final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60B3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ID;                                                // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B5[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaList_C_GetTownId) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_GetTownId");
static_assert(sizeof(Fang_expedition_AreaList_C_GetTownId) == 0x000048, "Wrong size on Fang_expedition_AreaList_C_GetTownId");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, ListIndex) == 0x000000, "Member 'Fang_expedition_AreaList_C_GetTownId::ListIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, ID) == 0x000008, "Member 'Fang_expedition_AreaList_C_GetTownId::ID' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, Temp_bool_Variable) == 0x000018, "Member 'Fang_expedition_AreaList_C_GetTownId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, Temp_string_Variable) == 0x000020, "Member 'Fang_expedition_AreaList_C_GetTownId::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'Fang_expedition_AreaList_C_GetTownId::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_GetTownId, K2Node_Select_Default) == 0x000038, "Member 'Fang_expedition_AreaList_C_GetTownId::K2Node_Select_Default' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMarkFieldList
// 0x00D0 (0x00D0 - 0x0000)
struct Fang_expedition_AreaList_C_CheckNewMarkFieldList final
{
public:
	class FString                                 FieldName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsFind;                                            // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFang_expeditionIconData>     TmpIconData;                                       // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionIconData             CallFunc_Array_Get_Item;                           // 0x0038(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B7[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckNewMark_OutParam;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B8[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B9[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60BA[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFang_expeditionIconData>     CallFunc_GetExpeditionFieldIconData_OutData;       // 0x00C0(0x0010)(ReferenceParm)
};
static_assert(alignof(Fang_expedition_AreaList_C_CheckNewMarkFieldList) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_CheckNewMarkFieldList");
static_assert(sizeof(Fang_expedition_AreaList_C_CheckNewMarkFieldList) == 0x0000D0, "Wrong size on Fang_expedition_AreaList_C_CheckNewMarkFieldList");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, FieldName) == 0x000000, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::FieldName' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, IsFind) == 0x000010, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::IsFind' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, TmpIconData) == 0x000018, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::TmpIconData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, Temp_int_Array_Index_Variable) == 0x000028, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_CheckNewMark_OutParam) == 0x0000A8, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_CheckNewMark_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Array_Length_ReturnValue_1) == 0x0000AC, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, Temp_int_Loop_Counter_Variable_1) == 0x0000B0, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000B4, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B5, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMarkFieldList, CallFunc_GetExpeditionFieldIconData_OutData) == 0x0000C0, "Member 'Fang_expedition_AreaList_C_CheckNewMarkFieldList::CallFunc_GetExpeditionFieldIconData_OutData' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMark
// 0x0040 (0x0040 - 0x0000)
struct Fang_expedition_AreaList_C_CheckNewMark final
{
public:
	class FString                                 InParam;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          OutParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60BB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaList_C_CheckNewMark) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_CheckNewMark");
static_assert(sizeof(Fang_expedition_AreaList_C_CheckNewMark) == 0x000040, "Wrong size on Fang_expedition_AreaList_C_CheckNewMark");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, InParam) == 0x000000, "Member 'Fang_expedition_AreaList_C_CheckNewMark::InParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, OutParam) == 0x000010, "Member 'Fang_expedition_AreaList_C_CheckNewMark::OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaList_C_CheckNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaList_C_CheckNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, CallFunc_IsReadedID_IsValid) == 0x000038, "Member 'Fang_expedition_AreaList_C_CheckNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, CallFunc_IsReadedID_ReturnValue) == 0x000039, "Member 'Fang_expedition_AreaList_C_CheckNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_CheckNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'Fang_expedition_AreaList_C_CheckNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Update New MarkList
// 0x0170 (0x0170 - 0x0000)
struct Fang_expedition_AreaList_C_Update_New_MarkList final
{
public:
	class FString                                 InId;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpField;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionIconData>     TmpIconData;                                       // 0x0020(0x0010)(Edit, BlueprintVisible)
	bool                                          IsFind;                                            // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60BC[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60BD[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionIconData             CallFunc_Array_Get_Item;                           // 0x0068(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60BE[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60BF[0x1];                                     // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionIconData             CallFunc_Array_Get_Item_2;                         // 0x00E0(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C0[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckNewMark_OutParam;                    // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C1[0x1];                                     // 0x0153(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C2[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFang_expeditionIconData>     CallFunc_GetExpeditionFieldIconData_OutData;       // 0x0160(0x0010)(ReferenceParm)
};
static_assert(alignof(Fang_expedition_AreaList_C_Update_New_MarkList) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_Update_New_MarkList");
static_assert(sizeof(Fang_expedition_AreaList_C_Update_New_MarkList) == 0x000170, "Wrong size on Fang_expedition_AreaList_C_Update_New_MarkList");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, InId) == 0x000000, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::InId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, TmpField) == 0x000010, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::TmpField' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, TmpIconData) == 0x000020, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::TmpIconData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, IsFind) == 0x000030, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::IsFind' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Array_Index_Variable) == 0x000034, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Loop_Counter_Variable_2) == 0x000044, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Array_Index_Variable_1) == 0x000050, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Array_Index_Variable_2) == 0x000054, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Loop_Counter_Variable_3) == 0x000058, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Add_IntInt_ReturnValue_3) == 0x00005C, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, Temp_int_Array_Index_Variable_3) == 0x000060, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_IsEmpty_ReturnValue) == 0x000064, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Not_PreBool_ReturnValue) == 0x000065, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Get_Item) == 0x000068, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000DC, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_IsEmpty_ReturnValue_1) == 0x0000DD, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000DE, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Get_Item_2) == 0x0000E0, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Length_ReturnValue_2) == 0x000138, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Get_Item_3) == 0x000140, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Less_IntInt_ReturnValue_2) == 0x000150, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000151, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_CheckNewMark_OutParam) == 0x000152, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_CheckNewMark_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Array_Length_ReturnValue_3) == 0x000154, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_Less_IntInt_ReturnValue_3) == 0x000158, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000159, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00015A, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_Update_New_MarkList, CallFunc_GetExpeditionFieldIconData_OutData) == 0x000160, "Member 'Fang_expedition_AreaList_C_Update_New_MarkList::CallFunc_GetExpeditionFieldIconData_OutData' has a wrong offset!");

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SortFieldMapIdList
// 0x01A0 (0x01A0 - 0x0000)
struct Fang_expedition_AreaList_C_SortFieldMapIdList final
{
public:
	TArray<class FString>                         MapIdList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         VisitidMapList;                                    // 0x0010(0x0010)(Edit, BlueprintVisible)
	TMap<class FString, int32>                    MapIdSortMap;                                      // 0x0020(0x0050)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C3[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C4[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x00B8(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C5[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C6[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C7[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C8[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0190(0x0010)(ReferenceParm)
};
static_assert(alignof(Fang_expedition_AreaList_C_SortFieldMapIdList) == 0x000008, "Wrong alignment on Fang_expedition_AreaList_C_SortFieldMapIdList");
static_assert(sizeof(Fang_expedition_AreaList_C_SortFieldMapIdList) == 0x0001A0, "Wrong size on Fang_expedition_AreaList_C_SortFieldMapIdList");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, MapIdList) == 0x000000, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::MapIdList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, VisitidMapList) == 0x000010, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::VisitidMapList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, MapIdSortMap) == 0x000020, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::MapIdSortMap' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Greater_IntInt_ReturnValue) == 0x00007C, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Less_IntInt_ReturnValue) == 0x00007D, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, Temp_int_Array_Index_Variable) == 0x000084, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Array_Get_Item) == 0x000090, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A0, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x0000B8, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x000130, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Conv_NameToString_ReturnValue) == 0x000138, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, Temp_int_Loop_Counter_Variable_1) == 0x000148, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Array_Get_Item_1) == 0x000150, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Split_LeftS) == 0x000160, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Split_RightS) == 0x000170, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Split_ReturnValue) == 0x000180, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000184, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Array_Length_ReturnValue_2) == 0x000188, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Less_IntInt_ReturnValue_1) == 0x00018C, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaList_C_SortFieldMapIdList, CallFunc_Map_Keys_Keys) == 0x000190, "Member 'Fang_expedition_AreaList_C_SortFieldMapIdList::CallFunc_Map_Keys_Keys' has a wrong offset!");

}


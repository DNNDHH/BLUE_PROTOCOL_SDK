#pragma once

 

// Package: WeaponSynthePart_Infomation

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.ExecuteUbergraph_WeaponSynthePart_Infomation
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation) == 0x000004, "Wrong alignment on WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation");
static_assert(sizeof(WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation) == 0x000008, "Wrong size on WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation");
static_assert(offsetof(WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_Infomation_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSynthePart_Infomation_C_PreConstruct");
static_assert(sizeof(WeaponSynthePart_Infomation_C_PreConstruct) == 0x000001, "Wrong size on WeaponSynthePart_Infomation_C_PreConstruct");
static_assert(offsetof(WeaponSynthePart_Infomation_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1Visible
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText1Visible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText1Visible) == 0x000001, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText1Visible");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText1Visible) == 0x000005, "Wrong size on WeaponSynthePart_Infomation_C_SetText1Visible");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Visible, InVisible) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText1Visible::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Visible, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_Infomation_C_SetText1Visible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Visible, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_Infomation_C_SetText1Visible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Visible, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_Infomation_C_SetText1Visible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Visible, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_Infomation_C_SetText1Visible::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1Table
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText1Table final
{
public:
	class USBTextTableAsset*                      In_Text_Table;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText1Table) == 0x000008, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText1Table");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText1Table) == 0x000008, "Wrong size on WeaponSynthePart_Infomation_C_SetText1Table");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1Table, In_Text_Table) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText1Table::In_Text_Table' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1ID
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText1ID final
{
public:
	int32                                         In_Text_Id;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText1ID) == 0x000004, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText1ID");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText1ID) == 0x000004, "Wrong size on WeaponSynthePart_Infomation_C_SetText1ID");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText1ID, In_Text_Id) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText1ID::In_Text_Id' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2Visible
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText2Visible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText2Visible) == 0x000001, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText2Visible");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText2Visible) == 0x000005, "Wrong size on WeaponSynthePart_Infomation_C_SetText2Visible");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Visible, InVisible) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText2Visible::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Visible, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_Infomation_C_SetText2Visible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Visible, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_Infomation_C_SetText2Visible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Visible, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_Infomation_C_SetText2Visible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Visible, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_Infomation_C_SetText2Visible::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2Table
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText2Table final
{
public:
	class USBTextTableAsset*                      In_Text_Table;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText2Table) == 0x000008, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText2Table");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText2Table) == 0x000008, "Wrong size on WeaponSynthePart_Infomation_C_SetText2Table");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2Table, In_Text_Table) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText2Table::In_Text_Table' has a wrong offset!");

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2ID
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_Infomation_C_SetText2ID final
{
public:
	int32                                         In_Text_Id;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Infomation_C_SetText2ID) == 0x000004, "Wrong alignment on WeaponSynthePart_Infomation_C_SetText2ID");
static_assert(sizeof(WeaponSynthePart_Infomation_C_SetText2ID) == 0x000004, "Wrong size on WeaponSynthePart_Infomation_C_SetText2ID");
static_assert(offsetof(WeaponSynthePart_Infomation_C_SetText2ID, In_Text_Id) == 0x000000, "Member 'WeaponSynthePart_Infomation_C_SetText2ID::In_Text_Id' has a wrong offset!");

}


#pragma once

 

// Package: LibraryMenu_Monster_NameWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.SetEnemyData
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_Monster_NameWindow_C_SetEnemyData final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InType;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          NamedType;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BossType;                                          // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D55[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
};
static_assert(alignof(LibraryMenu_Monster_NameWindow_C_SetEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_NameWindow_C_SetEnemyData");
static_assert(sizeof(LibraryMenu_Monster_NameWindow_C_SetEnemyData) == 0x000060, "Wrong size on LibraryMenu_Monster_NameWindow_C_SetEnemyData");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, InName) == 0x000000, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::InName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, InType) == 0x000010, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::InType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, NamedType) == 0x000020, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::NamedType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, BossType) == 0x000021, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::BossType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_bool_Variable) == 0x000022, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_byte_Variable) == 0x000023, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_byte_Variable_1) == 0x000024, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_bool_Variable_1) == 0x000025, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_byte_Variable_2) == 0x000026, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, Temp_byte_Variable_3) == 0x000027, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, K2Node_Select_Default) == 0x000028, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, K2Node_Select_Default_1) == 0x000029, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_SetEnemyData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'LibraryMenu_Monster_NameWindow_C_SetEnemyData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeText
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_Monster_NameWindow_C_ChangeTypeText final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(LibraryMenu_Monster_NameWindow_C_ChangeTypeText) == 0x000008, "Wrong alignment on LibraryMenu_Monster_NameWindow_C_ChangeTypeText");
static_assert(sizeof(LibraryMenu_Monster_NameWindow_C_ChangeTypeText) == 0x000028, "Wrong size on LibraryMenu_Monster_NameWindow_C_ChangeTypeText");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeText, Type) == 0x000000, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeText::Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeVisibility
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility) == 0x000001, "Wrong alignment on LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility");
static_assert(sizeof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility) == 0x000005, "Wrong size on LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility, InVisible) == 0x000000, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility::InVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility, Temp_bool_Variable) == 0x000001, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility::K2Node_Select_Default' has a wrong offset!");

}


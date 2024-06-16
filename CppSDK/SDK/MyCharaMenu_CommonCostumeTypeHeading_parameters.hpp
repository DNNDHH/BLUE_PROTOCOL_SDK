#pragma once

 

// Package: MyCharaMenu_CommonCostumeTypeHeading

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading) == 0x000004, "Wrong alignment on MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading");
static_assert(sizeof(MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading) == 0x000008, "Wrong size on MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextTable
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable) == 0x000008, "Wrong alignment on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable");
static_assert(sizeof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable) == 0x000008, "Wrong size on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable, InTextTable) == 0x000000, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable::InTextTable' has a wrong offset!");

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextId
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E7C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId) == 0x000008, "Wrong alignment on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId");
static_assert(sizeof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId) == 0x000038, "Wrong size on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId, InTextID) == 0x000000, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId::InTextID' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleText
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText) == 0x000008, "Wrong alignment on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText");
static_assert(sizeof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText) == 0x000018, "Wrong size on MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText");
static_assert(offsetof(MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText, InText) == 0x000000, "Member 'MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText::InText' has a wrong offset!");

}


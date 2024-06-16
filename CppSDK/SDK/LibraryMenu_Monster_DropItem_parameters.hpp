#pragma once

 

// Package: LibraryMenu_Monster_DropItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetData
// 0x0088 (0x0088 - 0x0000)
struct LibraryMenu_Monster_DropItem_C_SetData final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CCF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelMin;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelMax;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewIconVisible;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Rare;                                              // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD0[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD1[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(LibraryMenu_Monster_DropItem_C_SetData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DropItem_C_SetData");
static_assert(sizeof(LibraryMenu_Monster_DropItem_C_SetData) == 0x000088, "Wrong size on LibraryMenu_Monster_DropItem_C_SetData");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, ItemType) == 0x000000, "Member 'LibraryMenu_Monster_DropItem_C_SetData::ItemType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, ItemId) == 0x000004, "Member 'LibraryMenu_Monster_DropItem_C_SetData::ItemId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, LevelMin) == 0x000008, "Member 'LibraryMenu_Monster_DropItem_C_SetData::LevelMin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, LevelMax) == 0x00000C, "Member 'LibraryMenu_Monster_DropItem_C_SetData::LevelMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, NewIconVisible) == 0x000010, "Member 'LibraryMenu_Monster_DropItem_C_SetData::NewIconVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, Rare) == 0x000011, "Member 'LibraryMenu_Monster_DropItem_C_SetData::Rare' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_SelectInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x00002C, "Member 'LibraryMenu_Monster_DropItem_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_Replace_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_Replace_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'LibraryMenu_Monster_DropItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.DropMask
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Monster_DropItem_C_DropMask final
{
public:
	int32                                         OpenCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowCount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DropItem_C_DropMask) == 0x000004, "Wrong alignment on LibraryMenu_Monster_DropItem_C_DropMask");
static_assert(sizeof(LibraryMenu_Monster_DropItem_C_DropMask) == 0x000008, "Wrong size on LibraryMenu_Monster_DropItem_C_DropMask");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_DropMask, OpenCount) == 0x000000, "Member 'LibraryMenu_Monster_DropItem_C_DropMask::OpenCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_DropMask, NowCount) == 0x000004, "Member 'LibraryMenu_Monster_DropItem_C_DropMask::NowCount' has a wrong offset!");

// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetDataLottery
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_Monster_DropItem_C_SetDataLottery final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CD2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelMin;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelMax;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rare;                                              // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(LibraryMenu_Monster_DropItem_C_SetDataLottery) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DropItem_C_SetDataLottery");
static_assert(sizeof(LibraryMenu_Monster_DropItem_C_SetDataLottery) == 0x000080, "Wrong size on LibraryMenu_Monster_DropItem_C_SetDataLottery");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, RewardType) == 0x000000, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::RewardType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, ItemId) == 0x000004, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::ItemId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, LevelMin) == 0x000008, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::LevelMin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, LevelMax) == 0x00000C, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::LevelMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, Rare) == 0x000010, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::Rare' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_SelectInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000028, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_Replace_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_Replace_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetDataLottery, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_DropItem_C_SetDataLottery::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetUnknownData
// 0x0078 (0x0078 - 0x0000)
struct LibraryMenu_Monster_DropItem_C_SetUnknownData final
{
public:
	int32                                         LevelMin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rare;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
};
static_assert(alignof(LibraryMenu_Monster_DropItem_C_SetUnknownData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DropItem_C_SetUnknownData");
static_assert(sizeof(LibraryMenu_Monster_DropItem_C_SetUnknownData) == 0x000078, "Wrong size on LibraryMenu_Monster_DropItem_C_SetUnknownData");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, LevelMin) == 0x000000, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::LevelMin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, LevelMax) == 0x000004, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::LevelMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, Rare) == 0x000008, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::Rare' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_SelectInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_Replace_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_Replace_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DropItem_C_SetUnknownData, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'LibraryMenu_Monster_DropItem_C_SetUnknownData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}


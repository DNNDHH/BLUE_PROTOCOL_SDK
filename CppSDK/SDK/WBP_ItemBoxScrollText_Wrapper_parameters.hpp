#pragma once

 

// Package: WBP_ItemBoxScrollText_Wrapper

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper) == 0x000004, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper) == 0x000008, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper, EntryPoint) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_PreConstruct");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_PreConstruct) == 0x000001, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_PreConstruct");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetDestination
// 0x0040 (0x0040 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetDestination final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Index;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Over;                                              // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_773E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OverText;                                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetDestination");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination) == 0x000040, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetDestination");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, InText) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::InText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, Param_Index) == 0x000018, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, Over) == 0x00001C, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::Over' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, OverText) == 0x000020, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::OverText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, CallFunc_MakeLiteralByte_ReturnValue) == 0x000038, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000039, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, Temp_bool_Variable) == 0x00003A, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetDestination, K2Node_Select_Default) == 0x00003B, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetDestination::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageSingle
// 0x0028 (0x0028 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle final
{
public:
	class FText                                   ItemName;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNam;                                    // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNotLost;                                       // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle) == 0x000028, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle, ItemName) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle::ItemName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle, NowNum) == 0x000018, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle, MaxNum) == 0x00001C, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle, ExpectationNam) == 0x000020, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle::ExpectationNam' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle, bCanNotLost) == 0x000024, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle::bCanNotLost' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageRange
// 0x0030 (0x0030 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange final
{
public:
	class FText                                   ItemName;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMax;                                 // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNotLost;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange) == 0x000030, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, ItemName) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::ItemName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, NowNum) == 0x000018, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, MaxNum) == 0x00001C, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, ExpectationNamMin) == 0x000020, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::ExpectationNamMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, ExpectationNamMax) == 0x000024, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange, bCanNotLost) == 0x000028, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange::bCanNotLost' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagSingle
// 0x000C (0x000C - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNam;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle) == 0x000004, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle) == 0x00000C, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle, ExpectationNam) == 0x000008, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle::ExpectationNam' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetBagRange final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMax;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange) == 0x000004, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetBagRange");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange) == 0x000010, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetBagRange");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange, ExpectationNamMax) == 0x000008, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange, ExpectationNamMin) == 0x00000C, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange::ExpectationNamMin' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange_Random
// 0x000C (0x000C - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAdd;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random) == 0x000004, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random) == 0x00000C, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random, MaxAdd) == 0x000008, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random::MaxAdd' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherOne
// 0x0020 (0x0020 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne final
{
public:
	class FText                                   InNameText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOverlapping;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne) == 0x000020, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne, InNameText) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne::InNameText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne, bOverlapping) == 0x000018, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne::bOverlapping' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherMultiple
// 0x0038 (0x0038 - 0x0000)
struct WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple final
{
public:
	class FText                                   InNameText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InNumText;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOverlapping;                                      // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple");
static_assert(sizeof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple) == 0x000038, "Wrong size on WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple, InNameText) == 0x000000, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple::InNameText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple, InNumText) == 0x000018, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple::InNumText' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple, bOverlapping) == 0x000030, "Member 'WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple::bOverlapping' has a wrong offset!");

}

